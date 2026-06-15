/*
 * XREFs of ?GetControllableEffects@CAudioStream@@AEAAJAEAV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@@Z @ 0x1800EBB88
 * Callers:
 *     ?GetAudioEffects@CAudioStream@@AEAAJPEAPEAUAudioEffectInternal@@PEAI@Z @ 0x1800EB69C (-GetAudioEffects@CAudioStream@@AEAAJPEAPEAUAudioEffectInternal@@PEAI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Insert_range@PEAUAudioEffectInternal@@@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UAudioEffectInternal@@@std@@@std@@@1@PEAUAudioEffectInternal@@1Uforward_iterator_tag@1@@Z @ 0x1800EAAD4 (--$_Insert_range@PEAUAudioEffectInternal@@@-$vector@UAudioEffectInternal@@V-$allocator@UAudioEff.c)
 *     ?GetEffectsFromApo@CAudioStream@@AEAAJPEAUIAPOWrapperSrv@@AEAV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@@Z @ 0x1800EBF78 (-GetEffectsFromApo@CAudioStream@@AEAAJPEAUIAPOWrapperSrv@@AEAV-$vector@UAudioEffectInternal@@V-$.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAudioStream::GetControllableEffects(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // r15
  int EffectsFromApo; // eax
  unsigned int v7; // esi
  const char *v8; // r9
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int128 v12; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v15; // [rsp+70h] [rbp+8h] BYREF
  __int64 v16; // [rsp+80h] [rbp+18h]

  v4 = *(_QWORD **)(a1 + 232);
  v5 = *(_QWORD **)(a1 + 240);
  try
  {
    while ( v4 != v5 )
    {
      EffectsFromApo = CAudioStream::GetEffectsFromApo(a1, *v4, a2);
      v7 = EffectsFromApo;
      if ( EffectsFromApo < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x73A,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)EffectsFromApo);
        return v7;
      }
      ++v4;
    }
    v15 = 0LL;
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 640));
    v16 = a1 + 640;
    v10 = v15;
    v11 = 0LL;
    v15 = 0LL;
    if ( v10 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      v11 = v15;
    }
    if ( *(_QWORD *)(a1 + 576) )
    {
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 + 8) + 112LL))(a1 + 8, &v15);
      v11 = v15;
    }
    if ( a1 != -640 )
    {
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 640));
      v11 = v15;
    }
    if ( v11 )
    {
      v12 = 0LL;
      v13 = 0LL;
      if ( (*(int (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v11 + 480LL))(v11, &v12) >= 0 )
        std::vector<AudioEffectInternal>::_Insert_range<AudioEffectInternal *>(
          (_QWORD *)a2,
          *(char **)(a2 + 8),
          (const void *)v12,
          *((__int64 *)&v12 + 1));
      if ( (_QWORD)v12 )
        std::_Deallocate<16,0>((void *)v12, 8 * ((v13 - (__int64)v12) >> 3));
    }
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v15);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x751,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
                           v8);
  }
  return result;
}
