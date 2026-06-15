/*
 * XREFs of ?CopyCapabilitiesFromEndpoint@EffectPack@@AEAAJXZ @ 0x18000E1AC
 * Callers:
 *     ?DeriveEffectiveConnectorAndEffectPackCapabilities@EffectPack@@QEAAJXZ @ 0x18002FFF0 (-DeriveEffectiveConnectorAndEffectPackCapabilities@EffectPack@@QEAAJXZ.c)
 * Callees:
 *     ?TranslateDeviceConnectorModeToStreamingConnectorMode@EffectPack@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@@Z @ 0x18000E580 (-TranslateDeviceConnectorModeToStreamingConnectorMode@EffectPack@@QEAA-AU_GUID@@W4__MIDL___MIDL_.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x1800314FC (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDefaultConnectorProcessingModeInternal@EffectPack@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x1800340AC (-GetDefaultConnectorProcessingModeInternal@EffectPack@@AEAA-AU_GUID@@W4__MIDL___MIDL_itf_audioen.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 */

__int64 __fastcall EffectPack::CopyCapabilitiesFromEndpoint(EffectPack *this)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  char *v4; // rsi
  unsigned __int64 v5; // rdi
  __int64 v6; // r14
  __int64 v7; // r12
  __int64 v8; // rax
  unsigned int v9; // ebp
  unsigned int v10; // r15d
  __int64 v11; // r13
  _QWORD *v12; // r8
  _QWORD *i; // rcx
  _QWORD *v14; // rdx
  __int64 v15; // rax
  struct _GUID v17; // [rsp+20h] [rbp-58h] BYREF
  struct _GUID v18; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v2 = 0LL;
  v3 = *((_QWORD *)this + 164);
  v4 = (char *)this + 1288;
  if ( v3 )
  {
    do
    {
      if ( v2 >= *(_QWORD *)(*(_QWORD *)v4 + 112LL) || v2 >= v3 )
      {
LABEL_23:
        _o_terminate();
        __debugbreak();
        JUMPOUT(0x1800889A2LL);
      }
      *(_DWORD *)(*((_QWORD *)this + 165) + 4 * v2) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 120LL) + 4 * v2);
      ++v2;
      v3 = *((_QWORD *)this + 164);
    }
    while ( v2 < v3 );
  }
  v5 = 0LL;
  if ( *((_QWORD *)this + 174) )
  {
    v6 = 0LL;
    while ( 1 )
    {
      v7 = v6 + *((_QWORD *)this + 175);
      if ( v5 >= *(_QWORD *)(*(_QWORD *)v4 + 192LL) )
        goto LABEL_23;
      v8 = *(_QWORD *)(*(_QWORD *)v4 + 200LL);
      v9 = 0;
      v10 = *(_DWORD *)(v8 + v6 + 8);
      v11 = *(_QWORD *)(v8 + v6);
      if ( v10 )
        break;
LABEL_11:
      ++v5;
      v6 += 16LL;
      if ( v5 >= *((_QWORD *)this + 174) )
        goto LABEL_12;
    }
    while ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(v7, v11 + 16LL * v9) )
    {
      if ( ++v9 >= v10 )
        goto LABEL_11;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x864,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x8007000ELL,
      v17.Data1);
    return 2147942414LL;
  }
  else
  {
LABEL_12:
    v17 = *(struct _GUID *)EffectPack::GetDefaultConnectorProcessingModeInternal(this, &v17, 0LL, 0LL);
    EffectPack::TranslateDeviceConnectorModeToStreamingConnectorMode(this, &v18, eHostProcessConnector, &v17);
    v12 = *(_QWORD **)(*(_QWORD *)v4 + 248LL);
    for ( i = *(_QWORD **)(*(_QWORD *)v4 + 240LL); i != v12; ++i )
    {
      v14 = (_QWORD *)*i;
      v15 = *(_QWORD *)*i - *(_QWORD *)&v18.Data1;
      if ( !v15 )
        v15 = v14[1] - *(_QWORD *)v18.Data4;
      if ( !v15 && ((v14[3] - v14[2]) & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
        *(_QWORD *)(*(_QWORD *)v4 + 216LL) = 0LL;
    }
    return 0LL;
  }
}
