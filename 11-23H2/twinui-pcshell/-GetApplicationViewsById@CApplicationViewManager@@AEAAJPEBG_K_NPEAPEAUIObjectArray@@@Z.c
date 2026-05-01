/*
 * XREFs of ?GetApplicationViewsById@CApplicationViewManager@@AEAAJPEBG_K_NPEAPEAUIObjectArray@@@Z @ 0x18004D2A8
 * Callers:
 *     ?GetViewsByAppUserModelId@CApplicationViewManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z @ 0x18004D030 (-GetViewsByAppUserModelId@CApplicationViewManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z.c)
 *     ?SetViewStateForDesiredAppStateByHostId@CApplicationViewManager@@UEAAJ_KW4APPLICATION_DESIRED_STATE@@@Z @ 0x18004D060 (-SetViewStateForDesiredAppStateByHostId@CApplicationViewManager@@UEAAJ_KW4APPLICATION_DESIRED_ST.c)
 *     ?SetViewStateForDesiredAppState@CApplicationViewManager@@UEAAJPEBGW4APPLICATION_DESIRED_STATE@@@Z @ 0x1803CC2E0 (-SetViewStateForDesiredAppState@CApplicationViewManager@@UEAAJPEBGW4APPLICATION_DESIRED_STATE@@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x1800D0440 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?RefreshCollection@CApplicationViewManager@@UEAAJXZ @ 0x1800DF900 (-RefreshCollection@CApplicationViewManager@@UEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationViewManager::GetApplicationViewsById(
        RTL_SRWLOCK *this,
        const unsigned __int16 *a2,
        __int64 a3,
        char a4,
        struct IObjectArray **a5)
{
  const unsigned __int16 *v6; // rsi
  struct IObjectArray **v8; // r13
  const struct _GUID *v9; // rdx
  int v10; // ecx
  int Instance; // eax
  unsigned int v12; // edi
  __int64 v13; // r15
  _QWORD **Ptr; // rcx
  _QWORD *v15; // rsi
  __int64 (__fastcall *v16)(_QWORD *, GUID *, struct IObjectArray ***); // rdi
  int v17; // eax
  int v18; // edi
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rdx
  void *v23[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  int v27; // [rsp+88h] [rbp+58h] BYREF

  v6 = a2;
  v8 = a5;
  *a5 = 0LL;
  if ( a4 == 1 )
  {
    if ( a3 != -1 )
      goto LABEL_3;
    v21 = 889LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)0x80070057LL,
      (int)v23[0]);
    return 2147942487LL;
  }
  if ( !a4 && !a2 )
  {
    v21 = 890LL;
    goto LABEL_22;
  }
LABEL_3:
  v23[0] = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v23);
  Instance = CEnumerableObjectCollection::CreateInstance(v10, v9, v23);
  v12 = Instance;
  if ( Instance < 0 )
  {
    v22 = 893LL;
    goto LABEL_28;
  }
  v23[1] = &this[83];
  AcquireSRWLockShared(this + 83);
  v13 = 0LL;
  if ( !this[85].Ptr )
  {
LABEL_11:
    if ( this != (RTL_SRWLOCK *)-664LL )
      ReleaseSRWLockShared(this + 83);
    CApplicationViewManager::RefreshCollection((CApplicationViewManager *)&this[17]);
    Instance = (**(__int64 (__fastcall ***)(void *, GUID *, struct IObjectArray **))v23[0])(
                 v23[0],
                 &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
                 v8);
    v12 = Instance;
    if ( Instance >= 0 )
      goto LABEL_14;
    v22 = 925LL;
LABEL_28:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)Instance,
      (int)v23[0]);
    goto LABEL_14;
  }
  while ( 1 )
  {
    Ptr = (_QWORD **)this[84].Ptr;
    if ( !a4 )
    {
      v18 = (*(__int64 (__fastcall **)(_QWORD *, const unsigned __int16 *, int *))(*Ptr[v13] + 152LL))(
              Ptr[v13],
              v6,
              &v27);
      goto LABEL_8;
    }
    a5 = 0LL;
    v15 = Ptr[v13];
    v16 = *(__int64 (__fastcall **)(_QWORD *, GUID *, struct IObjectArray ***))*v15;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&a5);
    v17 = v16(v15, &GUID_7f25223a_79ad_4e72_a39a_6a194dd604c1, &a5);
    v12 = v17;
    if ( v17 < 0 )
      break;
    v18 = ((__int64 (__fastcall *)(struct IObjectArray **, __int64, int *))(*a5)[7].lpVtbl)(a5, a3, &v27);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&a5);
    v6 = a2;
LABEL_8:
    if ( v18 >= 0 )
    {
      if ( v27 )
      {
        v20 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v23[0] + 40LL))(
                v23[0],
                *((_QWORD *)this[84].Ptr + v13));
        v12 = v20;
        if ( v20 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x394,
            (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
            (const char *)(unsigned int)v20,
            (int)v23[0]);
          goto LABEL_25;
        }
      }
    }
    if ( (PVOID)++v13 >= this[85].Ptr )
      goto LABEL_11;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x38A,
    (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
    (const char *)(unsigned int)v17,
    (int)v23[0]);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&a5);
LABEL_25:
  if ( this != (RTL_SRWLOCK *)-664LL )
    ReleaseSRWLockShared(this + 83);
LABEL_14:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v23);
  return v12;
}
