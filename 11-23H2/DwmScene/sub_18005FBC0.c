/*
 * XREFs of sub_18005FBC0 @ 0x18005FBC0
 * Callers:
 *     sub_18005EFFC @ 0x18005EFFC (sub_18005EFFC.c)
 * Callees:
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 */

__int64 __fastcall sub_18005FBC0(__int64 a1)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v3 = *(volatile signed __int32 **)(v2 + 40);
    if ( v3 )
      sub_180010574(v3);
  }
  return sub_180031794(a1);
}
