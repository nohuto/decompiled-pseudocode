/*
 * XREFs of std::_Func_impl_no_alloc__lambda_b373bd1a9b8e3a57f3542cd9188d3fed__void_::_Do_call @ 0x18001D5E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x18000E914 (WPP_SF_d.c)
 *     ?DeleteInactivityTimer@CProcess@@QEAAXXZ @ 0x180016588 (-DeleteInactivityTimer@CProcess@@QEAAXXZ.c)
 *     ?RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ @ 0x18001AAA8 (-RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x18001F2CC (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_b373bd1a9b8e3a57f3542cd9188d3fed__void_::_Do_call(__int64 a1)
{
  __int64 v1; // rbx
  CApplicationManager *v2; // rsi
  CApplication *v3; // rdi

  v1 = *(_QWORD *)(a1 + 8);
  v2 = g_ApplicationManager;
  v3 = *(CApplication **)(v1 + 224);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xDu,
      &WPP_4eb0c1de174a3401e682efc3753af671_Traceguids,
      *(_DWORD *)(v1 + 160));
  }
  if ( *(_DWORD *)(v1 + 476) == 3 )
  {
    *(_DWORD *)(v1 + 476) = 0;
    *(_DWORD *)(v1 + 480) = 0;
    *(_DWORD *)(v1 + 484) = 4;
  }
  CProcess::DeleteInactivityTimer((CProcess *)v1);
  if ( v3 )
  {
    CApplication::RemoveAudioPlaybackRestriction(v3);
    CApplicationManager::ApplyPBMPolicy(v2, v3, 0xD1u, 0);
  }
}
