/*
 * XREFs of PktMonClientNblLog @ 0x1C0040D42
 * Callers:
 *     PktMonClientNblLogNdis @ 0x1C0040E3A (PktMonClientNblLogNdis.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PktMonClientNblLog(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, int a6)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  __int16 v11; // [rsp+30h] [rbp-38h] BYREF
  int v12; // [rsp+32h] [rbp-36h]
  __int16 v13; // [rsp+36h] [rbp-32h]
  __int64 v14; // [rsp+38h] [rbp-30h]
  int v15; // [rsp+40h] [rbp-28h]
  int v16; // [rsp+44h] [rbp-24h]
  int v17; // [rsp+48h] [rbp-20h]
  int v18; // [rsp+4Ch] [rbp-1Ch]
  __int64 v19; // [rsp+50h] [rbp-18h]

  v12 = 0;
  v13 = 0;
  v18 = 0;
  if ( byte_1C00F5390 )
  {
    v9 = *(_QWORD *)(a1 + 24);
    if ( v9 )
    {
      if ( (*(_DWORD *)(v9 + 56) & 1) != 0 && (*(_DWORD *)(a2 + 128) & 0x8000) == 0 )
      {
        if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
        {
          v10 = *(_QWORD *)(a1 + 16);
          v11 = 40;
          v17 = a6;
          v14 = a2;
          v15 = 1;
          v16 = a3;
          v19 = 0LL;
          (*(void (__fastcall **)(_QWORD, __int64, __int16 *, _QWORD))(*((_QWORD *)&xmmword_1C00F53B0 + 1) + 40LL))(
            xmmword_1C00F53B0,
            v10,
            &v11,
            0LL);
          ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
        }
      }
    }
  }
}
