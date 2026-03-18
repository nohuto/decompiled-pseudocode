/*
 * XREFs of ?CreateStartingValueKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAnimation@@PEAPEAV1@@Z @ 0x1800E1F9C
 * Callers:
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x18004D958 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 * Callees:
 *     ??2KeyframeValue@@SAPEAX_K@Z @ 0x18004F5F8 (--2KeyframeValue@@SAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D75D0 (-InternalRelease@-$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall KeyframeValue::CreateStartingValueKeyframeValue(int a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  volatile signed __int32 *v9; // [rsp+38h] [rbp+10h] BYREF

  v6 = KeyframeValue::operator new();
  v7 = v6;
  if ( v6 )
  {
    *((_DWORD *)v6 + 2) = 0;
    *v6 = &KeyframeValue::`vftable';
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v6 + 1));
  }
  else
  {
    v7 = 0LL;
  }
  v9 = 0LL;
  *((_DWORD *)v7 + 5) = 3;
  v7[3] = a2;
  *((_DWORD *)v7 + 4) = a1;
  *a3 = v7;
  return Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&v9);
}
