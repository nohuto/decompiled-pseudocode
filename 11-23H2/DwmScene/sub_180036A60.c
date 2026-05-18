/*
 * XREFs of sub_180036A60 @ 0x180036A60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002B3EC @ 0x18002B3EC (sub_18002B3EC.c)
 *     sub_18002B8E0 @ 0x18002B8E0 (sub_18002B8E0.c)
 *     sub_1800309CC @ 0x1800309CC (sub_1800309CC.c)
 *     sub_18003699C @ 0x18003699C (sub_18003699C.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall sub_180036A60(__int64 a1)
{
  _Mtx_t v3[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  sub_18002B3EC((__int64)v3, (struct _Mtx_internal_imp_t *)(a1 + 1280));
  while ( 1 )
  {
    v4 = *(int *)(a1 + 1200);
    sub_1800309CC((_Cnd_t)(a1 + 1208), v3, &v4);
    if ( *(_BYTE *)(a1 + 1360) )
      break;
    sub_18003699C(a1);
  }
  return sub_18002B8E0((__int64)v3);
}
