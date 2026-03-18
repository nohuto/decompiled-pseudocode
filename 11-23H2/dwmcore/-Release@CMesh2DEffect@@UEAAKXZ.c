/*
 * XREFs of ?Release@CMesh2DEffect@@UEAAKXZ @ 0x1802BEE80
 * Callers:
 *     ?Release@CMesh2DEffect@@W7EAAKXZ @ 0x180123D90 (-Release@CMesh2DEffect@@W7EAAKXZ.c)
 *     ?Release@CMesh2DEffect@@WBA@EAAKXZ @ 0x180123DB0 (-Release@CMesh2DEffect@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMesh2DEffect::Release(CMesh2DEffect *this)
{
  return CMILRefCountBaseT<IMILRefCount>::InternalRelease((volatile signed __int32 *)this + 4);
}
