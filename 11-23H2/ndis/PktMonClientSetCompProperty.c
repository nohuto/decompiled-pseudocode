/*
 * XREFs of PktMonClientSetCompProperty @ 0x1C00D328C
 * Callers:
 *     ndisPktMonFilterRegister @ 0x1C0111C64 (ndisPktMonFilterRegister.c)
 *     ndisPktMonOpenRegister @ 0x1C0111DC0 (ndisPktMonOpenRegister.c)
 *     ndisPktMonMiniportRegister @ 0x1C011B78C (ndisPktMonMiniportRegister.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PktMonClientSetCompProperty(__int64 a1, int a2, __int64 a3, unsigned __int16 a4)
{
  unsigned int v5; // ebx
  _DWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  v7[0] = 24;
  v7[1] = a2;
  v8 = a3;
  v9 = a4;
  if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*((_QWORD *)&xmmword_1C00F53B0 + 1) + 24LL))(
           xmmword_1C00F53B0,
           *(_QWORD *)(a1 + 40),
           v7);
    ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
  }
  else
  {
    return (unsigned int)-1073741661;
  }
  return v5;
}
