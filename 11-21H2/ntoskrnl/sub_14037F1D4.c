/*
 * XREFs of sub_14037F1D4 @ 0x14037F1D4
 * Callers:
 *     sub_1403817C4 @ 0x1403817C4 (sub_1403817C4.c)
 * Callees:
 *     sub_140237ED8 @ 0x140237ED8 (sub_140237ED8.c)
 *     sub_14037EC24 @ 0x14037EC24 (sub_14037EC24.c)
 *     sub_14037F42C @ 0x14037F42C (sub_14037F42C.c)
 *     sub_14037F4B4 @ 0x14037F4B4 (sub_14037F4B4.c)
 *     sub_1403812B0 @ 0x1403812B0 (sub_1403812B0.c)
 *     sub_14039423C @ 0x14039423C (sub_14039423C.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14037F1D4(__int64 a1, int a2)
{
  _QWORD *v2; // rbx
  int v5; // r15d
  int v6; // eax
  _DWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _DWORD *v10; // r15
  __int64 result; // rax
  int v12; // eax
  __int64 v13; // [rsp+20h] [rbp-10h] BYREF
  int v14; // [rsp+28h] [rbp-8h]
  _QWORD *PoolWithTag; // [rsp+80h] [rbp+50h] BYREF

  v2 = *(_QWORD **)(a1 + 1056);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 1056) = 0LL;
    PoolWithTag = v2;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x74536D73u);
    v2 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
  }
  *v2 = 0LL;
  *(_DWORD *)v2 = a2;
  *((_DWORD *)v2 + 1) = 528384;
  v5 = *(_DWORD *)(a1 + 808) | (a2 << *(_DWORD *)(a1 + 812));
  v13 = 0LL;
  v14 = 0;
  v6 = *(_DWORD *)(a1 + 120);
  if ( (v6 & 1) == 0 )
  {
    sub_140237ED8((__int64 *)(a1 + 64), a1 + 88);
    v6 = *(_DWORD *)(a1 + 120);
  }
  *(_DWORD *)(a1 + 120) = v6 | 1;
  sub_1403812B0(a1, *(_QWORD *)(a1 + 760));
  **(_DWORD **)(a1 + 760) = v5;
  if ( (int)sub_14037EC24(a1 + 88, a1 + 64, *(_DWORD *)(a1 + 768)) < 0 )
    __int2c();
  while ( 1 )
  {
    v7 = (_DWORD *)sub_14037F42C(a1 + 64, a1 + 88);
    if ( !v7 )
      break;
    v8 = (unsigned int)(*v7 >> *(_DWORD *)(a1 + 456));
    _BitScanReverse((unsigned int *)&v9, v8);
    v10 = (_DWORD *)(*(unsigned int *)(a1 + 472)
                   + (unsigned int)(*(_DWORD *)(a1 + 464) * (*v7 & *(_DWORD *)(a1 + 460)))
                   + *(_QWORD *)(*(_QWORD *)(a1 + 8 * v9 + 192) + 16 * (v8 ^ (unsigned int)(1 << v9))));
    if ( *v10 >> *(_DWORD *)(a1 + 812) != a2 )
      break;
    if ( (v10[1] & 0xFFFFF000) <= 0x1000
      && (unsigned int)((__int64 (__fastcall *)(__int64, _QWORD *, __int64 *, _DWORD *))sub_14037F4B4)(
                         a1,
                         v2,
                         &v13,
                         v10) == -2147483643 )
    {
      result = sub_14039423C(a1, &PoolWithTag);
      if ( (int)result < 0 )
        goto LABEL_26;
      v12 = *(_DWORD *)(a1 + 120);
      if ( (v12 & 1) == 0 )
      {
        sub_140237ED8((__int64 *)(a1 + 64), a1 + 88);
        v12 = *(_DWORD *)(a1 + 120);
      }
      *(_DWORD *)(a1 + 120) = v12 | 1;
      **(_DWORD **)(a1 + 760) = *v10;
      if ( (int)sub_14037EC24(a1 + 88, a1 + 64, *(_DWORD *)(a1 + 768)) < 0 )
        __int2c();
      v2 = PoolWithTag;
      v13 = 0LL;
      v14 = 0;
      *PoolWithTag = 0LL;
      *(_DWORD *)v2 = a2;
      *((_DWORD *)v2 + 1) = 528384;
    }
  }
  if ( v2 + 1 >= (_QWORD *)((char *)v2 + *((unsigned __int16 *)v2 + 3)) )
  {
LABEL_18:
    result = 0LL;
    goto LABEL_19;
  }
  result = sub_14039423C(a1, &PoolWithTag);
  if ( (int)result >= 0 )
  {
    v2 = PoolWithTag;
    goto LABEL_18;
  }
LABEL_26:
  v2 = PoolWithTag;
LABEL_19:
  if ( v2 )
    *(_QWORD *)(a1 + 1056) = v2;
  return result;
}
