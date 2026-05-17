/*
 * XREFs of RtlpHpAllocVA @ 0x180022888
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x180023B70 (RtlpHpSegMgrCommit.c)
 *     RtlpHpHeapAllocate @ 0x180055288 (RtlpHpHeapAllocate.c)
 *     RtlpHpSegMgrReserve @ 0x18005675C (RtlpHpSegMgrReserve.c)
 *     RtlpHpLargeAlloc @ 0x180058D3C (RtlpHpLargeAlloc.c)
 *     RtlpHpHeapExtendContext @ 0x180059290 (RtlpHpHeapExtendContext.c)
 * Callees:
 *     RtlpHpEnvAllocVA @ 0x180022A74 (RtlpHpEnvAllocVA.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x180055C78 (RtlpHpVaMgrCtxAlloc.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     RtlHeapZero @ 0x180093F90 (RtlHeapZero.c)
 *     RtlpHpTlLogVAChange @ 0x1801184DC (RtlpHpTlLogVAChange.c)
 */

__int64 __fastcall RtlpHpAllocVA(__int64 *a1, __int64 *a2, __int64 a3, int a4, int a5, __int128 *a6)
{
  unsigned int v7; // ebx
  __int128 v8; // xmm0
  __int64 v10; // r8
  int v11; // r9d
  __int64 v12; // r8
  int v13; // edi
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // [rsp+20h] [rbp-49h]
  __int64 v19; // [rsp+50h] [rbp-19h] BYREF
  __int128 v20; // [rsp+58h] [rbp-11h]
  int v21; // [rsp+68h] [rbp-1h] BYREF
  int v22; // [rsp+6Ch] [rbp+3h]
  int v23; // [rsp+70h] [rbp+7h]
  int v24; // [rsp+74h] [rbp+Bh]
  __int64 v25; // [rsp+78h] [rbp+Fh]

  v21 = 4096;
  v23 = 0x200000;
  v24 = 0x200000;
  v7 = a4 & 0xFEFFFFFF;
  v8 = *a6;
  v22 = 4096;
  LODWORD(v25) = 0x40000000;
  v20 = v8;
  if ( (a4 & 0xFEFFFFFF) != 0x2000 || (a4 & 0x1000000) != 0 )
  {
    v10 = *a2;
    v11 = a4 & 0x2000;
    if ( (v7 & 0x2000) != 0 )
    {
      v17 = (unsigned int)*(&v21 + BYTE1(v20));
      v12 = v17 - ((v10 + v17 - 1) & (unsigned int)(v17 - 1)) + v10 - 1;
    }
    else
    {
      v12 = v10 - ((v10 - 1) & 0xFFF) + 4095;
    }
    v19 = v12;
    if ( (v7 & 0x1000) != 0 && BYTE1(v20) >= 4u )
    {
      *a2 = v12;
      if ( (v7 & 0x40000000) != 0 )
        RtlHeapZero(*a1, v12);
      goto LABEL_11;
    }
    if ( v11 && (v20 & 8) != 0 )
      v7 |= 0x40000u;
    v13 = RtlpHpEnvAllocVA((_DWORD)a1, (unsigned int)&v19, 0, v7, a5);
    if ( v13 >= 0 )
    {
      if ( (v7 & 0x1000) != 0 && BYTE1(v20) >= 2u && (v7 & 0x40000000) != 0 )
        RtlHeapZero(*a1, v19);
      *a2 = v19;
      goto LABEL_11;
    }
  }
  else
  {
    v24 = 0;
    if ( BYTE3(v20) )
      v21 = BYTE3(v20) - 1;
    else
      v21 = -1;
    v22 = BYTE1(v20);
    v23 = BYTE2(v20);
    if ( (v20 & 8) != 0 )
      v24 = 1;
    v15 = *a2;
    v25 = *((_QWORD *)&v20 + 1);
    v19 = v15 - ((v15 - 1) & 0xFFFFF) + 0xFFFFF;
    v16 = RtlpHpVaMgrCtxAlloc(&unk_18017B768, &v19, a3, &v21);
    if ( v16 )
    {
      *a2 = v19;
      *a1 = v16;
LABEL_11:
      v13 = 0;
      goto LABEL_12;
    }
    v13 = -1073741670;
  }
LABEL_12:
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    RtlpHpTlLogVAChange(v7, *a2, *a1, (unsigned int)v13, v18);
  return (unsigned int)v13;
}
