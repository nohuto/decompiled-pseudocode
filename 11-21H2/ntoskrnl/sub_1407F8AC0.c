/*
 * XREFs of sub_1407F8AC0 @ 0x1407F8AC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1407F8AC0(__int64 a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rax
  __int64 result; // rax

  v1 = (_QWORD *)(a1 - 48);
  if ( (*(_BYTE *)(a1 - 48 + 26) & 0x40) != 0 )
  {
    v1 = (_QWORD *)((char *)v1 - byte_140C25440[*(_BYTE *)(a1 - 48 + 26) & 0x7F]);
    v2 = *v1 + 40LL;
  }
  else
  {
    v2 = 8LL;
  }
  result = *(_QWORD *)v2;
  if ( result )
    return sub_14042A5E0(a1, v1);
  return result;
}
