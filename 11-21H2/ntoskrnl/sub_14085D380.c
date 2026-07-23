/*
 * XREFs of sub_14085D380 @ 0x14085D380
 * Callers:
 *     sub_1406527A8 @ 0x1406527A8 (sub_1406527A8.c)
 *     sub_1407FA9D0 @ 0x1407FA9D0 (sub_1407FA9D0.c)
 *     sub_14085D310 @ 0x14085D310 (sub_14085D310.c)
 *     sub_1408654C0 @ 0x1408654C0 (sub_1408654C0.c)
 * Callees:
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     sub_140386944 @ 0x140386944 (sub_140386944.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406526B4 @ 0x1406526B4 (sub_1406526B4.c)
 *     sub_1407FAB50 @ 0x1407FAB50 (sub_1407FAB50.c)
 */

void __fastcall sub_14085D380(__int64 a1)
{
  unsigned int v1; // edx
  unsigned int v2; // edi
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  __int128 v8; // xmm0
  int v9; // [rsp+70h] [rbp-29h] BYREF
  int v10; // [rsp+74h] [rbp-25h] BYREF
  int v11; // [rsp+78h] [rbp-21h] BYREF
  int v12; // [rsp+7Ch] [rbp-1Dh] BYREF
  int v13; // [rsp+80h] [rbp-19h] BYREF
  __int64 v14; // [rsp+88h] [rbp-11h] BYREF
  __int64 v15; // [rsp+90h] [rbp-9h] BYREF
  __int64 v16; // [rsp+98h] [rbp-1h] BYREF
  __int64 v17[5]; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v18; // [rsp+C8h] [rbp+2Fh]
  __int128 v19; // [rsp+D0h] [rbp+37h] BYREF

  v1 = *(_DWORD *)(a1 + 256);
  v2 = 0;
  if ( v1 )
  {
    sub_1407FAB50(a1, v1);
    if ( *(_QWORD *)(v4 + 288) )
    {
      if ( (unsigned int)dword_140C06890 > 5 && sub_1402A2000((__int64)&dword_140C06890, 0x200000000000LL) )
      {
        v7 = *(_QWORD *)(*(_QWORD *)(a1 + 344) + 8LL);
        v8 = *(_OWORD *)(v7 - 16);
        v9 = *(_DWORD *)(a1 + 324);
        v10 = *(_DWORD *)(a1 + 320);
        v11 = *(_DWORD *)(a1 + 316);
        v12 = *(_DWORD *)(a1 + 312);
        v13 = *(_DWORD *)(a1 + 308);
        v15 = *(unsigned int *)(a1 + 304);
        v16 = *(_QWORD *)(a1 + 296);
        v17[0] = (__int64)&v19;
        v19 = v8;
        v14 = v6;
        sub_1406526B4(
          v7,
          (unsigned __int8 *)&dword_1400366BC,
          v5,
          v6,
          v17,
          (__int64)&v16,
          (__int64)&v15,
          (__int64)&v14,
          (__int64)&v13,
          (__int64)&v12,
          (__int64)&v11,
          (__int64)&v10,
          (__int64)&v9);
      }
      *(_OWORD *)(a1 + 288) = 0LL;
      v18 = 0LL;
      *(_OWORD *)(a1 + 304) = 0LL;
      *(_QWORD *)(a1 + 320) = v18;
    }
    do
      sub_140386944(a1, v2++);
    while ( v2 < 0x20 );
  }
}
