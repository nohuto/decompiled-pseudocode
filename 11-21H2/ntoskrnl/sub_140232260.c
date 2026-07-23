/*
 * XREFs of sub_140232260 @ 0x140232260
 * Callers:
 *     sub_140232200 @ 0x140232200 (sub_140232200.c)
 *     sub_1403122F0 @ 0x1403122F0 (sub_1403122F0.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_140232260(__int64 a1, unsigned int a2)
{
  __int64 v2; // r11
  __int64 v3; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r9

  v2 = a2;
  *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0x3F | ((_BYTE)a2 << 6);
  v3 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  result = *(_QWORD *)(v3 + 8LL * a2 + 15552);
  v5 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4) - qword_140C52CE0;
  v6 = result >> 1;
  LODWORD(v6) = (result >> 1) & 0x7FFFFFFF;
  *(_QWORD *)(a1 + 8) = 2 * (((unsigned int)result >> 1) | 0xFFFFFFFF00000000uLL);
  v7 = v5 << 33;
  if ( v6 == 0x7FFFFFFF )
    result = v7 | result & 0x1FFFFFFFFLL;
  else
    *(_QWORD *)(48 * (qword_140C52CE0 + v6) - 0x220000000000LL + 8) = v7 | *(_QWORD *)(48 * (qword_140C52CE0 + v6)
                                                                                     - 0x220000000000LL
                                                                                     + 8) & 0x1FFFFFFFFLL;
  *(_QWORD *)(v3 + 8 * v2 + 15552) = result ^ (result ^ (2 * v5)) & 0xFFFFFFFE;
  return result;
}
