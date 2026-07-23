/*
 * XREFs of PfTTraceListAdd @ 0x14075EEC8
 * Callers:
 *     PfTGenerateTrace @ 0x14079CD94 (PfTGenerateTrace.c)
 *     PfpSectInfoHandleFullBuffer @ 0x1407DD0B0 (PfpSectInfoHandleFullBuffer.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230810 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230950 (ExReleaseFastMutex.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     PfTTraceListFree @ 0x140760630 (PfTTraceListFree.c)
 *     PfTTraceListTrim @ 0x14097F5AC (PfTTraceListTrim.c)
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
  ExAcquireFastMutex(&stru_140C65370);
  v2 = (unsigned int)dword_140C6535C;
  v3 = dword_140C65358 < (unsigned int)dword_140C6535C;
  if ( *(_DWORD *)(a1 + 28) == 1 )
  {
    v4 = &qword_140C65348;
    v2 = (unsigned int)dword_140C65364;
    v5 = &dword_140C65360;
    if ( dword_140C65360 + 1 == dword_140C65364 )
      ++HIDWORD(xmmword_140C65450);
  }
  else
  {
    v5 = &dword_140C65358;
    v4 = &qword_140C65338;
    if ( dword_140C65358 + 1 == dword_140C6535C )
      ++DWORD2(xmmword_140C65450);
    dword_140C65368 = 1;
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
  if ( v4 == &qword_140C65338 && (__int64 *)*v4 == v4 )
    dword_140C65368 = 0;
  if ( v3 && dword_140C65358 >= (unsigned int)dword_140C6535C )
    PfTAccessTracingCleanup(&PfTGlobals, &PfKernelGlobals, 2LL);
  KeSetEvent(qword_140C653A8, 0, 0);
  ExReleaseFastMutex(&stru_140C65370);
  return PfTTraceListFree(v8);
}
