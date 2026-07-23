/*
 * XREFs of EtwpWriteProcessEvent @ 0x1407552CC
 * Callers:
 *     EtwTraceProcess @ 0x1407550EC (EtwTraceProcess.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x140214950 (EtwTraceSiloKernelEvent.c)
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     ExAcquireRundownProtection_0 @ 0x14028B5F0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     PsGetProcessServerSilo @ 0x14028C410 (PsGetProcessServerSilo.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     EtwpPsProvTraceProcess @ 0x1407525C0 (EtwpPsProvTraceProcess.c)
 *     EtwpBuildProcessEvent @ 0x140754718 (EtwpBuildProcessEvent.c)
 *     RtlFreeAnsiString @ 0x140756A30 (RtlFreeAnsiString.c)
 */

void __fastcall EtwpWriteProcessEvent(__int64 a1, __int16 a2, int *a3, ULONG_PTR *a4, unsigned __int16 *a5, __int64 a6)
{
  char v6; // r14
  char v11; // si
  __int64 ProcessServerSilo; // rax
  PVOID *v13; // [rsp+50h] [rbp-B0h]
  __int64 v14; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v15; // [rsp+68h] [rbp-98h]
  _STRING AnsiString; // [rsp+70h] [rbp-90h] BYREF
  int v17[4]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v18; // [rsp+90h] [rbp-70h]
  __int64 v19; // [rsp+A0h] [rbp-60h]
  $115DCDF994C6370D29323EAB0E0C9502 v20; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v21[18]; // [rsp+E0h] [rbp-20h] BYREF

  LODWORD(v14) = 0;
  v6 = 0;
  v15 = a6;
  v19 = 0LL;
  *(_OWORD *)v17 = 0LL;
  v11 = 1;
  v18 = 0LL;
  memset(&v20, 0, sizeof(v20));
  AnsiString = 0LL;
  if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)a1 )
  {
    if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1112)) )
    {
      KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)&v20);
      v6 = 1;
    }
    else
    {
      v11 = 0;
    }
  }
  v13 = (PVOID *)v15;
  *(_OWORD *)a5 = 0LL;
  EtwpBuildProcessEvent(a1, a2, v11, (__int64)v17, a3, (__int64)v21, (unsigned int *)&v14, a4, &AnsiString, a5, v13);
  if ( v6 )
  {
    KiUnstackDetachProcess(&v20);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1112));
  }
  if ( EtwpHostSiloState != -4540 && (*(_DWORD *)(EtwpHostSiloState + 4540) & 1) != 0 )
    EtwpPsProvTraceProcess(a1, v19, (unsigned int *)a4, a3, a2);
  ProcessServerSilo = PsGetProcessServerSilo(a1);
  EtwTraceSiloKernelEvent(ProcessServerSilo, (int)v21, v14, 1u, a2, 5249284);
  RtlFreeAnsiString(&AnsiString);
}
