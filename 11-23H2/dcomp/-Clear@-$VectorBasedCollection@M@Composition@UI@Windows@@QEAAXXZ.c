/*
 * XREFs of ?Clear@?$VectorBasedCollection@M@Composition@UI@Windows@@QEAAXXZ @ 0x1801707F8
 * Callers:
 *     ?Clear@?$ImplementsIVectorWinRt@VCompositionStrokeDashArray@Composition@UI@Windows@@$$V@Composition@UI@Windows@@UEAAJXZ @ 0x180170790 (-Clear@-$ImplementsIVectorWinRt@VCompositionStrokeDashArray@Composition@UI@Windows@@$$V@Composit.c)
 *     ?Destroy@CompositionStrokeDashArray@Composition@UI@Windows@@UEAAXXZ @ 0x1801A0040 (-Destroy@CompositionStrokeDashArray@Composition@UI@Windows@@UEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::VectorBasedCollection<float>::Clear(_QWORD *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rsi
  __int64 result; // rax

  v1 = a1[1];
  v3 = a1[2];
  if ( v1 != v3 )
  {
    do
    {
      (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
      v1 += 4LL;
    }
    while ( v1 != v3 );
    a1[2] = a1[1];
    return (*(__int64 (__fastcall **)(_QWORD *))*a1)(a1);
  }
  return result;
}
