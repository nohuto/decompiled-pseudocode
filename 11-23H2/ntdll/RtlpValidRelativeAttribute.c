/*
 * XREFs of RtlpValidRelativeAttribute @ 0x1800F6BE4
 * Callers:
 *     RtlpValidAttributeAce @ 0x1800F69E8 (RtlpValidAttributeAce.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x18000AD54 (RtlStringCbLengthW.c)
 */

char __fastcall RtlpValidRelativeAttribute(unsigned int *a1, unsigned int a2)
{
  unsigned int v4; // eax
  int v5; // r11d
  unsigned int v6; // edx
  unsigned __int64 v7; // rcx
  unsigned int *m; // r8
  __int64 v9; // rcx
  unsigned int *k; // rcx
  int v11; // r9d
  unsigned int *j; // r8
  __int64 v13; // rcx
  unsigned int v14; // esi
  int v15; // esi
  __int64 v16; // rcx
  unsigned int *i; // rbx
  __int64 v19; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    if ( a2 >= 0x14 && !*((_WORD *)a1 + 3) && (a1[2] & 0xFFC0) == 0 )
    {
      if ( a1[3] )
      {
        if ( a2 >= *a1 )
        {
          v4 = a2 - *a1;
          if ( v4 >= 4 && (int)RtlStringCbLengthW((unsigned int *)((char *)a1 + *a1), v4, &v19) >= 0 )
          {
            v6 = a1[3];
            v7 = 4LL * v6;
            if ( v7 <= 0xFFFFFFFF && a2 - 16 >= (unsigned int)v7 )
            {
              switch ( *((_WORD *)a1 + 2) )
              {
                case 1:
                case 2:
                  if ( v6 )
                  {
                    for ( i = a1 + 4; a2 >= *i && a2 - *i >= 8; ++i )
                    {
                      if ( ++v5 >= v6 )
                        return 1;
                    }
                    return 0;
                  }
                  return 1;
                case 3:
                  v15 = v5;
                  if ( v6 )
                  {
                    while ( 1 )
                    {
                      v16 = a1[v15 + 4];
                      if ( a2 < (unsigned int)v16
                        || a2 - (unsigned int)v16 < 2
                        || (int)RtlStringCbLengthW((unsigned int *)((char *)a1 + v16), a2 - (unsigned int)v16, &v19) < 0 )
                      {
                        break;
                      }
                      if ( ++v15 >= a1[3] )
                        return 1;
                    }
                    return 0;
                  }
                  return 1;
                case 5:
                  v11 = v5;
                  if ( v6 )
                  {
                    for ( j = a1 + 4; ; ++j )
                    {
                      v13 = *j;
                      if ( a2 < (unsigned int)v13 )
                        break;
                      if ( a2 - (unsigned int)v13 < 4 )
                        break;
                      v14 = *(unsigned int *)((char *)a1 + v13);
                      if ( !v14 || (int)v13 + 4 < (unsigned int)v13 || a2 - ((_DWORD)v13 + 4) < v14 )
                        break;
                      if ( ++v11 >= v6 )
                        return 1;
                    }
                    return 0;
                  }
                  return 1;
                case 6:
                  if ( v6 )
                  {
                    for ( k = a1 + 4; a2 >= *k && a2 - *k >= 8 && *(_QWORD *)((char *)a1 + *k) <= 1uLL; ++k )
                    {
                      if ( ++v5 >= v6 )
                        return 1;
                    }
                    return 0;
                  }
                  return 1;
                case 0x10:
                  if ( v6 )
                  {
                    for ( m = a1 + 4; ; ++m )
                    {
                      v9 = *m;
                      if ( a2 < (unsigned int)v9
                        || a2 - (unsigned int)v9 < 4
                        || (int)v9 + 4 < (unsigned int)v9
                        || a2 - ((_DWORD)v9 + 4) < *(unsigned int *)((char *)a1 + v9) )
                      {
                        break;
                      }
                      if ( ++v5 >= v6 )
                        return 1;
                    }
                    return 0;
                  }
                  return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
