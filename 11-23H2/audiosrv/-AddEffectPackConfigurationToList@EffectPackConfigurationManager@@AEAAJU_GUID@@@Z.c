/*
 * XREFs of ?AddEffectPackConfigurationToList@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z @ 0x18010DC20
 * Callers:
 *     ?ScanForInstalledEffectPacks@EffectPackConfigurationManager@@AEAAJXZ @ 0x18005C3E0 (-ScanForInstalledEffectPacks@EffectPackConfigurationManager@@AEAAJXZ.c)
 *     ?OnMediaNotification@EffectPackConfigurationManager@@UEAAJPEAUMEDIA_NOTIFICATION_BLOCK@@@Z @ 0x18010DFB0 (-OnMediaNotification@EffectPackConfigurationManager@@UEAAJPEAUMEDIA_NOTIFICATION_BLOCK@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180025144 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x180025520 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@AEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@?$vector@V?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@V?$allocator@V?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@1@QEAV21@AEAV21@@Z @ 0x18010D6E0 (--$_Emplace_reallocate@AEAV-$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@-$vector@V-$shared_.c)
 *     ?CreateGlobalEffectPackConfiguration@EffectPackConfiguration@@SAJU_GUID@@AEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@Z @ 0x1801545D0 (-CreateGlobalEffectPackConfiguration@EffectPackConfiguration@@SAJU_GUID@@AEAV-$shared_ptr@$$CBUE.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall EffectPackConfigurationManager::AddEffectPackConfigurationToList(
        EffectPackConfigurationManager *this,
        struct _GUID *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  _QWORD *i; // rcx
  __int64 v8; // rax
  _QWORD *v9; // rcx
  __int64 v10; // rcx
  std::_Ref_count_base *v11; // rbx
  _DWORD *v12; // rcx
  __int64 v13; // rcx
  _DWORD *v14; // rcx
  __int64 v15; // rcx
  std::_Ref_count_base *v16[2]; // [rsp+30h] [rbp-78h] BYREF
  struct _GUID v17; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v18[32]; // [rsp+50h] [rbp-58h] BYREF
  struct _GUID *v19; // [rsp+70h] [rbp-38h]
  int v20; // [rsp+78h] [rbp-30h]
  int v21; // [rsp+7Ch] [rbp-2Ch]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  *(_OWORD *)v16 = 0LL;
  v17 = *a2;
  v4 = EffectPackConfiguration::CreateGlobalEffectPackConfiguration(&v17, v16);
  v5 = v4;
  if ( v4 >= 0 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
    *(_QWORD *)&v17.Data1 = (char *)this + 16;
    for ( i = (_QWORD *)*((_QWORD *)this + 8); ; i += 2 )
    {
      if ( i == *((_QWORD **)this + 9) )
      {
        v9 = (_QWORD *)*((_QWORD *)this + 9);
        if ( v9 == *((_QWORD **)this + 10) )
        {
          std::vector<std::shared_ptr<EffectPackConfiguration const>>::_Emplace_reallocate<std::shared_ptr<EffectPackConfiguration const> &>(
            (__int64 *)this + 8,
            *((_QWORD *)this + 9),
            v16);
        }
        else
        {
          std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(v9, v16);
          *((_QWORD *)this + 9) += 16LL;
        }
        v14 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                          v10,
                          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
        if ( *v14 > 4u && tlgKeywordOn((__int64)v14, 2048LL) )
        {
          v19 = a2;
          v20 = 16;
          v21 = 0;
          tlgWriteTransfer_EtwEventWriteTransfer(v15, byte_1801936B7, 0LL, 0LL, 3, (__int64)v18);
        }
        v11 = v16[1];
        goto LABEL_21;
      }
      v8 = *(_QWORD *)*i - *(_QWORD *)&a2->Data1;
      if ( !v8 )
        v8 = *(_QWORD *)(*i + 8LL) - *(_QWORD *)a2->Data4;
      if ( !v8 )
        break;
    }
    *i = v16[0];
    v11 = (std::_Ref_count_base *)i[1];
    i[1] = v16[1];
    v12 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                      (__int64)i,
                      _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
    if ( *v12 > 4u && tlgKeywordOn((__int64)v12, 2048LL) )
    {
      v19 = a2;
      v20 = 16;
      v21 = 0;
      tlgWriteTransfer_EtwEventWriteTransfer(v13, byte_1801936E4, 0LL, 0LL, 3, (__int64)v18);
    }
LABEL_21:
    if ( this != (EffectPackConfigurationManager *)-16LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x117,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\effectpackconfigurationmanager.cpp",
      (const char *)(unsigned int)v4);
    if ( v16[1] )
      std::_Ref_count_base::_Decref(v16[1]);
    return v5;
  }
}
