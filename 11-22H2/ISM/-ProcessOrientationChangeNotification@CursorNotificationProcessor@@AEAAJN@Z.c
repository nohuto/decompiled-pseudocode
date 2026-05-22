/*
 * XREFs of ?ProcessOrientationChangeNotification@CursorNotificationProcessor@@AEAAJN@Z @ 0x18010C8E0
 * Callers:
 *     ?OnMitMessageReceived@CursorNotificationProcessor@@AEAAJAEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@H@Z @ 0x18004E96C (-OnMitMessageReceived@CursorNotificationProcessor@@AEAAJAEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@H@Z.c)
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800254AC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UpdateCursorOrientationForInputType@Cursor@InputTraceLogging@@SAXW4InputType@@N@Z @ 0x18010C9FC (-UpdateCursorOrientationForInputType@Cursor@InputTraceLogging@@SAXW4InputType@@N@Z.c)
 */

__int64 __fastcall CursorNotificationProcessor::ProcessOrientationChangeNotification(
        CursorNotificationProcessor *this,
        double a2)
{
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v3; // rcx

  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v3 = *(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL) + 232LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL)
                 + 80);
  if ( v3 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 56LL))(v3, 2LL) )
    InputTraceLogging::Cursor::UpdateCursorOrientationForInputType();
  return 0LL;
}
