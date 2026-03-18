/*
 * XREFs of GetWindowsDirectoryDevicePath @ 0x1C004F4EC
 * Callers:
 *     ?ConvertHandleAndVerifyLoc@@YAPEAXPEAX@Z @ 0x1C004F23C (-ConvertHandleAndVerifyLoc@@YAPEAXPEAX@Z.c)
 * Callees:
 *     ?GetSymbolicLink@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C004F6A8 (-GetSymbolicLink@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     wcsrchr @ 0x1C00D6088 (wcsrchr.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall GetWindowsDirectoryDevicePath(PUNICODE_STRING DestinationString)
{
  PVOID v1; // rbx
  WCHAR *v3; // r14
  int v4; // eax
  __int64 Pool2; // rdi
  PVOID v6; // rsi
  __int64 v7; // rbx
  int SymbolicLink; // esi
  WCHAR *v9; // rsi
  wchar_t *v10; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  wchar_t *Str[2]; // [rsp+20h] [rbp-E0h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+30h] [rbp-D0h] BYREF
  PVOID BackTrace[20]; // [rsp+40h] [rbp-C0h] BYREF
  PVOID v17[20]; // [rsp+E0h] [rbp-20h] BYREF

  v1 = gpLeakTrackingAllocator;
  v3 = 0LL;
  v4 = *((_DWORD *)gpLeakTrackingAllocator + 10) & 0x626B7355;
  *(_OWORD *)Str = 0LL;
  Destination = 0LL;
  if ( v4 == 1651209045 && (v12 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
    while ( *((_DWORD *)gpLeakTrackingAllocator + v12) != 1651209045 )
    {
      if ( ++v12 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_2;
    }
    Pool2 = ExAllocatePool2(260LL, 536LL);
    if ( !Pool2 )
      goto LABEL_28;
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              v1,
                              Pool2,
                              BackTrace) )
      {
        Pool2 += 16LL;
        goto LABEL_3;
      }
      goto LABEL_27;
    }
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                             v1,
                             Pool2,
                             BackTrace) )
    {
LABEL_27:
      ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_28:
      Pool2 = 0LL;
    }
  }
  else
  {
LABEL_2:
    Pool2 = ExAllocatePool2(260LL, 520LL);
  }
LABEL_3:
  v6 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x626B7355) == 0x626B7355
    && (v13 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
    while ( *((_DWORD *)gpLeakTrackingAllocator + v13) != 1651209045 )
    {
      if ( ++v13 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_4;
    }
    v7 = ExAllocatePool2(260LL, 536LL);
    if ( !v7 )
      goto LABEL_39;
    memset(v17, 0, sizeof(v17));
    RtlCaptureStackBackTrace(0, 0x14u, v17, 0LL);
    if ( (unsigned __int64)(v7 & 0xFFF) + 16 < 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(v6, v7, v17) )
      {
        v7 += 16LL;
        goto LABEL_5;
      }
      goto LABEL_38;
    }
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(v6, v7, v17) )
    {
LABEL_38:
      ExFreePoolWithTag((PVOID)v7, 0);
LABEL_39:
      v7 = 0LL;
    }
  }
  else
  {
LABEL_4:
    v7 = ExAllocatePool2(260LL, 520LL);
  }
LABEL_5:
  if ( Pool2 && v7 )
  {
    Str[1] = (wchar_t *)Pool2;
    LODWORD(Str[0]) = 34078720;
    SymbolicLink = GetSymbolicLink((PUNICODE_STRING)Str, L"\\SystemRoot");
    if ( SymbolicLink >= 0 )
    {
      Destination.Buffer = (PWSTR)v7;
      *(_DWORD *)&Destination.Length = 34078720;
      while ( 1 )
      {
        v9 = v3;
        v10 = wcsrchr(Str[1], 0x5Cu);
        v3 = v10;
        if ( v9 )
          *v9 = 92;
        if ( !v10 )
          break;
        *v10 = 0;
        SymbolicLink = GetSymbolicLink(&Destination, Str[1]);
        if ( SymbolicLink >= 0 )
        {
          *v3 = 92;
          RtlAppendUnicodeToString(&Destination, v3);
          RtlCopyUnicodeString(DestinationString, &Destination);
          goto LABEL_14;
        }
      }
      RtlCopyUnicodeString(DestinationString, (PCUNICODE_STRING)Str);
      SymbolicLink = 0;
    }
    goto LABEL_14;
  }
  SymbolicLink = -1073741801;
  if ( Pool2 )
LABEL_14:
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (void *)Pool2);
  if ( v7 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (void *)v7);
  return (unsigned int)SymbolicLink;
}
