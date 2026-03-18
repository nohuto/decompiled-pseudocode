/*
 * XREFs of GreGetDCPoint @ 0x1C003B970
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C00595A0 (xxxEnumDisplayMonitors.c)
 *     GreGetDCOrgEx @ 0x1C005D2D0 (GreGetDCOrgEx.c)
 *     GreGetDCOrg @ 0x1C016C2C0 (GreGetDCOrg.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C003BD24 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003BD68 (--1DCOBJ@@QEAA@XZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C00462E4 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0053C40 (EtwTraceAcquiredSharedUserCrit.c)
 *     IsEtwUserCritEnabled @ 0x1C0053DF0 (IsEtwUserCritEnabled.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C00D60B4 (UserGetRedirectedWindowOrigin.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x1C015F82C (-vMakeIso@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetDCPoint(HDC a1, int a2, __int64 a3)
{
  unsigned int v6; // esi
  DC *v7; // r8
  _BOOL8 v8; // rcx
  unsigned int v9; // edi
  unsigned int v10; // edi
  unsigned int v11; // edi
  unsigned int v12; // edi
  unsigned int v13; // edi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  char v18; // di
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbp
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  DC *v28[9]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v29; // [rsp+88h] [rbp+20h] BYREF

  v6 = 1;
  DCOBJ::DCOBJ((DCOBJ *)v28, a1);
  v7 = v28[0];
  if ( !v28[0] )
    goto LABEL_33;
  v8 = (a2 & 0x40) != 0;
  v9 = (a2 & 0xFFFFFFBF) - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      v11 = v10 - 2;
      if ( v11 )
      {
        v12 = v11 - 4;
        if ( !v12 )
        {
          *(_QWORD *)a3 = *(_QWORD *)(*((_QWORD *)v28[0] + 122) + 308LL);
          *(_DWORD *)a3 = *(_DWORD *)(*((_QWORD *)v7 + 122) + 304LL);
          goto LABEL_34;
        }
        v13 = v12 - 8;
        if ( v13 )
        {
          if ( v13 == 16 )
          {
            *(_QWORD *)a3 = *((_QWORD *)v28[0] + (*((_DWORD *)v28[0] + 10) & 1LL) + 127);
            if ( v8 && (*((_DWORD *)v7 + 9) & 0x4000) != 0 )
            {
              v29 = 0LL;
              if ( IS_USERCRIT_OWNED_AT_ALL() )
              {
                v18 = 0;
              }
              else
              {
                v18 = 1;
                if ( (unsigned int)IsEtwUserCritEnabled(v15, v14, v16, v17) )
                {
                  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
                  if ( CurrentThreadWin32Thread )
                    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
                }
                v24 = SGDGetUserSessionState(v20, v19, v21, v22);
                ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)(v24 + 8));
                EtwTraceAcquiredSharedUserCrit();
              }
              if ( (unsigned int)UserGetRedirectedWindowOrigin(a1, &v29) )
              {
                *(_DWORD *)a3 += v29;
                *(_DWORD *)(a3 + 4) += HIDWORD(v29);
              }
              if ( v18 )
                UserSessionSwitchLeaveCrit();
            }
            goto LABEL_34;
          }
        }
        else
        {
          if ( !qword_1C0294760 || (int)qword_1C0294760(v8) < 0 )
            goto LABEL_34;
          if ( qword_1C0294768 )
          {
            v6 = qword_1C0294768(a1, a3);
            goto LABEL_34;
          }
        }
LABEL_33:
        v6 = 0;
        goto LABEL_34;
      }
      v25 = *(_QWORD *)(*((_QWORD *)v28[0] + 122) + 324LL);
    }
    else
    {
      v25 = *(_QWORD *)(*((_QWORD *)v28[0] + 122) + 316LL);
    }
    *(_QWORD *)a3 = v25;
    if ( (*(_DWORD *)(*((_QWORD *)v7 + 122) + 108LL) & 1) != 0 )
      *(_DWORD *)a3 = -*(_DWORD *)a3;
  }
  else
  {
    v26 = *((_QWORD *)v28[0] + 122);
    if ( (*(_DWORD *)(v26 + 340) & 0x4000) != 0 && *(_DWORD *)(v26 + 104) == 7 )
    {
      DC::vMakeIso(v28[0]);
      v7 = v28[0];
    }
    *(_QWORD *)a3 = *(_QWORD *)(*((_QWORD *)v7 + 122) + 332LL);
  }
LABEL_34:
  DCOBJ::~DCOBJ((DCOBJ *)v28);
  return v6;
}
