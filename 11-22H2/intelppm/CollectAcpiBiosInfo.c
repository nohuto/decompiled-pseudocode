/*
 * XREFs of CollectAcpiBiosInfo @ 0x1C00484AC
 * Callers:
 *     ProcLibGlobalInit @ 0x1C0048C54 (ProcLibGlobalInit.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000325C (WPP_RECORDER_SF_D.c)
 *     GetAcpiTable @ 0x1C0026AF8 (GetAcpiTable.c)
 */

__int64 __fastcall CollectAcpiBiosInfo(ULONG a1, __int64 a2, const CHAR *a3, const CHAR *a4)
{
  int AcpiTable; // ebx
  int v6; // [rsp+28h] [rbp-10h]
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  P = 0LL;
  AcpiTable = (unsigned int)GetAcpiTable(a1, (ULONG)&P, a3, a4);
  if ( AcpiTable < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = AcpiTable;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x58u,
        (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids,
        v6);
    }
  }
  else
  {
    if ( *((_DWORD *)P + 14) )
    {
      dword_1C001F9C4 = 268439553;
      dword_1C001F9CC = 0;
      dword_1C001F9C8 = *((_DWORD *)P + 14);
    }
    if ( *((_DWORD *)P + 15) )
    {
      dword_1C001F9D0 = 268439553;
      HIDWORD(qword_1C001F9D4) = 0;
      LODWORD(qword_1C001F9D4) = *((_DWORD *)P + 15);
    }
    if ( *((_DWORD *)P + 16) )
    {
      dword_1C001F9DC = 268439553;
      dword_1C001F9E4 = 0;
      dword_1C001F9E0 = *((_DWORD *)P + 16);
    }
    if ( *((_DWORD *)P + 17) )
    {
      dword_1C001F9E8 = 268439553;
      HIDWORD(qword_1C001F9EC) = 0;
      LODWORD(qword_1C001F9EC) = *((_DWORD *)P + 17);
    }
    if ( *((_DWORD *)P + 18) )
    {
      dword_1C001F9F4 = 134219777;
      dword_1C001F9FC = 0;
      dword_1C001F9F8 = *((_DWORD *)P + 18);
    }
    dword_1C001FA00 = *((_DWORD *)P + 12);
    byte_1C001FA06 = *((_BYTE *)P + 105);
    byte_1C001FA07 = *((_BYTE *)P + 104);
    AcpiInfo = *((_WORD *)P + 48);
    word_1C001F9C2 = *((_WORD *)P + 49);
    byte_1C001FA04 = *((_BYTE *)P + 55);
    byte_1C001FA05 = *((_BYTE *)P + 95);
    ExFreePoolWithTag(P, (ULONG)0);
  }
  return (unsigned int)AcpiTable;
}
