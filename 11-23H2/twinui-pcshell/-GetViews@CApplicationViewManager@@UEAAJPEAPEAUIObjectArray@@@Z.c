/*
 * XREFs of ?GetViews@CApplicationViewManager@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x1800DEA20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x1800D0440 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?RefreshCollection@CApplicationViewManager@@UEAAJXZ @ 0x1800DF900 (-RefreshCollection@CApplicationViewManager@@UEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewManager::GetViews(RTL_SRWLOCK *this, struct IObjectArray **a2)
{
  const struct _GUID *v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // rbp
  struct IObjectArray *v9; // rax
  int v11; // eax
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v14; // [rsp+48h] [rbp+10h] BYREF
  RTL_SRWLOCK *v15; // [rsp+50h] [rbp+18h]

  *a2 = 0LL;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v14);
  v6 = CEnumerableObjectCollection::CreateInstance(v5, v4, &v14);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9C,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v6,
      v12);
  }
  else
  {
    v15 = this + 66;
    AcquireSRWLockShared(this + 66);
    v8 = 0LL;
    if ( this[68].Ptr )
    {
      while ( 1 )
      {
        v11 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v14 + 40LL))(v14, *((_QWORD *)this[67].Ptr + v8));
        v7 = v11;
        if ( v11 < 0 )
          break;
        if ( (PVOID)++v8 >= this[68].Ptr )
          goto LABEL_3;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA3,
        (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v11,
        v12);
      if ( this != (RTL_SRWLOCK *)-528LL )
        ReleaseSRWLockShared(this + 66);
    }
    else
    {
LABEL_3:
      if ( this != (RTL_SRWLOCK *)-528LL )
        ReleaseSRWLockShared(this + 66);
      CApplicationViewManager::RefreshCollection((CApplicationViewManager *)this);
      v9 = (struct IObjectArray *)v14;
      v14 = 0LL;
      *a2 = v9;
      v7 = 0;
    }
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v14);
  return v7;
}
