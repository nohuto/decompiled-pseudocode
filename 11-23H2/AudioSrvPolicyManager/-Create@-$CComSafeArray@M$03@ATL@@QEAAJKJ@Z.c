/*
 * XREFs of ?Create@?$CComSafeArray@M$03@ATL@@QEAAJKJ@Z @ 0x18003C410
 * Callers:
 *     ?LoadPropertyStore@CAudioSessionPropertyStore@@AEAAJXZ @ 0x18003D30C (-LoadPropertyStore@CAudioSessionPropertyStore@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ATL::CComSafeArray<float,4>::Create(SAFEARRAY **a1, ULONG a2)
{
  bool v3; // zf
  SAFEARRAY *v5; // rax
  SAFEARRAYBOUND rgsabound; // [rsp+30h] [rbp+8h] BYREF

  rgsabound.lLbound = 0;
  v3 = *a1 == 0LL;
  rgsabound.cElements = a2;
  if ( !v3 )
    return -2147467259;
  v5 = SafeArrayCreate(4u, 1u, &rgsabound);
  *a1 = v5;
  if ( v5 )
    return SafeArrayLock(v5);
  else
    return -2147024882;
}
