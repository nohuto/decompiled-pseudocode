/*
 * XREFs of NtGdiGetCertificateByHandle @ 0x1C00CE290
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCertificate@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAEK@Z @ 0x1C00CE4F0 (-GetCertificate@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAEK@Z.c)
 *     ?GetCertificateSize@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAK@Z @ 0x1C00CE910 (-GetCertificateSize@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAK@Z.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 */

__int64 __fastcall NtGdiGetCertificateByHandle(COPM *a1, enum _DXGKMDT_CERTIFICATE_TYPE a2, void *a3, unsigned int a4)
{
  unsigned int v8; // ebx
  unsigned __int8 *Pool2; // rsi
  int CertificateSize; // edi
  COPM *v11; // rcx
  SIZE_T Length[5]; // [rsp+30h] [rbp-28h] BYREF

  v8 = 0;
  LODWORD(Length[0]) = 0;
  Pool2 = 0LL;
  CertificateSize = COPM::GetCertificateSize(a1, a1, a2, (unsigned int *)Length);
  if ( CertificateSize >= 0 )
  {
    if ( a4 < LODWORD(Length[0]) )
    {
      CertificateSize = -1071774450;
    }
    else
    {
      Pool2 = (unsigned __int8 *)ExAllocatePool2(258LL, LODWORD(Length[0]));
      Length[1] = (SIZE_T)Pool2;
      if ( Pool2 )
      {
        CertificateSize = COPM::GetCertificate(v11, a1, a2, Pool2, Length[0]);
        if ( CertificateSize >= 0 )
        {
          ProbeForWrite(a3, LODWORD(Length[0]), 1u);
          memmove(a3, Pool2, LODWORD(Length[0]));
        }
      }
      else
      {
        CertificateSize = -1073741801;
      }
    }
  }
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x4D504F47u);
  if ( CertificateSize < 0 )
    return (unsigned int)CertificateSize;
  return v8;
}
