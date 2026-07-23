/*
 * XREFs of ExpNodeCreateSystemThread @ 0x140683660
 * Callers:
 *     ExpPartitionCreateSystemThread @ 0x1406835FC (ExpPartitionCreateSystemThread.c)
 * Callees:
 *     KeSelectIdealProcessor @ 0x14020385C (KeSelectIdealProcessor.c)
 *     KeQueryNodeActiveAffinity @ 0x140305C40 (KeQueryNodeActiveAffinity.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     PsCreateSystemThreadEx @ 0x1407727F0 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall ExpNodeCreateSystemThread(
        USHORT *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _WORD *a8,
        __int64 a9)
{
  USHORT v9; // cx
  int v14; // [rsp+50h] [rbp-68h] BYREF
  _GROUP_AFFINITY Affinity; // [rsp+58h] [rbp-60h] BYREF

  v9 = *a1;
  Affinity = 0LL;
  KeQueryNodeActiveAffinity(v9, &Affinity, 0LL);
  v14 = (unsigned __int16)KeSelectIdealProcessor((__int64)&Affinity, a8, 0LL, 0);
  return PsCreateSystemThreadEx(a9, a2, a3, a4, a5, a6, a7, &Affinity, &v14);
}
