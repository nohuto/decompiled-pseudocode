/*
 * XREFs of ExProcessCounterSetCallback @ 0x1409F6060
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     PsGetCurrentServerSilo @ 0x14028A220 (PsGetCurrentServerSilo.c)
 *     PsIsProcessInSilo @ 0x14028A27C (PsIsProcessInSilo.c)
 *     KeFlushProcessWriteBuffers @ 0x1402C02CC (KeFlushProcessWriteBuffers.c)
 *     RtlGetInterruptTimePrecise @ 0x1402C4570 (RtlGetInterruptTimePrecise.c)
 *     RtlUnicodeStringPrintf @ 0x1403C4CCC (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExpCopyProcessInfo @ 0x1407425B0 (ExpCopyProcessInfo.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x140742964 (PsGetAllocatedFullProcessImageNameEx.c)
 *     ExpSysInfoShouldSkipProcess @ 0x140742AC0 (ExpSysInfoShouldSkipProcess.c)
 *     ExGetNextProcess @ 0x140742B68 (ExGetNextProcess.c)
 *     RtlIntegerToUnicodeString @ 0x1407CF3D0 (RtlIntegerToUnicodeString.c)
 *     ExIsRestrictedCaller @ 0x1407D8AF4 (ExIsRestrictedCaller.c)
 *     PcwAddInstance @ 0x14086D920 (PcwAddInstance.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExProcessCounterSetCallback(int a1, __int64 a2)
{
  __int64 CurrentServerSilo; // rsi
  struct _PCW_BUFFER *v6; // r12
  char v7; // r14
  LARGE_INTEGER InterruptTimePrecise; // rax
  _DWORD *NextProcess; // rbx
  LARGE_INTEGER v10; // r15
  int v11; // edi
  struct _KPROCESS *v12; // rcx
  __int128 v13; // xmm0
  bool v14; // sf
  __int128 *QuadPart; // rax
  unsigned __int16 v16; // cx
  unsigned __int16 i; // r8
  __int16 v18; // ax
  __int128 v19; // [rsp+38h] [rbp-D0h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING PerformanceCounter_8; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+60h] [rbp-A8h] BYREF
  struct _PCW_DATA Data; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v24[32]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v25[14]; // [rsp+188h] [rbp+80h] BYREF
  _QWORD v26[28]; // [rsp+1F8h] [rbp+F0h] BYREF
  char v27; // [rsp+2D8h] [rbp+1D0h] BYREF
  char v28; // [rsp+2F8h] [rbp+1F0h] BYREF

  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( (unsigned int)(a1 - 2) >= 2 )
    return 0LL;
  v6 = *(struct _PCW_BUFFER **)(a2 + 24);
  v7 = (unsigned int)ExIsRestrictedCaller(1) != 0;
  KeFlushProcessWriteBuffers(1);
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  NextProcess = PsIdleProcess;
  v10 = InterruptTimePrecise;
  v11 = 0;
  if ( PsIdleProcess )
  {
    do
    {
      memset(v26, 0, 0xD8uLL);
      memset(v24, 0, sizeof(v24));
      memset(v25, 0, 0x68uLL);
      PerformanceCounter.QuadPart = 0LL;
      v19 = 0LL;
      PerformanceCounter_8 = 0LL;
      DestinationString_8 = 0LL;
      if ( !ExpSysInfoShouldSkipProcess((__int64)NextProcess) && PsIsProcessInSilo(v12, CurrentServerSilo) )
      {
        v11 = ExpCopyProcessInfo((__int64)v24, (__int64)NextProcess, 0, v25);
        if ( v11 < 0 )
          break;
        v26[1] = v24[5];
        v26[2] = v24[6];
        v26[0] = v24[5] + v24[6];
        v26[3] = v24[14];
        v26[4] = v24[15];
        v26[5] = __PAIR64__(v24[12], v24[16]);
        v26[6] = v24[17];
        v26[7] = v24[18];
        v26[8] = v24[24];
        v26[9] = v24[23];
        v26[10] = v24[25];
        LODWORD(v26[11]) = NextProcess[380];
        HIDWORD(v26[11]) = v24[9];
        v26[12] = *((_QWORD *)NextProcess + 288);
        v26[13] = __PAIR64__(v24[11], v24[10]);
        v26[14] = v24[20];
        v26[15] = v24[22];
        v26[17] = v24[27];
        v26[18] = v24[26] + v24[27];
        v26[19] = v24[28];
        v26[21] = v24[30];
        v26[16] = v24[26];
        v26[20] = v24[29];
        v26[22] = v24[29] + v24[30];
        v26[23] = v24[31];
        v26[24] = v24[1];
        v26[25] = 10000000LL;
        v26[26] = v10.QuadPart;
        PerformanceCounter.QuadPart = 0LL;
        if ( NextProcess == PsIdleProcess )
        {
          v13 = *(_OWORD *)L"\b\n";
          HIDWORD(v26[5]) = 0;
        }
        else if ( NextProcess == (_DWORD *)PsInitialSystemProcess )
        {
          v13 = *(_OWORD *)&ExpSystemProcessName;
        }
        else if ( NextProcess == (_DWORD *)PsSecureSystemProcess )
        {
          v13 = *(_OWORD *)&ExpSecureSystemProcessName;
          v26[7] = qword_140C65BA8 << 12;
          v26[24] = qword_140C65BA8 << 12;
        }
        else if ( (NextProcess[543] & 0x40000000) != 0 )
        {
          v13 = *(_OWORD *)L"$&";
        }
        else
        {
          v14 = (int)PsGetAllocatedFullProcessImageNameEx((__int64)NextProcess) < 0;
          QuadPart = (__int128 *)PerformanceCounter.QuadPart;
          if ( v14 )
            QuadPart = (__int128 *)*((_QWORD *)NextProcess + 184);
          v13 = *QuadPart;
        }
        v19 = v13;
        v16 = (unsigned __int16)v13 >> 1;
        if ( (unsigned __int16)((unsigned __int16)v13 >> 1) >= 4u
          && *(_WORD *)(*((_QWORD *)&v13 + 1) + 2LL * v16 - 8) == 46
          && (*(_WORD *)(*((_QWORD *)&v13 + 1) + 2LL * v16 - 6) | 0x20) == 0x65
          && (*(_WORD *)(*((_QWORD *)&v13 + 1) + 2LL * v16 - 4) | 0x20) == 0x78
          && (*(_WORD *)(*((_QWORD *)&v13 + 1) + 2LL * v16 - 2) | 0x20) == 0x65 )
        {
          v16 -= 4;
        }
        for ( i = v16; i; --i )
        {
          if ( *(_WORD *)(*((_QWORD *)&v13 + 1) + 2LL * i - 2) == 92 )
            break;
        }
        *(_DWORD *)&PerformanceCounter_8.Length = 1310720;
        LOWORD(v19) = 2 * (v16 - i);
        WORD1(v19) = v19;
        *((_QWORD *)&v19 + 1) = *((_QWORD *)&v13 + 1) + 2LL * i;
        PerformanceCounter_8.Buffer = (wchar_t *)&v27;
        RtlIntegerToUnicodeString(v26[13], 0xAu, &PerformanceCounter_8);
        v18 = v19;
        *(_DWORD *)&DestinationString_8.Length = 0x800000;
        if ( (unsigned __int16)(126 - PerformanceCounter_8.Length) < (unsigned __int16)v19 )
          v18 = 126 - PerformanceCounter_8.Length;
        LOWORD(v19) = v18;
        DestinationString_8.Buffer = (wchar_t *)&v28;
        RtlUnicodeStringPrintf(&DestinationString_8, L"%wZ:%wZ", &v19, &PerformanceCounter_8);
        Data.Data = v26;
        Data.Size = 216;
        v11 = PcwAddInstance(v6, &DestinationString_8, v26[13], 1u, &Data);
        if ( PerformanceCounter.QuadPart )
          ExFreePoolWithTag((PVOID)PerformanceCounter.QuadPart, 0);
        if ( v11 < 0 )
          break;
      }
      if ( NextProcess == PsIdleProcess )
        NextProcess = 0LL;
      NextProcess = ExGetNextProcess(NextProcess, v7);
    }
    while ( NextProcess );
    if ( NextProcess )
    {
      if ( NextProcess != PsIdleProcess )
        ObfDereferenceObjectWithTag(NextProcess, 0x6E457350u);
    }
  }
  return (unsigned int)v11;
}
