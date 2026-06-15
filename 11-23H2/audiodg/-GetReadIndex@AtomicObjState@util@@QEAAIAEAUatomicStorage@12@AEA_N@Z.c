/*
 * XREFs of ?GetReadIndex@AtomicObjState@util@@QEAAIAEAUatomicStorage@12@AEA_N@Z @ 0x14009DD60
 * Callers:
 *     ?_AcquireRead@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@IEAAJAEAPEBUClockingSection@@AEA_N@Z @ 0x14009ECFC (-_AcquireRead@-$AtomicObjBase@UClockingSection@@V-$AtomicObj@UClockingSection@@VReaderLockPolicy.c)
 * Callees:
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 */

__int64 __fastcall util::AtomicObjState::GetReadIndex(
        util::AtomicObjState *this,
        struct util::AtomicObjState::atomicStorage *a2,
        bool *a3)
{
  signed __int32 v4; // r9d
  signed __int32 v5; // edx
  bool v6; // zf
  signed __int32 v7; // eax
  int v9; // [rsp+0h] [rbp-18h]
  __int16 v10; // [rsp+4h] [rbp-14h]

  v4 = _InterlockedCompareExchange((volatile signed __int32 *)a2, 0, 0);
  if ( v4 == *(_DWORD *)this )
  {
    *a3 = 0;
  }
  else
  {
    *a3 = 1;
    v9 = 83887106;
    v10 = 769;
    do
    {
      v5 = *((unsigned __int8 *)&v9 + (v4 & 0xFFFFFFF7));
      v7 = _InterlockedCompareExchange((volatile signed __int32 *)a2, v5, v4);
      v6 = v4 == v7;
      v4 = v7;
    }
    while ( !v6 );
    *(_DWORD *)this = v5;
  }
  return *(_DWORD *)this >> 1;
}
