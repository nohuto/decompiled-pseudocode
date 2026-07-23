/*
 * XREFs of sub_140524B88 @ 0x140524B88
 * Callers:
 *     sub_1403B4F40 @ 0x1403B4F40 (sub_1403B4F40.c)
 * Callees:
 *     sub_1402520D4 @ 0x1402520D4 (sub_1402520D4.c)
 */

__int64 __fastcall sub_140524B88(unsigned int *a1, __int128 *a2)
{
  unsigned int v3; // ebx
  _QWORD *v4; // rax
  _QWORD *v5; // r9
  _BYTE *v6; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int64 v9; // rcx
  __int128 v10; // xmm0

  v3 = 0;
  v4 = sub_1402520D4(a1);
  v5 = v4;
  if ( v4 )
  {
    v6 = (_BYTE *)v4[6];
    v7 = *a2;
    v8 = a2[1];
    ++dword_140D014C0;
    *v6 = 1;
    v9 = v5[5];
    *(_OWORD *)v9 = v7;
    v10 = a2[2];
    *(_OWORD *)(v9 + 16) = v8;
    *(_QWORD *)&v8 = *((_QWORD *)a2 + 6);
    *(_OWORD *)(v9 + 32) = v10;
    *(_QWORD *)(v9 + 48) = v8;
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v3;
}
