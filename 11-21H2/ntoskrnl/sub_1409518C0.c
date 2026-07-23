/*
 * XREFs of sub_1409518C0 @ 0x1409518C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140951944 @ 0x140951944 (sub_140951944.c)
 *     sub_140951B40 @ 0x140951B40 (sub_140951B40.c)
 *     sub_140952680 @ 0x140952680 (sub_140952680.c)
 *     sub_140952738 @ 0x140952738 (sub_140952738.c)
 */

__int64 __fastcall sub_1409518C0(__int64 a1, __int64 a2)
{
  struct _DEVICE_OBJECT *v2; // rbx
  __int64 v3; // rdi
  __int64 v5; // rcx

  v2 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  v3 = *(_QWORD *)(a2 + 8);
  if ( (unsigned __int8)sub_140952680(v2) )
    return sub_140951944(v2, v3 + 24);
  if ( (unsigned __int8)sub_140952738(v2) )
    return sub_140951B40(v5, 0LL, 0LL, v3 + 16);
  return 0LL;
}
