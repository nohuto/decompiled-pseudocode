/*
 * XREFs of sub_1407F2AD0 @ 0x1407F2AD0
 * Callers:
 *     sub_1403B69DC @ 0x1403B69DC (sub_1403B69DC.c)
 *     sub_1405DC0A0 @ 0x1405DC0A0 (sub_1405DC0A0.c)
 *     sub_1405DC12C @ 0x1405DC12C (sub_1405DC12C.c)
 *     sub_1407F2A20 @ 0x1407F2A20 (sub_1407F2A20.c)
 *     sub_1407F2D00 @ 0x1407F2D00 (sub_1407F2D00.c)
 *     sub_1407FE640 @ 0x1407FE640 (sub_1407FE640.c)
 *     sub_1407FE82C @ 0x1407FE82C (sub_1407FE82C.c)
 *     sub_140828EBC @ 0x140828EBC (sub_140828EBC.c)
 *     sub_140996EE0 @ 0x140996EE0 (sub_140996EE0.c)
 *     sub_14099CD30 @ 0x14099CD30 (sub_14099CD30.c)
 *     sub_14099CDDC @ 0x14099CDDC (sub_14099CDDC.c)
 * Callees:
 *     PsGetHostSilo @ 0x140203DC0 (PsGetHostSilo.c)
 *     sub_1402A1770 @ 0x1402A1770 (sub_1402A1770.c)
 *     sub_140300B40 @ 0x140300B40 (sub_140300B40.c)
 *     ZwPowerInformation @ 0x14041C340 (ZwPowerInformation.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406F83A0 @ 0x1406F83A0 (sub_1406F83A0.c)
 */

__int64 __fastcall sub_1407F2AD0(int a1, __int64 a2, int a3, unsigned int *a4)
{
  char v6; // si
  unsigned int v7; // r14d
  _QWORD *v8; // rdi
  int v9; // r14d
  unsigned int *v10; // r15
  int v12; // [rsp+38h] [rbp-49h]
  int v13; // [rsp+3Ch] [rbp-45h] BYREF
  __int64 OutputBuffer; // [rsp+40h] [rbp-41h] BYREF
  _QWORD InputBuffer[18]; // [rsp+48h] [rbp-39h] BYREF

  v13 = 0;
  v12 = 0;
  OutputBuffer = 0LL;
  v6 = 0;
  v7 = 0;
  memset((char *)InputBuffer + 4, 0, 0x5CuLL);
  LODWORD(InputBuffer[0]) = 21;
  if ( ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x60u, &OutputBuffer, 8u) < 0 )
    return v7;
  v8 = (_QWORD *)sub_1402A1770(0LL);
  do
  {
    if ( v8 && *(_QWORD *)(v8[171] + 880LL) != PsGetHostSilo() )
    {
      if ( a3 == 2 )
      {
        v8 = (_QWORD *)sub_1402A1770(v8);
        if ( v8 )
          continue;
      }
      else
      {
        v7 = -1073741811;
      }
      v6 = 1;
    }
    else
    {
      if ( a3 == 2 && v8 )
      {
        v9 = 1;
        v13 = sub_140300B40((__int64)v8);
        v10 = (unsigned int *)&v13;
        v8 = (_QWORD *)sub_1402A1770(v8);
        if ( !v8 )
          v6 = 1;
      }
      else
      {
        v6 = 1;
        v9 = a3;
        v10 = a4;
        if ( a4 )
          v12 = *a4;
        else
          v12 = -1;
      }
      if ( OutputBuffer )
      {
        memset(InputBuffer, 0, 0x60uLL);
        LODWORD(InputBuffer[0]) = 21;
        InputBuffer[1] = OutputBuffer;
        LODWORD(InputBuffer[3]) = 417;
        LODWORD(InputBuffer[2]) = 1000 * dword_140C0C648;
        HIDWORD(InputBuffer[2]) = v12;
        InputBuffer[4] = KeGetCurrentThread();
        InputBuffer[10] = InputBuffer;
        InputBuffer[9] = &sub_14099CE40;
        ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x60u, 0LL, 0);
      }
      v7 = sub_1406F83A0(a1, a2, v9, v10);
      if ( OutputBuffer )
      {
        memset(InputBuffer, 0, 0x60uLL);
        LODWORD(InputBuffer[0]) = 21;
        InputBuffer[1] = OutputBuffer;
        ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x60u, 0LL, 0);
      }
    }
  }
  while ( !v6 );
  if ( OutputBuffer )
  {
    memset(InputBuffer, 0, 0x60uLL);
    LODWORD(InputBuffer[0]) = 21;
    InputBuffer[1] = OutputBuffer;
    LOBYTE(InputBuffer[11]) = 1;
    ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x60u, 0LL, 0);
  }
  return v7;
}
