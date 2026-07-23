/*
 * XREFs of sub_14056D8FC @ 0x14056D8FC
 * Callers:
 *     sub_1403C2638 @ 0x1403C2638 (sub_1403C2638.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePool3 @ 0x140A6E1B0 (ExAllocatePool3.c)
 */

_WORD *__fastcall sub_14056D8FC(_WORD *a1)
{
  char v1; // si
  _WORD *Pool3; // rax
  _WORD *v4; // rbx
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF

  v1 = dword_140D05350;
  v6 = 0LL;
  LOBYTE(v6) = 3;
  *(_QWORD *)&v6 = v6 | 0x100;
  DWORD2(v6) = (unsigned __int16)a1[1];
  Pool3 = (_WORD *)ExAllocatePool3(
                     72,
                     120 * (unsigned int)(unsigned __int8)dword_140D05350 + 320,
                     1850960203,
                     (unsigned int)&v6,
                     1);
  v4 = Pool3;
  if ( Pool3 )
  {
    memset(Pool3, 0, 0x140uLL);
    v4[69] = a1[1];
    v4[70] = *a1;
    v4[68] = a1[3];
    *((_QWORD *)v4 + 24) = v4 + 160;
    *((_BYTE *)v4 + 185) = v1;
  }
  return v4;
}
