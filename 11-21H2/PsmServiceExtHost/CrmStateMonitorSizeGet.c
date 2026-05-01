/*
 * XREFs of CrmStateMonitorSizeGet @ 0x18003CC10
 * Callers:
 *     CrmActivityStart @ 0x180030D90 (CrmActivityStart.c)
 *     CrmRegisterToStateMonitor @ 0x18003C628 (CrmRegisterToStateMonitor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmStateMonitorSizeGet(int a1)
{
  unsigned int v1; // edx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  bool v7; // zf
  int v8; // ecx

  v1 = 0;
  if ( a1 <= 25 )
  {
    if ( a1 == 25 )
      return 120;
    if ( a1 > 17 )
    {
      if ( a1 != 18 )
      {
        switch ( a1 )
        {
          case 19:
            return 184;
          case 20:
            return 192;
          case 21:
            return 120;
        }
        if ( a1 > 23 )
        {
          v7 = a1 == 24;
LABEL_33:
          if ( !v7 )
            return v1;
          return 120;
        }
      }
      return 80;
    }
    if ( a1 >= 13 )
      return 80;
    if ( a1 < 0 )
      return v1;
    if ( a1 <= 1 )
      return 80;
    if ( a1 == 2 )
      return 128;
    if ( a1 <= 8 )
      return 72;
    if ( a1 != 10 )
      return 80;
    return 64;
  }
  if ( a1 > 32 )
  {
    if ( a1 == 35 || a1 == 36 )
      return 112;
    if ( a1 != 33 )
    {
      if ( a1 == 34 )
        return 80;
      if ( a1 != 37 )
      {
        if ( a1 > 39 )
          return v1;
        return 80;
      }
    }
    return 96;
  }
  if ( a1 == 32 )
    return 80;
  v2 = a1 - 26;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        v5 = v4 - 1;
        if ( !v5 )
          return 112;
        v8 = v5 - 1;
        if ( v8 )
        {
          v7 = v8 == 1;
          goto LABEL_33;
        }
        return 80;
      }
      return 64;
    }
    return 96;
  }
  return 112;
}
