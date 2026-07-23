/*
 * XREFs of sub_14075C588 @ 0x14075C588
 * Callers:
 *     sub_14075C460 @ 0x14075C460 (sub_14075C460.c)
 *     sub_1407ED450 @ 0x1407ED450 (sub_1407ED450.c)
 *     sub_1409638AC @ 0x1409638AC (sub_1409638AC.c)
 *     sub_140AFFF64 @ 0x140AFFF64 (sub_140AFFF64.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     RtlAssert @ 0x1405E6EA0 (RtlAssert.c)
 *     sub_1406E09F8 @ 0x1406E09F8 (sub_1406E09F8.c)
 *     sub_14084DB84 @ 0x14084DB84 (sub_14084DB84.c)
 */

void __fastcall sub_14075C588(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // eax
  __int64 v4; // rax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C2A640, 0LL);
  if ( a1 != qword_140C2A6D8 )
  {
    v4 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
    dword_140C2A220[2 * v4 + 1] = -1073740768;
    dword_140C2A220[2 * v4] = 590387;
    if ( (dword_140D04880 & 4) != 0 )
      RtlAssert("DbHandleIn == KsepShimDbHandle", "minkernel\\ntos\\kshim\\ksesdb.c", 0x233u, 0LL);
  }
  if ( dword_140C2A6D0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C2A640, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C2A640);
    sub_1402AFC00((ULONG_PTR)&qword_140C2A640);
    KeLeaveCriticalRegion();
    sub_14084DB84();
  }
  else
  {
    if ( qword_140C2A6D8 )
    {
      v3 = dword_140C2A648;
      if ( !dword_140C2A648 || (--dword_140C2A648, v3 == 1) )
      {
        sub_1406E09F8((__int64)&unk_140C2A660);
        sub_1406E09F8((__int64)&unk_140C2A698);
        qword_140C2A6D8 = 0LL;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C2A640, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C2A640);
    sub_1402AFC00((ULONG_PTR)&qword_140C2A640);
    KeLeaveCriticalRegion();
  }
}
