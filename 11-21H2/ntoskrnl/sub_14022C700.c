/*
 * XREFs of sub_14022C700 @ 0x14022C700
 * Callers:
 *     FsRtlTruncateBaseMcb @ 0x14022BCB0 (FsRtlTruncateBaseMcb.c)
 *     FsRtlRemoveBaseMcbEntry @ 0x14022BDA0 (FsRtlRemoveBaseMcbEntry.c)
 *     FsRtlAddBaseMcbEntryEx @ 0x14022C220 (FsRtlAddBaseMcbEntryEx.c)
 *     FsRtlSplitBaseMcb @ 0x140541550 (FsRtlSplitBaseMcb.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_14022C700(__int64 a1, unsigned int a2, int *a3)
{
  int v3; // ebp
  int v4; // r10d
  int v6; // r9d
  __int64 v7; // r8
  int v8; // eax

  v3 = *(_DWORD *)(a1 + 4);
  v4 = 0;
  v6 = v3 - 1;
  if ( v3 - 1 < 0 )
  {
LABEL_7:
    *a3 = v3;
    return 0;
  }
  while ( 1 )
  {
    v7 = *(_QWORD *)(a1 + 16);
    v8 = (v6 + v4) / 2;
    if ( v8 && a2 < *(_DWORD *)(v7 + 8LL * v8 - 8) )
    {
      v6 = v8 - 1;
      goto LABEL_6;
    }
    if ( a2 <= *(_DWORD *)(v7 + 8LL * v8) - 1 )
      break;
    v4 = v8 + 1;
LABEL_6:
    if ( v4 > v6 )
      goto LABEL_7;
  }
  *a3 = v8;
  return 1;
}
