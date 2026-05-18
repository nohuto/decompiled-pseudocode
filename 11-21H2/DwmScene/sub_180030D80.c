/*
 * XREFs of sub_180030D80 @ 0x180030D80
 * Callers:
 *     sub_180030D80 @ 0x180030D80 (sub_180030D80.c)
 *     sub_180032C3C @ 0x180032C3C (sub_180032C3C.c)
 *     sub_180033018 @ 0x180033018 (sub_180033018.c)
 *     sub_18003C790 @ 0x18003C790 (sub_18003C790.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180030D80 @ 0x180030D80 (sub_180030D80.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180030D80(__int64 a1, __int64 a2, char *a3)
{
  char *i; // rbx
  char *v6; // rdi
  volatile signed __int32 *v7; // rcx
  __int64 result; // rax

  for ( i = a3; !i[25]; result = sub_180010884(v6, 0x40uLL) )
  {
    sub_180030D80(a1, a2, *((_QWORD *)i + 2));
    v6 = i;
    i = *(char **)i;
    sub_180010910((__int64)(v6 + 48));
    v7 = (volatile signed __int32 *)*((_QWORD *)v6 + 5);
    if ( v7 )
    {
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  return result;
}
