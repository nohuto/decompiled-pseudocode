/*
 * XREFs of sub_1407E0DC4 @ 0x1407E0DC4
 * Callers:
 *     sub_1407E0F30 @ 0x1407E0F30 (sub_1407E0F30.c)
 * Callees:
 *     sub_140238BF8 @ 0x140238BF8 (sub_140238BF8.c)
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_1402F614C @ 0x1402F614C (sub_1402F614C.c)
 *     sub_140360EE4 @ 0x140360EE4 (sub_140360EE4.c)
 *     sub_140674FE4 @ 0x140674FE4 (sub_140674FE4.c)
 *     sub_140675014 @ 0x140675014 (sub_140675014.c)
 *     sub_1406819CC @ 0x1406819CC (sub_1406819CC.c)
 */

void __fastcall sub_1407E0DC4(__int64 a1)
{
  _QWORD *v1; // rdi
  unsigned __int64 v3; // rbx
  __int64 v4; // rsi
  unsigned int v5; // r15d
  __int64 v6; // r14
  _QWORD *v7; // rdx
  unsigned int v8; // r8d
  __int64 *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  _DWORD v13[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+28h] [rbp-30h]
  __int64 v15; // [rsp+30h] [rbp-28h]
  _QWORD *v16; // [rsp+38h] [rbp-20h]

  v1 = *(_QWORD **)(a1 + 2280);
  if ( !v1 )
    return;
  v3 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v4 = 0LL;
  v5 = sub_1402F614C();
  v6 = 3LL;
  do
  {
    v8 = sub_140360EE4((__int64)&v1[v4 + 13], &v1[v4 + 13], v3);
    if ( v7 == v1 + 13 )
    {
      v9 = v1 + 38;
    }
    else
    {
      if ( v7 != v1 + 14 )
        goto LABEL_10;
      v9 = v1 + 39;
    }
    if ( v9 && v8 )
      sub_140238BF8(v9, v5 - (v8 >> 12), v5);
LABEL_10:
    ++v4;
    --v6;
  }
  while ( v6 );
  sub_140360EE4((__int64)(v1 + 52), v1 + 52, v3);
  v13[1] = 0;
  v15 = 0LL;
  v13[0] = 4;
  v16 = v1;
  v14 = a1;
  sub_1402D66A8((ULONG_PTR)(v1 + 54));
  sub_1406819CC(v10, (__int64)v13);
  sub_1402935D0((ULONG_PTR)(v1 + 54));
  v11 = v1[56];
  if ( v11 )
  {
    sub_140674FE4(v11);
    v1[56] = 0LL;
  }
  v12 = v1[57];
  if ( v12 )
  {
    sub_140675014(qword_140C5AE28 + 56, v12);
    v1[57] = 0LL;
  }
}
