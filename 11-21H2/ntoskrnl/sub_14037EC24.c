/*
 * XREFs of sub_14037EC24 @ 0x14037EC24
 * Callers:
 *     sub_14037F1D4 @ 0x14037F1D4 (sub_14037F1D4.c)
 *     sub_14039423C @ 0x14039423C (sub_14039423C.c)
 * Callees:
 *     sub_140380C38 @ 0x140380C38 (sub_140380C38.c)
 */

__int64 __fastcall sub_14037EC24(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // r8d
  int v5; // eax
  _QWORD *v6; // rcx

  v4 = sub_140380C38(a2, a3, a1);
  if ( (int)(v4 + 0x80000000) < 0 || v4 == -1073741275 )
  {
    v5 = *(_DWORD *)(a1 + 24);
    if ( v5 == -1 || !v5 )
      v6 = (_QWORD *)(a1 + 8);
    else
      v6 = (_QWORD *)(*(_QWORD *)a1 + 16LL * (unsigned int)(v5 - 1));
    if ( *v6 && !v4 )
      v6[1] += 4LL;
    return 0;
  }
  return v4;
}
