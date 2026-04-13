/*
 * XREFs of wmemset @ 0x180065810
 * Callers:
 *     ?_Chassign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_K0_W@Z @ 0x1800602AC (-_Chassign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_K0_W@Z.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wmemset(wchar_t *S, wchar_t C, size_t N)
{
  wchar_t *v4; // rdi
  size_t i; // rcx

  if ( N )
  {
    v4 = S;
    for ( i = N; i; --i )
      *v4++ = C;
  }
  return S;
}
