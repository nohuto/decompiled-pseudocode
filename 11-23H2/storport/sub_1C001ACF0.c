/*
 * XREFs of sub_1C001ACF0 @ 0x1C001ACF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0008570 @ 0x1C0008570 (sub_1C0008570.c)
 */

__int64 __fastcall sub_1C001ACF0(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  _BYTE *v4; // rax
  __int64 result; // rax

  *a4 = 0;
  if ( (*(_BYTE *)(a2 + 3) & 0x3F) != 1 )
    return sub_1C0008570(*(_BYTE *)(a2 + 3));
  v4 = *(_BYTE **)(a1 + 40);
  if ( *v4 >= 0x20u )
    return 3221225473LL;
  *(_QWORD *)(a3 + 32) = v4;
  result = 0LL;
  *(_BYTE *)(a3 + 93) = 1;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 48) = 0;
  return result;
}
