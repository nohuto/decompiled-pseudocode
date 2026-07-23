/*
 * XREFs of RtlpHpCustomVaCallbacksRegistrarRegister @ 0x180121838
 * Callers:
 *     RtlpHpRegisterEnvironment @ 0x180066838 (RtlpHpRegisterEnvironment.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpMetadataFree @ 0x180064850 (RtlpHpMetadataFree.c)
 *     RtlpHpMetadataAlloc @ 0x180065F18 (RtlpHpMetadataAlloc.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     RtlpHpCustomVaCallbacksEncodedComparison @ 0x1801217B8 (RtlpHpCustomVaCallbacksEncodedComparison.c)
 */

__int64 __fastcall RtlpHpCustomVaCallbacksRegistrarRegister(__int64 a1, char *a2, __int64 *a3, __int128 *a4)
{
  __int64 v5; // rax
  unsigned __int8 *v6; // r8
  __int64 v7; // r12
  __int64 v10; // r15
  __int64 v11; // r9
  __int64 v12; // rax
  _QWORD *v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // r11
  __int64 v17; // r10
  int v18; // r9d
  unsigned int v19; // esi
  __int64 v20; // r10
  __int64 *v21; // rcx
  signed __int64 v22; // r14
  unsigned int v23; // r9d
  __int64 v24; // rdx
  __int64 v25; // r9
  _RTL_SRWLOCK *v26; // rcx
  __int64 v28; // [rsp+20h] [rbp-A8h]
  __int128 v29; // [rsp+30h] [rbp-98h] BYREF
  __int64 *v30; // [rsp+40h] [rbp-88h]
  PRTL_SRWLOCK SRWLock; // [rsp+48h] [rbp-80h]
  __int128 v32; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v33[4]; // [rsp+60h] [rbp-68h] BYREF

  v5 = RtlpHpHeapGlobals ^ *(_QWORD *)a2;
  *(_QWORD *)&v29 = a4;
  v30 = a3;
  v33[0] = (unsigned __int64)v33 ^ v5;
  v6 = (unsigned __int8 *)v33;
  v7 = 4LL;
  v33[1] = (unsigned __int64)v33 ^ RtlpHpHeapGlobals ^ *((_QWORD *)a2 + 1);
  v10 = 314159LL;
  v11 = 4LL;
  v33[2] = (unsigned __int64)v33 ^ RtlpHpHeapGlobals ^ *((_QWORD *)a2 + 2);
  v33[3] = (unsigned __int64)v33 ^ RtlpHpHeapGlobals ^ *((_QWORD *)a2 + 3);
  do
  {
    v12 = *v6;
    v6 += 8;
    v10 = *(v6 - 1)
        + 37
        * (*(v6 - 2)
         + 37
         * (*(v6 - 3) + 37
                      * (*(v6 - 4) + 37 * (*(v6 - 5) + 37 * (*(v6 - 6) + 37 * (*(v6 - 7) + 37 * (v12 + 37 * v10)))))));
    --v11;
  }
  while ( v11 );
  v32 = *a4;
  v13 = (_QWORD *)RtlpHpMetadataAlloc(0x38uLL, 0x38uLL, 0, &v32);
  SRWLock = (PRTL_SRWLOCK)(a1 + 16);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 16));
  v14 = 0LL;
  v15 = 0LL;
LABEL_4:
  v16 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
  v17 = v16 & v10;
  if ( v15 )
    goto LABEL_7;
  v18 = *(_DWORD *)(a1 + 4) >> 5;
  if ( v18 )
  {
    v28 = v16 & v10;
    v15 = *(_QWORD *)(a1 + 8)
        + 8LL
        * ((37
          * (BYTE6(v28)
           + 37
           * (BYTE5(v28)
            + 37
            * (BYTE4(v28)
             + 37 * (BYTE3(v28) + 37 * (BYTE2(v28) + 37 * (BYTE1(v28) + 37 * ((unsigned __int8)v17 + 11623883)))))))
          + HIBYTE(v28)) & (unsigned int)(v18 - 1));
LABEL_7:
    while ( 1 )
    {
      v15 = *(_QWORD *)v15;
      if ( (v15 & 1) != 0 )
        break;
      if ( v17 == (v16 & *(_QWORD *)(v15 + 8)) )
      {
        if ( !v15 )
          break;
        if ( RtlpHpCustomVaCallbacksEncodedComparison((_QWORD *)v15, (unsigned __int64)v33) )
        {
          if ( v13 )
          {
            v29 = *(_OWORD *)v29;
            RtlpHpMetadataFree((__int64)v13, &v29);
          }
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v15 + 48)) <= 1 )
            __fastfail(0xEu);
          v19 = 0;
          v14 = v15 + 16;
          goto LABEL_21;
        }
        goto LABEL_4;
      }
    }
  }
  if ( v13 )
  {
    v20 = (__int64)(v13 + 2);
    v21 = v13 + 2;
    v22 = a2 - (char *)(v13 + 2);
    do
    {
      *v21 = v20 ^ RtlpHpHeapGlobals ^ *(__int64 *)((char *)v21 + v22);
      ++v21;
      --v7;
    }
    while ( v7 );
    v13[6] = 1LL;
    v23 = *(_DWORD *)(a1 + 4);
    *(_QWORD *)&v29 = v13[1] & (-1LL << (v23 & 0x1F));
    v24 = *(_QWORD *)(a1 + 8);
    v25 = (37
         * (BYTE6(v29)
          + 37
          * (BYTE5(v29)
           + 37
           * (BYTE4(v29)
            + 37 * (BYTE3(v29) + 37 * (BYTE2(v29) + 37 * (BYTE1(v29) + 37 * ((unsigned __int8)v29 + 11623883)))))))
         + BYTE7(v29)) & ((v23 >> 5) - 1);
    *v13 = *(_QWORD *)(v24 + 8 * v25);
    *(_QWORD *)(v24 + 8 * v25) = v13;
    v19 = 0;
    ++*(_DWORD *)a1;
    v14 = v20;
  }
  else
  {
    v19 = -1073741801;
  }
LABEL_21:
  v26 = SRWLock;
  *v30 = v14;
  RtlReleaseSRWLockExclusive(v26);
  return v19;
}
