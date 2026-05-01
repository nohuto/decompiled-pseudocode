/*
 * XREFs of McGenEventWrite_EventWriteTransfer @ 0x18006B42C
 * Callers:
 *     McTemplateU0pqztp_EventWriteTransfer @ 0x180021608 (McTemplateU0pqztp_EventWriteTransfer.c)
 *     _lambda_57bd800a23f6990551f71dd05caf20c5_::operator() @ 0x1800220B0 (_lambda_57bd800a23f6990551f71dd05caf20c5_--operator().c)
 *     McTemplateU0dddd_EventWriteTransfer @ 0x180040088 (McTemplateU0dddd_EventWriteTransfer.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x1800424D8 (McTemplateU0q_EventWriteTransfer.c)
 *     ?_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z @ 0x180069D64 (-_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z.c)
 *     McTemplateU0dz_EventWriteTransfer @ 0x18006AAD4 (McTemplateU0dz_EventWriteTransfer.c)
 *     ?OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18006ABA4 (-OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     _lambda_df8498ad81b9203ecaf5b19db9f78b07_::operator() @ 0x18006B1B0 (_lambda_df8498ad81b9203ecaf5b19db9f78b07_--operator().c)
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800DEF30 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1802EF754 (McTemplateU0qq_EventWriteTransfer.c)
 *     McTemplateU0zzz_EventWriteTransfer @ 0x1804E5DD4 (McTemplateU0zzz_EventWriteTransfer.c)
 *     McTemplateU0zzzq_EventWriteTransfer @ 0x1804E5EDC (McTemplateU0zzzq_EventWriteTransfer.c)
 *     ?SetSite@CDropFeedback@@UEAAJPEAUIUnknown@@@Z @ 0x18052FAF0 (-SetSite@CDropFeedback@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?Show@CDropFeedback@@UEAAJXZ @ 0x18052FCF0 (-Show@CDropFeedback@@UEAAJXZ.c)
 *     ??1CDragVisual@@MEAA@XZ @ 0x180531884 (--1CDragVisual@@MEAA@XZ.c)
 *     ?Hide@CDragVisual@@UEAAXW4DragVisualHideFlags@@PEAUHWND__@@@Z @ 0x1805323B0 (-Hide@CDragVisual@@UEAAXW4DragVisualHideFlags@@PEAUHWND__@@@Z.c)
 *     ?SetMode@CDragVisual@@UEAAXW4DragVisualMode@@@Z @ 0x1805337D0 (-SetMode@CDragVisual@@UEAAXW4DragVisualMode@@@Z.c)
 *     ?SetPosition@CDragVisual@@UEAAXUtagPOINT@@_N@Z @ 0x180533A80 (-SetPosition@CDragVisual@@UEAAXUtagPOINT@@_N@Z.c)
 *     ?_SetText@CDragVisual@@AEAAXPEBG@Z @ 0x180535670 (-_SetText@CDragVisual@@AEAAXPEBG@Z.c)
 *     ?_Show@CDragVisual@@AEAAXXZ @ 0x180535814 (-_Show@CDragVisual@@AEAAXXZ.c)
 *     McTemplateU0ddz_EventWriteTransfer @ 0x180539E30 (McTemplateU0ddz_EventWriteTransfer.c)
 *     McTemplateU0qdddd_EventWriteTransfer @ 0x180539ED0 (McTemplateU0qdddd_EventWriteTransfer.c)
 *     McTemplateU0qz_EventWriteTransfer @ 0x1805DC9B4 (McTemplateU0qz_EventWriteTransfer.c)
 *     McTemplateU0sqq_EventWriteTransfer @ 0x1805E4394 (McTemplateU0sqq_EventWriteTransfer.c)
 *     McTemplateU0z_EventWriteTransfer @ 0x1805E4B10 (McTemplateU0z_EventWriteTransfer.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall McGenEventWrite_EventWriteTransfer(
        REGHANDLE *a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        ULONG a4,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  unsigned __int16 *v5; // r10
  int v6; // eax
  ULONG v8; // r9d

  v5 = (unsigned __int16 *)a1[1];
  v6 = 0;
  if ( v5 )
  {
    UserData->Ptr = (ULONGLONG)v5;
    v6 = 2;
    v8 = *v5;
  }
  else
  {
    UserData->Ptr = 0LL;
    v8 = 0;
  }
  UserData->Size = v8;
  UserData->Reserved = v6;
  return EventWriteTransfer(*a1, a2, 0LL, 0LL, a4, UserData);
}
