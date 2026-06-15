/*
 * XREFs of ?CopyProperties@@YAJPEAUIPropertyStore@@0@Z @ 0x180168FD8
 * Callers:
 *     ?CopyAudioSystemEffectsProperties@@YAJPEAUIAudioSystemEffectsPropertyStore@@0W4__MIDL___MIDL_itf_mmdeviceapi_0000_0008_0002@@@Z @ 0x180168B54 (-CopyAudioSystemEffectsProperties@@YAJPEAUIAudioSystemEffectsPropertyStore@@0W4__MIDL___MIDL_itf.c)
 *     ?CopyContextProperties@@YAJPEAUIAudioSystemEffectsPropertyStore@@0@Z @ 0x180168DE8 (-CopyContextProperties@@YAJPEAUIAudioSystemEffectsPropertyStore@@0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CopyProperties(struct IPropertyStore *a1, struct IPropertyStore *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int v7; // edi
  int v8; // eax
  int v9; // eax
  __int64 v10; // rdx
  unsigned int v11; // [rsp+20h] [rbp-40h] BYREF
  PROPVARIANT pvar[2]; // [rsp+28h] [rbp-38h] BYREF
  __int64 v13; // [rsp+38h] [rbp-28h]
  _BYTE v14[24]; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v4 = ((__int64 (__fastcall *)(struct IPropertyStore *, unsigned int *))a2->lpVtbl->GetCount)(a2, &v11);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2FA,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  v7 = 0;
  if ( v11 )
  {
    while ( 1 )
    {
      *(_OWORD *)pvar = 0LL;
      v13 = 0LL;
      v8 = ((__int64 (__fastcall *)(struct IPropertyStore *, _QWORD, _BYTE *))a2->lpVtbl->GetAt)(a2, v7, v14);
      if ( v8 < 0 )
        break;
      v9 = ((__int64 (__fastcall *)(struct IPropertyStore *, _BYTE *, PROPVARIANT *))a2->lpVtbl->GetValue)(
             a2,
             v14,
             pvar);
      v5 = v9;
      if ( v9 < 0 )
      {
        v10 = 772LL;
        goto LABEL_12;
      }
      v9 = ((__int64 (__fastcall *)(struct IPropertyStore *, _BYTE *, PROPVARIANT *))a1->lpVtbl->SetValue)(
             a1,
             v14,
             pvar);
      v5 = v9;
      if ( v9 < 0 )
      {
        v10 = 775LL;
LABEL_12:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
          (const char *)(unsigned int)v9);
        goto LABEL_14;
      }
      PropVariantClear(pvar);
      if ( ++v7 >= v11 )
        return 0LL;
    }
    v5 = v8;
LABEL_14:
    PropVariantClear(pvar);
    return v5;
  }
  return 0LL;
}
