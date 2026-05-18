/*
 * XREFs of sub_1800713E4 @ 0x1800713E4
 * Callers:
 *     sub_180071A9C @ 0x180071A9C (sub_180071A9C.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800713E4(__int64 *a1, __int64 *a2, __int64 (__fastcall *a3)(__int64 *, __int64 *))
{
  __int64 *i; // rbx
  __int64 *v7; // r14
  __int64 *v8; // rsi
  __int64 *v9; // rcx
  __int64 *v10; // rcx
  char v12; // al
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h]

  if ( a1 != a2 )
  {
    for ( i = a1 + 2; i != a2; i += 2 )
    {
      v7 = i;
      v13 = *i;
      v14 = i[1];
      *i = 0LL;
      i[1] = 0LL;
      v8 = i;
      if ( (unsigned __int8)a3(&v13, a1) )
      {
        if ( i != a1 )
        {
          do
          {
            v9 = v8;
            v8 -= 2;
            sub_180011020(v9, v8);
          }
          while ( v8 != a1 );
        }
        v10 = a1;
      }
      else
      {
        while ( 1 )
        {
          v8 -= 2;
          v12 = a3(&v13, v8);
          v10 = v7;
          if ( !v12 )
            break;
          sub_180011020(v7, v8);
          v7 = v8;
        }
      }
      sub_180011020(v10, &v13);
      if ( v14 )
        sub_180010530(v14);
    }
  }
  return a2;
}
