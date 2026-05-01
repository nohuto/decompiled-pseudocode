/*
 * XREFs of ?GetAnchorLocationsFromRegion@SnapLayoutHelpers@@YA?AW4SnapRegionAnchorLocations@1@W4SnapRegion@@@Z @ 0x180671538
 * Callers:
 *     ?DetermineFillWindow@SnapLayoutHelpers@@YAJW4SnapRegionAnchorLocations@1@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@P6A_NW4Edge@1@@ZP6A_N00PEAW441@@ZAEBUCRect@Geometry@@HPEAUFillCandidate@1@@Z @ 0x180670EA8 (-DetermineFillWindow@SnapLayoutHelpers@@YAJW4SnapRegionAnchorLocations@1@AEBV-$CCoSimpleArray@V-.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall SnapLayoutHelpers::GetAnchorLocationsFromRegion(int a1, __int64 a2, __int64 a3, const char *a4)
{
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  __int64 result; // rax
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1 > 5 )
  {
    result = 6LL;
    v8 = a1 - 6;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            if ( v11 != 1 )
              goto LABEL_19;
            return 10LL;
          }
          else
          {
            return 5LL;
          }
        }
        else
        {
          return 7LL;
        }
      }
    }
    else
    {
      return 14LL;
    }
  }
  else if ( a1 == 5 )
  {
    return 12LL;
  }
  else if ( a1 )
  {
    v4 = a1 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          if ( v6 == 1 )
            return 13LL;
LABEL_19:
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0xE9,
            (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
            a4);
        }
        return 9LL;
      }
      else
      {
        return 11LL;
      }
    }
    else
    {
      return 3LL;
    }
  }
  else
  {
    return 0LL;
  }
  return result;
}
