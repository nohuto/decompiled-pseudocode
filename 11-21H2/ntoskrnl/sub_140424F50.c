/*
 * XREFs of sub_140424F50 @ 0x140424F50
 * Callers:
 *     sub_140221A30 @ 0x140221A30 (sub_140221A30.c)
 *     sub_1402359C4 @ 0x1402359C4 (sub_1402359C4.c)
 *     sub_140235AAC @ 0x140235AAC (sub_140235AAC.c)
 *     sub_14026A28C @ 0x14026A28C (sub_14026A28C.c)
 *     sub_14026C4CC @ 0x14026C4CC (sub_14026C4CC.c)
 *     sub_1402C4E50 @ 0x1402C4E50 (sub_1402C4E50.c)
 *     sub_140323D70 @ 0x140323D70 (sub_140323D70.c)
 *     sub_1403CA510 @ 0x1403CA510 (sub_1403CA510.c)
 *     sub_1403D452C @ 0x1403D452C (sub_1403D452C.c)
 *     sub_140586E78 @ 0x140586E78 (sub_140586E78.c)
 *     sub_1405ADB14 @ 0x1405ADB14 (sub_1405ADB14.c)
 *     sub_1405B2A90 @ 0x1405B2A90 (sub_1405B2A90.c)
 *     sub_1405C00C0 @ 0x1405C00C0 (sub_1405C00C0.c)
 *     sub_140AF61F4 @ 0x140AF61F4 (sub_140AF61F4.c)
 *     sub_140B092AC @ 0x140B092AC (sub_140B092AC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140424F50(__m128i *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rdx

  result = 128LL;
  v3 = a2 >> 7;
  do
  {
    _mm_stream_si128(a1, (__m128i)0LL);
    _mm_stream_si128(a1 + 1, (__m128i)0LL);
    _mm_stream_si128(a1 + 2, (__m128i)0LL);
    _mm_stream_si128(a1 + 3, (__m128i)0LL);
    a1 += 8;
    _mm_stream_si128(a1 - 4, (__m128i)0LL);
    _mm_stream_si128(a1 - 3, (__m128i)0LL);
    --v3;
    _mm_stream_si128(a1 - 2, (__m128i)0LL);
    _mm_stream_si128(a1 - 1, (__m128i)0LL);
  }
  while ( v3 );
  _mm_sfence();
  return result;
}
