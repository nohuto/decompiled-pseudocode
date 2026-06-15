/*
 * XREFs of ?HHOSTEDAPPMANAGERCONTEXTRundown@@YAXPEAX@Z @ 0x180027960
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800095B4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x18000BFFC (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     WPP_SF_d @ 0x18000E914 (WPP_SF_d.c)
 *     ??1CPickerHostContext@@QEAA@XZ @ 0x180025CEC (--1CPickerHostContext@@QEAA@XZ.c)
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z @ 0x180025F90 (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall HHOSTEDAPPMANAGERCONTEXTRundown(CPickerHostContext *this)
{
  __int64 v2; // rdx
  bool i; // zf
  CHostedAppInteractivityManager *v4; // rcx
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  int v7; // eax
  int v8; // esi

  EnterCriticalSection(&PickerHostContextManager::s_csPickerHostContextList);
  v2 = PickerHostContextManager::s_PickerHostContextList;
  for ( i = PickerHostContextManager::s_PickerHostContextList == 0; !i; i = v2 == 0 )
  {
    if ( *(CPickerHostContext **)(v2 + 16) == this )
    {
      if ( v2 )
      {
        if ( v2 == PickerHostContextManager::s_PickerHostContextList )
          PickerHostContextManager::s_PickerHostContextList = *(_QWORD *)v2;
        else
          **(_QWORD **)(v2 + 8) = *(_QWORD *)v2;
        v4 = *(CHostedAppInteractivityManager **)(v2 + 8);
        if ( v2 == qword_18005BBE0 )
          qword_18005BBE0 = *(_QWORD *)(v2 + 8);
        else
          *(_QWORD *)(*(_QWORD *)v2 + 8LL) = v4;
        *(_QWORD *)v2 = qword_18005BBF8;
        qword_18005BBF8 = v2;
        if ( !--qword_18005BBE8 )
          ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)&PickerHostContextManager::s_PickerHostContextList);
        v5 = *(_QWORD **)this;
        while ( v5 )
        {
          v6 = v5[2];
          v5 = (_QWORD *)*v5;
          v7 = *(_DWORD *)(v6 + 12);
          *(_DWORD *)(v6 + 12) = 0;
          if ( v7 )
          {
            v8 = CHostedAppInteractivityManager::AddHostedAppInteractivityNotification(
                   v4,
                   *(const unsigned __int16 **)v6,
                   *(_QWORD *)(v6 + 16),
                   *(_DWORD *)(v6 + 8),
                   0);
            if ( v8 < 0 )
            {
              if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
              {
                WPP_SF_d(
                  *((_QWORD *)WPP_GLOBAL_Control + 2),
                  0xEu,
                  &WPP_1c004e7844a83aef02453228989ecd61_Traceguids,
                  v8);
              }
              AudPolicyLogError("CPickerHostContext::RevokeInteractivityFromApps", 288, v8);
            }
          }
        }
        CPickerHostContext::~CPickerHostContext(this);
        operator delete(this);
      }
      break;
    }
    v2 = *(_QWORD *)v2;
  }
  LeaveCriticalSection(&PickerHostContextManager::s_csPickerHostContextList);
}
