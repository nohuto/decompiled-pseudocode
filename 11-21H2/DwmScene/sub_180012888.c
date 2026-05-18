/*
 * XREFs of sub_180012888 @ 0x180012888
 * Callers:
 *     sub_1800122E4 @ 0x1800122E4 (sub_1800122E4.c)
 *     sub_180048430 @ 0x180048430 (sub_180048430.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall sub_180012888(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // r9
  volatile signed __int32 *v6; // rcx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  *a1 = a2;
  a1[1] = a3;
  if ( a2 )
  {
    v3 = *(_QWORD *)(a2 + 16);
    if ( !v3 || !*(_DWORD *)(v3 + 8) )
    {
      if ( a3 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(a3 + 8));
        a3 = a1[1];
      }
      v4 = 0LL;
      v7[0] = a2;
      v5 = 0LL;
      v7[1] = a3;
      if ( a3 )
      {
        v4 = a2;
        v5 = a3;
        _InterlockedIncrement((volatile signed __int32 *)(a3 + 12));
      }
      v6 = *(volatile signed __int32 **)(a2 + 16);
      *(_QWORD *)(a2 + 8) = v4;
      *(_QWORD *)(a2 + 16) = v5;
      if ( v6 )
      {
        if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
      }
      sub_180010910((__int64)v7);
    }
  }
}
