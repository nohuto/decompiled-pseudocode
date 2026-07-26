/*
 * XREFs of ?Create@KHistogram@@SAPEAV1@_K0K@Z @ 0x1C012E430
 * Callers:
 *     ndisAllocateHistogramEntry @ 0x1C012E4EC (ndisAllocateHistogramEntry.c)
 * Callees:
 *     memset @ 0x1C0038700 (memset.c)
 */

struct KHistogram *__fastcall KHistogram::Create(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  size_t v6; // rbp
  __int64 Pool2; // rax
  __int64 v8; // rbx

  if ( a3 < 2 )
    return 0LL;
  if ( !is_mul_ok(a2, a3) )
    return 0LL;
  if ( a1 + a2 * a3 < a1 )
    return 0LL;
  v6 = 2LL * a3;
  if ( v6 > 0xFFFFFFFF )
    return 0LL;
  if ( (unsigned int)v6 >= 0xFFFFFFEC )
    return 0LL;
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(v6 + 20), 1953712203);
  v8 = Pool2;
  if ( !Pool2 )
    return 0LL;
  *(_QWORD *)Pool2 = a1;
  *(_QWORD *)(Pool2 + 8) = a2;
  *(_DWORD *)(Pool2 + 16) = a3;
  memset((void *)(Pool2 + 20), 0, v6);
  return (struct KHistogram *)v8;
}
