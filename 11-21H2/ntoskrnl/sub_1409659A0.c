/*
 * XREFs of sub_1409659A0 @ 0x1409659A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetVersion @ 0x1406C2630 (RtlGetVersion.c)
 */

NTSTATUS __fastcall sub_1409659A0(_OSVERSIONINFOW *a1)
{
  NTSTATUS result; // eax
  int v3; // edx

  result = RtlGetVersion(a1);
  if ( result >= 0 )
  {
    a1->szCSDVersion[0] = 0;
    v3 = a1->dwOSVersionInfoSize - 284;
    a1->dwMajorVersion = 6;
    a1->dwMinorVersion = 3;
    a1->dwBuildNumber = 9600;
    if ( (v3 & 0xFFFFFFF7) == 0 )
      a1[1].dwOSVersionInfoSize = 0;
  }
  return result;
}
