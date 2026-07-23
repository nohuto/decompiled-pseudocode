/*
 * XREFs of sub_1406A340C @ 0x1406A340C
 * Callers:
 *     sub_1406A3290 @ 0x1406A3290 (sub_1406A3290.c)
 * Callees:
 *     sub_1402F35B8 @ 0x1402F35B8 (sub_1402F35B8.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

char *__fastcall sub_1406A340C(__int64 a1)
{
  int **v2; // rax
  int **v3; // r15
  unsigned int v4; // esi
  int *v5; // r12
  int v6; // ebp
  unsigned int v7; // edi
  int *Pool2; // rax
  int *v9; // r14
  char v10; // cl
  char *result; // rax
  int v12; // esi
  _BYTE Src[24]; // [rsp+20h] [rbp-48h] BYREF

  memset(Src, 0, 20);
  v2 = (int **)sub_1402F35B8(a1);
  v3 = v2;
  if ( !v2 )
    return 0LL;
  if ( (*(_BYTE *)(a1 + 27) & 0x40) != 0 )
  {
    v4 = 24;
    *(_DWORD *)Src = 1;
    v5 = (int *)Src;
    *(_OWORD *)&Src[8] = *(_OWORD *)v2;
    v6 = 2;
    v7 = 40;
  }
  else
  {
    v5 = *v2;
    v12 = **v2;
    v6 = v12 + 4;
    v4 = 16 * v12 + 8;
    v7 = 16 * v6 + 8;
  }
  Pool2 = (int *)ExAllocatePool2(256LL, v7, 1682465359LL);
  v9 = Pool2;
  if ( !Pool2 )
    return 0LL;
  memmove(Pool2, v5, v4);
  v10 = *(_BYTE *)(a1 + 27);
  if ( (v10 & 0x40) != 0 )
    *(_BYTE *)(a1 + 27) = v10 & 0xBF;
  else
    ExFreePoolWithTag(v5, 0);
  memset((char *)v9 + v4, 0, v7 - v4);
  *v9 = v6;
  result = (char *)v9 + v4;
  *v3 = v9;
  return result;
}
