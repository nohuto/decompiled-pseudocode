/*
 * XREFs of sub_1402AA860 @ 0x1402AA860
 * Callers:
 *     sub_14072B630 @ 0x14072B630 (sub_14072B630.c)
 *     sub_14072E9E0 @ 0x14072E9E0 (sub_14072E9E0.c)
 *     IoCancelFileOpen @ 0x140935F60 (IoCancelFileOpen.c)
 *     sub_14093FC6C @ 0x14093FC6C (sub_14093FC6C.c)
 * Callees:
 *     sub_1402AACA0 @ 0x1402AACA0 (sub_1402AACA0.c)
 *     sub_1405562E8 @ 0x1405562E8 (sub_1405562E8.c)
 */

__int64 __fastcall sub_1402AA860(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // bl
  __int64 result; // rax
  __int64 v5; // rcx

  v2 = a2;
  for ( result = sub_1402AACA0(a1, a2, 0LL); !result; result = sub_1402AACA0(a1, v2, 0LL) )
  {
    result = sub_1405562E8(v5, v2, 3LL);
    if ( result )
      break;
  }
  *(_BYTE *)(result + 71) |= 0x20u;
  return result;
}
