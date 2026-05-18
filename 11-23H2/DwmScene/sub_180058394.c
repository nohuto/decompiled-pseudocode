/*
 * XREFs of sub_180058394 @ 0x180058394
 * Callers:
 *     sub_180019608 @ 0x180019608 (sub_180019608.c)
 * Callees:
 *     sub_18002B3EC @ 0x18002B3EC (sub_18002B3EC.c)
 *     sub_18002B8E0 @ 0x18002B8E0 (sub_18002B8E0.c)
 *     sub_18005793C @ 0x18005793C (sub_18005793C.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall sub_180058394(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  _Mtx_t v5[3]; // [rsp+20h] [rbp-18h] BYREF

  sub_18002B3EC((__int64)v5, (struct _Mtx_internal_imp_t *)(a1 + 128));
  if ( *(_DWORD *)(a1 + 36) )
  {
    *(_DWORD *)(a1 + 36) = 0;
    sub_18005793C(a1, v5, v2, v3);
  }
  return sub_18002B8E0((__int64)v5);
}
