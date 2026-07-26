/*
 * XREFs of ?ndisReferenceProtocolByName@@YAJPEBU_UNICODE_STRING@@PEAPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x1C014AAA8
 * Callers:
 *     ndisHandleProtocolUnloadNotification @ 0x1C006F184 (ndisHandleProtocolUnloadNotification.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C014A20C (ndisHandleProtocolReconfigNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_Z @ 0x1C00107A4 (WPP_RECORDER_SF_Z.c)
 *     ?ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z @ 0x1C001E30C (-ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z.c)
 *     memcmp @ 0x1C0035F50 (memcmp.c)
 */

__int64 __fastcall ndisReferenceProtocolByName(
        PCUNICODE_STRING SourceString,
        struct _NDIS_PROTOCOL_BLOCK **a2,
        char a3,
        unsigned __int8 a4)
{
  unsigned int v8; // edi
  KIRQL v9; // r12
  _NDIS_PROTOCOL_BLOCK *NextProtocol; // rbx
  unsigned __int16 Length; // bp
  unsigned __int16 v12; // ax
  wchar_t *Buffer; // rcx
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF

  DestinationString = 0LL;
  v8 = -1073741772;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      5u,
      0x25u,
      (struct _GUID *)&WPP_2fca99124a243983c47039c87b76db5a_Traceguids,
      &SourceString->Length);
  DestinationString.Length = SourceString->Length;
  DestinationString.MaximumLength = DestinationString.Length + 2;
  DestinationString.Buffer = (wchar_t *)ExAllocatePool2(
                                          66LL,
                                          (unsigned __int16)(DestinationString.Length + 2),
                                          1953711182);
  if ( DestinationString.Buffer )
  {
    RtlUpcaseUnicodeString(&DestinationString, SourceString, 0);
    v9 = KeAcquireSpinLockRaiseToDpc(&ndisProtocolListLock);
    if ( *a2 )
      NextProtocol = (*a2)->NextProtocol;
    else
      NextProtocol = ndisProtocolList;
    if ( NextProtocol )
    {
      Length = DestinationString.Length;
      do
      {
        if ( a3 )
        {
          if ( NextProtocol != *a2 )
          {
            v12 = NextProtocol->Name.Length;
            if ( Length != v12 )
            {
              if ( Length < v12 )
                v12 = Length;
              if ( !memcmp(DestinationString.Buffer, NextProtocol->Name.Buffer, v12) )
              {
LABEL_16:
                if ( ndisReferenceProtocol(NextProtocol, a4) )
                  v8 = 0;
                else
                  NextProtocol = 0LL;
                break;
              }
            }
          }
        }
        else
        {
          if ( RtlEqualUnicodeString(&DestinationString, &NextProtocol->Name, 1u) )
            goto LABEL_16;
          Length = DestinationString.Length;
        }
        NextProtocol = NextProtocol->NextProtocol;
      }
      while ( NextProtocol );
    }
    KeReleaseSpinLock(&ndisProtocolListLock, v9);
    Buffer = DestinationString.Buffer;
    *a2 = NextProtocol;
    ExFreePoolWithTag(Buffer, 0);
  }
  else
  {
    *a2 = 0LL;
    v8 = -1073741670;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      5u,
      0x26u,
      (struct _GUID *)&WPP_2fca99124a243983c47039c87b76db5a_Traceguids,
      (char)*a2,
      v8);
  return v8;
}
