/*
 * XREFs of sub_140225D70 @ 0x140225D70
 * Callers:
 *     sub_14069DD40 @ 0x14069DD40 (sub_14069DD40.c)
 * Callees:
 *     sub_140224E90 @ 0x140224E90 (sub_140224E90.c)
 *     sub_140848BE8 @ 0x140848BE8 (sub_140848BE8.c)
 */

__int64 sub_140225D70()
{
  __int64 result; // rax

  result = 0LL;
  if ( dword_140D050E0 )
  {
    dword_140D050E0 = 0;
    if ( dword_140D0696C )
    {
      sub_140224E90((struct _KTHREAD **)&qword_140C22FE0);
      return sub_140848BE8(0LL);
    }
  }
  return result;
}
