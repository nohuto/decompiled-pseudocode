/*
 * XREFs of ?GetConnectorProcessingModeForFormat@CBtAudioResourceManagerBase@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEBUtWAVEFORMATEX@@PEAU_GUID@@@Z @ 0x1800F7E50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18000E360 (-GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBtAudioResourceManagerBase::GetConnectorProcessingModeForFormat(
        CBtAudioResourceManagerBase *this,
        struct EndpointCharacteristicsDescriptor *a2,
        const struct tWAVEFORMATEX *a3,
        struct _GUID *a4)
{
  __int64 v4; // rbx
  bool v9; // sf
  __int64 v10; // rax
  struct _GUID *v11; // rax
  __int64 v12; // rbx
  struct _GUID v13; // xmm0
  __int64 result; // rax
  __int128 v15; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v16[16]; // [rsp+60h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v4 = *((_QWORD *)a2 + 1);
  v15 = *(_OWORD *)(*(__int64 (__fastcall **)(CBtAudioResourceManagerBase *, _BYTE *))(*(_QWORD *)this + 120LL))(
                     this,
                     v16);
  v9 = (int)EffectPack::GetSharedModeEnginePeriodicity(v4, 0, (__int64)a3, &v15, 0, 0LL, 0LL, 0LL, 0LL) < 0;
  v10 = *(_QWORD *)this;
  if ( !v9 )
  {
    v11 = (struct _GUID *)(*(__int64 (__fastcall **)(CBtAudioResourceManagerBase *, _BYTE *))(v10 + 120))(this, v16);
LABEL_5:
    v13 = *v11;
    result = 0LL;
    *a4 = v13;
    return result;
  }
  v12 = *((_QWORD *)a2 + 1);
  v15 = *(_OWORD *)(*(__int64 (__fastcall **)(CBtAudioResourceManagerBase *, _BYTE *))(v10 + 128))(this, v16);
  if ( (int)EffectPack::GetSharedModeEnginePeriodicity(v12, 0, (__int64)a3, &v15, 0, 0LL, 0LL, 0LL, 0LL) >= 0 )
  {
    v11 = (struct _GUID *)(*(__int64 (__fastcall **)(CBtAudioResourceManagerBase *, _BYTE *))(*(_QWORD *)this + 128LL))(
                            this,
                            v16);
    goto LABEL_5;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x44A,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
    (const char *)0x88890008LL);
  return 2290679816LL;
}
