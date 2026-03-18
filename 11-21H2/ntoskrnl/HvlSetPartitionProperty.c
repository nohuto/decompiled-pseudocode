/*
 * XREFs of HvlSetPartitionProperty @ 0x140548398
 * Callers:
 *     HvlResumePartition @ 0x140547F60 (HvlResumePartition.c)
 *     HvlSuspendPartition @ 0x1405486C0 (HvlSuspendPartition.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14039D8F0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF00 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14039DF90 (HvlpAcquireHypercallPage.c)
 */

__int64 __fastcall HvlSetPartitionProperty(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // rax
  __int16 v7; // bx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]
  __int64 v10; // [rsp+38h] [rbp-10h]

  v9 = 0LL;
  LODWORD(v10) = 0;
  v8 = 0LL;
  if ( (HvlpFlags & 2) == 0 )
    return 3221225506LL;
  v6 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v8, 1, 0LL, 24LL);
  *v6 = a1;
  *((_DWORD *)v6 + 2) = 0x20000;
  v6[2] = a3;
  v7 = HvcallInitiateHypercall(69);
  HvlpReleaseHypercallPage((__int64)&v8);
  return v7 != 0 ? 0xC0000001 : 0;
}
