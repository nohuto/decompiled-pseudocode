/*
 * XREFs of sub_180057AF0 @ 0x180057AF0
 * Callers:
 *     sub_180018FC0 @ 0x180018FC0 (sub_180018FC0.c)
 * Callees:
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180011C7C @ 0x180011C7C (sub_180011C7C.c)
 *     sub_180015604 @ 0x180015604 (sub_180015604.c)
 *     sub_180015678 @ 0x180015678 (sub_180015678.c)
 *     sub_180032650 @ 0x180032650 (sub_180032650.c)
 *     unknown_libname_6 @ 0x18003A9D4 (unknown_libname_6.c)
 *     sub_18005851C @ 0x18005851C (sub_18005851C.c)
 */

int __fastcall sub_180057AF0(__int64 a1, _QWORD *a2)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  __int64 *v5; // rcx
  _QWORD *v6; // rcx
  __int64 *v7; // r9
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v10; // [rsp+28h] [rbp-10h]

  v2 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  sub_180011C7C((struct _Mtx_internal_imp_t *)(a1 + 128));
  v5 = *(__int64 **)(a1 + 40);
  if ( v5 != *(__int64 **)(a1 + 48) )
  {
    while ( !sub_180015678(v5, a2) )
    {
      v5 = v7;
      if ( v7 == *(__int64 **)(a1 + 48) )
        return Mtx_unlock(v2);
    }
    unknown_libname_6(v7, *(__int64 **)(a1 + 48), v6);
    sub_180032650(*(_QWORD *)(a1 + 48) - 16LL);
    *(_QWORD *)(a1 + 48) -= 16LL;
    sub_180015604(&v9, a2);
    sub_18005851C(a1 + 88, &v9);
    if ( v10 )
      sub_180010574(v10);
  }
  return Mtx_unlock(v2);
}
