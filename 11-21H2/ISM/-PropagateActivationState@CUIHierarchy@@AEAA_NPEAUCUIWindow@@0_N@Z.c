/*
 * XREFs of ?PropagateActivationState@CUIHierarchy@@AEAA_NPEAUCUIWindow@@0_N@Z @ 0x180085F58
 * Callers:
 *     _lambda_e08e03aa5b167d5be50e1fd6214815c7_::operator() @ 0x1800849A8 (_lambda_e08e03aa5b167d5be50e1fd6214815c7_--operator().c)
 *     ?PropagateActivationState@CUIHierarchy@@AEAA_NPEAUCUIWindow@@0_N@Z @ 0x180085F58 (-PropagateActivationState@CUIHierarchy@@AEAA_NPEAUCUIWindow@@0_N@Z.c)
 * Callees:
 *     ?NotifyWindowOfActivationStateChange@CUIHierarchy@@AEAAXPEAUCUIWindow@@W4CUIActivationState@Input@Internal@UI@Windows@@_K@Z @ 0x18008538C (-NotifyWindowOfActivationStateChange@CUIHierarchy@@AEAAXPEAUCUIWindow@@W4CUIActivationState@Inpu.c)
 *     ?PropagateActivationState@CUIHierarchy@@AEAA_NPEAUCUIWindow@@0_N@Z @ 0x180085F58 (-PropagateActivationState@CUIHierarchy@@AEAA_NPEAUCUIWindow@@0_N@Z.c)
 */

char __fastcall CUIHierarchy::PropagateActivationState(
        CUIHierarchy *this,
        struct CUIWindow *a2,
        struct CUIWindow *a3,
        bool a4)
{
  struct CUIWindow **v4; // r12
  char v5; // bl
  struct CUIWindow **v6; // rdi
  struct CUIWindow *v9; // r14
  char v10; // bp
  char v11; // r13
  unsigned __int8 v12; // di
  __int64 v13; // rcx
  unsigned int v14; // r8d
  __int64 v15; // r9

  v4 = (struct CUIWindow **)*((_QWORD *)a2 + 9);
  v5 = 0;
  v6 = (struct CUIWindow **)*((_QWORD *)a2 + 8);
  v9 = a2;
  v10 = 0;
  v11 = 0;
  if ( v6 != v4 )
  {
    do
    {
      if ( !*((_BYTE *)*v6 + 48) )
      {
        v11 = 1;
        if ( CUIHierarchy::PropagateActivationState(this, *v6, a3, a4) )
          v10 = 1;
      }
      ++v6;
    }
    while ( v6 != v4 );
    v9 = a2;
  }
  if ( !a3 || *((_QWORD *)a3 + 2) != *((_QWORD *)v9 + 2) || (v12 = 1, !a4) )
    v12 = 0;
  v13 = v12 | 2u;
  if ( !v10 )
    v13 = v12;
  if ( !v11 )
    v13 = (unsigned int)v13 | 8;
  v14 = v13 | 4;
  if ( !a4 )
    v14 = v13;
  if ( a3 )
    v15 = *((_QWORD *)a3 + 2);
  else
    v15 = 0LL;
  CUIHierarchy::NotifyWindowOfActivationStateChange(v13, (__int64)v9, v14, v15);
  if ( v12 || v10 )
    return 1;
  return v5;
}
