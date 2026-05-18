/*
 * XREFs of sub_18005E678 @ 0x18005E678
 * Callers:
 *     sub_18005E678 @ 0x18005E678 (sub_18005E678.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_18005E94C @ 0x18005E94C (sub_18005E94C.c)
 *     sub_1800601A0 @ 0x1800601A0 (sub_1800601A0.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18005E678 @ 0x18005E678 (sub_18005E678.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18005E678(__int64 a1, __int64 a2, char *a3)
{
  char *i; // rbx
  char *v6; // rdi
  volatile signed __int32 *v7; // rcx
  __int64 result; // rax

  for ( i = a3; !i[25]; result = sub_180010884(v6, 0x48uLL) )
  {
    sub_18005E678(a1, a2, *((_QWORD *)i + 2));
    v6 = i;
    i = *(char **)i;
    v7 = (volatile signed __int32 *)*((_QWORD *)v6 + 5);
    if ( v7 )
    {
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  return result;
}
