/*
 * XREFs of _lambda_5c36fc9d148e2df7cc7307bbce248cb9_::operator() @ 0x1C00DBEA8
 * Callers:
 *     _lambda_5c36fc9d148e2df7cc7307bbce248cb9_::_lambda_invoker_cdecl_ @ 0x1C00DBE90 (_lambda_5c36fc9d148e2df7cc7307bbce248cb9_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C0044CE0 (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0044EA0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 */

void __fastcall lambda_5c36fc9d148e2df7cc7307bbce248cb9_::operator()(__int64 a1, __int64 a2)
{
  unsigned int i; // edi
  int v4; // edx
  int v5; // r8d

  if ( !*(_DWORD *)(a2 + 1088) )
  {
    RIMLockExclusive(a2 + 104);
    if ( !*(_BYTE *)(a2 + 81) && !*(_BYTE *)(a2 + 80) )
    {
      for ( i = 0; i <= 2; ++i )
      {
        if ( (int)RIMUnRegisterForInputDeviceTypeClassNotifications(a2, i) < 0 )
        {
          LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_q(
              WPP_GLOBAL_Control->AttachedDevice,
              v4,
              v5,
              (_DWORD)gRimLog,
              4,
              1,
              127,
              (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids,
              a2);
          }
        }
      }
    }
    CInpPushLock::UnLockExclusive((CInpPushLock *)(a2 + 104));
  }
}
