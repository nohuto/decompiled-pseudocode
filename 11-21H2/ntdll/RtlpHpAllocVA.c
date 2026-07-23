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

__int64 __fastcall RtlpHpAllocVA(PVOID *BaseAddress, ULONG_PTR *a2, __int64 a3, int a4, ULONG a5, __int128 *a6)
{
  unsigned int v7; // ebx
  __int128 v8; // xmm0
  ULONG_PTR v10; // r8
  int v11; // r9d
  ULONG_PTR v12; // r8
  int v13; // edi
  ULONG_PTR v15; // rcx
  void *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // [rsp+20h] [rbp-49h]
  __int64 v19; // [rsp+28h] [rbp-41h]
  int v20; // [rsp+30h] [rbp-39h]
  ULONG_PTR RegionSize; // [rsp+50h] [rbp-19h] BYREF
  __int64 v22[2]; // [rsp+58h] [rbp-11h]
  int v23; // [rsp+68h] [rbp-1h] BYREF
  int v24; // [rsp+6Ch] [rbp+3h]
  int v25; // [rsp+70h] [rbp+7h]
  int v26; // [rsp+74h] [rbp+Bh]
  __int64 v27; // [rsp+78h] [rbp+Fh]

  v23 = 4096;
  v25 = 0x200000;
  v26 = 0x200000;
  v7 = a4 & 0xFEFFFFFF;
  v8 = *a6;
  v24 = 4096;
  LODWORD(v27) = 0x40000000;
  *(_OWORD *)v22 = v8;
  if ( (a4 & 0xFEFFFFFF) != 0x2000 || (a4 & 0x1000000) != 0 )
  {
    v10 = *a2;
    v11 = a4 & 0x2000;
    if ( (v7 & 0x2000) != 0 )
    {
      v17 = (unsigned int)*(&v23 + BYTE1(v22[0]));
      v12 = v17 - ((v10 + v17 - 1) & (unsigned int)(v17 - 1)) + v10 - 1;
    }
    else
    {
      v12 = v10 - ((v10 - 1) & 0xFFF) + 4095;
    }
    RegionSize = v12;
    if ( (v7 & 0x1000) != 0 && BYTE1(v22[0]) >= 4u )
    {
      *a2 = v12;
      if ( (v7 & 0x40000000) != 0 )
        RtlHeapZero(*BaseAddress, v12);
      goto LABEL_11;
    }
    if ( v11 && (v22[0] & 8) != 0 )
      v7 |= 0x40000u;
    v13 = RtlpHpEnvAllocVA(BaseAddress, &RegionSize, a5, v19, v20, v22[1]);
    if ( v13 >= 0 )
    {
      if ( (v7 & 0x1000) != 0 && BYTE1(v22[0]) >= 2u && (v7 & 0x40000000) != 0 )
        RtlHeapZero(*BaseAddress, RegionSize);
      *a2 = RegionSize;
      goto LABEL_11;
    }
  }
  else
  {
    v26 = 0;
    if ( BYTE3(v22[0]) )
      v23 = BYTE3(v22[0]) - 1;
    else
      v23 = -1;
    v24 = BYTE1(v22[0]);
    v25 = BYTE2(v22[0]);
    if ( (v22[0] & 8) != 0 )
      v26 = 1;
    v15 = *a2;
    v27 = v22[1];
    RegionSize = v15 - ((v15 - 1) & 0xFFFFF) + 0xFFFFF;
    v16 = (void *)RtlpHpVaMgrCtxAlloc(&unk_18017B768, &RegionSize, a3, &v23);
    if ( v16 )
    {
      *a2 = RegionSize;
      *BaseAddress = v16;
LABEL_11:
      v13 = 0;
      goto LABEL_12;
    }
    v13 = -1073741670;
  }
LABEL_12:
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    RtlpHpTlLogVAChange(v7, *a2, *BaseAddress, (unsigned int)v13, v18, v19);
  return (unsigned int)v13;
}
