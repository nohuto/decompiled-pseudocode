/*
 * XREFs of StorPortAdapterIdleCondition @ 0x1C0014140
 * Callers:
 *     <none>
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C000C724 (RaCallMiniportAdapterControl.c)
 *     RaMiniportIsFeatureSupported @ 0x1C0022BC8 (RaMiniportIsFeatureSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C0041180 (McTemplateK0pqq_EtwWriteTransfer.c)
 */

__int64 __fastcall StorPortAdapterIdleCondition(__int64 a1, unsigned int a2, int a3)
{
  signed __int32 v5; // r8d
  __int64 v6; // r9
  __int64 v7; // rcx
  char v8; // cl
  char v9; // r8
  __int64 v10; // rax
  void (__fastcall *v11)(__int64, __int64, _DWORD *); // rax
  __int64 result; // rax
  int v13; // ecx
  int v14; // r8d
  char IsFeatureSupported; // al
  __int64 v16; // rcx
  int *v17; // r10
  int v18; // r9d
  __int64 v19; // rcx
  int v20; // r9d
  int *v21; // r10
  __int64 v22; // rcx
  int v23; // r9d
  int *v24; // r10
  char v25; // al
  __int64 v26; // rcx
  int *v27; // r10
  int v28; // r9d
  __int64 v29; // rcx
  int v30; // r9d
  int *v31; // r10
  __int64 v32; // rcx
  int v33; // r9d
  int *v34; // r10
  _DWORD v35[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v36; // [rsp+38h] [rbp-30h]
  unsigned int v37; // [rsp+40h] [rbp-28h]
  char v38; // [rsp+44h] [rbp-24h]
  __int16 v39; // [rsp+45h] [rbp-23h]
  char v40; // [rsp+47h] [rbp-21h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]

  if ( StorEtwLoggingEnabled && (byte_1C00799E2 & 0x10) != 0 )
    McTemplateK0pqq_EtwWriteTransfer(
      a1,
      (unsigned int)&EventAdapterIdleConditionStart,
      a3,
      **(_QWORD **)(a1 + 4832),
      *(_DWORD *)(a1 + 56),
      a2);
  *(_DWORD *)(*(_QWORD *)(a1 + 4832) + 20LL) &= ~1u;
  v5 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 860));
  if ( (qword_1C00793A8 & 0x200) != 0 )
  {
    v6 = *(unsigned int *)(a1 + 56);
    if ( *(_DWORD *)(a1 + 4804) )
    {
      if ( *(_QWORD *)(a1 + 4808) )
      {
        v7 = *(_QWORD *)(a1 + 4808)
           + 48LL
           * ((unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 4800)) % *(_DWORD *)(a1 + 4804));
        *(_DWORD *)v7 = 6;
        *(_QWORD *)(v7 + 40) = MEMORY[0xFFFFF78000000014];
        *(_QWORD *)(v7 + 16) = v5;
        *(_QWORD *)(v7 + 8) = retaddr;
        *(_QWORD *)(v7 + 24) = a1;
        *(_QWORD *)(v7 + 32) = v6;
      }
    }
  }
  v8 = *(_BYTE *)(a1 + 584);
  if ( (v8 & 0x10) == 0 )
  {
    *(_QWORD *)(a1 + 612) = 0LL;
    *(_QWORD *)(a1 + 620) = 0LL;
    *(_QWORD *)(a1 + 628) = 0LL;
    *(_DWORD *)(a1 + 608) = 19;
    IsFeatureSupported = RaMiniportIsFeatureSupported(a1 + 336, 2LL);
    v18 = *v17;
    if ( IsFeatureSupported )
      v18 = 20;
    *v17 = v18;
    if ( (unsigned __int8)RaMiniportIsFeatureSupported(v16, 3LL) )
      v20 = 21;
    *v21 = v20;
    if ( (unsigned __int8)RaMiniportIsFeatureSupported(v19, 5LL) )
      v23 = 22;
    *v24 = v23;
    if ( (int)RaCallMiniportAdapterControl(v22) < 0 )
      goto LABEL_14;
    *(_BYTE *)(a1 + 584) |= 0x10u;
    v8 = *(_BYTE *)(a1 + 584);
  }
  v9 = *(_BYTE *)(a1 + 620);
  if ( !v9 )
    goto LABEL_14;
  if ( (v8 & 0x10) != 0 )
    goto LABEL_11;
  *(_QWORD *)(a1 + 612) = 0LL;
  *(_QWORD *)(a1 + 620) = 0LL;
  *(_QWORD *)(a1 + 628) = 0LL;
  *(_DWORD *)(a1 + 608) = 19;
  v25 = RaMiniportIsFeatureSupported(a1 + 336, 2LL);
  v28 = *v27;
  if ( v25 )
    v28 = 20;
  *v27 = v28;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(v26, 3LL) )
    v30 = 21;
  *v31 = v30;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(v29, 5LL) )
    v33 = 22;
  *v34 = v33;
  if ( (int)RaCallMiniportAdapterControl(v32) >= 0 )
  {
    *(_BYTE *)(a1 + 584) |= 0x10u;
    v9 = *(_BYTE *)(a1 + 620);
LABEL_11:
    if ( v9 )
    {
      v10 = *(_QWORD *)(a1 + 568);
      v39 = 0;
      v40 = 0;
      v35[0] = 1;
      v35[1] = 24;
      v36 = 0LL;
      v37 = a2;
      v38 = 0;
      v11 = *(void (__fastcall **)(__int64, __int64, _DWORD *))(v10 + 120);
      if ( v11 )
        v11(*(_QWORD *)(a1 + 576) + 16LL, 8LL, v35);
    }
  }
LABEL_14:
  result = PoFxCompleteIdleCondition(**(_QWORD **)(a1 + 4832), a2);
  if ( StorEtwLoggingEnabled )
  {
    if ( (byte_1C00799E2 & 0x10) != 0 )
      return McTemplateK0pqq_EtwWriteTransfer(
               v13,
               (unsigned int)&EventAdapterIdleConditionStop,
               v14,
               **(_QWORD **)(a1 + 4832),
               *(_DWORD *)(a1 + 56),
               a2);
  }
  return result;
}
