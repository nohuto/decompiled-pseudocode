/*
 * XREFs of ?GetCopyIndexes@AtomicObjState@util@@QEAA_NAEAUatomicStorage@12@AEAI1@Z @ 0x140091788
 * Callers:
 *     ?_AcquireReadWrite@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@IEAAJAEAPEAUClockingSection@@@Z @ 0x140093390 (-_AcquireReadWrite@-$AtomicObjBase@UClockingSection@@V-$AtomicObj@UClockingSection@@VReaderLockP.c)
 * Callees:
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 */

char __fastcall util::AtomicObjState::GetCopyIndexes(
        util::AtomicObjState *this,
        struct util::AtomicObjState::atomicStorage *a2,
        unsigned int *a3,
        unsigned int *a4)
{
  unsigned __int32 v4; // ecx
  unsigned int v5; // ecx
  int v7; // [rsp+0h] [rbp-20h]
  __int16 v8; // [rsp+4h] [rbp-1Ch]
  int v9; // [rsp+8h] [rbp-18h]
  __int16 v10; // [rsp+Ch] [rbp-14h]

  v7 = 131330;
  v8 = 1;
  v9 = 33554945;
  v10 = 256;
  v4 = _InterlockedCompareExchange((volatile signed __int32 *)a2, 0, 0);
  *a3 = *((unsigned __int8 *)&v7 + (v4 & 0xFFFFFFF7));
  if ( (v4 & 8) != 0 )
    v5 = *((unsigned __int8 *)&v9 + (v4 & 0xFFFFFFF7));
  else
    v5 = v4 >> 1;
  *a4 = v5;
  return 1;
}
