/*
 * XREFs of sub_1403B488C @ 0x1403B488C
 * Callers:
 *     sub_1403B4860 @ 0x1403B4860 (sub_1403B4860.c)
 *     sub_14081ACB4 @ 0x14081ACB4 (sub_14081ACB4.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405D9370 @ 0x1405D9370 (sub_1405D9370.c)
 */

__int64 __fastcall sub_1403B488C(__int64 a1, _QWORD *a2, _DWORD *a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 result; // rax

  v5 = a2[1];
  if ( *(_QWORD *)(a1 + 336) && (*a3 & 0x20) != 0 )
    sub_14042A5E0(v5, *(unsigned int *)(a4 + 52));
  if ( *(_QWORD *)(a1 + 344) && (*a3 & 0x40) != 0 )
    sub_14042A5E0(v5, *(unsigned int *)(a4 + 56));
  if ( *(_QWORD *)(a1 + 352) && (dword_140C23B14 & 0x100) != 0 )
    sub_14042A5E0(v5, *(unsigned int *)(a4 + 72));
  if ( *(_QWORD *)(a1 + 360) )
  {
    if ( (*a3 & 0x80u) != 0 )
    {
      *(_BYTE *)(a1 + 504) = *(_BYTE *)(a4 + 76);
      sub_14042A5E0(v5, *(unsigned __int8 *)(a4 + 76));
      if ( *a2 )
        sub_1405D9370(*a2, *(unsigned __int8 *)(a1 + 504));
    }
  }
  result = *(_QWORD *)(a1 + 328);
  if ( result )
  {
    if ( (*a3 & 0x200) != 0 )
      return sub_14042A5E0(v5, (unsigned int)dword_140C23AB0);
  }
  return result;
}
