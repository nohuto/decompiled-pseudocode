/*
 * XREFs of sub_14098E728 @ 0x14098E728
 * Callers:
 *     sub_14098D0C0 @ 0x14098D0C0 (sub_14098D0C0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405CAE6C @ 0x1405CAE6C (sub_1405CAE6C.c)
 */

__int64 __fastcall sub_14098E728(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v4; // ecx

  result = qword_140D04890;
  if ( qword_140D04890 )
  {
    result = sub_14042A5E0(36LL, a2);
    if ( (_BYTE)result )
    {
      v4 = *(_DWORD *)(a2 + 4);
      if ( !v4 )
        sub_1405CAE6C(0x706uLL, 0x24uLL, 0x53436F75uLL, 0LL);
      if ( v4 > 0x3E8 )
        sub_1405CAE6C(0x706uLL, 0x24uLL, 0x53436F75uLL, *(unsigned int *)(a2 + 4));
    }
  }
  return result;
}
