/*
 * XREFs of sub_140288178 @ 0x140288178
 * Callers:
 *     sub_14028B12C @ 0x14028B12C (sub_14028B12C.c)
 *     sub_14028D3BC @ 0x14028D3BC (sub_14028D3BC.c)
 *     FsRtlReleaseFile @ 0x1406FE310 (FsRtlReleaseFile.c)
 *     sub_1406FE4F0 @ 0x1406FE4F0 (sub_1406FE4F0.c)
 *     sub_1407F0748 @ 0x1407F0748 (sub_1407F0748.c)
 *     sub_1407F099C @ 0x1407F099C (sub_1407F099C.c)
 *     sub_1407F730C @ 0x1407F730C (sub_1407F730C.c)
 * Callees:
 *     sub_140459A82 @ 0x140459A82 (sub_140459A82.c)
 */

__int64 __fastcall sub_140288178(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 64);
  if ( (result & 1) != 0 )
    return sub_140459A82();
  return result;
}
