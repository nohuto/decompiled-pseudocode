/*
 * XREFs of NdisMQueryAdapterInstanceName @ 0x1C0071820
 * Callers:
 *     ?Initialize@NdisPoll@@QEAAJXZ @ 0x1C0140AD0 (-Initialize@NdisPoll@@QEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0008318 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 */

NDIS_STATUS __stdcall NdisMQueryAdapterInstanceName(PNDIS_STRING pAdapterInstanceName, NDIS_HANDLE MiniportHandle)
{
  unsigned __int16 v4; // r14
  wchar_t *Pool2; // rax
  NDIS_STATUS v6; // ebx
  wchar_t *v7; // rbp

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xAu,
      (struct _GUID *)&WPP_c884a764ce4f344e81b00742df278ddf_Traceguids,
      MiniportHandle);
  v4 = *(_WORD *)(*((_QWORD *)MiniportHandle + 482) + 2LL);
  Pool2 = (wchar_t *)ExAllocatePool2(64LL, v4, 1851868238);
  v6 = 0;
  v7 = Pool2;
  if ( Pool2 )
  {
    pAdapterInstanceName->Buffer = Pool2;
    pAdapterInstanceName->Length = 0;
    pAdapterInstanceName->MaximumLength = v4;
    if ( RtlAppendUnicodeStringToString(pAdapterInstanceName, *((PCUNICODE_STRING *)MiniportHandle + 482)) < 0 )
    {
      ExFreePoolWithTag(v7, 0);
      v6 = -1073741823;
    }
  }
  else
  {
    v6 = -1073741670;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xBu,
      (struct _GUID *)&WPP_c884a764ce4f344e81b00742df278ddf_Traceguids,
      (char)MiniportHandle,
      v6);
  return v6;
}
