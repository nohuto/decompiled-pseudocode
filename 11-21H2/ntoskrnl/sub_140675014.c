/*
 * XREFs of sub_140675014 @ 0x140675014
 * Callers:
 *     sub_140674F0C @ 0x140674F0C (sub_140674F0C.c)
 *     sub_140674FE4 @ 0x140674FE4 (sub_140674FE4.c)
 *     sub_1406836F0 @ 0x1406836F0 (sub_1406836F0.c)
 *     sub_1407A6508 @ 0x1407A6508 (sub_1407A6508.c)
 *     sub_1407E0DC4 @ 0x1407E0DC4 (sub_1407E0DC4.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140675014(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *i; // rdx
  __int64 v6; // [rsp+38h] [rbp+10h]

  result = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 16));
  if ( result <= 0 )
  {
    if ( result )
      __fastfail(0xEu);
    sub_14042A5E0(a1, 0LL);
    v6 = *(_QWORD *)(a2 + 8) & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
    for ( i = (_QWORD *)(*(_QWORD *)(a1 + 8)
                       + 8LL
                       * ((37
                         * (BYTE6(v6)
                          + 37
                          * (BYTE5(v6)
                           + 37
                           * (BYTE4(v6)
                            + 37
                            * (BYTE3(v6) + 37 * (BYTE2(v6) + 37 * (BYTE1(v6) + 37 * ((unsigned __int8)v6 + 11623883)))))))
                         + HIBYTE(v6)) & (unsigned int)((*(_DWORD *)(a1 + 4) >> 5) - 1))); (*i & 1) == 0; i = (_QWORD *)*i )
    {
      if ( *i == a2 )
      {
        *i = *(_QWORD *)a2;
        --*(_DWORD *)a1;
        *(_QWORD *)a2 |= 0x8000000000000002uLL;
        break;
      }
    }
    sub_14042A5E0(a1, 0LL);
    return sub_14042A5E0(a1, a2);
  }
  return result;
}
