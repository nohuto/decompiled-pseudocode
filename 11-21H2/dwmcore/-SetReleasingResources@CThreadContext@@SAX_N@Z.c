/*
 * XREFs of ?SetReleasingResources@CThreadContext@@SAX_N@Z @ 0x1800B17D8
 * Callers:
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x1800B1804 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     ?Release@CLegacyRenderTarget@@UEAAKXZ @ 0x1800D6760 (-Release@CLegacyRenderTarget@@UEAAKXZ.c)
 * Callees:
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x1800AF6DC (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 */

void __fastcall CThreadContext::SetReleasingResources(char a1)
{
  struct CThreadContext *v2; // [rsp+38h] [rbp+10h] BYREF

  if ( (int)CThreadContext::GetCurrent(&v2) >= 0 )
    *(_BYTE *)v2 = a1;
}
