/*
 * XREFs of ?IsIntegratedSpeaker@CEndpointCharacteristics@@UEAA_NXZ @ 0x18014AEF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CEndpointCharacteristics::IsIntegratedSpeaker(CEndpointCharacteristics *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rax
  LPCOLESTR lpsz[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v7; // [rsp+30h] [rbp-40h]
  PROPVARIANT pvar[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v9; // [rsp+48h] [rbp-28h]
  GUID iid; // [rsp+50h] [rbp-20h] BYREF

  if ( !*((_BYTE *)this + 9725) )
  {
    *((_BYTE *)this + 9724) = 0;
    v2 = *((_QWORD *)this + 5);
    v9 = 0LL;
    *(_OWORD *)pvar = 0LL;
    v7 = 0LL;
    *(_OWORD *)lpsz = 0LL;
    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v2 + 40LL))(
           v2,
           &PKEY_Device_ContainerId,
           pvar) >= 0 )
    {
      *(_QWORD *)iid.Data4 = -1LL;
      *(_QWORD *)&iid.Data1 = 0LL;
      if ( LOWORD(pvar[0]) == 72 )
      {
        v3 = -*(_QWORD *)pvar[1];
        if ( !*(_QWORD *)pvar[1] )
          v3 = *(_QWORD *)iid.Data4 - *((_QWORD *)pvar[1] + 1);
        if ( !v3
          && (*(int (__fastcall **)(_QWORD, const PROPERTYKEY *, LPCOLESTR *))(**((_QWORD **)this + 5) + 40LL))(
               *((_QWORD *)this + 5),
               &PKEY_AudioEndpoint_JackSubType,
               lpsz) >= 0
          && LOWORD(lpsz[0]) == 31
          && IIDFromString(lpsz[1], &iid) >= 0 )
        {
          v4 = *(_QWORD *)&iid.Data1 - *(_QWORD *)&GUID_dff21ce1_f70f_11d0_b917_00a0c9223196.Data1;
          if ( *(_QWORD *)&iid.Data1 == *(_QWORD *)&GUID_dff21ce1_f70f_11d0_b917_00a0c9223196.Data1 )
            v4 = *(_QWORD *)iid.Data4 - *(_QWORD *)GUID_dff21ce1_f70f_11d0_b917_00a0c9223196.Data4;
          if ( !v4 )
            *((_BYTE *)this + 9724) = 1;
        }
      }
    }
    *((_BYTE *)this + 9725) = 1;
    PropVariantClear((PROPVARIANT *)lpsz);
    PropVariantClear(pvar);
  }
  return *((_BYTE *)this + 9724);
}
