/*
 * XREFs of sub_1406C3FB4 @ 0x1406C3FB4
 * Callers:
 *     sub_1402ECEB0 @ 0x1402ECEB0 (sub_1402ECEB0.c)
 *     sub_1406C3F0C @ 0x1406C3F0C (sub_1406C3F0C.c)
 *     sub_14097EE60 @ 0x14097EE60 (sub_14097EE60.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_14030B420 @ 0x14030B420 (sub_14030B420.c)
 *     sub_1407B9190 @ 0x1407B9190 (sub_1407B9190.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

_DWORD *__fastcall sub_1406C3FB4(unsigned __int64 a1, unsigned __int64 a2, char a3)
{
  _QWORD *v6; // rax
  _DWORD *v7; // rbx
  __int64 v8; // rax
  int v9; // edx
  unsigned int v10; // edx
  unsigned __int64 v11; // r8
  int v12; // eax

  v6 = sub_1402828F0(64, 0x40uLL, 0x53646156u);
  v7 = v6;
  if ( v6 )
  {
    v6[2] = -2LL;
    sub_14030B420((__int64)v6, a1 >> 12);
    v9 = *(_DWORD *)(v8 + 48);
    *(_QWORD *)(v8 + 40) = 0LL;
    v10 = v9 & 0xFFFFF07F | 0x80;
    *(_DWORD *)(v8 + 28) = a2 >> 12;
    *(_BYTE *)(v8 + 33) = a2 >> 44;
    if ( (a3 & 1) != 0 )
    {
      v11 = ((unsigned int)(a2 >> 12) | ((unsigned __int64)(unsigned __int8)(a2 >> 44) << 32))
          - (*(unsigned int *)(v8 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 32) << 32))
          + 1;
      v7[13] |= 0x80000000;
    }
    else if ( (a3 & 2) != 0 )
    {
      v11 = 0x7FFFFFFFDLL;
      v10 = v10 & 0xFFFFF07F | 0xC00;
    }
    else
    {
      v11 = 0x7FFFFFFFFLL;
    }
    v12 = v11 ^ v7[13];
    v7[12] = v10 | 0x200000;
    v7[13] ^= v12 & 0x7FFFFFFF;
    *((_BYTE *)v7 + 34) = v11 >> 31;
    if ( (a3 & 2) != 0 || sub_1407B9190((_DWORD)v7, a1, a2, -2147483647, 0) )
      return v7;
    ExFreePoolWithTag(v7, 0);
  }
  return 0LL;
}
