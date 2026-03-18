/*
 * XREFs of AcpiArblibAllocateArbiterInstance @ 0x1C00ABA30
 * Callers:
 *     AcpiArblibInitializeArbiter @ 0x1C0049B58 (AcpiArblibInitializeArbiter.c)
 * Callees:
 *     AMLIGetNSObjectNameSegment @ 0x1C0001794 (AMLIGetNSObjectNameSegment.c)
 *     AMLIGetParent @ 0x1C000A040 (AMLIGetParent.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     RtlStringCchPrintfW @ 0x1C001DBA0 (RtlStringCchPrintfW.c)
 *     RtlStringCchPrintfExW @ 0x1C001DBE0 (RtlStringCchPrintfExW.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 *     AMLIReferenceHandleEx @ 0x1C00648D0 (AMLIReferenceHandleEx.c)
 */

wchar_t *__fastcall AcpiArblibAllocateArbiterInstance(__int64 a1, unsigned int a2)
{
  int v4; // eax
  wchar_t *Pool2; // rax
  wchar_t *v6; // rbx
  signed __int32 v7; // esi
  const wchar_t *v8; // rax
  volatile signed __int32 *v10; // rbp
  __int64 v11; // rcx
  volatile signed __int32 *v12; // rax
  NTSTRSAFE_PWSTR v13; // r15
  size_t v14; // rdi
  unsigned int v15; // r14d
  volatile signed __int32 *v16; // r12
  __int64 v17; // rcx
  __int64 v18; // rbp
  size_t pcchRemaining; // [rsp+90h] [rbp+18h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+98h] [rbp+20h] BYREF

  if ( a2 > 6 )
    return 0LL;
  v4 = 74;
  if ( !_bittest(&v4, a2) )
    return 0LL;
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, 480LL, 1097884481LL);
  v6 = Pool2;
  if ( !Pool2 )
    return 0LL;
  v7 = _InterlockedExchangeAdd(&AcpiArbiterInstanceCount, 1u);
  ppszDestEnd = Pool2;
  pcchRemaining = 64LL;
  if ( a2 == 1 )
  {
    v8 = L"Port";
  }
  else
  {
    v8 = L"Memory";
    if ( a2 != 3 )
      v8 = L"Bus Number";
  }
  if ( RtlStringCchPrintfExW(v6, 0x40uLL, &ppszDestEnd, &pcchRemaining, 0, L"ACPI %s ", v8) < 0 )
  {
    ExFreePoolWithTag(v6, 0);
    return 0LL;
  }
  v10 = *(volatile signed __int32 **)(a1 + 760);
  AMLIReferenceHandleEx((__int64)v10);
  v12 = (volatile signed __int32 *)AMLIGetParent(v11);
  v13 = ppszDestEnd;
  if ( v12 )
  {
    AMLIDereferenceHandleEx(v12);
    v14 = pcchRemaining;
    if ( pcchRemaining >= 5 )
    {
      AMLIGetNSObjectNameSegment((__int64)v10);
      RtlStringCchPrintfW(v13, v14, L"%C%C%C%C");
      v15 = 4;
      v14 -= 4LL;
      v16 = (volatile signed __int32 *)AMLIGetParent((__int64)v10);
      AMLIDereferenceHandleEx(v10);
      v17 = (__int64)v16;
      while ( 1 )
      {
        v18 = AMLIGetParent(v17);
        if ( !v18 )
          goto LABEL_18;
        if ( v14 < 6 || v15 >= 0x40 )
          break;
        memmove(v13 + 5, v13, 2LL * v15);
        v15 += 5;
        v14 -= 5LL;
        AMLIGetNSObjectNameSegment((__int64)v16);
        RtlStringCchPrintfW(v13, 5uLL, L"%C%C%C%C");
        v13[4] = 46;
        AMLIDereferenceHandleEx(v16);
        v17 = v18;
        v16 = (volatile signed __int32 *)v18;
      }
    }
  }
  else
  {
    v14 = pcchRemaining;
  }
  RtlStringCchPrintfW(v13, v14, L"%x", (unsigned int)(v7 + 1));
LABEL_18:
  v6[63] = 0;
  return v6;
}
