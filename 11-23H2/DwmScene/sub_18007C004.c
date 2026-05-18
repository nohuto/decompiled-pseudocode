/*
 * XREFs of sub_18007C004 @ 0x18007C004
 * Callers:
 *     sub_18007C0AC @ 0x18007C0AC (sub_18007C0AC.c)
 *     sub_1800E9BA0 @ 0x1800E9BA0 (sub_1800E9BA0.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 */

__int64 __fastcall sub_18007C004(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_1800100E8(v1, 0x38uLL);
  return result;
}
