/*
 * XREFs of sub_18005E3D8 @ 0x18005E3D8
 * Callers:
 *     sub_18002A9D0 @ 0x18002A9D0 (sub_18002A9D0.c)
 *     sub_18005A6A0 @ 0x18005A6A0 (sub_18005A6A0.c)
 *     sub_18005D638 @ 0x18005D638 (sub_18005D638.c)
 *     sub_18007A1F8 @ 0x18007A1F8 (sub_18007A1F8.c)
 *     sub_1800E3C50 @ 0x1800E3C50 (sub_1800E3C50.c)
 *     sub_1800E51F0 @ 0x1800E51F0 (sub_1800E51F0.c)
 *     sub_1800E657C @ 0x1800E657C (sub_1800E657C.c)
 *     sub_1800E8560 @ 0x1800E8560 (sub_1800E8560.c)
 *     sub_1800EA840 @ 0x1800EA840 (sub_1800EA840.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18005E3D8(__int64 a1)
{
  __int64 *v1; // rcx
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = *(__int64 **)(a1 + 112);
  result = 0LL;
  if ( v1 )
  {
    v3 = *v1;
    if ( v3 )
      return *(unsigned int *)(v3 + 4);
  }
  return result;
}
