/*
 * XREFs of NdisMConfigMSIXTableEntry @ 0x1C00575B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qLLL @ 0x1C00578F4 (WPP_RECORDER_SF_qLLL.c)
 *     WPP_RECORDER_SF_qLLLL @ 0x1C0057A50 (WPP_RECORDER_SF_qLLLL.c)
 */

NDIS_STATUS __stdcall NdisMConfigMSIXTableEntry(
        NDIS_HANDLE NdisMiniportHandle,
        PNDIS_MSIX_CONFIG_PARAMETERS MSIXConfigParameters)
{
  int v2; // r8d
  int v3; // r9d
  NDIS_STATUS v6; // edi
  _NDIS_MSIX_TABLE_CONFIG ConfigOperation; // ecx
  __int32 v8; // ecx
  __int64 (__fastcall *v9)(_QWORD, _QWORD); // rax
  NDIS_STATUS v10; // eax
  __int64 (__fastcall *v11)(_QWORD, _QWORD, _QWORD); // rax
  int v13; // [rsp+20h] [rbp-38h]

  v6 = -1073741637;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLLL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)MSIXConfigParameters,
      7,
      21,
      (struct _GUID *)&WPP_089a512067333d51f5b66ea612d009fe_Traceguids,
      (char)NdisMiniportHandle,
      MSIXConfigParameters->ConfigOperation,
      MSIXConfigParameters->TableEntry,
      MSIXConfigParameters->MessageNumber);
  if ( MSIXConfigParameters->Header.Revision && MSIXConfigParameters->Header.Size >= 0x10u )
  {
    ConfigOperation = MSIXConfigParameters->ConfigOperation;
    if ( ConfigOperation == NdisMSIXTableConfigSetTableEntry )
    {
      v11 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))*((_QWORD *)NdisMiniportHandle + 535);
      if ( !v11 )
        goto LABEL_16;
      v10 = v11(
              *((_QWORD *)NdisMiniportHandle + 534),
              MSIXConfigParameters->TableEntry,
              MSIXConfigParameters->MessageNumber);
      goto LABEL_14;
    }
    v8 = ConfigOperation - 1;
    if ( !v8 )
    {
      v9 = (__int64 (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)NdisMiniportHandle + 536);
      goto LABEL_10;
    }
    if ( v8 == 1 )
    {
      v9 = (__int64 (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)NdisMiniportHandle + 537);
LABEL_10:
      if ( !v9 )
        goto LABEL_16;
      v10 = v9(*((_QWORD *)NdisMiniportHandle + 534), MSIXConfigParameters->TableEntry);
LABEL_14:
      v6 = v10;
      goto LABEL_16;
    }
  }
  v6 = -1073741811;
LABEL_16:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLLLL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (_DWORD)MSIXConfigParameters,
      v2,
      v3,
      v13,
      (char)NdisMiniportHandle,
      MSIXConfigParameters->ConfigOperation,
      MSIXConfigParameters->TableEntry,
      MSIXConfigParameters->MessageNumber,
      v6);
  return v6;
}
