/*
 * XREFs of NtUserMagSetContextInformation @ 0x1C01F9900
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     MagSetLensContextInformation @ 0x1C01CA01C (MagSetLensContextInformation.c)
 */

__int64 __fastcall NtUserMagSetContextInformation(__int64 a1, int a2, ULONG64 a3, unsigned int a4)
{
  NTSTATUS v8; // ebx
  char *v9; // r14
  char *v10; // rsi
  __int64 v11; // rdx
  ULONG64 v12; // rcx
  int v13; // eax
  __int64 v14; // rdi
  ULONG v15; // eax
  __int64 v16; // rdx
  __int64 v18; // rdx
  unsigned int v19; // r15d
  unsigned __int64 v20; // rax
  char *v21; // rax
  __int64 j; // rcx
  _QWORD *v23; // rdx
  char *v24; // rax
  __int64 i; // rcx
  ULONG64 v26; // rdx
  __int64 v27; // [rsp+50h] [rbp-1E8h]
  char *v28; // [rsp+58h] [rbp-1E0h]
  char *v29; // [rsp+60h] [rbp-1D8h]
  __int64 v30; // [rsp+B0h] [rbp-188h]
  __int128 v31; // [rsp+C8h] [rbp-170h]
  int v32; // [rsp+D8h] [rbp-160h]
  __int128 v33; // [rsp+F0h] [rbp-148h]
  __int128 v34; // [rsp+100h] [rbp-138h]
  __int128 v35; // [rsp+110h] [rbp-128h]
  __int128 v36; // [rsp+120h] [rbp-118h]
  __int128 v37; // [rsp+130h] [rbp-108h]
  int v38; // [rsp+140h] [rbp-F8h]
  __int128 v39; // [rsp+168h] [rbp-D0h]
  _OWORD v40[7]; // [rsp+180h] [rbp-B8h] BYREF

  v8 = -1073741811;
  v9 = 0LL;
  v10 = 0LL;
  memset(v40, 0, 0x68uLL);
  v29 = 0LL;
  v28 = 0LL;
  EnterCrit(1LL, 0LL);
  if ( a1 == -3 )
  {
    v27 = -1LL;
  }
  else if ( a1 )
  {
    v27 = ValidateHwnd(a1);
    if ( !v27 )
    {
LABEL_5:
      v13 = 0;
      v14 = 0LL;
      goto LABEL_6;
    }
  }
  else
  {
    v27 = 0LL;
  }
  if ( a2 >= 11 )
  {
    v8 = -1073741821;
    goto LABEL_5;
  }
  if ( a2 == 4 )
  {
    if ( *(_QWORD *)(gptiCurrent + 456LL) != grpdeskRitInput )
    {
      UserSetLastError(5LL, v11);
      v13 = 1;
      goto LABEL_130;
    }
    if ( (unsigned __int8)Enforced(grpdeskRitInput) && *(int *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) >= 0 )
    {
      UserSetLastError(5LL, v18);
      EtwTraceUIPISystemError(*(_QWORD *)(gptiCurrent + 424LL), 0LL, 7LL);
      v8 = -1073741790;
      goto LABEL_5;
    }
  }
  if ( a2 > 6 )
  {
    v12 = (unsigned int)(a2 - 7);
    if ( a2 == 7 )
    {
      if ( a3 )
      {
        if ( a4 >= 0x10 )
        {
          v12 = a3 + 16;
          if ( a3 + 16 < a3 || v12 > MmUserProbeAddress )
          {
            v12 = MmUserProbeAddress;
            *(_BYTE *)MmUserProbeAddress = 0;
          }
          v40[0] = *(_OWORD *)a3;
          if ( LODWORD(v40[0]) <= 6 )
          {
            v12 = 24LL * LODWORD(v40[0]);
            if ( v12 > 0xFFFFFFFF )
            {
              v13 = 1;
              v10 = 0LL;
              v9 = 0LL;
            }
            else if ( (int)v12 + 16 < (unsigned int)v12 )
            {
              v13 = 1;
              v10 = 0LL;
              v9 = 0LL;
            }
            else
            {
              v24 = (char *)Win32AllocPoolZInit((unsigned int)(v12 + 16), 1735226197LL);
              v9 = v24;
              if ( v24 )
              {
                v28 = v24;
                *(_OWORD *)v24 = v40[0];
                for ( i = 0LL; (unsigned int)i < *(_DWORD *)v24; i = (unsigned int)(i + 1) )
                {
                  v26 = a3 + 16 + 24 * i;
                  if ( v26 + 24 < v26 || v26 + 24 > MmUserProbeAddress )
                    v26 = MmUserProbeAddress;
                  v30 = *(_QWORD *)(v26 + 16);
                  *(_OWORD *)&v24[24 * i + 16] = *(_OWORD *)v26;
                  *(_QWORD *)&v24[24 * i + 32] = v30;
                }
                goto LABEL_38;
              }
              v8 = -1073741801;
              v13 = 1;
              v10 = 0LL;
            }
          }
          else
          {
            v8 = -1073741306;
            v13 = 1;
            v10 = 0LL;
            v9 = 0LL;
          }
        }
        else
        {
          v8 = -1073741306;
          v13 = 1;
          v10 = 0LL;
          v9 = 0LL;
        }
      }
      else
      {
        v13 = 1;
        v10 = 0LL;
        v9 = 0LL;
      }
    }
    else
    {
      v12 = (unsigned int)(a2 - 8);
      if ( a2 != 8 )
      {
        v12 = (unsigned int)(a2 - 9);
        if ( a2 == 9 )
        {
          if ( !a3 )
          {
            v13 = 1;
            v10 = 0LL;
            v9 = 0LL;
            goto LABEL_130;
          }
          if ( a4 < 4 )
          {
            v8 = -1073741306;
            v13 = 1;
            v10 = 0LL;
            v9 = 0LL;
            goto LABEL_130;
          }
        }
        else
        {
          if ( !a3 )
          {
            v13 = 1;
            v10 = 0LL;
            v9 = 0LL;
            goto LABEL_130;
          }
          if ( a4 < 4 )
          {
            v8 = -1073741306;
            v13 = 1;
            v10 = 0LL;
            v9 = 0LL;
            goto LABEL_130;
          }
        }
        if ( a3 + 4 < a3 || a3 + 4 > MmUserProbeAddress )
          a3 = MmUserProbeAddress;
        LODWORD(v40[0]) = *(_DWORD *)a3;
        v9 = (char *)v40;
        goto LABEL_38;
      }
      v13 = 1;
      v10 = 0LL;
      v9 = 0LL;
    }
  }
  else if ( a2 == 6 )
  {
    if ( a3 )
    {
      if ( a4 >= 0x10 )
      {
        v12 = a3 + 16;
        if ( a3 + 16 < a3 || v12 > MmUserProbeAddress )
        {
          v12 = MmUserProbeAddress;
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        v40[0] = *(_OWORD *)a3;
        if ( DWORD1(v40[0]) <= 0x19 )
        {
          v12 = LODWORD(v40[0]);
          if ( LODWORD(v40[0]) <= 0x19 )
          {
            v19 = DWORD1(v40[0]) + LODWORD(v40[0]);
            if ( (unsigned int)(DWORD1(v40[0]) + LODWORD(v40[0])) < LODWORD(v40[0]) )
            {
              v13 = 1;
              v10 = 0LL;
              v9 = 0LL;
            }
            else if ( v19 <= 0x19 )
            {
              v20 = 8LL * v19;
              if ( v20 > 0xFFFFFFFF )
              {
                v13 = 1;
                v10 = 0LL;
                v9 = 0LL;
              }
              else if ( (int)v20 + 8 >= (unsigned int)v20 )
              {
                v21 = (char *)Win32AllocPoolZInit((unsigned int)(v20 + 8), 1735226197LL);
                v9 = v21;
                if ( v21 )
                {
                  v29 = v21;
                  *(_QWORD *)v21 = *(_QWORD *)&v40[0];
                  for ( j = 0LL; (unsigned int)j < v19; j = (unsigned int)(j + 1) )
                  {
                    v23 = (_QWORD *)(a3 + 8 + 8 * j);
                    if ( v23 + 1 < v23 || (unsigned __int64)(v23 + 1) > MmUserProbeAddress )
                      v23 = (_QWORD *)MmUserProbeAddress;
                    *(_QWORD *)&v21[8 * j + 8] = *v23;
                  }
                  goto LABEL_38;
                }
                v8 = -1073741801;
                v13 = 1;
                v10 = 0LL;
              }
              else
              {
                v13 = 1;
                v10 = 0LL;
                v9 = 0LL;
              }
            }
            else
            {
              v8 = -1073741306;
              v13 = 1;
              v10 = 0LL;
              v9 = 0LL;
            }
          }
          else
          {
            v8 = -1073741306;
            v13 = 1;
            v10 = 0LL;
            v9 = 0LL;
          }
        }
        else
        {
          v8 = -1073741306;
          v13 = 1;
          v10 = 0LL;
          v9 = 0LL;
        }
      }
      else
      {
        v8 = -1073741306;
        v13 = 1;
        v10 = 0LL;
        v9 = 0LL;
      }
    }
    else
    {
      v13 = 1;
      v10 = 0LL;
      v9 = 0LL;
    }
  }
  else
  {
    if ( a2 < 0 )
    {
LABEL_38:
      v8 = MagSetLensContextInformation(gMagnContext, gptiCurrent, (struct tagWND *)v27, (unsigned int)a2, v9);
      v13 = 1;
      v10 = v28;
      v9 = v29;
      goto LABEL_130;
    }
    v13 = 1;
    if ( a2 <= 1 )
    {
      if ( !a3 )
      {
        v9 = 0LL;
        goto LABEL_38;
      }
      v10 = 0LL;
      v9 = 0LL;
    }
    else
    {
      switch ( a2 )
      {
        case 2:
          if ( a3 )
          {
            if ( a4 >= 0x10 )
            {
              if ( a3 + 16 < a3 || a3 + 16 > MmUserProbeAddress )
                a3 = MmUserProbeAddress;
              v40[0] = *(_OWORD *)a3;
              goto LABEL_37;
            }
            v8 = -1073741306;
            v10 = 0LL;
            v9 = 0LL;
          }
          else
          {
            v10 = 0LL;
            v9 = 0LL;
          }
          break;
        case 3:
          if ( a3 )
          {
            if ( a4 >= 0x20 )
            {
              if ( a3 + 32 < a3 || a3 + 32 > MmUserProbeAddress )
                a3 = MmUserProbeAddress;
              v39 = *(_OWORD *)(a3 + 16);
              v40[0] = *(_OWORD *)a3;
              v40[1] = v39;
              goto LABEL_37;
            }
            v8 = -1073741306;
            v10 = 0LL;
            v9 = 0LL;
          }
          else
          {
            v10 = 0LL;
            v9 = 0LL;
          }
          break;
        case 4:
          if ( !a3 )
          {
            v10 = 0LL;
            v9 = 0LL;
            break;
          }
          if ( a4 < 0x24 )
          {
            v8 = -1073741306;
            v10 = 0LL;
            v9 = 0LL;
            break;
          }
          if ( a3 + 36 < a3 || a3 + 36 > MmUserProbeAddress )
            a3 = MmUserProbeAddress;
          v31 = *(_OWORD *)(a3 + 16);
          v32 = *(_DWORD *)(a3 + 32);
          v40[0] = *(_OWORD *)a3;
          v40[1] = v31;
          LODWORD(v40[2]) = v32;
LABEL_37:
          v9 = (char *)v40;
          goto LABEL_38;
        default:
          if ( !a3 )
          {
            v10 = 0LL;
            v9 = 0LL;
            break;
          }
          if ( a4 < 0x64 )
          {
            v8 = -1073741306;
            v10 = 0LL;
            v9 = 0LL;
            break;
          }
          if ( a3 + 100 < a3 || a3 + 100 > MmUserProbeAddress )
            a3 = MmUserProbeAddress;
          v33 = *(_OWORD *)(a3 + 16);
          v34 = *(_OWORD *)(a3 + 32);
          v35 = *(_OWORD *)(a3 + 48);
          v36 = *(_OWORD *)(a3 + 64);
          v37 = *(_OWORD *)(a3 + 80);
          v38 = *(_DWORD *)(a3 + 96);
          v40[0] = *(_OWORD *)a3;
          v40[1] = v33;
          v40[2] = v34;
          v40[3] = v35;
          v40[4] = v36;
          v40[5] = v37;
          LODWORD(v40[6]) = v38;
          goto LABEL_37;
      }
    }
  }
LABEL_130:
  if ( v8 < 0 )
    goto LABEL_5;
  v14 = 1LL;
LABEL_6:
  if ( !v13 )
  {
    v15 = RtlNtStatusToDosError(v8);
    UserSetLastError(v15, v16);
  }
  if ( v10 )
    Win32FreePool(v10);
  if ( v9 )
    Win32FreePool(v9);
  UserSessionSwitchLeaveCrit(v12);
  return v14;
}
