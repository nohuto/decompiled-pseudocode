/*
 * XREFs of NdisQueryAdapterInstanceName @ 0x1C0097360
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qZL @ 0x1C002AA58 (WPP_RECORDER_SF_qZL.c)
 */

NDIS_STATUS __stdcall NdisQueryAdapterInstanceName(PNDIS_STRING pAdapterInstanceName, NDIS_HANDLE NdisBindingHandle)
{
  __int64 v2; // rdi
  char v3; // bp
  NDIS_STATUS v5; // ebx
  UNICODE_STRING *v6; // rdi
  unsigned __int16 MaximumLength; // r15
  wchar_t *Pool2; // rax
  wchar_t *v9; // r14

  v2 = *((_QWORD *)NdisBindingHandle + 2);
  v3 = (char)NdisBindingHandle;
  v5 = -1073741823;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x34u,
      (struct _GUID *)&WPP_2fca99124a243983c47039c87b76db5a_Traceguids,
      NdisBindingHandle);
  v6 = *(UNICODE_STRING **)(v2 + 3856);
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
      {
        ExFreePoolWithTag(v9, 0);
        pAdapterInstanceName->Buffer = 0LL;
      }
      else
      {
        v5 = 0;
      }
    }
    else
    {
      v5 = -1073741670;
    }
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)NdisBindingHandle,
      6u,
      0x35u,
      (struct _GUID *)&WPP_2fca99124a243983c47039c87b76db5a_Traceguids,
      v3,
      &v6->Length,
      v5);
  return v5;
}
