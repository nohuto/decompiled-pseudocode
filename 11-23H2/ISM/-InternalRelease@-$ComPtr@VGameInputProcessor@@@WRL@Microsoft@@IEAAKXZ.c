/*
 * XREFs of ?InternalRelease@?$ComPtr@VGameInputProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x18005418C
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180035D10 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ??1?$ComPtr@VGameInputProcessor@@@WRL@Microsoft@@QEAA@XZ @ 0x1801B7E68 (--1-$ComPtr@VGameInputProcessor@@@WRL@Microsoft@@QEAA@XZ.c)
 * Callees:
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x18004FB20 (-Release@RefCountedObject@@UEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::ComPtr<GameInputProcessor>::InternalRelease(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = 0LL;
  v2 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return RefCountedObject::Release((RefCountedObject *)(v2 + 8));
  }
  return result;
}
