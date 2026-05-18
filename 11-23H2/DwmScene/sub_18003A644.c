/*
 * XREFs of sub_18003A644 @ 0x18003A644
 * Callers:
 *     sub_180039F98 @ 0x180039F98 (sub_180039F98.c)
 * Callees:
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180032650 @ 0x180032650 (sub_180032650.c)
 *     sub_18003A984 @ 0x18003A984 (sub_18003A984.c)
 *     sub_18003AD70 @ 0x18003AD70 (sub_18003AD70.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003A644(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        unsigned __int8 (__fastcall *a5)(__int64 *, __int64 *))
{
  __int64 *v5; // rbx
  __int64 v9; // r14
  _QWORD *v10; // r13
  __int64 *v11; // rbp
  __int64 *v12; // rsi
  __int64 result; // rax

  v5 = a4;
  v9 = sub_18003AD70(a2, a3, a4);
  v10 = (_QWORD *)(a3 - 16);
  sub_180011020(v10, (__int64 *)(a2 - 16));
  v11 = (__int64 *)(v9 - 16);
  v12 = (__int64 *)(a2 - 32);
  do
  {
    while ( 1 )
    {
      v10 -= 2;
      if ( !a5(v11, v12) )
        break;
      sub_180011020(v10, v12);
      if ( a1 == v12 )
      {
        sub_180011020(v10 - 2, v11);
        result = sub_18003A984(v5, v11, v10 - 2);
        while ( v5 != (__int64 *)v9 )
        {
          result = sub_180032650((__int64)v5);
          v5 += 2;
        }
        return result;
      }
      v12 -= 2;
    }
    sub_180011020(v10, v11);
    v11 -= 2;
  }
  while ( v5 != v11 );
  sub_180011020(v10 - 2, v12);
  sub_18003A984(a1, v12, v10 - 2);
  result = (__int64)sub_180011020(a1, v5);
  while ( v5 != (__int64 *)v9 )
  {
    result = sub_180032650((__int64)v5);
    v5 += 2;
  }
  return result;
}
