/*
 * XREFs of sub_14036C210 @ 0x14036C210
 * Callers:
 *     sub_1407F1308 @ 0x1407F1308 (sub_1407F1308.c)
 *     sub_14085DA10 @ 0x14085DA10 (sub_14085DA10.c)
 * Callees:
 *     sub_14036C2F0 @ 0x14036C2F0 (sub_14036C2F0.c)
 *     sub_1407F15C0 @ 0x1407F15C0 (sub_1407F15C0.c)
 *     sub_1407F16F0 @ 0x1407F16F0 (sub_1407F16F0.c)
 */

__int64 __fastcall sub_14036C210(__int64 a1, _OWORD *a2, __int128 *a3, __int64 a4, unsigned int a5, __int64 *a6)
{
  unsigned int v6; // ebx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int128 v13; // xmm1
  int v14; // ebp

  v6 = 0;
  if ( a1
    && a2
    && a3
    && a4
    && a5 <= 7
    && a6
    && (v11 = sub_1407F16F0(96LL, *(unsigned int *)(a1 + 24)), (v12 = v11) != 0) )
  {
    *(_QWORD *)v11 = a1;
    *(_DWORD *)(v11 + 8) = a5;
    *(_OWORD *)(v11 + 16) = *a2;
    v13 = *a3;
    *(_BYTE *)(v11 + 88) = 1;
    *(_OWORD *)(v11 + 32) = v13;
    v14 = sub_14036C2F0(v11, a4);
    if ( v14 < 0 )
    {
      sub_1407F15C0(v12);
      return (unsigned int)v14;
    }
    else
    {
      *a6 = v12;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
