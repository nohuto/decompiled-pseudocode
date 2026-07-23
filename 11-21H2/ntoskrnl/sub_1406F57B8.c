/*
 * XREFs of sub_1406F57B8 @ 0x1406F57B8
 * Callers:
 *     sub_1402D9A54 @ 0x1402D9A54 (sub_1402D9A54.c)
 *     sub_1406F4FB8 @ 0x1406F4FB8 (sub_1406F4FB8.c)
 *     sub_1407092C0 @ 0x1407092C0 (sub_1407092C0.c)
 *     sub_140761714 @ 0x140761714 (sub_140761714.c)
 *     sub_140761A2C @ 0x140761A2C (sub_140761A2C.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_1406F57B8(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rax
  unsigned __int64 result; // rax

  v1 = (a1 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( v1 < a1 )
    return 0LL;
  v2 = (((unsigned int)dword_140C4F478 + 3LL) & 0xFFFFFFFFFFFFFFFCuLL) + v1;
  if ( v2 < a1 )
    return 0LL;
  result = (unsigned int)(dword_140C4F404 << 12) + v2;
  if ( result < a1 )
    return 0LL;
  return result;
}
