/*
 * XREFs of sub_14036E174 @ 0x14036E174
 * Callers:
 *     sub_14036E0E4 @ 0x14036E0E4 (sub_14036E0E4.c)
 * Callees:
 *     sub_14034F7F0 @ 0x14034F7F0 (sub_14034F7F0.c)
 *     sub_14036E290 @ 0x14036E290 (sub_14036E290.c)
 *     sub_14036E550 @ 0x14036E550 (sub_14036E550.c)
 *     sub_14036E98C @ 0x14036E98C (sub_14036E98C.c)
 *     sub_1405F1BBC @ 0x1405F1BBC (sub_1405F1BBC.c)
 */

__int64 __fastcall sub_14036E174(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v6; // rdx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v10; // r10
  int v11; // eax
  int v12; // ecx
  unsigned __int64 v13; // r10
  __int64 v14; // r15
  int v16; // eax
  int v17; // ecx

  v6 = HIDWORD(*(_QWORD *)a3);
  v7 = HIDWORD(qword_140C5A5C0) ^ HIDWORD(a3) ^ HIDWORD(*(_QWORD *)a3);
  v8 = 0;
  v10 = a3;
  if ( (v7 & 0xFF0000) != 0 )
  {
    v11 = a3 ^ *(_DWORD *)(a3 + 8);
LABEL_3:
    v12 = (unsigned __int8)(qword_140C5A5C0 ^ v11);
    goto LABEL_4;
  }
  if ( (_WORD)v7 )
  {
    v10 = a3 - 16LL * (unsigned __int16)(WORD2(a3) ^ v6 ^ WORD2(qword_140C5A5C0));
    v16 = HIDWORD(v10) ^ HIDWORD(qword_140C5A5C0) ^ HIDWORD(*(_QWORD *)v10);
    if ( (v16 & 0xFF0000) != 0 )
    {
LABEL_17:
      v11 = v10 ^ *(_DWORD *)(v10 + 8);
      goto LABEL_3;
    }
    if ( (_WORD)v16 )
    {
      v10 -= 16LL * (unsigned __int16)(WORD2(v10) ^ HIDWORD(*(_QWORD *)v10) ^ WORD2(qword_140C5A5C0));
      goto LABEL_17;
    }
  }
  v12 = 0;
LABEL_4:
  v13 = (v10 - (unsigned int)(v12 << 12)) & 0xFFFFFFFFFFFFF000uLL;
  if ( (((unsigned __int16)(*(_WORD *)(v13 + 32) ^ *(_WORD *)(v13 + 34)) ^ 0x2BED) & 0x7FFF) != 0 )
  {
    LODWORD(a3) = v13;
    v17 = 18;
LABEL_21:
    sub_1405F1BBC(v17, a1 ^ *(_DWORD *)(a1 + 128), a3, 0, 0LL, 0LL);
    return v8;
  }
  if ( ((HIDWORD(qword_140C5A5C0) ^ HIDWORD(a3) ^ (unsigned int)v6) & 0xFF0000) == 0 )
  {
    v17 = 8;
    goto LABEL_21;
  }
  v14 = sub_14036E290(a1, v13, a3, a4, a5);
  if ( v14 )
  {
    if ( (a4 & 1) == 0 )
      sub_14034F7F0(*(_DWORD *)(a1 + 8), a5);
    sub_14036E98C(a1, v14, a4);
    if ( (a4 & 1) == 0 )
      sub_14036E550(a1, *(unsigned int *)(a1 + 8), a5);
  }
  return 1;
}
