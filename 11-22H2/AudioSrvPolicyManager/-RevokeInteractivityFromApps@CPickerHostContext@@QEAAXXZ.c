/*
 * XREFs of ?RevokeInteractivityFromApps@CPickerHostContext@@QEAAXXZ @ 0x1800307B0
 * Callers:
 *     ?DestroyPickerHostContext@PickerHostContextManager@@YAXPEAVCPickerHostContext@@@Z @ 0x18003054C (-DestroyPickerHostContext@PickerHostContextManager@@YAXPEAVCPickerHostContext@@@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@QEAAAEAPEAVCHostedAppInteractivity@@AEAPEAU__POSITION@@@Z @ 0x18000D350 (-GetNext@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@@.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800113F0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z @ 0x180012F94 (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z.c)
 *     WPP_SF_d @ 0x18001F3E8 (WPP_SF_d.c)
 */

void __fastcall CPickerHostContext::RevokeInteractivityFromApps(CPickerHostContext *this)
{
  _QWORD *Next; // rax
  __int64 v2; // rdx
  int v3; // ebx
  _QWORD *v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_QWORD **)this;
  while ( v4 )
  {
    Next = ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::GetNext(
             (__int64)this,
             &v4);
    v2 = *Next;
    LODWORD(Next) = *(_DWORD *)(*Next + 12LL);
    *(_DWORD *)(v2 + 12) = 0;
    if ( (_DWORD)Next )
    {
      v3 = CHostedAppInteractivityManager::AddHostedAppInteractivityNotification(
             this,
             *(const unsigned __int16 **)v2,
             *(_QWORD *)(v2 + 16),
             *(_DWORD *)(v2 + 8),
             0);
      if ( v3 < 0 )
      {
        if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xEu, &WPP_1c004e7844a83aef02453228989ecd61_Traceguids, v3);
        }
        AudPolicyLogError("CPickerHostContext::RevokeInteractivityFromApps", 288, v3);
      }
    }
  }
}
