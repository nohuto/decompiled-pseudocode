/*
 * XREFs of NtQuerySystemInformationEx @ 0x1406B62F0
 * Callers:
 *     <none>
 * Callees:
 *     ExpQuerySystemInformation @ 0x14073B5A0 (ExpQuerySystemInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtQuerySystemInformationEx(int a1, unsigned __int64 a2, unsigned int a3)
{
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  __int64 v8; // rdx
  int v9; // ecx
  unsigned __int64 v10; // rcx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  bool v21; // zf
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx

  if ( !a2 || !a3 )
    return 3221225485LL;
  if ( a1 <= 165 )
  {
    if ( a1 == 165 )
      goto LABEL_23;
    if ( a1 <= 83 )
    {
      if ( a1 != 83 )
      {
        v16 = a1 - 8;
        if ( v16 )
        {
          v17 = v16 - 15;
          if ( v17 )
          {
            v18 = v17 - 19;
            if ( v18 )
            {
              v19 = v18 - 19;
              if ( v19 )
              {
                v20 = v19 - 11;
                if ( !v20 )
                  goto LABEL_20;
                v21 = v20 == 1;
                goto LABEL_33;
              }
            }
          }
        }
      }
    }
    else
    {
      v12 = a1 - 100;
      if ( v12 )
      {
        v13 = v12 - 7;
        if ( !v13 )
          goto LABEL_20;
        v15 = v13 - 1;
        if ( v15 )
        {
          v22 = v15 - 13;
          if ( v22 )
          {
            v25 = v22 - 20;
            if ( v25 )
            {
              v21 = v25 == 19;
LABEL_33:
              if ( !v21 )
                return 3221225475LL;
            }
          }
        }
      }
    }
    v8 = 1LL;
    goto LABEL_9;
  }
  if ( a1 <= 210 )
  {
    if ( a1 != 210 )
    {
      v14 = a1 - 175;
      if ( v14 )
      {
        v8 = 3LL;
        v23 = v14 - 3;
        if ( v23 )
        {
          v24 = v23 - 2;
          if ( !v24 )
            goto LABEL_9;
          v26 = v24 - 1;
          if ( v26 )
          {
            v27 = v26 - 13;
            if ( !v27 )
              goto LABEL_9;
            if ( v27 != 15 )
              return 3221225475LL;
          }
        }
      }
      goto LABEL_23;
    }
LABEL_20:
    v8 = 3LL;
    goto LABEL_9;
  }
  v5 = a1 - 211;
  if ( !v5 )
  {
LABEL_23:
    v8 = 7LL;
    goto LABEL_9;
  }
  v6 = v5 - 11;
  if ( !v6 )
    goto LABEL_20;
  v7 = v6 - 1;
  v8 = 7LL;
  if ( !v7 )
    goto LABEL_9;
  v9 = v7 - 7;
  if ( !v9 )
    goto LABEL_9;
  v28 = v9 - 1;
  if ( !v28 )
    goto LABEL_20;
  if ( v28 != 1 )
    return 3221225475LL;
LABEL_9:
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( (v8 & a2) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = a2 + a3;
    if ( v10 > 0x7FFFFFFF0000LL || v10 < a2 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  return ExpQuerySystemInformation((unsigned int)a1, a2);
}
