/*
 * XREFs of RtlpHpAllocVA @ 0x1800473D0
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x1800471E0 (RtlpHpSegMgrCommit.c)
 *     RtlpHpSegMgrReserve @ 0x18004AEC8 (RtlpHpSegMgrReserve.c)
 *     RtlpHpHeapExtendContext @ 0x180064110 (RtlpHpHeapExtendContext.c)
 *     RtlpHpLargeAlloc @ 0x1800643E8 (RtlpHpLargeAlloc.c)
 *     RtlpHpHeapAllocate @ 0x180066408 (RtlpHpHeapAllocate.c)
 * Callees:
 *     RtlpHpEnvAllocVA @ 0x1800475D4 (RtlpHpEnvAllocVA.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x18004A8B0 (RtlpHpVaMgrCtxAlloc.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     RtlHeapZero @ 0x18008EF20 (RtlHeapZero.c)
 *     RtlpHpTlLogVAChange @ 0x1801188D8 (RtlpHpTlLogVAChange.c)
 */

__int64 __fastcall RtlpHpAllocVA(PVOID *BaseAddress, ULONG_PTR *a2, __int64 a3, int a4, ULONG a5, __int128 *a6)
{
  __int128 v7; // xmm0
  unsigned int v8; // ebx
  ULONG_PTR v10; // r8
  char v11; // si
  __int64 v12; // rax
  int v13; // r9d
  ULONG_PTR v14; // r8
  int v15; // edi
  ULONG_PTR v17; // rcx
  void *v18; // rcx
  __int64 v19; // rdx
  int v20; // [rsp+28h] [rbp-51h]
  ULONG_PTR RegionSize; // [rsp+50h] [rbp-29h] BYREF
  __int64 v22[2]; // [rsp+58h] [rbp-21h]
  int v23; // [rsp+68h] [rbp-11h] BYREF
  int v24; // [rsp+6Ch] [rbp-Dh]
  int v25; // [rsp+70h] [rbp-9h]
  int v26; // [rsp+74h] [rbp-5h]
  __int64 v27; // [rsp+78h] [rbp-1h]

  v23 = 4096;
  v24 = 4096;
  v25 = 0x200000;
  v7 = *a6;
  v26 = 0x200000;
  v27 = 0x100040000000LL;
  v8 = a4 & 0xFEFFFFFF;
  *(_OWORD *)v22 = v7;
  if ( (a4 & 0xFEFFFFFF) != 0x2000 || (a4 & 0x1000000) != 0 )
  {
    v10 = *a2;
    v11 = BYTE1(v22[0]);
    v12 = *a2 - 1;
    v13 = a4 & 0x2000;
    if ( (v8 & 0x2000) != 0 )
    {
      v19 = (unsigned int)*(&v23 + BYTE1(v22[0]));
      v14 = v19 - ((v19 + v12) & (unsigned int)(v19 - 1)) + v10 - 1;
    }
    else
    {
      v14 = v10 - (v12 & 0xFFF) + 4095;
    }
    RegionSize = v14;
    if ( (v8 & 0x1000) != 0 && BYTE1(v22[0]) == 4 )
    {
      *a2 = v14;
      if ( (v8 & 0x40000000) != 0 )
        RtlHeapZero(*BaseAddress, v14);
      goto LABEL_11;
    }
    if ( v13 && (v22[0] & 8) != 0 )
      v8 |= 0x40000u;
    v15 = RtlpHpEnvAllocVA(BaseAddress, &RegionSize, a5, v20, BYTE1(v22[0]), v22[1]);
    if ( v15 >= 0 )
    {
      if ( (v8 & 0x1000) != 0 && (unsigned __int8)(v11 - 2) <= 2u && (v8 & 0x40000000) != 0 )
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
    v17 = *a2;
    v27 = v22[1];
    RegionSize = v17 - ((v17 - 1) & 0xFFFFF) + 0xFFFFF;
    v18 = (void *)RtlpHpVaMgrCtxAlloc(&unk_180185A08, &RegionSize, a3, &v23);
    if ( v18 )
    {
      *a2 = RegionSize;
      *BaseAddress = v18;
LABEL_11:
      v15 = 0;
      goto LABEL_12;
    }
    v15 = -1073741670;
  }
LABEL_12:
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    RtlpHpTlLogVAChange(v8, *a2, *BaseAddress, (unsigned int)v15);
  return (unsigned int)v15;
}
