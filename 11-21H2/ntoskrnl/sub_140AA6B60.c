/*
 * XREFs of sub_140AA6B60 @ 0x140AA6B60
 * Callers:
 *     <none>
 * Callees:
 *     sub_1405FDF9C @ 0x1405FDF9C (sub_1405FDF9C.c)
 */

__int64 __fastcall sub_140AA6B60(__int64 a1)
{
  __int64 v2; // rax
  const char *v4; // rcx

  sub_1405FDF9C("IRP_MJ_SYSTEM_CONTROL.");
  v2 = *(unsigned __int8 *)(a1 + 1);
  if ( (unsigned __int8)v2 <= 9u )
    return sub_1405FDF9C(off_140A75310[v2]);
  v4 = "IRP_MN_BOGUS";
  if ( (_BYTE)v2 != 0xFF )
    v4 = "(Bogus)";
  return sub_1405FDF9C(v4);
}
