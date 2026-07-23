/*
 * XREFs of sub_140233738 @ 0x140233738
 * Callers:
 *     sub_1402C1F50 @ 0x1402C1F50 (sub_1402C1F50.c)
 *     sub_140352EB0 @ 0x140352EB0 (sub_140352EB0.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_140233738(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // r8d
  unsigned __int64 v6; // rax
  _BOOL8 result; // rax
  unsigned __int64 v8; // rax

  v5 = *(_DWORD *)(a1 + 12);
  result = 0;
  if ( v5 )
  {
    if ( (*(_BYTE *)(a1 + 4) & 4) == 0 )
    {
      v6 = *(_QWORD *)(a1 + 8LL * (unsigned int)(v5 - 1) + 24);
      if ( ((v6 >> 10) & 3) == a4 && (v6 & 0xFFFFFFFFFFFFF000uLL) == a2 + a3 * (4096LL << (9 * (unsigned __int8)a4)) )
      {
        v8 = v6 & 0x3FF;
        if ( v8 + a3 > v8 && v8 + a3 <= 0x3FF )
          return 1;
      }
    }
  }
  return result;
}
