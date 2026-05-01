/*
 * XREFs of McGenEventWrite_EventWriteTransfer @ 0x180176D28
 * Callers:
 *     McTemplateU0dd_EventWriteTransfer @ 0x180024EF8 (McTemplateU0dd_EventWriteTransfer.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180024F70 (McTemplateU0q_EventWriteTransfer.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x180024FD4 (McTemplateU0qq_EventWriteTransfer.c)
 *     McTemplateU0pqztp_EventWriteTransfer @ 0x180042A0C (McTemplateU0pqztp_EventWriteTransfer.c)
 *     McTemplateU0dz_EventWriteTransfer @ 0x180042B64 (McTemplateU0dz_EventWriteTransfer.c)
 *     McTemplateU0zqtq_EventWriteTransfer @ 0x180042BF8 (McTemplateU0zqtq_EventWriteTransfer.c)
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800FB980 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z @ 0x1801664E8 (-_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z.c)
 *     McTemplateU0qz_EventWriteTransfer @ 0x1802EAB0A (McTemplateU0qz_EventWriteTransfer.c)
 *     McTemplateU0dddd_EventWriteTransfer @ 0x1803A7F94 (McTemplateU0dddd_EventWriteTransfer.c)
 *     McTemplateU0zzz_EventWriteTransfer @ 0x18059DC8C (McTemplateU0zzz_EventWriteTransfer.c)
 *     McTemplateU0zzzq_EventWriteTransfer @ 0x18059DD9C (McTemplateU0zzzq_EventWriteTransfer.c)
 *     ?SetSite@CDropFeedback@@UEAAJPEAUIUnknown@@@Z @ 0x1805EA820 (-SetSite@CDropFeedback@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?Show@CDropFeedback@@UEAAJXZ @ 0x1805EAA20 (-Show@CDropFeedback@@UEAAJXZ.c)
 *     ??1CDragVisual@@MEAA@XZ @ 0x1805EC5D0 (--1CDragVisual@@MEAA@XZ.c)
 *     ?Hide@CDragVisual@@UEAAXW4DragVisualHideFlags@@PEAUHWND__@@@Z @ 0x1805ED110 (-Hide@CDragVisual@@UEAAXW4DragVisualHideFlags@@PEAUHWND__@@@Z.c)
 *     ?SetMode@CDragVisual@@UEAAXW4DragVisualMode@@@Z @ 0x1805EE540 (-SetMode@CDragVisual@@UEAAXW4DragVisualMode@@@Z.c)
 *     ?SetPosition@CDragVisual@@UEAAXUtagPOINT@@_N@Z @ 0x1805EE7F0 (-SetPosition@CDragVisual@@UEAAXUtagPOINT@@_N@Z.c)
 *     ?_SetText@CDragVisual@@AEAAXPEBG@Z @ 0x1805F0418 (-_SetText@CDragVisual@@AEAAXPEBG@Z.c)
 *     ?_Show@CDragVisual@@AEAAXXZ @ 0x1805F05C4 (-_Show@CDragVisual@@AEAAXXZ.c)
 *     McTemplateU0ddz_EventWriteTransfer @ 0x1805F4BCC (McTemplateU0ddz_EventWriteTransfer.c)
 *     McTemplateU0qdddd_EventWriteTransfer @ 0x1805F4C6C (McTemplateU0qdddd_EventWriteTransfer.c)
 *     McTemplateU0sqq_EventWriteTransfer @ 0x1807382E8 (McTemplateU0sqq_EventWriteTransfer.c)
 *     McTemplateU0z_EventWriteTransfer @ 0x180739260 (McTemplateU0z_EventWriteTransfer.c)
 *     McTemplateU0qd_EventWriteTransfer @ 0x18075FB0C (McTemplateU0qd_EventWriteTransfer.c)
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
