/*
 * XREFs of ?RtlStringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180284F1C
 * Callers:
 *     ?PiiFilterEmbeddedPathsExecute_Ge@@YAJPEAG_K1PEBG@Z @ 0x180284950 (-PiiFilterEmbeddedPathsExecute_Ge@@YAJPEAG_K1PEBG@Z.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1800EF45C (RtlStringCopyWorkerW.c)
 */

__int64 __fastcall RtlStringCchCatW(unsigned __int16 *a1, __int64 a2, const unsigned __int16 *a3)
{
  unsigned __int16 *v3; // rax
  __int64 v4; // r9
  __int64 result; // rax

  v3 = a1;
  v4 = 260LL;
  do
  {
    if ( !*v3 )
      break;
    ++v3;
    --v4;
  }
  while ( v4 );
  result = v4 == 0 ? 0xC000000D : 0;
  if ( v4 )
    return RtlStringCopyWorkerW(
             (unsigned __int16 *)((char *)a1 + ((2 * (260 - v4)) & -(__int64)(v4 != 0))),
             ((v4 - 260) & ((unsigned __int128)-(__int128)(unsigned __int64)v4 >> 64)) + 260,
             (__int64)a3,
             (__int64)a3);
  return result;
}
