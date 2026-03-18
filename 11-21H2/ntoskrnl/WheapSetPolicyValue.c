/*
 * XREFs of WheapSetPolicyValue @ 0x140A09B84
 * Callers:
 *     WheapWmiExecutePolicyManagementMethod @ 0x140646AB8 (WheapWmiExecutePolicyManagementMethod.c)
 *     WheapResetPolicyDefaults @ 0x140A09B3C (WheapResetPolicyDefaults.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WheapSetPolicyValue(unsigned int a1, unsigned int *a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rax
  __int64 v4; // r10
  int *v5; // r9
  int v6; // edx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  bool v13; // zf
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx

  if ( a1 < 0x11 )
  {
    v2 = *a2;
    v3 = 4LL * a1;
    v4 = a1;
    if ( *a2 >= LODWORD(qword_140A3A110[v3]) && v2 <= HIDWORD(qword_140A3A110[v3]) )
    {
      _mm_lfence();
      v5 = (&off_140A3A108)[v3];
      if ( *v5 == -1 )
      {
        if ( a1 > 8 )
        {
          v15 = a1 - 9;
          if ( !v15 )
          {
            v13 = v2 == WheapRegPolicyRestoreCmciErrorLimit;
            goto LABEL_42;
          }
          v16 = v15 - 1;
          if ( !v16 )
          {
            v13 = v2 == WheapRegPolicyCmciThresholdCount;
            goto LABEL_42;
          }
          v17 = v16 - 1;
          if ( !v17 )
          {
            v13 = v2 == WheapRegPolicyCmciThresholdTime;
            goto LABEL_42;
          }
          v18 = v17 - 1;
          if ( !v18 )
          {
            v13 = v2 == WheapRegPolicyCmciThresholdPollCount;
            goto LABEL_42;
          }
          v19 = v18 - 1;
          if ( !v19 )
          {
            v13 = v2 == WheapRegPolicyPendingPageListSz;
            goto LABEL_42;
          }
          v20 = v19 - 1;
          if ( !v20 )
          {
            v13 = v2 == WheaRegPolicyBadPageListMaxSize;
            goto LABEL_42;
          }
          v21 = v20 - 1;
          if ( !v21 )
          {
            v13 = v2 == WheaRegPolicyBadPageListLocation;
            goto LABEL_42;
          }
          if ( v21 != 1 )
            goto LABEL_44;
          v14 = (unsigned __int8)WheapPolicyNotifyAllOfflines;
          v6 = 0;
        }
        else
        {
          if ( a1 == 8 )
          {
            v13 = v2 == WheapRegPolicyRestoreCmciMaxAttempts;
            goto LABEL_42;
          }
          v6 = 0;
          if ( a1 )
          {
            v7 = a1 - 1;
            if ( v7 )
            {
              v8 = v7 - 1;
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
                      v12 = v11 - 1;
                      if ( v12 )
                      {
                        if ( v12 != 1 )
                          goto LABEL_44;
                        v13 = v2 == WheapRegPolicyRestoreCmciEnabled;
                      }
                      else
                      {
                        v13 = v2 == WheaRegPolicyIgnoreDummyWrite;
                      }
                    }
                    else
                    {
                      v13 = v2 == (unsigned int)(WheapPolicyMemPfaTimeout / 0x989680uLL);
                    }
                  }
                  else
                  {
                    v13 = v2 == WheapPolicyMemPfaThreshold;
                  }
                }
                else
                {
                  v13 = v2 == WheapPolicyMemPfaPageCount;
                }
LABEL_42:
                if ( v13 )
                  return 0LL;
LABEL_44:
                *v5 = v2;
                WheaRegPolicyTableChanged[v4] = 1;
                return 0LL;
              }
              v14 = (unsigned __int8)WheapPolicyMemPfaDisable;
            }
            else
            {
              v14 = (unsigned __int8)WheapPolicyMemPersistOffline;
            }
          }
          else
          {
            v14 = (unsigned __int8)WheapPolicyDisableOffline;
          }
        }
        LOBYTE(v6) = v2 != 0;
        v13 = v6 == v14;
        goto LABEL_42;
      }
      v13 = *v5 == v2;
      goto LABEL_42;
    }
  }
  return 3221225485LL;
}
