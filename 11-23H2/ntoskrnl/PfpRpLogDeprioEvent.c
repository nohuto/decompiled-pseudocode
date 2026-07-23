/*
 * XREFs of PfpRpLogDeprioEvent @ 0x1402FA650
 * Callers:
 *     PfCheckDeprioritizeFile @ 0x1407609A4 (PfCheckDeprioritizeFile.c)
 * Callees:
 *     PfLogEvent @ 0x14028C318 (PfLogEvent.c)
 */

__int64 __fastcall PfpRpLogDeprioEvent(__int64 a1, int a2, int a3)
{
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+2Ch] [rbp-1Ch]
  int v7; // [rsp+30h] [rbp-18h]
  int v8; // [rsp+34h] [rbp-14h]

  v8 = 0;
  v6 = a2;
  v5 = dword_140D0C190;
  v4 = a1;
  v7 = a3;
  return PfLogEvent(
           30,
           dword_140C64FAC
         + (unsigned int)((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
                         + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10),
           &v4,
           0x18u);
}
