/*
 * XREFs of ?_Incref_nz@_Ref_count_base@std@@QEAA_NXZ @ 0x18009A154
 * Callers:
 *     ?HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180099F18 (-HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Intern.c)
 *     ?shared_from_this@?$enable_shared_from_this@VConnectedStandbyHelper@@@std@@QEAA?AV?$shared_ptr@VConnectedStandbyHelper@@@2@XZ @ 0x1801A8F88 (-shared_from_this@-$enable_shared_from_this@VConnectedStandbyHelper@@@std@@QEAA-AV-$shared_ptr@V.c)
 *     _lambda_a8dc140887cec83d93fc1ab35d00b62d_::operator() @ 0x1801B07A8 (_lambda_a8dc140887cec83d93fc1ab35d00b62d_--operator().c)
 *     ?NotificationCallback@ConnectedStandbyHelper@@AEAAJK@Z @ 0x1803F91E0 (-NotificationCallback@ConnectedStandbyHelper@@AEAAJK@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall std::_Ref_count_base::_Incref_nz(std::_Ref_count_base *this)
{
  signed __int32 v1; // eax
  signed __int32 v2; // ett

  v1 = *((_DWORD *)this + 2);
  while ( v1 )
  {
    v2 = v1;
    v1 = _InterlockedCompareExchange((volatile signed __int32 *)this + 2, v1 + 1, v1);
    if ( v2 == v1 )
      return 1;
  }
  return 0;
}
