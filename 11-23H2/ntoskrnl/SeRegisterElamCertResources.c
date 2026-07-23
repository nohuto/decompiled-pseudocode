/*
 * XREFs of SeRegisterElamCertResources @ 0x140810F50
 * Callers:
 *     ExpQueryElamCertInfo @ 0x1409F6D30 (ExpQueryElamCertInfo.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x140B3C0CC (PipInitializeEarlyLaunchDrivers.c)
 * Callees:
 *     LdrResSearchResource @ 0x140759E30 (LdrResSearchResource.c)
 *     SepParseElamCertResources @ 0x1408100DC (SepParseElamCertResources.c)
 */

NTSTATUS __fastcall SeRegisterElamCertResources(unsigned __int64 a1, __int64 a2, char a3)
{
  NTSTATUS result; // eax
  _QWORD v4[5]; // [rsp+40h] [rbp-28h] BYREF
  unsigned int *v5; // [rsp+78h] [rbp+10h] BYREF
  __int64 v6; // [rsp+88h] [rbp+20h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  v4[2] = 0LL;
  v4[0] = L"MSELAMCERTINFOID";
  v4[1] = L"MICROSOFTELAMCERTIFICATEINFO";
  result = LdrResSearchResource(a1, v4, 3u, a3 != 0 ? 4624 : 4112, &v5, &v6, 0LL, 0LL);
  if ( result >= 0 )
    return SepParseElamCertResources(v5, v6);
  return result;
}
