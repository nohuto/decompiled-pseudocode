/*
 * XREFs of EtwTraceThreadSetName @ 0x1406ACBBC
 * Callers:
 *     NtSetInformationThread @ 0x1407337A0 (NtSetInformationThread.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140211EDC (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceThreadSetName(__int64 a1)
{
  int v1; // r10d
  unsigned __int16 *v2; // rax
  __int64 *v3; // rcx
  unsigned int v4; // edx
  unsigned __int64 v5; // rax
  _DWORD v7[4]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v8[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 *v9; // [rsp+50h] [rbp-30h]
  __int64 v10; // [rsp+58h] [rbp-28h]
  __int64 *v11; // [rsp+60h] [rbp-20h]
  __int64 v12; // [rsp+68h] [rbp-18h]

  v7[0] = *(_DWORD *)(a1 + 1224);
  v1 = 2;
  v7[1] = *(_DWORD *)(a1 + 1232);
  v8[0] = v7;
  v2 = *(unsigned __int16 **)(a1 + 1632);
  v7[2] = 0;
  v8[1] = 8LL;
  if ( v2 && (v3 = (__int64 *)*((_QWORD *)v2 + 1)) != 0LL )
  {
    v4 = *v2;
    v5 = 2048LL;
    if ( (unsigned __int16)v4 < 0x800u )
      v5 = v4;
    v9 = v3;
    v10 = (unsigned int)v5;
    if ( !(_DWORD)v5 || *((_WORD *)v3 + (v5 >> 1) - 1) )
    {
      v12 = 2LL;
      v11 = &EtwpNull;
      v1 = 3;
    }
  }
  else
  {
    v10 = 2LL;
    v9 = &EtwpNull;
  }
  return EtwTraceKernelEvent((int)v8, v1, 2u, 1352, 5249026);
}
