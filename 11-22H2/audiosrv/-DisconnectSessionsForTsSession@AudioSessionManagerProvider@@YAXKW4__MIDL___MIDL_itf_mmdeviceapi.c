/*
 * XREFs of ?DisconnectSessionsForTsSession@AudioSessionManagerProvider@@YAXKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800E9ECC
 * Callers:
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@KPEAPEAG@Z @ 0x18003E8E8 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@K.c)
 *     PolicyConfigSetAccessibilityAudioMonoMixState @ 0x180118230 (PolicyConfigSetAccessibilityAudioMonoMixState.c)
 * Callees:
 *     ?ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV?$function@$$A6AJAEAV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@Z@std@@@Z @ 0x180025F54 (-ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV-$function@$$A6AJAEAV-$com_ptr_t@VCEndpointStor.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AudioSessionManagerProvider::DisconnectSessionsForTsSession(
        AudioSessionManagerProvider *this,
        __int64 a2,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a3)
{
  __int64 (__fastcall ***v3)(); // rdx
  int v4; // [rsp+20h] [rbp-78h] BYREF
  __int128 v5; // [rsp+30h] [rbp-68h]
  __int64 (__fastcall **v6)(); // [rsp+40h] [rbp-58h] BYREF
  __int128 v7; // [rsp+48h] [rbp-50h]
  __int64 (__fastcall ***v8)(); // [rsp+78h] [rbp-20h]
  int v9; // [rsp+A0h] [rbp+8h] BYREF

  v9 = (int)this;
  v4 = 0;
  *(_QWORD *)&v5 = &v9;
  *((_QWORD *)&v5 + 1) = &v4;
  v6 = off_18017B6C0;
  v7 = v5;
  v8 = &v6;
  CEndpointStoreCache::ForEachEndpoint((__int64)this, (__int64)&v6);
  if ( v8 )
  {
    v3 = &v6;
    LOBYTE(v3) = v8 != &v6;
    ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v8)[4])(v8, v3);
  }
}
