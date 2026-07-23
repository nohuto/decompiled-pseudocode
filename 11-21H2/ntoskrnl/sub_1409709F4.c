/*
 * XREFs of sub_1409709F4 @ 0x1409709F4
 * Callers:
 *     sub_1407615BC @ 0x1407615BC (sub_1407615BC.c)
 * Callees:
 *     sub_140208AD8 @ 0x140208AD8 (sub_140208AD8.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 */

_OWORD *__fastcall sub_1409709F4(__int64 a1)
{
  unsigned __int16 *v1; // rsi
  _OWORD *result; // rax
  _OWORD *v4; // rbx
  unsigned __int16 v5; // ax

  v1 = (unsigned __int16 *)(a1 + 88);
  result = sub_1402828F0(256, *(unsigned __int16 *)(a1 + 88) + 40LL, 0x524E6D4Du);
  v4 = result;
  if ( result )
  {
    v5 = *v1;
    v4[1] = 0LL;
    *((_WORD *)v4 + 9) = v5;
    *((_QWORD *)v4 + 3) = (char *)v4 + 40;
    sub_140208AD8((_WORD *)v4 + 8, v1);
    *((_DWORD *)v4 + 8) = *(_DWORD *)(a1 + 120);
    *((_DWORD *)v4 + 9) = *(_DWORD *)(a1 + 156);
    return v4;
  }
  return result;
}
