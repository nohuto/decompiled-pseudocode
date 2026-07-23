/*
 * XREFs of sub_140855E78 @ 0x140855E78
 * Callers:
 *     sub_140855DD8 @ 0x140855DD8 (sub_140855DD8.c)
 * Callees:
 *     sub_14023FCF0 @ 0x14023FCF0 (sub_14023FCF0.c)
 *     sub_14023FF18 @ 0x14023FF18 (sub_14023FF18.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 */

__int64 __fastcall sub_140855E78(_QWORD *a1, SIZE_T *a2)
{
  unsigned int *v4; // rdi
  SIZE_T v5; // rbp
  _DWORD *v6; // rax
  unsigned int v7; // ebx
  _DWORD *v8; // rsi
  __int64 *v9; // r11
  char *v10; // r10
  unsigned int v11; // r14d
  __int64 v12; // rcx
  unsigned int *v13; // r9
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 result; // rax

  v4 = (unsigned int *)sub_14023FF18((__int64)&StartContext, 1u);
  v5 = 32LL * (*v4 - 1) + 48;
  v6 = sub_1402828F0(64, v5, 0x68506D4Du);
  v7 = 0;
  v8 = v6;
  if ( v6 )
  {
    v9 = (__int64 *)(v4 + 4);
    *(_QWORD *)v6 = *v4;
    v10 = (char *)(v6 + 4);
    v11 = 0;
    v6[2] = (unsigned __int16)word_140D05000;
    v6[3] = dword_140D05004;
    v12 = *v4;
    v13 = &v4[4 * v12 + 4];
    if ( (_DWORD)v12 )
    {
      do
      {
        v14 = *v9;
        v9 += 2;
        *((_QWORD *)v10 + 1) = v14;
        *((_QWORD *)v10 + 2) = *(v9 - 1);
        v15 = *v13;
        v13 += 2;
        *(_DWORD *)v10 = v15;
        v10 += 32;
        v16 = *(v13 - 1);
        *((_DWORD *)v10 - 7) = v16;
        ++v11;
        *((_QWORD *)v10 - 1) = *(_BYTE *)(v16 + qword_140C54F90 + 24512 * v15 + 22825) == 1;
      }
      while ( v11 < *v4 );
    }
  }
  else
  {
    v7 = -1073741670;
  }
  sub_14023FCF0((__int64)v4);
  result = v7;
  *a1 = v8;
  *a2 = v5;
  return result;
}
