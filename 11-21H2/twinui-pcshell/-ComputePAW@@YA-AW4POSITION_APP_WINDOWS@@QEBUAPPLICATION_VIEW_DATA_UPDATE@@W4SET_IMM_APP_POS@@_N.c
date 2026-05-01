/*
 * XREFs of ?ComputePAW@@YA?AW4POSITION_APP_WINDOWS@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4SET_IMM_APP_POS@@_N222@Z @ 0x180076748
 * Callers:
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x180076880 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ComputePAW(__int64 a1, char a2, char a3, char a4, char a5, char a6)
{
  __int64 result; // rax
  char v7; // cl
  bool v8; // zf

  result = 0LL;
  if ( (a2 & 0x40) != 0 )
    return 8LL;
  if ( a6 )
    return 17LL;
  if ( a3 || a1 )
  {
    if ( a5 )
      return 2LL;
    if ( (a2 & 1) != 0 )
    {
      return 1LL;
    }
    else
    {
      if ( !a4 || (a2 & 2) == 0 || !a1 || (v8 = (*(_BYTE *)(a1 + 44) & 2) == 0, v7 = 1, v8) )
        v7 = 0;
      if ( (a2 & 8) != 0 )
        return 2LL;
      if ( v7 )
        return 2LL;
      result = 1LL;
      if ( !a4 )
        return 2LL;
    }
  }
  else if ( a5 )
  {
    return 4LL;
  }
  return result;
}
