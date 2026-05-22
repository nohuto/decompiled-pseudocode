/*
 * XREFs of ?RemoveAtEnd@?$VectorBasedCollection@M@Composition@UI@Windows@@QEAAXXZ @ 0x180171658
 * Callers:
 *     ?RemoveAtEnd@?$ImplementsIVectorWinRt@VCompositionStrokeDashArray@Composition@UI@Windows@@$$V@Composition@UI@Windows@@UEAAJXZ @ 0x1801715F0 (-RemoveAtEnd@-$ImplementsIVectorWinRt@VCompositionStrokeDashArray@Composition@UI@Windows@@$$V@Co.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::VectorBasedCollection<float>::RemoveAtEnd(_QWORD *a1)
{
  __int64 result; // rax

  result = a1[2];
  if ( a1[1] != result )
  {
    (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
    a1[2] -= 4LL;
    return (*(__int64 (__fastcall **)(_QWORD *))*a1)(a1);
  }
  return result;
}
