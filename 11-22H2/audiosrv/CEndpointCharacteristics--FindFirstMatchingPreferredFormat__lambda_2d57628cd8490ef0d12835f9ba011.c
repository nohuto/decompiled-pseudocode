/*
 * XREFs of CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_2d57628cd8490ef0d12835f9ba011710___ @ 0x180148CE4
 * Callers:
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___ @ 0x1800541F0 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___.c)
 * Callees:
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x18006A07C (IsGetDefaultSpatialRenderingModePresent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     _lambda_2d57628cd8490ef0d12835f9ba011710_::operator() @ 0x18014AA8C (_lambda_2d57628cd8490ef0d12835f9ba011710_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_2d57628cd8490ef0d12835f9ba011710___(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int16 *v4; // r12
  int v5; // r13d
  char *v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  bool v9; // cl
  __int64 v10; // rax
  bool v11; // al
  bool v12; // bl
  __int64 v13; // rdi
  _DWORD *v14; // r14
  unsigned __int16 *v15; // r15
  int v16; // esi
  __int16 v17; // dx
  __int64 v18; // r9
  int v19; // r8d
  unsigned __int16 v20; // cx
  __int64 result; // rax
  _BYTE v22[8]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v23; // [rsp+28h] [rbp-58h]
  __int64 v24; // [rsp+30h] [rbp-50h]
  PROPVARIANT pvar[2]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v26; // [rsp+48h] [rbp-38h]
  _DWORD v27[4]; // [rsp+50h] [rbp-30h] BYREF
  _DWORD v28[4]; // [rsp+60h] [rbp-20h] BYREF

  v24 = a3;
  v23 = a2;
  v28[0] = 2097184;
  v28[1] = 1572896;
  v28[2] = 1572888;
  v28[3] = 1048592;
  v27[0] = 2097184;
  v27[1] = 1572888;
  v27[2] = 1048592;
  if ( IsGetDefaultSpatialRenderingModePresent() && (unsigned int)IsDolbyMatSupportedByAudioDriver() )
  {
    v4 = (unsigned __int16 *)v28;
    v5 = 4;
  }
  else
  {
    v4 = (unsigned __int16 *)v27;
    v5 = 3;
  }
  if ( *(_DWORD *)(a1 + 212) )
  {
    v8 = *(_QWORD *)(a1 + 392) - *(_QWORD *)&GUID_dff21be5_f70f_11d0_b917_00a0c9223196.Data1;
    if ( !v8 )
      v8 = *(_QWORD *)(a1 + 400) - *(_QWORD *)GUID_dff21be5_f70f_11d0_b917_00a0c9223196.Data4;
    v9 = v8 == 0;
    v10 = *(_QWORD *)(a1 + 392) - *(_QWORD *)&GUID_dff21fe3_f70f_11d0_b917_00a0c9223196.Data1;
    if ( !v10 )
      v10 = *(_QWORD *)(a1 + 400) - *(_QWORD *)GUID_dff21fe3_f70f_11d0_b917_00a0c9223196.Data4;
    v11 = v10 == 0;
    if ( v9 )
      return 0LL;
    if ( v11 )
    {
      v6 = (char *)&unk_1801A1930;
    }
    else
    {
      *(_OWORD *)pvar = 0LL;
      v26 = 0LL;
      v12 = (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**(_QWORD **)(a1 + 72) + 40LL))(
              *(_QWORD *)(a1 + 72),
              &PKEY_Endpoint_IsUSB,
              pvar) >= 0
         && LOWORD(pvar[0]) == 11
         && LOWORD(pvar[1]) == 0xFFFF;
      PropVariantClear(pvar);
      v6 = (char *)&unk_1801A18D0;
      if ( !v12 )
        v6 = (char *)&unk_1801A1870;
    }
    v7 = 8LL;
  }
  else
  {
    v6 = (char *)&unk_1801A1990;
    v7 = 4LL;
  }
  v13 = 0LL;
  v14 = v6 + 8;
LABEL_23:
  v15 = v4;
  v16 = 0;
  while ( 1 )
  {
    v17 = *((_WORD *)v14 - 2);
    v18 = v23;
    *(_WORD *)(v23 + 2) = v17;
    v19 = *(v14 - 2);
    *(_DWORD *)(v18 + 4) = v19;
    v20 = *v15;
    *(_WORD *)(v18 + 14) = *v15;
    *(_WORD *)(v18 + 18) = v15[1];
    *(_DWORD *)(v18 + 20) = *v14;
    *(_WORD *)(v18 + 12) = v17 * (v20 >> 3);
    *(_DWORD *)(v18 + 8) = v19 * (unsigned __int16)(v17 * (v20 >> 3));
    *(_WORD *)(v18 + 16) = 22;
    v22[0] = 0;
    result = lambda_2d57628cd8490ef0d12835f9ba011710_::operator()(v24, v18, v22);
    if ( (int)result < 0 )
      return result;
    if ( v22[0] )
      return 0LL;
    v15 += 2;
    if ( ++v16 >= v5 )
    {
      ++v13;
      v14 += 3;
      if ( v13 < v7 )
        goto LABEL_23;
      return 0LL;
    }
  }
}
