/*
 * XREFs of sub_180031B98 @ 0x180031B98
 * Callers:
 *     sub_18002F1CC @ 0x18002F1CC (sub_18002F1CC.c)
 *     sub_18003197C @ 0x18003197C (sub_18003197C.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 */

__int64 __fastcall sub_180031B98(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  volatile signed __int32 *v4; // rcx

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
    result = sub_180010530(v2);
  v4 = *(volatile signed __int32 **)(a1 + 8);
  if ( v4 )
    return sub_180010574(v4);
  return result;
}
