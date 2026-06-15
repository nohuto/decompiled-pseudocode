/*
 * XREFs of ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18000E4A8
 * Callers:
 *     ??$make_shared@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBG@std@@YA?AV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEAPEBG@Z @ 0x18000839C (--$make_shared@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAPEBG@std@@YA-AV-.c)
 *     ??$_Copy_unchecked@PEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@PEAU12@@std@@YAPEAULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@PEAU12@00@Z @ 0x18000EBA8 (--$_Copy_unchecked@PEAULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@PEAU12@@std.c)
 *     _lambda_1e03ffd0b3816784b19a9acf2aab20e8_::operator() @ 0x18000FAB0 (_lambda_1e03ffd0b3816784b19a9acf2aab20e8_--operator().c)
 *     _lambda_aa732a8a991b7eb0f1632fe44cffa677_::operator() @ 0x18000FDD0 (_lambda_aa732a8a991b7eb0f1632fe44cffa677_--operator().c)
 *     ?Init@CDuckingNotification@@QEAAJKPEBG_K@Z @ 0x180010C50 (-Init@CDuckingNotification@@QEAAJKPEBG_K@Z.c)
 *     ?OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x1800118C0 (-OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioS.c)
 *     ?RemoveInterface@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x1800122B0 (-RemoveInterface@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z.c)
 *     ?GetActiveStreamCountStatsForEndpoint@CProcess@@IEAAJPEBGHPEAPEAI@Z @ 0x18001718C (-GetActiveStreamCountStatsForEndpoint@CProcess@@IEAAJPEBGHPEAPEAI@Z.c)
 *     ?GetApplicationSpecificEndpointInfo@CProcess@@UEAAJPEAPEAUIApplicationSpecificEndpointInfo@@@Z @ 0x180017400 (-GetApplicationSpecificEndpointInfo@CProcess@@UEAAJPEAPEAUIApplicationSpecificEndpointInfo@@@Z.c)
 *     ?RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180019EAC (-RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamClassPolicyGains@@@Z @ 0x180029C38 (-GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamCla.c)
 *     ?RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x18002A418 (-RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ??0DuckingDescriptorAndId@@QEAA@PEBGM_J_NW4EndpointApplicability@@@Z @ 0x18002AE48 (--0DuckingDescriptorAndId@@QEAA@PEBGM_J_NW4EndpointApplicability@@@Z.c)
 *     ?AddEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x180038940 (-AddEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z.c)
 *     ?GetEndpointVolumeOverridePolicyVolume@CEndpointVolumeStateManager@@UEAAMPEBG@Z @ 0x180038C90 (-GetEndpointVolumeOverridePolicyVolume@CEndpointVolumeStateManager@@UEAAMPEBG@Z.c)
 *     ?ReleaseEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x180039030 (-ReleaseEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z.c)
 *     ?LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ @ 0x18003C4AC (-LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800081EC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18000E460 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x18000E488 (-_Xlen_string@std@@YAXXZ.c)
 *     memcpy_0 @ 0x180044443 (memcpy_0.c)
 *     memmove_0 @ 0x18004444F (memmove_0.c)
 */

char **__fastcall std::wstring::assign(char **a1, void *Src, unsigned __int64 a3)
{
  unsigned __int64 v3; // rsi
  char *v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rbp
  __int64 v14; // rdx

  v3 = (unsigned __int64)a1[3];
  if ( a3 > v3 )
  {
    v9 = 0x7FFFFFFFFFFFFFFELL;
    if ( a3 > 0x7FFFFFFFFFFFFFFELL )
      std::_Xlen_string();
    if ( (a3 | 7) > 0x7FFFFFFFFFFFFFFELL || (v14 = v3 >> 1, v3 > 0x7FFFFFFFFFFFFFFELL - (v3 >> 1)) )
    {
      v10 = 0x7FFFFFFFFFFFFFFFLL;
    }
    else
    {
      v9 = v14 + v3;
      if ( (a3 | 7) >= v14 + v3 )
        v9 = a3 | 7;
      v10 = v9 + 1;
      if ( (unsigned __int64)(v9 + 1) > 0x7FFFFFFFFFFFFFFFLL )
        std::_Throw_bad_array_new_length();
    }
    v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(2 * v10);
    a1[3] = (char *)v9;
    a1[2] = (char *)a3;
    v12 = v11;
    memcpy_0(v11, Src, 2 * a3);
    *((_WORD *)v12 + a3) = 0;
    if ( v3 >= 8 )
      std::_Deallocate<16,0>(*a1, 2 * v3 + 2);
    *a1 = (char *)v12;
  }
  else
  {
    v7 = (char *)a1;
    if ( v3 >= 8 )
      v7 = *a1;
    v8 = 2 * a3;
    a1[2] = (char *)a3;
    memmove_0(v7, Src, 2 * a3);
    *(_WORD *)&v7[v8] = 0;
  }
  return a1;
}
