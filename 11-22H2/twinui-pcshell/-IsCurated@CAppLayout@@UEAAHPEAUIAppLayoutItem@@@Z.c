/*
 * XREFs of ?IsCurated@CAppLayout@@UEAAHPEAUIAppLayoutItem@@@Z @ 0x180795A20
 * Callers:
 *     <none>
 * Callees:
 *     ?_AreAdjacentItemsCurated@CAppLayout@@AEAAHPEAUIAppLayoutItem@@@Z @ 0x1807969F8 (-_AreAdjacentItemsCurated@CAppLayout@@AEAAHPEAUIAppLayoutItem@@@Z.c)
 *     ?_AreAllItemsCurated@CAppLayout@@AEAAHXZ @ 0x180796B6C (-_AreAllItemsCurated@CAppLayout@@AEAAHXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppLayout::IsCurated(RTL_SRWLOCK *this, struct IAppLayoutItem *a2)
{
  RTL_SRWLOCK *v4; // rdi
  CAppLayout *v5; // rcx
  unsigned int v6; // eax
  unsigned int v7; // ebx

  v4 = this + 2;
  AcquireSRWLockShared(this + 2);
  v5 = (CAppLayout *)&this[-5];
  if ( a2 )
    v6 = CAppLayout::_AreAdjacentItemsCurated(v5, a2);
  else
    v6 = CAppLayout::_AreAllItemsCurated(v5);
  v7 = v6;
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return v7;
}
