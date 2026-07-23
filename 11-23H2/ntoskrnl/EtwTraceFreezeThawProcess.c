/*
 * XREFs of EtwTraceFreezeThawProcess @ 0x1409E54BC
 * Callers:
 *     PsThawMultiProcess @ 0x1402044E4 (PsThawMultiProcess.c)
 *     PsFreezeProcess @ 0x1407EBF50 (PsFreezeProcess.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140211EDC (EtwTraceKernelEvent.c)
 *     EtwWrite @ 0x140257960 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceFreezeThawProcess(__int64 a1, char a2)
{
  const EVENT_DESCRIPTOR *v3; // rdx
  int v5; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-30h] BYREF
  __int64 v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+50h] [rbp-18h]
  int v9; // [rsp+54h] [rbp-14h]

  v5 = *(_DWORD *)(a1 + 1088);
  v6.Ptr = (ULONGLONG)&v5;
  v6.Reserved = 0;
  v6.Size = 4;
  v7 = a1 + 1128;
  v9 = 0;
  v8 = 8;
  if ( EtwpHostSiloState != -4540 && (*(_DWORD *)(EtwpHostSiloState + 4548) & 2) != 0 )
  {
    v3 = (const EVENT_DESCRIPTOR *)ProcessFreezeEvent;
    if ( !a2 )
      v3 = &ProcessThawEvent;
    EtwWrite(EtwpPsProvRegHandle, v3, 0LL, 2u, &v6);
  }
  return EtwTraceKernelEvent((int)&v6, 1, 0x40000002u, 805 - (a2 != 0), 5249282);
}
