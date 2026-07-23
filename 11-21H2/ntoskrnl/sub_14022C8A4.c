/*
 * XREFs of sub_14022C8A4 @ 0x14022C8A4
 * Callers:
 *     FsRtlRemoveBaseMcbEntry @ 0x14022BDA0 (FsRtlRemoveBaseMcbEntry.c)
 *     FsRtlAddBaseMcbEntryEx @ 0x14022C220 (FsRtlAddBaseMcbEntryEx.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_14022C8A4(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v5; // eax
  __int64 v6; // rcx
  __int64 result; // rax

  v5 = *(_DWORD *)(a1 + 4);
  v6 = a2 + a3;
  if ( (unsigned int)v6 < v5 )
  {
    memmove(
      (void *)(*(_QWORD *)(a1 + 16) + 8LL * a2),
      (const void *)(*(_QWORD *)(a1 + 16) + 8 * v6),
      8LL * (v5 - a2 - a3));
    v5 = *(_DWORD *)(a1 + 4);
  }
  result = v5 - a3;
  *(_DWORD *)(a1 + 4) = result;
  return result;
}
