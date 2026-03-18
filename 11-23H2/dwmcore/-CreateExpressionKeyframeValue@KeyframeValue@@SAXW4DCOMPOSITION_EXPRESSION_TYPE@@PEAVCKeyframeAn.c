/*
 * XREFs of ?CreateExpressionKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAnimation@@IPEAPEAV1@@Z @ 0x1800B30C8
 * Callers:
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x18004E4B8 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x180074924 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??2KeyframeValue@@SAPEAX_K@Z @ 0x1800B314C (--2KeyframeValue@@SAPEAX_K@Z.c)
 */

_QWORD *__fastcall KeyframeValue::CreateExpressionKeyframeValue(unsigned __int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  int v7; // r14d
  _QWORD *result; // rax
  _QWORD *v9; // rbx

  v7 = a1;
  result = KeyframeValue::operator new(a1);
  v9 = result;
  if ( result )
  {
    *((_DWORD *)result + 2) = 0;
    *result = &KeyframeValue::`vftable';
    result = (_QWORD *)CMILRefCountImpl::AddReference((CMILRefCountImpl *)(result + 1));
  }
  else
  {
    v9 = 0LL;
  }
  v9[3] = a2;
  *((_DWORD *)v9 + 8) = a3;
  *((_DWORD *)v9 + 5) = 2;
  *((_DWORD *)v9 + 4) = v7;
  *a4 = v9;
  return result;
}
