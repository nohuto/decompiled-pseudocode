/*
 * XREFs of sub_18003A7E4 @ 0x18003A7E4
 * Callers:
 *     sub_18003A780 @ 0x18003A780 (sub_18003A780.c)
 *     sub_18003AAE0 @ 0x18003AAE0 (sub_18003AAE0.c)
 *     sub_18003ADE8 @ 0x18003ADE8 (sub_18003ADE8.c)
 *     sub_180063B2C @ 0x180063B2C (sub_180063B2C.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_18003A984 @ 0x18003A984 (sub_18003A984.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18003A7E4(__int64 *a1, __int64 *a2, __int64 (__fastcall *a3)(__int64 *, __int64 *))
{
  __int64 *i; // rdi
  __int64 *v7; // r14
  __int64 *v8; // rcx
  __int64 *j; // rbx
  char v11; // al
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+28h] [rbp-20h]

  if ( a1 != a2 )
  {
    for ( i = a1 + 2; i != a2; i += 2 )
    {
      v7 = i;
      v12 = *i;
      v13 = i[1];
      *i = 0LL;
      i[1] = 0LL;
      if ( (unsigned __int8)a3(&v12, a1) )
      {
        sub_18003A984(a1, i, i + 2);
        v8 = a1;
      }
      else
      {
        for ( j = i; ; v7 = j )
        {
          j -= 2;
          v11 = a3(&v12, j);
          v8 = v7;
          if ( !v11 )
            break;
          sub_180011020(v7, j);
        }
      }
      sub_180011020(v8, &v12);
      if ( v13 )
        sub_180010530(v13);
    }
  }
  return a2;
}
