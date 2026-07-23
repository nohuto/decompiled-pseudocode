/*
 * XREFs of sub_14079F130 @ 0x14079F130
 * Callers:
 *     sub_1402513D0 @ 0x1402513D0 (sub_1402513D0.c)
 *     sub_1405E1764 @ 0x1405E1764 (sub_1405E1764.c)
 *     PsTerminateSystemThread @ 0x1406E5A70 (PsTerminateSystemThread.c)
 *     sub_140702420 @ 0x140702420 (sub_140702420.c)
 *     sub_14079F0C0 @ 0x14079F0C0 (sub_14079F0C0.c)
 *     sub_1407D7CA0 @ 0x1407D7CA0 (sub_1407D7CA0.c)
 *     sub_1407E6274 @ 0x1407E6274 (sub_1407E6274.c)
 * Callees:
 *     sub_1402ECD10 @ 0x1402ECD10 (sub_1402ECD10.c)
 *     PsGetProcessServerSilo @ 0x140347680 (PsGetProcessServerSilo.c)
 *     sub_1407A0088 @ 0x1407A0088 (sub_1407A0088.c)
 *     sub_1409B1558 @ 0x1409B1558 (sub_1409B1558.c)
 */

__int64 __fastcall sub_14079F130(__int64 a1, unsigned int a2, char a3)
{
  __int64 v4; // rdi

  v4 = *(_QWORD *)(a1 + 544);
  if ( (*(_DWORD *)(a1 + 1376) & 0x20) != 0 && (*(_DWORD *)(v4 + 1124) & 0x40000008) == 0 )
  {
    PsGetProcessServerSilo(v4);
    sub_1409B1558("Terminating critical thread 0x%p (in %s)\n", (const void *)a1, (const char *)(v4 + 1448));
  }
  if ( a3 && (struct _KTHREAD *)a1 == KeGetCurrentThread() )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1376), 1u);
    sub_1407A0088(a2);
    __debugbreak();
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x400) != 0 )
    return 3221225506LL;
  if ( (*(_DWORD *)(v4 + 2172) & 1) != 0 )
    return 3221225659LL;
  if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 1376), 0) )
    *(_DWORD *)(a1 + 1432) = a2;
  sub_1402ECD10(a1);
  return 0LL;
}
