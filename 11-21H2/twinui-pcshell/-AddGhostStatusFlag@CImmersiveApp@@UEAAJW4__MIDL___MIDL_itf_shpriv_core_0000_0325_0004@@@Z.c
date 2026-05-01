/*
 * XREFs of ?AddGhostStatusFlag@CImmersiveApp@@UEAAJW4__MIDL___MIDL_itf_shpriv_core_0000_0325_0004@@@Z @ 0x180190400
 * Callers:
 *     <none>
 * Callees:
 *     ?_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x1800749B8 (-_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x1800C6E68 (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0325_0001@@W4GHOST_STATUS@@@Z @ 0x180190A58 (-ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core.c)
 */

__int64 __fastcall CImmersiveApp::AddGhostStatusFlag(__int64 a1, int a2)
{
  CImmersiveApp::CImmersiveWindowCollection *v4; // rdi
  unsigned int v5; // ebx
  unsigned int v6; // esi
  __int64 v7; // r8

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 200);
  v5 = 0;
  v6 = 8;
  if ( !CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost(v4) )
  {
    v7 = 8LL;
    if ( a2 != 1 )
      v7 = 0LL;
    CImmersiveApp::CImmersiveWindowCollection::ShowSystemVisual(v4, 0LL, v7);
  }
  if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost(v4) )
  {
    if ( *((_DWORD *)v4 + 53) )
    {
      if ( a2 != 1 )
        v6 = 0;
      CImmersiveApp::CImmersiveWindowCollection::_AddGhostStatus((__int64)v4, v6);
    }
  }
  else
  {
    v5 = -2147019873;
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return v5;
}
