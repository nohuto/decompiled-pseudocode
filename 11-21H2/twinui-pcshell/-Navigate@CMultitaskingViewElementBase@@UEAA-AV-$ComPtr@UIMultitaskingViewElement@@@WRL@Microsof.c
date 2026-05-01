/*
 * XREFs of ?Navigate@CMultitaskingViewElementBase@@UEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEAUIMultitaskingViewElement@@IW4NavigationType@@@Z @ 0x1804BA320
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800727D8 (--4-$ComPtr@UISnappedWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18030D564 (--4-$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??$FindEx@VElementCompare@ElementHelpers@@@?$CTSimpleFixedArray@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@VElementCompare@ElementHelpers@@@@QEBAJAEBVElementCompare@ElementHelpers@@AEBV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1804B8EAC (--$FindEx@VElementCompare@ElementHelpers@@@-$CTSimpleFixedArray@V-$ComPtr@UIMultitaskingViewElem.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall CMultitaskingViewElementBase::Navigate(
        __int64 *a1,
        __int64 *a2,
        struct IUnknown *a3,
        __int64 a4,
        unsigned int a5)
{
  unsigned int v5; // esi
  unsigned int v8; // esi
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 *v15; // rax
  struct IUnknown *v17; // [rsp+38h] [rbp-18h] BYREF
  __int64 v18[2]; // [rsp+40h] [rbp-10h] BYREF

  v5 = a4;
  *a2 = 0LL;
  if ( (_DWORD)a4 == 7 )
  {
    if ( a1[3] )
    {
      Microsoft::WRL::ComPtr<ISnappedWindow>::operator=(a2, (__int64 *)a1[2]);
      v8 = a5;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*a2 + 160LL))(*a2, a5) )
      {
        v9 = *a1;
        v10 = 5LL;
        v11 = 0LL;
LABEL_5:
        v12 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *, struct IUnknown **, __int64, __int64, unsigned int))(v9 + 536))(
                           a1,
                           &v17,
                           v11,
                           v10,
                           v8);
LABEL_6:
        Microsoft::WRL::ComPtr<IObjectArray>::operator=(a2, v12);
LABEL_16:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v17);
      }
    }
  }
  else if ( (_DWORD)a4 == 8 )
  {
    v13 = a1[3];
    if ( v13 )
    {
      Microsoft::WRL::ComPtr<ISnappedWindow>::operator=(a2, (__int64 *)(a1[2] + 8 * (v13 - 1)));
      v8 = a5;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*a2 + 160LL))(*a2, a5) )
      {
        v9 = *a1;
        v11 = a1[3] - 1;
        v10 = 6LL;
        goto LABEL_5;
      }
    }
  }
  else
  {
    if ( !a3 )
    {
      v12 = (__int64 *)(*(__int64 (__fastcall **)(__int64, struct IUnknown **, __int64 *, __int64, unsigned int))(*(_QWORD *)a1[10] + 272LL))(
                         a1[10],
                         &v17,
                         a1,
                         a4,
                         a5);
      goto LABEL_6;
    }
    if ( a1[3] )
    {
      v17 = a3;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v17);
      if ( (int)CTSimpleFixedArray<Microsoft::WRL::ComPtr<IMultitaskingViewElement>,ElementHelpers::ElementCompare>::FindEx<ElementHelpers::ElementCompare>(
                  a1 + 2,
                  v14,
                  &v17,
                  v18) >= 0 )
      {
        v15 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *, __int64 *, __int64, _QWORD, unsigned int))(*a1 + 536))(
                           a1,
                           v18,
                           v18[0],
                           v5,
                           a5);
        Microsoft::WRL::ComPtr<IObjectArray>::operator=(a2, v15);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v18);
      }
      goto LABEL_16;
    }
  }
  return a2;
}
