/*
 * XREFs of sub_1407B83C0 @ 0x1407B83C0
 * Callers:
 *     sub_140693498 @ 0x140693498 (sub_140693498.c)
 *     sub_1406BF9AC @ 0x1406BF9AC (sub_1406BF9AC.c)
 *     sub_1406F9990 @ 0x1406F9990 (sub_1406F9990.c)
 *     sub_1406FB4D0 @ 0x1406FB4D0 (sub_1406FB4D0.c)
 *     sub_1407B8B60 @ 0x1407B8B60 (sub_1407B8B60.c)
 *     sub_140852834 @ 0x140852834 (sub_140852834.c)
 *     sub_140978F40 @ 0x140978F40 (sub_140978F40.c)
 * Callees:
 *     sub_1406AC670 @ 0x1406AC670 (sub_1406AC670.c)
 *     sub_1407B8560 @ 0x1407B8560 (sub_1407B8560.c)
 */

__int64 __fastcall sub_1407B83C0(
        int a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        unsigned int a8,
        __int64 *a9,
        _QWORD *a10)
{
  __int64 *v11; // r14
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r10
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v16; // ecx
  __int64 v17; // rsi
  unsigned __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rbp
  char v21; // r15
  int v22; // ebx
  int v23; // r12d
  __int64 v24; // r14
  __int64 result; // rax
  int v26; // [rsp+A0h] [rbp+8h]
  int v28; // [rsp+B0h] [rbp+18h] BYREF
  unsigned __int64 v29; // [rsp+B8h] [rbp+20h]

  v29 = a4;
  v11 = a9;
  v26 = 0;
  v28 = 0;
  v13 = a2;
  *a10 = 0LL;
  v14 = a4;
  CurrentThread = KeGetCurrentThread();
  *v11 = 0LL;
  v16 = a8 >> 31;
  v17 = *((_QWORD *)CurrentThread + 23);
  v18 = *(_QWORD *)(v17 + 1496);
  if ( a3 > v18 - 1 && v18 <= 0x100000000LL )
    v16 = 2;
  v19 = *(_QWORD *)(v17 + 1680) + 8 * (9LL * v16 + 6);
  if ( (a1 & 0x20400000) != 541065216 && (a1 & 0x20000000) != 0 && a4 >= 0x40000000 )
  {
    v20 = a5;
    if ( a5 == 0x200000 )
    {
      v20 = 0x40000000LL;
      v26 = 1;
    }
  }
  else
  {
    v20 = a5;
  }
  v21 = a7;
  v22 = a1 & 0x100000;
  v23 = a6;
  v24 = (__int64)a10;
  while ( 1 )
  {
    result = v22 || (*(_DWORD *)(v17 + 1124) & 0x200000) != 0
           ? sub_1406AC670(v19, v14, v20, v23, v13, a3, v21, v24)
           : sub_1407B8560(v19, v14, v20, v23, v13, a3, v21, v24, (__int64)&v28);
    if ( (int)result >= 0 || !v26 )
      break;
    v14 = v29;
    v20 = 0x200000LL;
    v13 = a2;
    v26 = 0;
  }
  if ( v20 == 0x10000 )
  {
    if ( v28 )
      *a9 = v19;
  }
  return result;
}
