/*
 * XREFs of ?AddView@CAppLayout@@UEAAJPEAUIApplicationView@@W4APP_LAYOUT_INSERT_LOCATION@@W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@0@Z @ 0x180794B20
 * Callers:
 *     <none>
 * Callees:
 *     ?_AddView@CAppLayout@@AEAAJPEAUIApplicationView@@W4APP_LAYOUT_INSERT_LOCATION@@W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@0@Z @ 0x180796954 (-_AddView@CAppLayout@@AEAAJPEAUIApplicationView@@W4APP_LAYOUT_INSERT_LOCATION@@W4APP_LAYOUT_ITEM.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppLayout::AddView(RTL_SRWLOCK *a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  RTL_SRWLOCK *v9; // r14
  unsigned int v10; // ebx

  v9 = a1 + 2;
  AcquireSRWLockExclusive(a1 + 2);
  v10 = CAppLayout::_AddView(&a1[-5], a2, a3, a4, a5);
  if ( v9 )
    ReleaseSRWLockExclusive(v9);
  return v10;
}
