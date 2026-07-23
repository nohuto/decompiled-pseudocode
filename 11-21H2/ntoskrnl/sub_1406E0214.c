/*
 * XREFs of sub_1406E0214 @ 0x1406E0214
 * Callers:
 *     sub_1407E43F0 @ 0x1407E43F0 (sub_1407E43F0.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406E0358 @ 0x1406E0358 (sub_1406E0358.c)
 *     sub_1407E3010 @ 0x1407E3010 (sub_1407E3010.c)
 *     sub_1407E4374 @ 0x1407E4374 (sub_1407E4374.c)
 *     sub_1407E66D0 @ 0x1407E66D0 (sub_1407E66D0.c)
 */

__int64 __fastcall sub_1406E0214(__int64 a1, PVOID **a2)
{
  int v3; // edi
  PVOID *v4; // rax
  unsigned int *v5; // r15
  PVOID *v6; // rbp
  PVOID *v7; // r12
  _QWORD *v8; // r14
  PVOID *v9; // rbx
  PVOID *BaseAddress; // [rsp+90h] [rbp+8h] BYREF

  BaseAddress = 0LL;
  v3 = sub_1407E3010(1088LL, &BaseAddress);
  if ( v3 < 0 )
  {
    v9 = BaseAddress;
  }
  else
  {
    v4 = BaseAddress;
    *BaseAddress = 0LL;
    v5 = (unsigned int *)(v4 + 1);
    v4[1] = (PVOID)0x10000;
    v6 = v4 + 3;
    v4[3] = 0LL;
    v7 = v4 + 4;
    v4[4] = 0LL;
    v8 = v4 + 135;
    v4[135] = 0LL;
    v9 = BaseAddress;
    BaseAddress[2] = (PVOID)*((_QWORD *)KeGetCurrentThread() + 23);
    v9[134] = 0LL;
    memset((char *)v9 + 44, 0, 0x400uLL);
    v3 = sub_1407E66D0(-1, (int)v9, (int)v5, 4096, 32, 0LL, 0, 0, 0x20000000, 2, (__int64)v8);
    if ( v3 >= 0 )
    {
      if ( *v8 )
      {
        v3 = sub_1406E0358(*v9, *v5, v6, v7);
        if ( v3 >= 0 && a2 )
        {
          *a2 = v9;
          v9 = 0LL;
        }
      }
      else
      {
        v3 = -1073741595;
      }
    }
  }
  sub_1407E4374(v9);
  return (unsigned int)v3;
}
