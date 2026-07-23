/*
 * XREFs of sub_1403A21C0 @ 0x1403A21C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140211990 @ 0x140211990 (sub_140211990.c)
 *     sub_140211B00 @ 0x140211B00 (sub_140211B00.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1403A21C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        int a8,
        unsigned int *P,
        unsigned int a10)
{
  __int64 v10; // rax
  unsigned __int64 v11; // rdi
  __int64 v12; // rsi
  unsigned __int64 v15; // rax
  unsigned int v16; // r12d
  unsigned int v17; // ebx
  unsigned int *v18; // r14
  __int64 v19; // rbp
  unsigned __int64 v20; // rdx
  char v21; // al
  __int64 v22; // rbx
  __int64 result; // rax
  unsigned int v24; // edi
  unsigned int *Pool2; // rax
  unsigned int v26; // [rsp+60h] [rbp+18h] BYREF

  v10 = *(unsigned int *)(a3 + 44);
  v26 = 0;
  v11 = a4 - v10 - *(_QWORD *)(a3 + 32);
  v12 = a3;
  while ( 1 )
  {
    v15 = *(unsigned int *)(v12 + 40);
    if ( v11 < v15 )
      break;
    v12 = *(_QWORD *)v12;
    v11 -= v15;
    if ( !v12 )
      return 3221225485LL;
  }
  v16 = a5;
  sub_140211B00((__int64 *)v12, v11, a5, &v26);
  v17 = v26;
  v18 = P;
  v19 = 24LL * v26 + 16;
  v20 = 24LL * v26 + 120;
  if ( P )
  {
    if ( a10 < v20 )
      return 3221225507LL;
    *P = v26;
    v21 = 0;
    v22 = (__int64)v18 + v19;
  }
  else
  {
    Pool2 = (unsigned int *)ExAllocatePool2(66LL, v20, 1147953480LL);
    v18 = Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    *Pool2 = v17;
    v22 = (__int64)Pool2 + v19;
    v21 = 1;
  }
  *(_BYTE *)(v22 + 97) = v21;
  *(_QWORD *)(v22 + 24) = a1;
  *(_QWORD *)(v22 + 32) = a2;
  *(_QWORD *)(v22 + 40) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(v22 + 64) = a6;
  *(_QWORD *)(v22 + 72) = a7;
  *(_DWORD *)(v22 + 56) = v16;
  *(_QWORD *)(v22 + 48) = v12;
  *(_DWORD *)(v22 + 60) = v11;
  *(_QWORD *)(v22 + 80) = v18;
  *(_BYTE *)(v22 + 96) = 0;
  *(_DWORD *)(v22 + 16) = 2;
  *(_BYTE *)(v22 + 98) = 0;
  *(_QWORD *)(v22 + 88) = 0LL;
  result = sub_140211990(v22);
  v24 = result;
  if ( (int)result < 0 )
  {
    if ( *(_BYTE *)(v22 + 97) )
    {
      ExFreePoolWithTag(v18, 0);
      return v24;
    }
  }
  return result;
}
