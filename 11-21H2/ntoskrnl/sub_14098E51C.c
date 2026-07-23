/*
 * XREFs of sub_14098E51C @ 0x14098E51C
 * Callers:
 *     sub_14098D0C0 @ 0x14098D0C0 (sub_14098D0C0.c)
 * Callees:
 *     wcsncmp @ 0x1403E33F0 (wcsncmp.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405CAE6C @ 0x1405CAE6C (sub_1405CAE6C.c)
 *     sub_14098E284 @ 0x14098E284 (sub_14098E284.c)
 */

char __fastcall sub_14098E51C(__int64 a1, __int64 a2)
{
  const wchar_t **v3; // rdi
  char v4; // si
  __int128 v6; // [rsp+20h] [rbp-28h]
  __int128 v7; // [rsp+30h] [rbp-18h]

  v6 = *(_OWORD *)(a2 + 16);
  v7 = *(_OWORD *)(a2 + 32);
  if ( !(unsigned __int8)sub_14042A5E0(37LL, a2) )
    sub_1405CAE6C(0x605uLL, 0x25uLL, qword_140D04890, 0LL);
  if ( !sub_14098E284((unsigned __int16 *)(a2 + 16), *((__int64 *)&v6 + 1), WORD1(v6)) )
    sub_1405CAE6C(0x706uLL, 0x25uLL, 0x504E616DuLL, a2 + 24);
  v3 = (const wchar_t **)(a2 + 40);
  v4 = sub_14098E284((unsigned __int16 *)(a2 + 32), *((__int64 *)&v7 + 1), WORD1(v7));
  if ( !v4 )
    sub_1405CAE6C(0x706uLL, 0x25uLL, 0x534E616DuLL, (ULONG_PTR)v3);
  if ( !wcsncmp(*v3, *(const wchar_t **)(a2 + 24), 0x40uLL) )
    sub_1405CAE6C(0x706uLL, 0x25uLL, 0x4E616D65uLL, (ULONG_PTR)v3);
  if ( *(_DWORD *)(a2 + 48) > 0x3E8u )
    sub_1405CAE6C(0x706uLL, 0x25uLL, 0x4D436F75uLL, a2 + 48);
  return v4;
}
