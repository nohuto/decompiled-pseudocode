/*
 * XREFs of ndisHandleProtocolUnloadNotification @ 0x1C006F184
 * Callers:
 *     ndisHandleUModePnPOp @ 0x1C0027DB8 (ndisHandleUModePnPOp.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_Z @ 0x1C00107A4 (WPP_RECORDER_SF_Z.c)
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x1C001E260 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     ?ndisInvokeUninstall@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C012BBC8 (-ndisInvokeUninstall@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisReferenceProtocolByName@@YAJPEBU_UNICODE_STRING@@PEAPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x1C014AAA8 (-ndisReferenceProtocolByName@@YAJPEBU_UNICODE_STRING@@PEAPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_R.c)
 */

__int64 __fastcall ndisHandleProtocolUnloadNotification(PCUNICODE_STRING SourceString)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  struct _NDIS_PROTOCOL_BLOCK *v6; // rbx
  unsigned int v7; // edi
  void (*UnloadHandler)(void); // rax
  struct _NDIS_PROTOCOL_BLOCK *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x15u,
      (struct _GUID *)&WPP_e5e9fcda50673f468ae0a771c0dd338b_Traceguids,
      &SourceString->Length);
  v2 = ndisReferenceProtocolByName(SourceString, &v10, 0, PTREF_UNLOADNOTIFY);
  v6 = v10;
  v7 = v2;
  if ( v2 >= 0 )
  {
    LOBYTE(v4) = 5;
    ndisDereferenceProtocol(v10, v3, v4, v5);
    UnloadHandler = v6->UnloadHandler;
    if ( UnloadHandler )
    {
      UnloadHandler();
    }
    else if ( v6->UninstallHandler )
    {
      ndisInvokeUninstall(v6);
    }
    else
    {
      v7 = -1073741823;
    }
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      5u,
      0x16u,
      (struct _GUID *)&WPP_e5e9fcda50673f468ae0a771c0dd338b_Traceguids,
      v6);
  return v7;
}
