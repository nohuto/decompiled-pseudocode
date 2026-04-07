/*
 * XREFs of ?Reset@CAnimationResource@@UEAAJXZ @ 0x1800A6980
 * Callers:
 *     <none>
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18000A060 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CAnimationResource::Reset(CAnimationResource *this)
{
  CBaseObject *v2; // rcx

  v2 = (CBaseObject *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_WORD *)this + 36) = 0;
  *((_DWORD *)this + 14) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 32, 0x20u);
  return 0LL;
}
