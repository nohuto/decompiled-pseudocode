/*
 * XREFs of sub_1402A3984 @ 0x1402A3984
 * Callers:
 *     FsRtlInsertPerFileObjectContext @ 0x1402A3510 (FsRtlInsertPerFileObjectContext.c)
 *     sub_14071CD2C @ 0x14071CD2C (sub_14071CD2C.c)
 * Callees:
 *     sub_1402A3A14 @ 0x1402A3A14 (sub_1402A3A14.c)
 */

__int64 __fastcall sub_1402A3984(__int64 a1)
{
  signed __int64 v1; // r10
  char v2; // r11
  bool v3; // zf

  if ( !*(_QWORD *)(a1 + 208) )
    return 3221225485LL;
  sub_1402A3A14(a1, 3LL);
  if ( v2 )
    v3 = _InterlockedCompareExchange64((volatile signed __int64 *)0x20, v1, 0LL) == 0;
  else
    v3 = v1 == _InterlockedCompareExchange64((volatile signed __int64 *)0x20, 0LL, v1);
  if ( v3 )
    return 0LL;
  else
    return 3221225505LL;
}
