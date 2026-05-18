/*
 * XREFs of sub_1800702D0 @ 0x1800702D0
 * Callers:
 *     sub_18007048C @ 0x18007048C (sub_18007048C.c)
 * Callees:
 *     sub_180011C7C @ 0x180011C7C (sub_180011C7C.c)
 *     sub_180070704 @ 0x180070704 (sub_180070704.c)
 */

__int64 __fastcall sub_1800702D0(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v3 = a2;
  sub_180011C7C((struct _Mtx_internal_imp_t *)(a1 + 104));
  sub_180070704(a1 + 200, &v5, &v6);
  if ( v5 != *(_QWORD *)(a1 + 200) )
    v3 = *(_QWORD *)(v5 + 40);
  Mtx_unlock((_Mtx_t)(a1 + 104));
  return v3;
}
