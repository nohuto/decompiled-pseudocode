/*
 * XREFs of sub_18003E0C4 @ 0x18003E0C4
 * Callers:
 *     sub_18003DDF8 @ 0x18003DDF8 (sub_18003DDF8.c)
 *     sub_18003F05C @ 0x18003F05C (sub_18003F05C.c)
 * Callees:
 *     sub_18003E1EC @ 0x18003E1EC (sub_18003E1EC.c)
 *     sub_18003EF14 @ 0x18003EF14 (sub_18003EF14.c)
 *     sub_18003EF8C @ 0x18003EF8C (sub_18003EF8C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall sub_18003E0C4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned __int8 (__fastcall *a8)(__int64, __int64))
{
  __int64 v9; // rsi
  __int64 v11; // rdi
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 v15; // r14
  bool v16; // zf

  if ( a2 != a3 )
  {
    v9 = a3;
    v11 = a1;
    if ( a1 != a2 )
    {
      while ( !a8(a2, v11) )
      {
        v11 += 16LL;
        --a4;
        if ( v11 == a2 )
          return;
      }
      v13 = a2 - 16;
      do
      {
        v14 = a5;
        v15 = v9;
        v9 -= 16LL;
        --a5;
        if ( a2 == v9 )
        {
          sub_18003EF8C(v11, a2, v15);
          return;
        }
        v16 = a8(v9, v13) == 0;
        v13 = a2 - 16;
      }
      while ( v16 );
      if ( a4 == 1 )
        sub_18003EF14(v11, a2, v15);
      else
        sub_18003E1EC(v11, a2, v15, a4, v14, a6, a7, (__int64)a8);
    }
  }
}
