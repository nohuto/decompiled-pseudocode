/*
 * XREFs of sub_140391800 @ 0x140391800
 * Callers:
 *     sub_140A5072C @ 0x140A5072C (sub_140A5072C.c)
 * Callees:
 *     sub_1403A572C @ 0x1403A572C (sub_1403A572C.c)
 */

__int64 sub_140391800()
{
  ULONG_PTR v0; // r11
  __int64 v1; // rdx
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // r8

  v0 = qword_140C4E390;
  if ( *(_DWORD *)(qword_140C4E390 + 228) == 5 )
  {
    v1 = *(_QWORD *)(qword_140C4E390 + 208);
    v2 = 10000000LL;
    v3 = MEMORY[0xFFFFF780000003B8];
    if ( Address )
      v4 = ((unsigned __int64)(*(_QWORD *)(qword_140C4E390 + 16) - v1)
          * (unsigned __int128)*((unsigned __int64 *)Address + 1)) >> 64;
    else
      v4 = sub_1403A572C(*(_QWORD *)(qword_140C4E390 + 16) - v1, *(_QWORD *)(qword_140C4E390 + 192), 10000000LL);
    result = v3 + v4;
  }
  else
  {
    v2 = *(_QWORD *)(qword_140C4E390 + 192);
    result = *(_QWORD *)(qword_140C4E390 + 16);
  }
  if ( v0 != qword_140C4E388 && qword_140C4E388 )
  {
    v6 = *(_QWORD *)(qword_140C4E388 + 192);
    if ( *(_DWORD *)(qword_140C4E388 + 228) == 5 )
      v6 = 10000000LL;
    return sub_1403A572C(result, v2, v6);
  }
  return result;
}
