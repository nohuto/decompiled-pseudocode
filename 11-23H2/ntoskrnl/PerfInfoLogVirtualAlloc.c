/*
 * XREFs of PerfInfoLogVirtualAlloc @ 0x1409E7248
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1406F7430 (MiAllocateVirtualMemory.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140A47FA8 (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x140214950 (EtwTraceSiloKernelEvent.c)
 *     PsGetProcessServerSilo @ 0x14028C410 (PsGetProcessServerSilo.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

__int64 __fastcall PerfInfoLogVirtualAlloc(__int64 a1, __int64 a2, __int64 a3, int a4, __int16 a5, unsigned __int16 a6)
{
  int v6; // eax
  __int64 ProcessServerSilo; // rax
  __int64 result; // rax
  __int64 v11; // rax
  __int128 v12; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v13[2]; // [rsp+40h] [rbp-30h] BYREF
  int v14; // [rsp+50h] [rbp-20h]
  int v15; // [rsp+54h] [rbp-1Ch]
  __int128 *v16; // [rsp+58h] [rbp-18h] BYREF
  int v17; // [rsp+60h] [rbp-10h]
  int v18; // [rsp+64h] [rbp-Ch]

  v6 = *(_DWORD *)(a3 + 1088);
  v18 = 0;
  v14 = v6;
  v13[0] = a1;
  v16 = (__int128 *)v13;
  v12 = 0LL;
  v13[1] = a2;
  v15 = a4;
  v17 = 24;
  ProcessServerSilo = PsGetProcessServerSilo(a3);
  EtwTraceSiloKernelEvent(ProcessServerSilo, (int)&v16, 1, 0x20008000u, 610, 5249282);
  result = a6;
  if ( a5 != a6 )
  {
    v18 = 0;
    WORD4(v12) = a6;
    *(_QWORD *)&v12 = a1;
    v16 = &v12;
    v17 = 16;
    v11 = PsGetProcessServerSilo(a3);
    return EtwTraceSiloKernelEvent(v11, (int)&v16, 1, 0x20008000u, 649, 5249282);
  }
  return result;
}
