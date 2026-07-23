/*
 * XREFs of sub_14075C68C @ 0x14075C68C
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
 *     sub_1406E09F8 @ 0x1406E09F8 (sub_1406E09F8.c)
 *     sub_1407ECCD0 @ 0x1407ECCD0 (sub_1407ECCD0.c)
 *     sub_140964CB8 @ 0x140964CB8 (sub_140964CB8.c)
 */

__int64 __fastcall sub_14075C68C(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // edi

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C2A640, 0LL);
  if ( dword_140C2A6D0 )
  {
    if ( qword_140C2A6D8 )
    {
      ++dword_140C2A648;
      v3 = 0;
      *a1 = qword_140C2A6D8;
      _InterlockedIncrement(&dword_140C2A190);
      goto LABEL_4;
    }
    *a1 = 0LL;
    goto LABEL_16;
  }
  if ( qword_140C2A6D8 )
  {
    ++dword_140C2A648;
    v3 = 0;
    *a1 = qword_140C2A6D8;
    _InterlockedIncrement(&dword_140C2A198);
    goto LABEL_4;
  }
  v3 = sub_1407ECCD0(L"\\SystemRoot\\AppPatch\\drvmain.sdb");
  if ( v3 < 0 )
  {
    *a1 = 0LL;
    _InterlockedIncrement(&dword_140C2A19C);
LABEL_16:
    v3 = -1073741823;
    goto LABEL_4;
  }
  if ( (int)sub_1407ECCD0(L"\\SystemRoot\\AppPatch\\drvpatch.sdb") >= 0
    && dword_140C2A690 >= (unsigned int)dword_140C2A6C8 )
  {
    sub_1406E09F8((__int64)&unk_140C2A698);
    sub_140964CB8();
  }
  ++dword_140C2A648;
  qword_140C2A6D8 = (__int64)&unk_140C2A660;
  *a1 = &unk_140C2A660;
  _InterlockedIncrement(&dword_140C2A194);
LABEL_4:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C2A640, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C2A640);
  sub_1402AFC00((ULONG_PTR)&qword_140C2A640);
  KeLeaveCriticalRegion();
  return (unsigned int)v3;
}
