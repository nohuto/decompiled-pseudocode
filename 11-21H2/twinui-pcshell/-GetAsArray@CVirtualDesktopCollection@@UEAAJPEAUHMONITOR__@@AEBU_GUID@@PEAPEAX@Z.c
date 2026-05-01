/*
 * XREFs of ?GetAsArray@CVirtualDesktopCollection@@UEAAJPEAUHMONITOR__@@AEBU_GUID@@PEAPEAX@Z @ 0x18009EC80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDesktopCollectionForMonitor@CVirtualDesktopCollection@@AEAAAEAV?$CCoSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@VComPtrCompareHelper@@@@PEAUHMONITOR__@@@Z @ 0x18009EDB0 (-GetDesktopCollectionForMonitor@CVirtualDesktopCollection@@AEAAAEAV-$CCoSimpleArray@V-$ComPtr@UI.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x1801243A0 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualDesktopCollection::GetAsArray(
        CVirtualDesktopCollection *this,
        HMONITOR a2,
        const struct _GUID *a3,
        void **a4)
{
  const struct _GUID *v8; // rdx
  int v9; // ecx
  int v10; // eax
  unsigned int v11; // ebx
  _QWORD *DesktopCollectionForMonitor; // rax
  _QWORD *v13; // rdi
  __int64 v14; // rsi
  __int64 v16; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v18; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  v18 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v18);
  v10 = CEnumerableObjectCollection::CreateInstance(v9, v8, &v18);
  v11 = v10;
  if ( v10 < 0 )
  {
    v16 = 203LL;
  }
  else
  {
    DesktopCollectionForMonitor = (_QWORD *)CVirtualDesktopCollection::GetDesktopCollectionForMonitor(this, a2);
    v13 = (_QWORD *)*DesktopCollectionForMonitor;
    v14 = *DesktopCollectionForMonitor + 8LL * DesktopCollectionForMonitor[1];
    while ( v13 != (_QWORD *)v14 )
    {
      v10 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v18 + 40LL))(v18, *v13);
      v11 = v10;
      if ( v10 < 0 )
      {
        v16 = 207LL;
        goto LABEL_11;
      }
      ++v13;
    }
    v10 = (**(__int64 (__fastcall ***)(void *, const struct _GUID *, void **))v18)(v18, a3, a4);
    v11 = v10;
    if ( v10 >= 0 )
      goto LABEL_7;
    v16 = 209LL;
  }
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
    (const char *)(unsigned int)v10);
LABEL_7:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v18);
  return v11;
}
