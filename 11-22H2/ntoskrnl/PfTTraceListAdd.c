/*
 * XREFs of PfTTraceListAdd @ 0x14075F1E8
 * Callers:
 *     PfTGenerateTrace @ 0x14079D0B4 (PfTGenerateTrace.c)
 *     PfpSectInfoHandleFullBuffer @ 0x1407DD360 (PfpSectInfoHandleFullBuffer.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     PfTTraceListFree @ 0x140760950 (PfTTraceListFree.c)
 *     PfTTraceListTrim @ 0x14097F45C (PfTTraceListTrim.c)
 *     PfTAccessTracingCleanup @ 0x140A874E0 (PfTAccessTracingCleanup.c)
 */

__int64 __fastcall PfTTraceListAdd(__int64 a1)
{
  __int64 v2; // rdx
  BOOL v3; // esi
  __int64 *v4; // rbx
  int *v5; // rcx
  __int64 **v6; // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v8[1] = v8;
  v8[0] = v8;
  ExAcquireFastMutex(&stru_140C65470);
  v2 = (unsigned int)dword_140C6545C;
  v3 = dword_140C65458 < (unsigned int)dword_140C6545C;
  if ( *(_DWORD *)(a1 + 28) == 1 )
  {
    v4 = &qword_140C65448;
    v2 = (unsigned int)dword_140C65464;
    v5 = &dword_140C65460;
    if ( dword_140C65460 + 1 == dword_140C65464 )
      ++HIDWORD(xmmword_140C65550);
  }
  else
  {
    v5 = &dword_140C65458;
    v4 = &qword_140C65438;
    if ( dword_140C65458 + 1 == dword_140C6545C )
      ++DWORD2(xmmword_140C65550);
    dword_140C65468 = 1;
  }
  v6 = (__int64 **)v4[1];
  if ( *v6 != v4 )
    __fastfail(3u);
  *(_QWORD *)a1 = v4;
  *(_QWORD *)(a1 + 8) = v6;
  *v6 = (__int64 *)a1;
  v4[1] = a1;
  if ( ++*v5 > (unsigned int)v2 )
    PfTTraceListTrim(*(unsigned int *)(a1 + 28), v2, v8);
  if ( v4 == &qword_140C65438 && (__int64 *)*v4 == v4 )
    dword_140C65468 = 0;
  if ( v3 && dword_140C65458 >= (unsigned int)dword_140C6545C )
    PfTAccessTracingCleanup(&PfTGlobals, &PfKernelGlobals, 2LL);
  KeSetEvent(qword_140C654A8, 0, 0);
  ExReleaseFastMutex(&stru_140C65470);
  return PfTTraceListFree(v8);
}
