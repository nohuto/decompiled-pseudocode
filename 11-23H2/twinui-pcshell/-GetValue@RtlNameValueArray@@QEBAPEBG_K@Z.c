/*
 * XREFs of ?GetValue@RtlNameValueArray@@QEBAPEBG_K@Z @ 0x180738380
 * Callers:
 *     ?PiiFilterEmbeddedPathsExecute_Ge@@YAJPEAG_K1PEBG@Z @ 0x180284950 (-PiiFilterEmbeddedPathsExecute_Ge@@YAJPEAG_K1PEBG@Z.c)
 *     PiiFilterExecute @ 0x1807384B4 (PiiFilterExecute.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall RtlNameValueArray::GetValue(RtlNameValueArray *this, unsigned __int64 a2)
{
  __int64 *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax

  v2 = 0LL;
  if ( a2 < *((_QWORD *)this + 2) )
  {
    if ( !is_mul_ok(*((_QWORD *)this + 1), a2)
      || (v2 = (__int64 *)(*((_QWORD *)this + 5) + *((_QWORD *)this + 1) * a2),
          (unsigned __int64)v2 < *((_QWORD *)this + 5)) )
    {
      v2 = 0LL;
    }
  }
  v3 = *v2;
  v4 = -1LL;
  do
    ++v4;
  while ( *(_WORD *)(v3 + 2 * v4) );
  return (const unsigned __int16 *)(v3 + 2 * (v4 + 1));
}
