/*
 * XREFs of sub_140971708 @ 0x140971708
 * Callers:
 *     sub_140971068 @ 0x140971068 (sub_140971068.c)
 *     sub_140975FF0 @ 0x140975FF0 (sub_140975FF0.c)
 * Callees:
 *     sub_14027E128 @ 0x14027E128 (sub_14027E128.c)
 *     RtlClearBitsEx @ 0x14030BB30 (RtlClearBitsEx.c)
 *     sub_1405E5C54 @ 0x1405E5C54 (sub_1405E5C54.c)
 *     sub_140A6BF28 @ 0x140A6BF28 (sub_140A6BF28.c)
 */

__int64 __fastcall sub_140971708(__int64 a1)
{
  int v2; // edx
  unsigned int v3; // ebp
  unsigned __int64 i; // rdx
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r14
  char v10; // [rsp+28h] [rbp-E0h]
  int v11; // [rsp+38h] [rbp-D0h]
  int v12; // [rsp+68h] [rbp-A0h]
  int v13; // [rsp+A8h] [rbp-60h]
  __int64 v14; // [rsp+B0h] [rbp-58h]
  __int64 v15; // [rsp+B8h] [rbp-50h]
  int v16; // [rsp+C0h] [rbp-48h]
  _QWORD v17[2]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v18; // [rsp+E0h] [rbp-28h]
  unsigned __int64 v19; // [rsp+110h] [rbp+8h] BYREF

  v19 = 0LL;
  v17[1] = 0LL;
  v17[0] = sub_1409766B0;
  v18 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(**(_QWORD **)a1 + 48LL);
  v3 = sub_140A6BF28(
         v2,
         v2,
         0,
         0,
         0LL,
         v10,
         -1LL,
         v11,
         *(_QWORD *)(*(_QWORD *)v18 + 48LL),
         *(_QWORD *)(*(_QWORD *)v18 + 48LL),
         0LL,
         0,
         0LL,
         v12,
         *(_QWORD *)(a1 + 24),
         *(_QWORD *)(a1 + 32),
         2,
         34404,
         0LL,
         0LL,
         (__int64)v17,
         v13,
         v14,
         v15,
         v16);
  for ( i = 0LL; ; i = v6 )
  {
    v7 = sub_1405E5C54(*(_QWORD *)(a1 + 8) + 64LL, i, &v19);
    v8 = v7;
    if ( !v7 )
      break;
    v5 = v19;
    v6 = v7 + v19;
    sub_14027E128(
      **(_QWORD **)(a1 + 8),
      *(_QWORD *)(**(_QWORD **)(a1 + 8) + 48LL) + (v19 << 12),
      (_DWORD)v7 << 12,
      256LL);
    RtlClearBitsEx(*(_QWORD *)(a1 + 8) + 64LL, v5, v8);
  }
  return v3;
}
