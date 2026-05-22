/*
 * XREFs of ?Unlink@?$ListT@UCompositionAnimationGroupEntry@Composition@UI@Windows@@@Composition@UI@Windows@@QEAAXPEAU?$ListNodeT@UCompositionAnimationGroupEntry@Composition@UI@Windows@@@234@@Z @ 0x180152914
 * Callers:
 *     ?Remove@CompositionAnimationGroup@Composition@UI@Windows@@QEAAXPEAVCompositionAnimation@234@@Z @ 0x180151FD8 (-Remove@CompositionAnimationGroup@Composition@UI@Windows@@QEAAXPEAVCompositionAnimation@234@@Z.c)
 *     ?RemoveAll@CompositionAnimationGroup@Composition@UI@Windows@@QEAAXXZ @ 0x1801520C4 (-RemoveAll@CompositionAnimationGroup@Composition@UI@Windows@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall Windows::UI::Composition::ListT<Windows::UI::Composition::CompositionAnimationGroupEntry>::Unlink(
        __int64 **a1,
        __int64 *a2)
{
  __int64 *v2; // r8
  __int64 *result; // rax

  v2 = (__int64 *)a2[1];
  result = (__int64 *)*a2;
  if ( v2 )
    *v2 = (__int64)result;
  if ( result )
    result[1] = (__int64)v2;
  if ( *a1 == a2 )
    *a1 = result;
  if ( a1[1] == a2 )
    a1[1] = v2;
  a2[1] = 0LL;
  *a2 = 0LL;
  return result;
}
