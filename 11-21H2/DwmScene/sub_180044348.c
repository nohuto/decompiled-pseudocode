/*
 * XREFs of sub_180044348 @ 0x180044348
 * Callers:
 *     sub_1800457FC @ 0x1800457FC (sub_1800457FC.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_18001DE7C @ 0x18001DE7C (sub_18001DE7C.c)
 *     sub_18001F31C @ 0x18001F31C (sub_18001F31C.c)
 *     sub_18001F56C @ 0x18001F56C (sub_18001F56C.c)
 *     sub_180043FDC @ 0x180043FDC (sub_180043FDC.c)
 *     sub_180044C14 @ 0x180044C14 (sub_180044C14.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180044348(__int64 *a1, __int64 a2, char *a3, _QWORD *a4)
{
  __int64 v7; // r13
  __int64 v8; // rdi
  char v9; // bl
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rsi
  _QWORD *v13; // rcx
  __int64 v14; // rax
  __int128 v16; // [rsp+20h] [rbp-30h] BYREF
  __int128 v17; // [rsp+30h] [rbp-20h]
  __int64 v18; // [rsp+90h] [rbp+40h] BYREF
  _QWORD *v19; // [rsp+A8h] [rbp+58h]

  v19 = a4;
  v7 = *a1;
  v8 = *(_QWORD *)(*a1 + 8);
  *(_QWORD *)&v17 = v8;
  v9 = 0;
  DWORD2(v17) = 0;
  v10 = v7;
  while ( !*(_BYTE *)(v8 + 25) )
  {
    *(_QWORD *)&v17 = v8;
    if ( (unsigned __int8)sub_180043FDC((char *)(v8 + 32), a3) )
    {
      DWORD2(v17) = 0;
      v8 = *(_QWORD *)(v8 + 16);
    }
    else
    {
      DWORD2(v17) = 1;
      v10 = v8;
      v8 = *(_QWORD *)v8;
    }
  }
  if ( *(_BYTE *)(v10 + 25) || (unsigned __int8)sub_180043FDC(a3, (_QWORD *)(v10 + 32)) )
  {
    if ( a1[1] == 0x333333333333333LL )
      sub_18001F56C();
    v18 = v7;
    *(_QWORD *)&v16 = a1;
    v11 = sub_180011088(0x50uLL);
    *((_QWORD *)&v16 + 1) = v11;
    v12 = v11 + 32;
    sub_1800129F4((__int64 *)(v11 + 32), (__int64)a3);
    *(_QWORD *)(v11 + 64) = 0LL;
    *(_QWORD *)(v11 + 72) = 0LL;
    v13 = v19;
    v14 = v19[1];
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
      v11 = *((_QWORD *)&v16 + 1);
    }
    *(_QWORD *)(v12 + 32) = *v13;
    *(_QWORD *)(v12 + 40) = v13[1];
    sub_18001DE7C((__int64 *)v11, &v18);
    sub_18001DE7C((__int64 *)(v11 + 8), &v18);
    sub_18001DE7C((__int64 *)(v11 + 16), &v18);
    *(_WORD *)(v11 + 24) = 0;
    *((_QWORD *)&v16 + 1) = 0LL;
    sub_180044C14(&v16);
    v16 = v17;
    v10 = sub_18001F31C(a1, (__int64)&v16, v11);
    v9 = 1;
  }
  *(_QWORD *)a2 = v10;
  *(_BYTE *)(a2 + 8) = v9;
  return a2;
}
