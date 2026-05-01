/*
 * XREFs of ?GetVisibleSnapBar@SnapFlyoutHost@@AEAA?AUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@XZ @ 0x18067AA44
 * Callers:
 *     SnapFlyoutHost::ShowSnapBarOnMonitorAsync$_ResumeCoro$1 @ 0x180228430 (SnapFlyoutHost--ShowSnapBarOnMonitorAsync$_ResumeCoro$1.c)
 *     ?IsSnapBarVisible@SnapFlyoutHost@@QEAA_NXZ @ 0x18067B7B4 (-IsSnapBarVisible@SnapFlyoutHost@@QEAA_NXZ.c)
 *     ?ShowSnapBarOnMonitor@SnapFlyoutHost@@AEAAXUPoint@Foundation@Windows@winrt@@@Z @ 0x18067C3C8 (-ShowSnapBarOnMonitor@SnapFlyoutHost@@AEAAXUPoint@Foundation@Windows@winrt@@@Z.c)
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Windows::Foundation::IUnknown *__fastcall SnapFlyoutHost::GetVisibleSnapBar(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2)
{
  RTL_SRWLOCK *v4; // rdi
  __int64 *v5; // rbx
  signed int v6; // eax
  __int64 **v7; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  char v11; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v12; // [rsp+50h] [rbp+18h]

  v4 = (RTL_SRWLOCK *)(a1 + 176);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 176));
  v12 = v4;
  v5 = **(__int64 ***)(a1 + 144);
  while ( !*((_BYTE *)v5 + 25) )
  {
    v11 = 0;
    v6 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v5[5] + 88LL))(v5[5], &v11);
    if ( v6 < 0 )
      winrt::throw_hresult(v6);
    if ( v11 )
    {
      *(_QWORD *)a2 = v5[5];
      winrt::Windows::Foundation::IUnknown::add_ref(a2);
      goto LABEL_16;
    }
    v7 = (__int64 **)v5[2];
    if ( *((_BYTE *)v7 + 25) )
    {
      for ( i = (__int64 *)v5[1]; !*((_BYTE *)i + 25) && v5 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v5 = i;
      v5 = i;
    }
    else
    {
      v5 = (__int64 *)v5[2];
      for ( j = *v7; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v5 = j;
    }
  }
  *(_QWORD *)a2 = 0LL;
LABEL_16:
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return a2;
}
