/*
 * XREFs of sub_1403BEC78 @ 0x1403BEC78
 * Callers:
 *     sub_140A556B0 @ 0x140A556B0 (sub_140A556B0.c)
 * Callees:
 *     HalQueryMaximumProcessorCount @ 0x14036FA30 (HalQueryMaximumProcessorCount.c)
 *     sub_14036FA84 @ 0x14036FA84 (sub_14036FA84.c)
 *     sub_1403BF580 @ 0x1403BF580 (sub_1403BF580.c)
 */

__int64 sub_1403BEC78()
{
  __int64 result; // rax
  __int64 v1; // rdx
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rsi

  result = sub_14036FA84();
  if ( (_DWORD)result == 3 )
  {
    result = HalQueryMaximumProcessorCount();
    v1 = ((unsigned int)result + 16LL) << 18;
  }
  v2 = 0LL;
  v3 = qword_140C54AA0;
  v4 = (unsigned __int64)(v1 + (qword_140C4DD20 << 12) + 0x1FFFFF) >> 21;
  if ( v4 )
  {
    do
    {
      if ( v3 > qword_140C54AB8 )
        break;
      result = sub_1403BF580(v3);
      ++v2;
      v3 += 0x200000LL;
    }
    while ( v2 < v4 );
  }
  return result;
}
