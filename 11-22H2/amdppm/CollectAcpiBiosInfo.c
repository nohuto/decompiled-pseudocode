/*
 * XREFs of CollectAcpiBiosInfo @ 0x1C003F608
 * Callers:
 *     ProcLibGlobalInit @ 0x1C004052C (ProcLibGlobalInit.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004950 (WPP_RECORDER_SF_d.c)
 *     GetAcpiTable @ 0x1C002BFF8 (GetAcpiTable.c)
 */

__int64 __fastcall CollectAcpiBiosInfo(ULONG a1, __int64 a2, const CHAR *a3, const CHAR *a4)
{
  int AcpiTable; // ebx
  int v6; // [rsp+28h] [rbp-10h]
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  P = 0LL;
  AcpiTable = (unsigned int)GetAcpiTable(a1, (ULONG)&P, a3, a4);
  if ( AcpiTable >= 0 )
  {
    if ( *((_DWORD *)P + 14) )
    {
      dword_1C0012E04 = 268439553;
      dword_1C0012E0C = 0;
      dword_1C0012E08 = *((_DWORD *)P + 14);
    }
    if ( *((_DWORD *)P + 15) )
    {
      dword_1C0012E10 = 268439553;
      HIDWORD(qword_1C0012E14) = 0;
      LODWORD(qword_1C0012E14) = *((_DWORD *)P + 15);
    }
    if ( *((_DWORD *)P + 16) )
    {
      dword_1C0012E1C = 268439553;
      dword_1C0012E24 = 0;
      dword_1C0012E20 = *((_DWORD *)P + 16);
    }
    if ( *((_DWORD *)P + 17) )
    {
      dword_1C0012E28 = 268439553;
      HIDWORD(qword_1C0012E2C) = 0;
      LODWORD(qword_1C0012E2C) = *((_DWORD *)P + 17);
    }
    if ( *((_DWORD *)P + 18) )
    {
      dword_1C0012E34 = 134219777;
      dword_1C0012E3C = 0;
      dword_1C0012E38 = *((_DWORD *)P + 18);
    }
    dword_1C0012E40 = *((_DWORD *)P + 12);
    byte_1C0012E46 = *((_BYTE *)P + 105);
    byte_1C0012E47 = *((_BYTE *)P + 104);
    AcpiInfo = *((_WORD *)P + 48);
    word_1C0012E02 = *((_WORD *)P + 49);
    byte_1C0012E44 = *((_BYTE *)P + 55);
    byte_1C0012E45 = *((_BYTE *)P + 95);
    ExFreePoolWithTag(P, (ULONG)0);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = AcpiTable;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x58u,
      (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids,
      v6);
  }
  return (unsigned int)AcpiTable;
}
