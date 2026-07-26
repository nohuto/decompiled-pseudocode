/*
 * XREFs of NdisQueryBindInstanceName @ 0x1C009D510
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000CDB0 (WPP_RECORDER_SF_qqL.c)
 */

NDIS_STATUS __stdcall NdisQueryBindInstanceName(PNDIS_STRING pAdapterInstanceName, NDIS_HANDLE BindingContext)
{
  NDIS_STATUS v4; // ebx
  __int64 v5; // r15
  const UNICODE_STRING *v6; // rdi
  unsigned __int16 MaximumLength; // r12
  wchar_t *Pool2; // rax
  wchar_t *v9; // rbp

  v4 = -1073741823;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x32u,
      (struct _GUID *)&WPP_fdc5294f2db637a048b8ad24a033bc88_Traceguids,
      BindingContext);
  v5 = *((_QWORD *)BindingContext + 3);
  v6 = *(const UNICODE_STRING **)(v5 + 3856);
  if ( v6 )
  {
    MaximumLength = v6->MaximumLength;
    Pool2 = (wchar_t *)ExAllocatePool2(64LL, MaximumLength, 1851868238);
    v9 = Pool2;
    if ( Pool2 )
    {
      pAdapterInstanceName->Buffer = Pool2;
      pAdapterInstanceName->Length = 0;
      pAdapterInstanceName->MaximumLength = MaximumLength;
      if ( RtlAppendUnicodeStringToString(pAdapterInstanceName, v6) < 0 )
        ExFreePoolWithTag(v9, 0);
      else
        v4 = 0;
    }
    else
    {
      v4 = -1073741670;
    }
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x33u,
      (struct _GUID *)&WPP_fdc5294f2db637a048b8ad24a033bc88_Traceguids,
      (char)BindingContext,
      v5,
      v4);
  return v4;
}
