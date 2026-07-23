/*
 * XREFs of sub_14076E6B4 @ 0x14076E6B4
 * Callers:
 *     sub_140762C04 @ 0x140762C04 (sub_140762C04.c)
 *     sub_14076308C @ 0x14076308C (sub_14076308C.c)
 *     sub_140767820 @ 0x140767820 (sub_140767820.c)
 *     sub_14084F808 @ 0x14084F808 (sub_14084F808.c)
 * Callees:
 *     sub_140771CD0 @ 0x140771CD0 (sub_140771CD0.c)
 */

__int64 __fastcall sub_14076E6B4(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  int v3; // edi
  __int64 i; // rbx

  result = 0LL;
  v3 = 0;
  if ( a2 )
  {
    for ( i = a1 + 32; !*(_DWORD *)(i - 12); i += 48LL )
    {
      result = sub_140771CD0(*(PSECURITY_DESCRIPTOR *)(i + 8), *(_DWORD *)(i + 4));
      if ( (int)result < 0 )
        break;
      if ( ++v3 >= a2 )
        return result;
    }
    return 3221225485LL;
  }
  return result;
}
