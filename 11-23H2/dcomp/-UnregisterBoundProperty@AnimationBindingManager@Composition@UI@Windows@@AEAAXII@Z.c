/*
 * XREFs of ?UnregisterBoundProperty@AnimationBindingManager@Composition@UI@Windows@@AEAAXII@Z @ 0x1801696A4
 * Callers:
 *     ?RegisterAnimationTarget@AnimationBindingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAVExpressionObjectPropertyInfo@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEAPEAVSubchannelMaskInfo@@PEAVCompositionPropertyAnimator@234@@Z @ 0x180050220 (-RegisterAnimationTarget@AnimationBindingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@23.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ?RemoveElement@?$CGenericTableMap@IVPropertyMapEntry@Composition@UI@Windows@@@@QEAAXPEAVPropertyMapEntry@Composition@UI@Windows@@@Z @ 0x180169408 (-RemoveElement@-$CGenericTableMap@IVPropertyMapEntry@Composition@UI@Windows@@@@QEAAXPEAVProperty.c)
 */

void __fastcall Windows::UI::Composition::AnimationBindingManager::UnregisterBoundProperty(
        struct _RTL_GENERIC_TABLE *this,
        int a2,
        int a3)
{
  struct _RTL_GENERIC_TABLE *v3; // rdi
  _QWORD *v5; // rsi
  _DWORD *v6; // rcx
  _QWORD *v7; // rdx
  _QWORD *v8; // rax
  int v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]

  v10 = 0LL;
  v3 = this + 1;
  v9 = a2;
  v5 = RtlLookupElementGenericTable(this + 1, &v9);
  v6 = (_DWORD *)v5[1];
  v7 = v5 + 1;
  while ( v6 )
  {
    v8 = v6 + 2;
    if ( *v6 == a3 )
    {
      *v7 = *v8;
      operator delete(v6);
      break;
    }
    v6 = (_DWORD *)*v8;
    v7 = v8;
  }
  if ( !v5[1] )
    CGenericTableMap<unsigned int,Windows::UI::Composition::PropertyMapEntry>::RemoveElement(v3, v5);
}
