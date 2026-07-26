/*
 * XREFs of ?ndisIMQueueDeviceInstance@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_UNICODE_STRING@@PEAX@Z @ 0x1C0063AE8
 * Callers:
 *     NdisIMInitializeDeviceInstanceEx @ 0x1C0063E60 (NdisIMInitializeDeviceInstanceEx.c)
 * Callees:
 *     WPP_RECORDER_SF_qqqL @ 0x1C000CF50 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000D050 (WPP_RECORDER_SF_qqq.c)
 */

__int64 __fastcall ndisIMQueueDeviceInstance(
        struct _NDIS_M_DRIVER_BLOCK *a1,
        const struct _UNICODE_STRING *a2,
        void *a3)
{
  unsigned int v6; // ebx
  __int64 Pool2; // rax
  int v8; // edx
  _NDIS_PENDING_IM_INSTANCE *v9; // rdi
  unsigned __int16 v10; // ax
  _NDIS_PENDING_IM_INSTANCE *i; // r14

  v6 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x31u,
      &WPP_38a12df014cc3a137b3c95c6dd994a94_Traceguids,
      (char)a1,
      (char)a2,
      a3);
  Pool2 = ExAllocatePool2(64LL, a2->Length + 34LL, 1768178766);
  v9 = (_NDIS_PENDING_IM_INSTANCE *)Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 8) = a3;
    v10 = a2->Length + 2;
    v9->Name.Length = 0;
    v9->Name.MaximumLength = v10;
    v9->Name.Buffer = (wchar_t *)&v9[1];
    RtlUpcaseUnicodeString(&v9->Name, a2, 0);
    for ( i = a1->PendingDeviceList; ; i = i->Next )
    {
      if ( !i )
      {
        v9->Next = a1->PendingDeviceList;
        a1->PendingDeviceList = v9;
        goto LABEL_10;
      }
      if ( RtlEqualUnicodeString(&v9->Name, &i->Name, 1u) )
        break;
    }
    ExFreePoolWithTag(v9, 0);
    v6 = 65539;
  }
  else
  {
    v6 = -1073741670;
  }
LABEL_10:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      1u,
      0x32u,
      &WPP_38a12df014cc3a137b3c95c6dd994a94_Traceguids,
      (char)a1,
      (char)a2,
      (char)a3,
      v6);
  return v6;
}
