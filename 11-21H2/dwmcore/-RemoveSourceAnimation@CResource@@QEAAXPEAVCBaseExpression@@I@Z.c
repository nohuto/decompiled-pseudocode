/*
 * XREFs of ?RemoveSourceAnimation@CResource@@QEAAXPEAVCBaseExpression@@I@Z @ 0x18006FED8
 * Callers:
 *     ?UnregisterSources@CExpression@@IEAAXXZ @ 0x18006FC4C (-UnregisterSources@CExpression@@IEAAXXZ.c)
 * Callees:
 *     ?FindElement@?$CGenericTableMap@IVCAnimationSourceMapEntry@@@@QEAAPEAVCAnimationSourceMapEntry@@I@Z @ 0x18004968C (-FindElement@-$CGenericTableMap@IVCAnimationSourceMapEntry@@@@QEAAPEAVCAnimationSourceMapEntry@@.c)
 *     ?RemoveElement@?$CGenericTableMap@IVCAnimationSourceMapEntry@@@@QEAAXPEAVCAnimationSourceMapEntry@@@Z @ 0x18006F2D4 (-RemoveElement@-$CGenericTableMap@IVCAnimationSourceMapEntry@@@@QEAAXPEAVCAnimationSourceMapEntr.c)
 *     ?Remove@?$DynArray@PEAVCBaseExpression@@$0A@@@QEAAHAEBQEAVCBaseExpression@@@Z @ 0x18006F74C (-Remove@-$DynArray@PEAVCBaseExpression@@$0A@@@QEAAHAEBQEAVCBaseExpression@@@Z.c)
 */

void __fastcall CResource::RemoveSourceAnimation(struct _RTL_GENERIC_TABLE **this, struct CBaseExpression *a2, int a3)
{
  __int64 *Element; // rax
  __int64 *v5; // rbx
  struct CBaseExpression *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  Element = (__int64 *)CGenericTableMap<unsigned int,CAnimationSourceMapEntry>::FindElement(this[5], a3);
  v5 = Element;
  if ( Element )
  {
    DynArray<CBaseExpression *,0>::Remove(Element + 1, &v6);
    if ( !*((_DWORD *)v5 + 8) )
      CGenericTableMap<unsigned int,CAnimationSourceMapEntry>::RemoveElement(this[5], (void **)v5);
  }
}
