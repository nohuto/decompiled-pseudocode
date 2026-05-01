/*
 * XREFs of ?HampActCanBeStartedInHostState@@YA?AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z @ 0x180037424
 * Callers:
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180018660 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 * Callees:
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002AAC0 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x18002D444 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 */

__int64 __fastcall HampActCanBeStartedInHostState(__int64 a1)
{
  __int64 v2; // r11
  unsigned int v3; // r8d
  unsigned __int64 v4; // rcx
  unsigned __int8 v5; // al
  int v6; // r9d
  bool v8; // cf
  struct _HAM_ACTIVITY *FirstActivity; // rcx
  int v10; // r9d

  if ( (*(_BYTE *)(a1 + 552) & 8) != 0 )
  {
    return 15;
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 80);
    v3 = 0;
    v4 = *(_QWORD *)(v2 + 664);
    v5 = (v4 >> 29) & 7;
    v6 = *(_DWORD *)(a1 + 116);
    if ( (v6 & 0x40) != 0 && v5 )
    {
      return 9;
    }
    else if ( (v6 & 0x80u) == 0 || v5 <= 2u )
    {
      if ( (v6 & 0x100) != 0
        && ((v4 & 0x30000) == 0 ? (v8 = (v4 & 0x4000000000LL) != 0) : (v8 = (v4 & 0x8000000000LL) != 0), v8) )
      {
        return 11;
      }
      else if ( (*(_DWORD *)(a1 + 112) & 0x40000) != 0 && ((v4 & 0x30000) != 0 || (v4 & 0x2000000000000LL) == 0) )
      {
        return 13;
      }
      else if ( (v6 & 0x200) != 0 )
      {
        FirstActivity = HampHostGetFirstActivity((struct _RM_HAM_ACTIVITY_HOST *)v2);
        if ( FirstActivity )
        {
          do
            FirstActivity = HampHostGetNextActivity(FirstActivity);
          while ( FirstActivity );
          if ( v10 == 1 )
            return 14;
        }
      }
    }
    else
    {
      return 10;
    }
  }
  return v3;
}
