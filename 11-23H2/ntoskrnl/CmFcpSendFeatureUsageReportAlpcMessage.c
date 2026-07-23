/*
 * XREFs of CmFcpSendFeatureUsageReportAlpcMessage @ 0x14041A2A4
 * Callers:
 *     CmFcpManagerPublishFeatureUsageDataBuffers @ 0x1406800EC (CmFcpManagerPublishFeatureUsageDataBuffers.c)
 * Callees:
 *     AlpcInitializeMessageAttribute @ 0x14032BCE0 (AlpcInitializeMessageAttribute.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwAlpcDeletePortSection @ 0x14041C0F0 (ZwAlpcDeletePortSection.c)
 *     ZwAlpcSendWaitReceivePort @ 0x14041C270 (ZwAlpcSendWaitReceivePort.c)
 *     CmFcpCreateAlpcSectionView @ 0x140680D58 (CmFcpCreateAlpcSectionView.c)
 */

__int64 __fastcall CmFcpSendFeatureUsageReportAlpcMessage(HANDLE PortHandle, void *Src, int a3)
{
  NTSTATUS AlpcSectionView; // ebx
  ULONG_PTR BufferLength; // [rsp+40h] [rbp-49h] BYREF
  ALPC_HANDLE SectionHandle; // [rsp+48h] [rbp-41h] BYREF
  _BYTE SendMessageA[48]; // [rsp+50h] [rbp-39h] BYREF
  __int64 v11; // [rsp+80h] [rbp-9h]
  ULONG_PTR RequiredBufferSize; // [rsp+88h] [rbp-1h] BYREF
  _ALPC_MESSAGE_ATTRIBUTES Buffer[2]; // [rsp+90h] [rbp+7h] BYREF
  __int128 v14; // [rsp+A0h] [rbp+17h]
  __int64 v15; // [rsp+B0h] [rbp+27h]

  SectionHandle = 0LL;
  v15 = 0LL;
  v11 = 0LL;
  BufferLength = 56LL;
  *(_OWORD *)&Buffer[0].AllocatedAttributes = 0LL;
  v14 = 0LL;
  memset(SendMessageA, 0, sizeof(SendMessageA));
  AlpcSectionView = AlpcInitializeMessageAttribute(0x40000000u, Buffer, 0x28uLL, &RequiredBufferSize);
  if ( AlpcSectionView >= 0 )
  {
    AlpcSectionView = CmFcpCreateAlpcSectionView(
                        PortHandle,
                        Src,
                        (unsigned int)(8 * a3),
                        Buffer,
                        (__int64)&SectionHandle);
    if ( AlpcSectionView >= 0 )
    {
      *(_DWORD *)&SendMessageA[24] = 0;
      *(_WORD *)&SendMessageA[4] = -32767;
      *(_DWORD *)SendMessageA = 3670032;
      *(_DWORD *)&SendMessageA[40] = 2;
      LODWORD(v11) = a3;
      AlpcSectionView = ZwAlpcSendWaitReceivePort(
                          PortHandle,
                          0x20000u,
                          (PPORT_MESSAGE)SendMessageA,
                          Buffer,
                          (PPORT_MESSAGE)SendMessageA,
                          &BufferLength,
                          0LL,
                          0LL);
      if ( AlpcSectionView >= 0 )
      {
        if ( BufferLength >= 0x30 && SendMessageA[4] == 2 )
        {
          AlpcSectionView = 0;
          if ( *(int *)&SendMessageA[44] < 0 )
            AlpcSectionView = *(_DWORD *)&SendMessageA[44];
        }
        else
        {
          AlpcSectionView = -1073741823;
        }
      }
    }
    if ( SectionHandle )
      ZwAlpcDeletePortSection(PortHandle, 0, SectionHandle);
  }
  return (unsigned int)AlpcSectionView;
}
