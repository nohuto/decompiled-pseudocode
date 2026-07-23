/*
 * XREFs of sub_1405D3634 @ 0x1405D3634
 * Callers:
 *     sub_140399184 @ 0x140399184 (sub_140399184.c)
 *     sub_14098D49C @ 0x14098D49C (sub_14098D49C.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 */

void __fastcall sub_1405D3634(__int64 a1, struct _EVENT_DATA_DESCRIPTOR *a2)
{
  REGHANDLE v3; // rbx

  if ( byte_140C5AE16 )
  {
    v3 = CallbackContext;
    if ( EtwEventEnabled(CallbackContext, &stru_140011C58) )
      EtwWriteEx(v3, &stru_140011C58, 0LL, 0, 0LL, 0LL, 7u, a2);
  }
}
