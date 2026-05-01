/*
 * XREFs of ?GetAdjacentVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@IAEBU_GUID@@PEAPEAX@Z @ 0x180178090
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$FindEx@VComPtrCompareHelper@@@?$CTSimpleFixedArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VComPtrCompareHelper@@@@QEBAJAEBVComPtrCompareHelper@@AEBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1801653DC (--$FindEx@VComPtrCompareHelper@@@-$CTSimpleFixedArray@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft.c)
 *     ?GetDesktopCollectionForDesktop@CVirtualDesktopCollection@@AEAAAEAV?$CCoSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@VComPtrCompareHelper@@@@PEAUIVirtualDesktop@@@Z @ 0x180178150 (-GetDesktopCollectionForDesktop@CVirtualDesktopCollection@@AEAAAEAV-$CCoSimpleArray@V-$ComPtr@UI.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetAt@?$CTSimpleFixedArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VComPtrCompareHelper@@@@QEBAJ_KAEAV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@Z @ 0x18054157C (-GetAt@-$CTSimpleFixedArray@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VComPtrCompareHelper@@@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualDesktopCollection::GetAdjacentVirtualDesktop(
        CVirtualDesktopCollection *this,
        void **a2,
        int a3,
        const struct _GUID *a4,
        void **a5)
{
  void **v7; // r14
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  char v11; // bl
  _QWORD *DesktopCollectionForDesktop; // rax
  _QWORD *v13; // rsi
  __int64 v14; // rcx
  int v15; // ebx
  __int64 v17; // rdx
  __int64 v18; // rdx
  int v19; // edi
  int v20; // eax
  _QWORD v21[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v7 = a5;
  *a5 = 0LL;
  v8 = a3 - 3;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( v10 != 1 )
        {
          v15 = -2147024809;
          v17 = 128LL;
          goto LABEL_16;
        }
        v11 = 0;
      }
      else
      {
        v11 = 1;
      }
    }
    else
    {
      v11 = *((_BYTE *)this + 16) == 0;
    }
  }
  else
  {
    v11 = *((_BYTE *)this + 16);
  }
  DesktopCollectionForDesktop = (_QWORD *)CVirtualDesktopCollection::GetDesktopCollectionForDesktop(this);
  v13 = DesktopCollectionForDesktop;
  if ( !a2 )
  {
    if ( v11 )
      v14 = 0LL;
    else
      v14 = DesktopCollectionForDesktop[1] - 1LL;
    v15 = (***(__int64 (__fastcall ****)(_QWORD, const struct _GUID *, void **))(*DesktopCollectionForDesktop + 8 * v14))(
            *(_QWORD *)(*DesktopCollectionForDesktop + 8 * v14),
            a4,
            v7);
    if ( v15 >= 0 )
      return (unsigned int)v15;
    v17 = 136LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
      (const char *)(unsigned int)v15);
    return (unsigned int)v15;
  }
  a5 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&a5);
  v19 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,ComPtrCompareHelper>::FindEx<ComPtrCompareHelper>(
          v13,
          v18,
          (struct IUnknown **)&a5,
          v21);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&a5);
  if ( v19 >= 0 )
  {
    a5 = 0LL;
    v15 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,ComPtrCompareHelper>::GetAt(
            v13,
            v21[0] + (v11 != 0 ? 1LL : -1LL),
            &a5);
    if ( v15 >= 0 )
    {
      v20 = (*(__int64 (__fastcall **)(void **, const struct _GUID *, void **))*a5)(a5, a4, v7);
      v15 = v20;
      if ( v20 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x91,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
          (const char *)(unsigned int)v20);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&a5);
    return (unsigned int)v15;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8C,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
    (const char *)(unsigned int)v19);
  return (unsigned int)v19;
}
