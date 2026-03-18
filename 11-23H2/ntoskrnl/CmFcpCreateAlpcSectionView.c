/*
 * XREFs of CmFcpCreateAlpcSectionView @ 0x140680D58
 * Callers:
 *     CmFcpSendFeatureUsageReportAlpcMessage @ 0x140419F14 (CmFcpSendFeatureUsageReportAlpcMessage.c)
 * Callees:
 *     AlpcGetMessageAttribute @ 0x14032BA10 (AlpcGetMessageAttribute.c)
 *     ZwAlpcCreatePortSection @ 0x14041BCE0 (ZwAlpcCreatePortSection.c)
 *     ZwAlpcCreateSectionView @ 0x14041BD20 (ZwAlpcCreateSectionView.c)
 *     ZwAlpcDeletePortSection @ 0x14041BD60 (ZwAlpcDeletePortSection.c)
 *     memmove @ 0x140435700 (memmove.c)
 */

__int64 __fastcall CmFcpCreateAlpcSectionView(__int64 a1, const void *a2, size_t a3, _DWORD *a4, _QWORD *a5)
{
  char *MessageAttribute; // rbx
  int PortSection; // edi

  MessageAttribute = AlpcGetMessageAttribute(a4, 0x40000000);
  PortSection = ZwAlpcCreatePortSection(a1, 0x40000LL);
  if ( PortSection >= 0 )
  {
    *(_DWORD *)MessageAttribute = 0;
    *((_QWORD *)MessageAttribute + 2) = 0LL;
    *((_QWORD *)MessageAttribute + 1) = 0LL;
    *((_QWORD *)MessageAttribute + 3) = a3;
    PortSection = ZwAlpcCreateSectionView(a1, 0LL);
    if ( PortSection >= 0 && *((_QWORD *)MessageAttribute + 2) )
    {
      *(_DWORD *)MessageAttribute = 393216;
      a4[1] |= 0x40000000u;
      memmove(*((void **)MessageAttribute + 2), a2, a3);
      *a5 = 0LL;
    }
    else
    {
      ZwAlpcDeletePortSection(a1, 0LL);
      *(_OWORD *)MessageAttribute = 0LL;
      *((_OWORD *)MessageAttribute + 1) = 0LL;
    }
  }
  return (unsigned int)PortSection;
}
