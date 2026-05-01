/*
 * XREFs of ?_Throw_bad_weak_ptr@std@@YAXXZ @ 0x1803F95F4
 * Callers:
 *     ?HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180099F18 (-HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Intern.c)
 *     ?shared_from_this@?$enable_shared_from_this@VConnectedStandbyHelper@@@std@@QEAA?AV?$shared_ptr@VConnectedStandbyHelper@@@2@XZ @ 0x1801A8F88 (-shared_from_this@-$enable_shared_from_this@VConnectedStandbyHelper@@@std@@QEAA-AV-$shared_ptr@V.c)
 *     ?NotificationCallback@ConnectedStandbyHelper@@AEAAJK@Z @ 0x1803F91E0 (-NotificationCallback@ConnectedStandbyHelper@@AEAAJK@Z.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 */

void __noreturn std::_Throw_bad_weak_ptr(void)
{
  void **pExceptionObject; // [rsp+20h] [rbp-28h] BYREF
  __int128 v1; // [rsp+28h] [rbp-20h]

  pExceptionObject = &std::bad_weak_ptr::`vftable';
  v1 = 0LL;
  throw (std::bad_weak_ptr *)&pExceptionObject;
}
