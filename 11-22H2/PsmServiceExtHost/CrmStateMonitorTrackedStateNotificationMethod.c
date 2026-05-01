/*
 * XREFs of CrmStateMonitorTrackedStateNotificationMethod @ 0x18004BC9C
 * Callers:
 *     CrmActivityStart @ 0x18002B870 (CrmActivityStart.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmStateMonitorTrackedStateNotificationMethod(int a1)
{
  unsigned int v1; // edx
  bool v2; // zf
  bool v3; // zf
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx

  v1 = 0;
  if ( a1 <= 21 )
  {
    if ( a1 == 21 )
      return v1;
    if ( a1 > 10 )
    {
      if ( a1 > 16 )
      {
        v4 = a1 - 17;
        v3 = v4 == 0;
        goto LABEL_15;
      }
      if ( a1 == 16 )
        return v1;
      a1 -= 11;
      v2 = a1 == 0;
      goto LABEL_12;
    }
    if ( a1 == 10 )
      return v1;
    if ( a1 > 5 )
    {
      v4 = a1 - 6;
      v3 = v4 == 0;
      goto LABEL_15;
    }
    if ( a1 != 5 )
    {
      v2 = a1 == 0;
LABEL_12:
      if ( v2 )
        return v1;
      v4 = a1 - 1;
      v3 = v4 == 0;
LABEL_15:
      if ( v3 )
        return v1;
      v5 = v4 - 1;
      if ( !v5 )
        return v1;
      goto LABEL_29;
    }
    return 1;
  }
  if ( a1 > 32 )
  {
    v11 = a1 - 33;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( !v12 )
        return 1;
      v13 = v12 - 1;
      if ( v13 )
      {
        if ( v13 != 2 )
          return 1;
      }
    }
    return v1;
  }
  if ( a1 == 32 )
    return v1;
  if ( a1 <= 27 )
  {
    if ( a1 == 27 )
      return v1;
    v6 = a1 - 22;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( !v7 )
        return v1;
      v8 = v7 - 1;
      if ( !v8 )
        return 1;
      v9 = v8 - 1;
      if ( !v9 )
        return 1;
      goto LABEL_30;
    }
    return 1;
  }
  v10 = a1 - 28;
  if ( !v10 )
    return v1;
  v5 = v10 - 1;
  if ( !v5 )
    return 1;
LABEL_29:
  v9 = v5 - 1;
  if ( !v9 )
    return v1;
LABEL_30:
  if ( v9 != 1 )
    return 1;
  return v1;
}
