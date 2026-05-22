/*
 * XREFs of ?ProcessShapeNotification@CursorNotificationProcessor@@AEAAJPEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@I@Z @ 0x18010C964
 * Callers:
 *     ?OnMitMessageReceived@CursorNotificationProcessor@@AEAAJAEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@H@Z @ 0x18004E96C (-OnMitMessageReceived@CursorNotificationProcessor@@AEAAJAEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@H@Z.c)
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800254AC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CursorNotificationProcessor::ProcessShapeNotification(
        CursorNotificationProcessor *this,
        const struct _MIT_CURSOR_MANAGEMENT_MESSAGE *a2,
        unsigned int a3)
{
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL) + 232LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, const struct _MIT_CURSOR_MANAGEMENT_MESSAGE *, _QWORD))(**(_QWORD **)(v6 + 80) + 64LL))(
         *(_QWORD *)(v6 + 80),
         2LL,
         a2,
         a3);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x127,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\cursornotificat"
             "ionprocessor.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
