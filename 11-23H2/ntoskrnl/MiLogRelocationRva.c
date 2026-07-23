/*
 * XREFs of MiLogRelocationRva @ 0x1406ABDA0
 * Callers:
 *     MiCaptureImageCfgContext @ 0x1406A7EC0 (MiCaptureImageCfgContext.c)
 *     MiParseImageLoadConfig @ 0x1406A828C (MiParseImageLoadConfig.c)
 *     MiLogRelocationFaults @ 0x1406AB91C (MiLogRelocationFaults.c)
 *     MiParseComAndCetHeaders @ 0x1406AB9A4 (MiParseComAndCetHeaders.c)
 * Callees:
 *     MiOffsetToProtos @ 0x1402887D0 (MiOffsetToProtos.c)
 *     PsGetIoPriorityThread @ 0x1402A8E40 (PsGetIoPriorityThread.c)
 *     PfLogFileDataAccess @ 0x1402DFE64 (PfLogFileDataAccess.c)
 *     PfSnLogPageFault @ 0x1402E27A0 (PfSnLogPageFault.c)
 */

void __fastcall MiLogRelocationRva(unsigned int a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  __int16 v6; // di
  unsigned int *v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  unsigned int v10; // edi
  unsigned __int64 v11; // rbx
  unsigned __int64 v12[3]; // [rsp+30h] [rbp-18h] BYREF

  v12[0] = 0LL;
  v5 = a2;
  v6 = a1;
  v7 = MiOffsetToProtos(a4, a1, v12);
  if ( v7 )
  {
    v8 = (v12[0] << 12) + ((unsigned __int64)v7[9] << 9);
    if ( (PfSnNumActiveTraces || dword_140D0C198) && (int)PsGetIoPriorityThread((__int64)KeGetCurrentThread()) >= 2 )
    {
      v9 = ((unsigned __int64)(v6 & 0xFFF) + v5 + 4095) >> 12;
      v10 = v9 + 1;
      if ( (v8 & 0xFFF) == 0 )
        v10 = v9;
      v11 = v8 & 0xFFFFFFFFFFFFF000uLL;
      if ( dword_140D0C198 )
        PfLogFileDataAccess(*(_QWORD *)(a3 + 24), (__int64)KeGetCurrentThread(), v11, v10, 0);
      if ( PfSnNumActiveTraces && v10 )
      {
        do
        {
          PfSnLogPageFault(a3, v11, 2u);
          LODWORD(v11) = v11 + 4096;
          --v10;
        }
        while ( v10 );
      }
    }
  }
}
