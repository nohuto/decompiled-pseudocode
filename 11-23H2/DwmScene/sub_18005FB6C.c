/*
 * XREFs of sub_18005FB6C @ 0x18005FB6C
 * Callers:
 *     sub_18005EAD0 @ 0x18005EAD0 (sub_18005EAD0.c)
 *     sub_1800E7B6C @ 0x1800E7B6C (sub_1800E7B6C.c)
 * Callees:
 *     sub_18005F1F4 @ 0x18005F1F4 (sub_18005F1F4.c)
 */

__int64 __fastcall sub_18005FB6C(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
    return sub_18005F1F4(*(void ***)(a1 + 8), *(_QWORD *)a1);
  return result;
}
