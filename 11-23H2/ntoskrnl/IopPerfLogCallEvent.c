/*
 * XREFs of IopPerfLogCallEvent @ 0x1405598D8
 * Callers:
 *     IopPerfCallDriver @ 0x14045FC8A (IopPerfCallDriver.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140211EDC (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

__int64 __fastcall IopPerfLogCallEvent(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r9
  int v4; // eax
  __int64 v5; // rcx
  _DWORD v7[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v8; // [rsp+38h] [rbp-38h]
  __int64 v9; // [rsp+40h] [rbp-30h]
  __int64 v10; // [rsp+48h] [rbp-28h]
  int v11; // [rsp+50h] [rbp-20h]
  _DWORD *v12; // [rsp+58h] [rbp-18h] BYREF
  int v13; // [rsp+60h] [rbp-10h]
  int v14; // [rsp+64h] [rbp-Ch]

  v9 = 0LL;
  v3 = *(_QWORD *)(a2 + 184);
  v7[0] = *(unsigned __int8 *)(v3 - 72);
  v7[1] = *(unsigned __int8 *)(v3 - 71);
  v4 = *(_DWORD *)(a2 + 16);
  v8 = *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(v3 - 72) + 112);
  v10 = a2;
  v11 = a3;
  if ( (v4 & 8) != 0 )
  {
    v5 = *(_QWORD *)(a2 + 24);
    if ( v5 )
      v5 = *(_QWORD *)(v5 + 192);
  }
  else
  {
    v5 = *(_QWORD *)(a2 + 192);
  }
  v9 = v5;
  if ( v5 )
  {
    if ( *(_QWORD *)(v5 + 24) )
      v5 = *(_QWORD *)(v5 + 24);
    v9 = v5;
  }
  v14 = 0;
  v12 = v7;
  v13 = 36;
  return EtwTraceKernelEvent((int)&v12, 1, 0x20000010u, 290, 4200450);
}
