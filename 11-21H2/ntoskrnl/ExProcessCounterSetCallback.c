/*
 * XREFs of ExProcessCounterSetCallback @ 0x1409F5F90
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     RtlUnicodeStringPrintf @ 0x1402D17BC (RtlUnicodeStringPrintf.c)
 *     KeFlushProcessWriteBuffers @ 0x1402F374C (KeFlushProcessWriteBuffers.c)
 *     PsGetCurrentServerSilo @ 0x1402F61B0 (PsGetCurrentServerSilo.c)
 *     PsIsProcessInSilo @ 0x140300B74 (PsIsProcessInSilo.c)
 *     SmIsCompressionProcess @ 0x14030263C (SmIsCompressionProcess.c)
 *     RtlGetInterruptTimePrecise @ 0x140303490 (RtlGetInterruptTimePrecise.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExIsRestrictedCaller @ 0x1406C5900 (ExIsRestrictedCaller.c)
 *     RtlIntegerToUnicodeString @ 0x14075AC60 (RtlIntegerToUnicodeString.c)
 *     ExpCopyProcessInfo @ 0x1407B6430 (ExpCopyProcessInfo.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x1407B66E0 (PsGetAllocatedFullProcessImageNameEx.c)
 *     ExpSysInfoShouldSkipProcess @ 0x1407B69B8 (ExpSysInfoShouldSkipProcess.c)
 *     ExGetNextProcess @ 0x1407B69F0 (ExGetNextProcess.c)
 *     PcwAddInstance @ 0x1407E18E0 (PcwAddInstance.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExProcessCounterSetCallback(int a1, __int64 a2)
{
  __int64 CurrentServerSilo; // rsi
  struct _PCW_BUFFER *v6; // r12
  char IsRestrictedCaller; // r14
  __int64 InterruptTimePrecise; // rax
  __int64 *NextProcess; // rbx
  __int64 v10; // r15
  int v11; // edi
  struct _KPROCESS *v12; // rcx
  __int128 v13; // xmm0
  __int64 v14; // rcx
  bool v15; // sf
  __int128 *QuadPart; // rax
  unsigned __int16 v17; // cx
  unsigned __int16 i; // r8
  __int16 v19; // ax
  __int128 v20; // [rsp+38h] [rbp-D0h] BYREF
  LARGE_INTEGER String; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING String_8; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+60h] [rbp-A8h] BYREF
  struct _PCW_DATA Data; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v25[32]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v26[14]; // [rsp+188h] [rbp+80h] BYREF
  _QWORD v27[28]; // [rsp+1F8h] [rbp+F0h] BYREF
  char v28; // [rsp+2D8h] [rbp+1D0h] BYREF
  char v29; // [rsp+2F8h] [rbp+1F0h] BYREF

  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( (unsigned int)(a1 - 2) >= 2 )
    return 0LL;
  v6 = *(struct _PCW_BUFFER **)(a2 + 24);
  IsRestrictedCaller = ExIsRestrictedCaller(1);
  KeFlushProcessWriteBuffers(1);
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&String);
  NextProcess = (__int64 *)PsIdleProcess;
  v10 = InterruptTimePrecise;
  v11 = 0;
  if ( PsIdleProcess )
  {
    do
    {
      memset(v27, 0, 0xD8uLL);
      memset(v25, 0, sizeof(v25));
      memset(v26, 0, 0x68uLL);
      String.QuadPart = 0LL;
      v20 = 0LL;
      String_8 = 0LL;
      DestinationString_8 = 0LL;
      if ( !ExpSysInfoShouldSkipProcess((__int64)NextProcess) && PsIsProcessInSilo(v12, CurrentServerSilo) )
      {
        v11 = ExpCopyProcessInfo((__int64)v25, (__int64)NextProcess, 0, v26);
        if ( v11 < 0 )
          break;
        v27[1] = v25[5];
        v27[2] = v25[6];
        v27[0] = v25[5] + v25[6];
        v27[3] = v25[14];
        v27[4] = v25[15];
        v27[5] = __PAIR64__(v25[12], v25[16]);
        v27[6] = v25[17];
        v27[7] = v25[18];
        v27[8] = v25[24];
        v27[9] = v25[23];
        v27[10] = v25[25];
        LODWORD(v27[11]) = *((_DWORD *)NextProcess + 380);
        HIDWORD(v27[11]) = v25[9];
        v27[12] = NextProcess[288];
        v27[13] = __PAIR64__(v25[11], v25[10]);
        v27[14] = v25[20];
        v27[15] = v25[22];
        v27[17] = v25[27];
        v27[18] = v25[26] + v25[27];
        v27[19] = v25[28];
        v27[21] = v25[30];
        v27[16] = v25[26];
        v27[20] = v25[29];
        v27[22] = v25[29] + v25[30];
        v27[23] = v25[31];
        v27[24] = v25[1];
        v27[25] = 10000000LL;
        v27[26] = v10;
        String.QuadPart = 0LL;
        if ( NextProcess == PsIdleProcess )
        {
          v13 = *(_OWORD *)L"\b\n";
          HIDWORD(v27[5]) = 0;
        }
        else if ( NextProcess == (__int64 *)PsInitialSystemProcess )
        {
          v13 = *(_OWORD *)ExpSystemProcessName;
        }
        else if ( NextProcess == (__int64 *)PsSecureSystemProcess )
        {
          v13 = *(_OWORD *)ExpSecureSystemProcessName;
          v27[7] = qword_140C50848 << 12;
          v27[24] = qword_140C50848 << 12;
        }
        else if ( SmIsCompressionProcess(NextProcess) )
        {
          v13 = *(_OWORD *)L"$&";
        }
        else
        {
          v15 = (int)PsGetAllocatedFullProcessImageNameEx(v14, &String) < 0;
          QuadPart = (__int128 *)String.QuadPart;
          if ( v15 )
            QuadPart = (__int128 *)NextProcess[184];
          v13 = *QuadPart;
        }
        v20 = v13;
        v17 = (unsigned __int16)v13 >> 1;
        if ( (unsigned __int16)((unsigned __int16)v13 >> 1) >= 4u
          && *(_WORD *)(*((_QWORD *)&v13 + 1) + 2LL * v17 - 8) == 46
          && (*(_WORD *)(*((_QWORD *)&v13 + 1) + 2LL * v17 - 6) | 0x20) == 0x65
          && (*(_WORD *)(*((_QWORD *)&v13 + 1) + 2LL * v17 - 4) | 0x20) == 0x78
          && (*(_WORD *)(*((_QWORD *)&v13 + 1) + 2LL * v17 - 2) | 0x20) == 0x65 )
        {
          v17 -= 4;
        }
        for ( i = v17; i; --i )
        {
          if ( *(_WORD *)(*((_QWORD *)&v13 + 1) + 2LL * i - 2) == 92 )
            break;
        }
        *(_DWORD *)&String_8.Length = 1310720;
        LOWORD(v20) = 2 * (v17 - i);
        WORD1(v20) = v20;
        *((_QWORD *)&v20 + 1) = *((_QWORD *)&v13 + 1) + 2LL * i;
        String_8.Buffer = (wchar_t *)&v28;
        RtlIntegerToUnicodeString(v27[13], 0xAu, &String_8);
        v19 = v20;
        *(_DWORD *)&DestinationString_8.Length = 0x800000;
        if ( (unsigned __int16)(126 - String_8.Length) < (unsigned __int16)v20 )
          v19 = 126 - String_8.Length;
        LOWORD(v20) = v19;
        DestinationString_8.Buffer = (wchar_t *)&v29;
        RtlUnicodeStringPrintf(&DestinationString_8, L"%wZ:%wZ", &v20, &String_8);
        Data.Data = v27;
        Data.Size = 216;
        v11 = PcwAddInstance(v6, &DestinationString_8, v27[13], 1u, &Data);
        if ( String.QuadPart )
          ExFreePoolWithTag((PVOID)String.QuadPart, 0);
        if ( v11 < 0 )
          break;
      }
      if ( NextProcess == PsIdleProcess )
        NextProcess = 0LL;
      NextProcess = ExGetNextProcess(NextProcess, IsRestrictedCaller);
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
