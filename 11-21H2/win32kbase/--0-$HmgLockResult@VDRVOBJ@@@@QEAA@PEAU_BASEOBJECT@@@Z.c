/*
 * XREFs of ??0?$HmgLockResult@VDRVOBJ@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C00DB828
 * Callers:
 *     EngDeleteDriverObj @ 0x1C01781D0 (EngDeleteDriverObj.c)
 *     EngLockDriverObj @ 0x1C01783E0 (EngLockDriverObj.c)
 *     EngUnlockDriverObj @ 0x1C0178460 (EngUnlockDriverObj.c)
 * Callees:
 *     PushThreadGuardedObject @ 0x1C00232C0 (PushThreadGuardedObject.c)
 *     ?Feature_3101493560__private_IsEnabled@@YAHXZ @ 0x1C00D8CC0 (-Feature_3101493560__private_IsEnabled@@YAHXZ.c)
 */

__int64 __fastcall HmgLockResult<DRVOBJ>::HmgLockResult<DRVOBJ>(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi

  v2 = (_QWORD *)(a1 + 8);
  *(_QWORD *)a1 = a2;
  *(_OWORD *)(a1 + 8) = 0LL;
  *(_OWORD *)(a1 + 24) = 0LL;
  if ( (unsigned int)Feature_3101493560__private_IsEnabled() )
    PushThreadGuardedObject(
      v2,
      a1 & ((unsigned __int128)-(__int128)(unsigned __int64)v2 >> 64),
      (__int64)UnexpectedThreadTerminationHandler<HmgLockResult<DRVOBJ>>::OnUnexpectedThreadTerminationStatic);
  return a1;
}
