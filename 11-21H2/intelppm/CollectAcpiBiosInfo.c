/*
 * XREFs of CollectAcpiBiosInfo @ 0x1C0047628
 * Callers:
 *     ProcLibGlobalInit @ 0x1C00462E4 (ProcLibGlobalInit.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002630 (WPP_RECORDER_SF_D.c)
 *     GetAcpiTable @ 0x1C002B9B4 (GetAcpiTable.c)
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
        0x52u,
        (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids,
        v6);
    }
  }
  else
  {
    if ( *((_DWORD *)P + 14) )
    {
      dword_1C001E864 = 268439553;
      dword_1C001E86C = 0;
      dword_1C001E868 = *((_DWORD *)P + 14);
    }
    if ( *((_DWORD *)P + 15) )
    {
      dword_1C001E870 = 268439553;
      HIDWORD(qword_1C001E874) = 0;
      LODWORD(qword_1C001E874) = *((_DWORD *)P + 15);
    }
    if ( *((_DWORD *)P + 16) )
    {
      dword_1C001E87C = 268439553;
      dword_1C001E884 = 0;
      dword_1C001E880 = *((_DWORD *)P + 16);
    }
    if ( *((_DWORD *)P + 17) )
    {
      dword_1C001E888 = 268439553;
      HIDWORD(qword_1C001E88C) = 0;
      LODWORD(qword_1C001E88C) = *((_DWORD *)P + 17);
    }
    if ( *((_DWORD *)P + 18) )
    {
      dword_1C001E894 = 134219777;
      dword_1C001E89C = 0;
      dword_1C001E898 = *((_DWORD *)P + 18);
    }
    dword_1C001E8A0 = *((_DWORD *)P + 12);
    byte_1C001E8A6 = *((_BYTE *)P + 105);
    byte_1C001E8A7 = *((_BYTE *)P + 104);
    AcpiInfo = *((_WORD *)P + 48);
    word_1C001E862 = *((_WORD *)P + 49);
    byte_1C001E8A4 = *((_BYTE *)P + 55);
    byte_1C001E8A5 = *((_BYTE *)P + 95);
    ExFreePoolWithTag(P, (ULONG)0);
  }
  return (unsigned int)AcpiTable;
}
