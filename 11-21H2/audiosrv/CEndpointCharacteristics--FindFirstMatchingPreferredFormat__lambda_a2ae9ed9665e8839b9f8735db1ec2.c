/*
 * XREFs of CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_a2ae9ed9665e8839b9f8735db1ec2fae___ @ 0x18013FFCC
 * Callers:
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_0de3d14ddc76a6bb0bc0d93702434bc9___ @ 0x1801409DC (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_0de3d14ddc76a6bb0bc0d93702434bc9___.c)
 * Callees:
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x180061D9C (IsGetDefaultSpatialRenderingModePresent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     _lambda_a2ae9ed9665e8839b9f8735db1ec2fae_::operator() @ 0x180144A10 (_lambda_a2ae9ed9665e8839b9f8735db1ec2fae_--operator().c)
 */

__int64 __fastcall CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_a2ae9ed9665e8839b9f8735db1ec2fae___(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rbx
  unsigned __int16 *v5; // r12
  int v6; // r13d
  char *v7; // rax
  bool v8; // bl
  bool v9; // di
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  bool v13; // bl
  __int64 v14; // rdi
  _DWORD *v15; // r14
  unsigned __int16 *v16; // r15
  int v17; // esi
  __int16 v18; // dx
  __int64 v19; // r9
  int v20; // r8d
  unsigned __int16 v21; // cx
  __int64 result; // rax
  _BYTE v23[8]; // [rsp+20h] [rbp-49h] BYREF
  LPCOLESTR lpsz[2]; // [rsp+28h] [rbp-41h] BYREF
  __int64 v25; // [rsp+38h] [rbp-31h]
  __int64 v26; // [rsp+40h] [rbp-29h]
  __int64 v27; // [rsp+48h] [rbp-21h]
  GUID iid; // [rsp+50h] [rbp-19h] BYREF
  _DWORD v29[4]; // [rsp+60h] [rbp-9h] BYREF
  _DWORD v30[4]; // [rsp+70h] [rbp+7h] BYREF

  v27 = a3;
  v26 = a2;
  v30[0] = 2097184;
  v30[1] = 1572896;
  v30[2] = 1572888;
  v30[3] = 1048592;
  v29[0] = 2097184;
  v29[1] = 1572888;
  v29[2] = 1048592;
  v4 = 4LL;
  if ( IsGetDefaultSpatialRenderingModePresent() && (unsigned int)IsDolbyMatSupportedByAudioDriver() )
  {
    v5 = (unsigned __int16 *)v30;
    v6 = 4;
  }
  else
  {
    v5 = (unsigned __int16 *)v29;
    v6 = 3;
  }
  if ( *(_DWORD *)(a1 + 188) )
  {
    v8 = 0;
    v9 = 0;
    *(_OWORD *)lpsz = 0LL;
    v25 = 0LL;
    v10 = (*(__int64 (__fastcall **)(_QWORD, const PROPERTYKEY *, LPCOLESTR *))(**(_QWORD **)(a1 + 40) + 40LL))(
            *(_QWORD *)(a1 + 40),
            &PKEY_AudioEndpoint_JackSubType,
            lpsz);
    iid = GUID_00000000_0000_0000_0000_000000000000;
    if ( v10 >= 0 && LOWORD(lpsz[0]) == 31 && IIDFromString(lpsz[1], &iid) >= 0 )
    {
      v11 = *(_QWORD *)&iid.Data1 - *(_QWORD *)&GUID_dff21be5_f70f_11d0_b917_00a0c9223196.Data1;
      if ( *(_QWORD *)&iid.Data1 == *(_QWORD *)&GUID_dff21be5_f70f_11d0_b917_00a0c9223196.Data1 )
        v11 = *(_QWORD *)iid.Data4 - *(_QWORD *)GUID_dff21be5_f70f_11d0_b917_00a0c9223196.Data4;
      v8 = v11 == 0;
      v12 = *(_QWORD *)&iid.Data1 - *(_QWORD *)&GUID_dff21fe3_f70f_11d0_b917_00a0c9223196.Data1;
      if ( *(_QWORD *)&iid.Data1 == *(_QWORD *)&GUID_dff21fe3_f70f_11d0_b917_00a0c9223196.Data1 )
        v12 = *(_QWORD *)iid.Data4 - *(_QWORD *)GUID_dff21fe3_f70f_11d0_b917_00a0c9223196.Data4;
      v9 = v12 == 0;
    }
    PropVariantClear((PROPVARIANT *)lpsz);
    if ( v8 )
      return 0LL;
    if ( v9 )
    {
      v7 = (char *)&unk_180197D60;
    }
    else
    {
      *(_OWORD *)lpsz = 0LL;
      v25 = 0LL;
      v13 = (*(int (__fastcall **)(_QWORD, void *, LPCOLESTR *))(**(_QWORD **)(a1 + 40) + 40LL))(
              *(_QWORD *)(a1 + 40),
              &PKEY_Endpoint_IsUSB,
              lpsz) >= 0
         && LOWORD(lpsz[0]) == 11
         && LOWORD(lpsz[1]) == 0xFFFF;
      PropVariantClear((PROPVARIANT *)lpsz);
      v7 = (char *)&unk_180197DC0;
      if ( !v13 )
        v7 = (char *)&unk_180197E50;
    }
    v4 = 8LL;
  }
  else
  {
    v7 = (char *)&unk_180197E20;
  }
  v14 = 0LL;
  v15 = v7 + 8;
LABEL_27:
  v16 = v5;
  v17 = 0;
  while ( 1 )
  {
    v18 = *((_WORD *)v15 - 2);
    v19 = v26;
    *(_WORD *)(v26 + 2) = v18;
    v20 = *(v15 - 2);
    *(_DWORD *)(v19 + 4) = v20;
    v21 = *v16;
    *(_WORD *)(v19 + 14) = *v16;
    *(_WORD *)(v19 + 18) = v16[1];
    *(_DWORD *)(v19 + 20) = *v15;
    *(_WORD *)(v19 + 12) = v18 * (v21 >> 3);
    *(_DWORD *)(v19 + 8) = v20 * (unsigned __int16)(v18 * (v21 >> 3));
    *(_WORD *)(v19 + 16) = 22;
    v23[0] = 0;
    result = lambda_a2ae9ed9665e8839b9f8735db1ec2fae_::operator()(v27, v19, v23);
    if ( (int)result < 0 )
      return result;
    if ( v23[0] )
      return 0LL;
    v16 += 2;
    if ( ++v17 >= v6 )
    {
      ++v14;
      v15 += 3;
      if ( v14 < v4 )
        goto LABEL_27;
      return 0LL;
    }
  }
}
