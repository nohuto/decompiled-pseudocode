/*
 * XREFs of NdisMConfigMSIXTableEntry @ 0x1C005C8F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qLLL @ 0x1C005CB34 (WPP_RECORDER_SF_qLLL.c)
 *     WPP_RECORDER_SF_qLLLL @ 0x1C005CC90 (WPP_RECORDER_SF_qLLLL.c)
 */

NDIS_STATUS __stdcall NdisMConfigMSIXTableEntry(
        NDIS_HANDLE NdisMiniportHandle,
        PNDIS_MSIX_CONFIG_PARAMETERS MSIXConfigParameters)
{
  int v2; // r8d
  int v3; // r9d
  NDIS_STATUS v6; // ebx
  _NDIS_MSIX_TABLE_CONFIG *p_ConfigOperation; // r14
  __int64 (__fastcall *v8)(_QWORD, _QWORD); // rax
  NDIS_STATUS v9; // eax
  __int64 (__fastcall *v10)(_QWORD, _QWORD, _QWORD); // rax
  int v12; // [rsp+20h] [rbp-38h]

  v6 = -1073741637;
  p_ConfigOperation = &MSIXConfigParameters->ConfigOperation;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLLL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)MSIXConfigParameters,
      7,
      21,
      (struct _GUID *)&WPP_089a512067333d51f5b66ea612d009fe_Traceguids,
      (char)NdisMiniportHandle,
      *p_ConfigOperation,
      MSIXConfigParameters->TableEntry,
      MSIXConfigParameters->MessageNumber);
  if ( MSIXConfigParameters->Header.Revision && MSIXConfigParameters->Header.Size >= 0x10u )
  {
    switch ( *p_ConfigOperation )
    {
      case NdisMSIXTableConfigSetTableEntry:
        v10 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))*((_QWORD *)NdisMiniportHandle + 535);
        if ( !v10 )
          goto LABEL_16;
        v9 = v10(
               *((_QWORD *)NdisMiniportHandle + 534),
               MSIXConfigParameters->TableEntry,
               MSIXConfigParameters->MessageNumber);
        goto LABEL_14;
      case NdisMSIXTableConfigMaskTableEntry:
        v8 = (__int64 (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)NdisMiniportHandle + 536);
        goto LABEL_10;
      case NdisMSIXTableConfigUnmaskTableEntry:
        v8 = (__int64 (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)NdisMiniportHandle + 537);
LABEL_10:
        if ( !v8 )
          goto LABEL_16;
        v9 = v8(*((_QWORD *)NdisMiniportHandle + 534), MSIXConfigParameters->TableEntry);
LABEL_14:
        v6 = v9;
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
      v12,
      (char)NdisMiniportHandle,
      *p_ConfigOperation,
      MSIXConfigParameters->TableEntry,
      MSIXConfigParameters->MessageNumber,
      v6);
  return v6;
}
