/*
 * XREFs of sub_1402E4DD4 @ 0x1402E4DD4
 * Callers:
 *     sub_1402E4D70 @ 0x1402E4D70 (sub_1402E4D70.c)
 *     sub_1403122F0 @ 0x1403122F0 (sub_1403122F0.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_1402E4DD4(__int64 a1)
{
  unsigned __int64 v1; // r9
  __int64 v2; // r10
  unsigned __int64 result; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // r11

  v1 = (unsigned __int64)*(unsigned __int8 *)(a1 + 34) >> 6;
  v2 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  result = *(_QWORD *)(a1 + 8);
  v4 = (unsigned int)result >> 1;
  v5 = result >> 33;
  if ( v4 == 0x7FFFFFFF )
    *(_QWORD *)(v2 + 8 * v1 + 15552) = result ^ (result ^ *(_QWORD *)(v2 + 8 * v1 + 15552)) & 0x1FFFFFFFFLL;
  else
    *(_QWORD *)(48 * (qword_140C52CE0 + v4) - 0x220000000000LL + 8) = result ^ (*(_QWORD *)(48 * (qword_140C52CE0 + v4)
                                                                                          - 0x220000000000LL
                                                                                          + 8) ^ result) & 0x1FFFFFFFFLL;
  if ( v5 == 0x7FFFFFFF )
  {
    result = (*(_DWORD *)(v2 + 8 * v1 + 15552) ^ (unsigned int)result) & 0xFFFFFFFE;
    *(_QWORD *)(v2 + 8 * v1 + 15552) ^= result;
  }
  else
  {
    *(_QWORD *)(48 * (v5 + qword_140C52CE0) - 0x220000000000LL + 8) ^= (result ^ *(_QWORD *)(48 * (v5 + qword_140C52CE0)
                                                                                           - 0x220000000000LL
                                                                                           + 8)) & 0xFFFFFFFE;
  }
  return result;
}
