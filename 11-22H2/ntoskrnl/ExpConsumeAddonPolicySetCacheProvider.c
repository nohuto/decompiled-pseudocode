/*
 * XREFs of ExpConsumeAddonPolicySetCacheProvider @ 0x1409F9A80
 * Callers:
 *     <none>
 * Callees:
 *     sub_140374F20 @ 0x140374F20 (sub_140374F20.c)
 */

__int64 __fastcall ExpConsumeAddonPolicySetCacheProvider(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        _BYTE *a6)
{
  *a6 = 1;
  return sub_140374F20(a1, (__int64)&qword_140A781C0, a2, a3, a4, a5);
}
