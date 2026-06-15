/*
 * XREFs of CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_c7c9c295e9eb20a9e0b33ea00abada77___ @ 0x18000518C
 * Callers:
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___ @ 0x180046258 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___.c)
 * Callees:
 *     _lambda_c7c9c295e9eb20a9e0b33ea00abada77_::operator() @ 0x1800052E0 (_lambda_c7c9c295e9eb20a9e0b33ea00abada77_--operator().c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x18006A08C (IsGetDefaultSpatialRenderingModePresent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_c7c9c295e9eb20a9e0b33ea00abada77___(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int16 *v4; // r12
  int v5; // r13d
  char *v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdi
  _DWORD *v9; // r14
  unsigned __int16 *v10; // r15
  int v11; // esi
  __int16 v12; // dx
  __int64 v13; // r9
  int v14; // r8d
  unsigned __int16 v15; // cx
  __int64 result; // rax
  __int64 v17; // rax
  bool v18; // cl
  __int64 v19; // rax
  bool v20; // al
  bool v21; // bl
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
  if ( (unsigned __int8)IsGetDefaultSpatialRenderingModePresent() && (unsigned int)IsDolbyMatSupportedByAudioDriver() )
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
    v17 = *(_QWORD *)(a1 + 392) - *(_QWORD *)&GUID_dff21be5_f70f_11d0_b917_00a0c9223196.Data1;
    if ( !v17 )
      v17 = *(_QWORD *)(a1 + 400) - *(_QWORD *)GUID_dff21be5_f70f_11d0_b917_00a0c9223196.Data4;
    v18 = v17 == 0;
    v19 = *(_QWORD *)(a1 + 392) - *(_QWORD *)&GUID_dff21fe3_f70f_11d0_b917_00a0c9223196.Data1;
    if ( !v19 )
      v19 = *(_QWORD *)(a1 + 400) - *(_QWORD *)GUID_dff21fe3_f70f_11d0_b917_00a0c9223196.Data4;
    v20 = v19 == 0;
    if ( v18 )
      return 0LL;
    if ( v20 )
    {
      v6 = (char *)&unk_1801A1920;
    }
    else
    {
      *(_OWORD *)pvar = 0LL;
      v26 = 0LL;
      v21 = (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**(_QWORD **)(a1 + 72) + 40LL))(
              *(_QWORD *)(a1 + 72),
              &PKEY_Endpoint_IsUSB,
              pvar) >= 0
         && LOWORD(pvar[0]) == 11
         && LOWORD(pvar[1]) == 0xFFFF;
      PropVariantClear(pvar);
      v6 = (char *)&unk_1801A18C0;
      if ( !v21 )
        v6 = (char *)&unk_1801A1860;
    }
    v7 = 8LL;
  }
  else
  {
    v6 = (char *)&unk_1801825C0;
    v7 = 4LL;
  }
  v8 = 0LL;
  v9 = v6 + 8;
LABEL_6:
  v10 = v4;
  v11 = 0;
  while ( 1 )
  {
    v12 = *((_WORD *)v9 - 2);
    v13 = v23;
    *(_WORD *)(v23 + 2) = v12;
    v14 = *(v9 - 2);
    *(_DWORD *)(v13 + 4) = v14;
    v15 = *v10;
    *(_WORD *)(v13 + 14) = *v10;
    *(_WORD *)(v13 + 18) = v10[1];
    *(_DWORD *)(v13 + 20) = *v9;
    *(_WORD *)(v13 + 12) = v12 * (v15 >> 3);
    *(_DWORD *)(v13 + 8) = v14 * (unsigned __int16)(v12 * (v15 >> 3));
    *(_WORD *)(v13 + 16) = 22;
    v22[0] = 0;
    result = lambda_c7c9c295e9eb20a9e0b33ea00abada77_::operator()(v24, v13, v22);
    if ( (int)result < 0 )
      return result;
    if ( v22[0] )
      return 0LL;
    v10 += 2;
    if ( ++v11 >= v5 )
    {
      ++v8;
      v9 += 3;
      if ( v8 < v7 )
        goto LABEL_6;
      return 0LL;
    }
  }
}
