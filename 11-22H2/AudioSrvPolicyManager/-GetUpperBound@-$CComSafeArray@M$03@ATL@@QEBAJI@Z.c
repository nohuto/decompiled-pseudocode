/*
 * XREFs of ?GetUpperBound@?$CComSafeArray@M$03@ATL@@QEBAJI@Z @ 0x18003E3B8
 * Callers:
 *     ?SetAt@?$CComSafeArray@M$03@ATL@@QEAAJJAEBMH@Z @ 0x18003FC74 (-SetAt@-$CComSafeArray@M$03@ATL@@QEAAJJAEBMH@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180012B04 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CComSafeArray<float,4>::GetUpperBound(SAFEARRAY **a1, LONG a2)
{
  SAFEARRAY *v2; // rcx
  HRESULT UBound; // eax
  LONG plUbound; // [rsp+38h] [rbp+10h] BYREF

  plUbound = a2;
  v2 = *a1;
  plUbound = 0;
  UBound = SafeArrayGetUBound(v2, 1u, &plUbound);
  if ( UBound < 0 )
    ATL::AtlThrowImpl(UBound);
  return (unsigned int)plUbound;
}
