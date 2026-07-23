/*
 * XREFs of sub_14027A0F4 @ 0x14027A0F4
 * Callers:
 *     sub_140227300 @ 0x140227300 (sub_140227300.c)
 *     sub_140279590 @ 0x140279590 (sub_140279590.c)
 *     DnsPrint_RpcZoneInfo @ 0x1402E97D4 (DnsPrint_RpcZoneInfo.c)
 *     sub_14045C260 @ 0x14045C260 (sub_14045C260.c)
 *     sub_140693D80 @ 0x140693D80 (sub_140693D80.c)
 *     sub_140B0728C @ 0x140B0728C (sub_140B0728C.c)
 *     sub_140B076FC @ 0x140B076FC (sub_140B076FC.c)
 * Callees:
 *     <none>
 */

__int64 sub_14027A0F4()
{
  __int64 result; // rax
  unsigned __int64 v1; // r8
  unsigned int v2; // r9d
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rcx

  result = qword_140C51BF8;
  if ( !qword_140C51BF8 )
  {
    result = 0x10000000LL;
    v1 = 0x4000000LL;
    v2 = 0;
    do
    {
      v3 = (result + 4095) & 0xFFFFFFFFFFFFF000uLL;
      qword_140C51C00[1 - v2++] = v3;
      v4 = (v1 >> 6) + ((v1 & 0x3F) != 0);
      v1 >>= 9;
      result = v3 + 8 * v4;
    }
    while ( v2 < 2 );
    qword_140C51BF8 = v3 + 8 * v4;
  }
  return result;
}
