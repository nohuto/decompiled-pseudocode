/*
 * XREFs of PsSetThreadProperty @ 0x1403882B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140223E40 @ 0x140223E40 (sub_140223E40.c)
 *     sub_1403882F0 @ 0x1403882F0 (sub_1403882F0.c)
 *     sub_1403883BC @ 0x1403883BC (sub_1403883BC.c)
 */

__int64 __fastcall PsSetThreadProperty(struct _KTHREAD *a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // rcx

  result = sub_140223E40(a1);
  if ( (int)result >= 0 )
  {
    v5 = v2 + 1560;
    if ( v3 )
      return sub_1403883BC(v5, v4, v3);
    else
      return sub_1403882F0(v5, v4, 0LL);
  }
  return result;
}
