/*
 * XREFs of sub_180039E78 @ 0x180039E78
 * Callers:
 *     sub_180039BAC @ 0x180039BAC (sub_180039BAC.c)
 *     sub_18003AAE0 @ 0x18003AAE0 (sub_18003AAE0.c)
 * Callees:
 *     sub_180039F98 @ 0x180039F98 (sub_180039F98.c)
 *     sub_18003AA30 @ 0x18003AA30 (sub_18003AA30.c)
 *     sub_18003AA8C @ 0x18003AA8C (sub_18003AA8C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall sub_180039E78(
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
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 v15; // r14
  bool v16; // zf

  if ( a2 != a3 )
  {
    v9 = a3;
    while ( a1 != a2 )
    {
      if ( a8(a2, a1) )
      {
        v13 = a2 - 16;
        do
        {
          v14 = a5;
          v15 = v9;
          v9 -= 16LL;
          --a5;
          if ( a2 == v9 )
          {
            sub_18003AA8C(a1, a2, v15);
            return;
          }
          v16 = a8(v9, v13) == 0;
          v13 = a2 - 16;
        }
        while ( v16 );
        if ( a4 == 1 )
          sub_18003AA30(a1, a2, v15);
        else
          sub_180039F98(a1, a2, v15, a4, v14, a6, a7, (__int64)a8);
        return;
      }
      a1 += 16LL;
      --a4;
    }
  }
}
