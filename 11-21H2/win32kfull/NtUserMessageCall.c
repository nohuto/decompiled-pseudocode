/*
 * XREFs of NtUserMessageCall @ 0x1C00DCDE0
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0024EF0 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserMessageCall(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, int a6, int a7)
{
  __int64 v8; // r13
  __int64 v10; // rdx
  int v11; // r14d
  char v12; // si
  __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rsi
  __int64 *v28; // rax
  int v29; // ebp
  __int64 v30; // rdx
  int v31; // [rsp+30h] [rbp-58h]
  __int128 v32; // [rsp+40h] [rbp-48h] BYREF
  __int64 v33; // [rsp+50h] [rbp-38h]

  v8 = a2;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_UseSharedNtUserMessageCall__private_reporting,
    0x1942F6Du,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_StrictIAMForegroundCheck_logged_traits,
    1,
    v31);
  v11 = 0;
  v12 = 0;
  v13 = 0LL;
  if ( (v8 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87LL, v10);
    UserSetLastError(87LL, v30);
    return 0LL;
  }
  else
  {
    if ( ((a1 + 1) & 0xFFFFFFFFFFFEFFFFuLL) == 0 && (unsigned int)(a6 - 695) <= 1 )
    {
      v13 = -1LL;
LABEL_4:
      v12 = 1;
      goto LABEL_5;
    }
    if ( a6 != 689 || (unsigned int)(v8 - 992) <= 8 )
      goto LABEL_4;
    while ( 1 )
    {
LABEL_5:
      if ( v12 || !(unsigned __int8)ShouldRunShared(5LL) )
        EnterCrit(0LL, 1LL);
      else
        EnterSharedCrit(v25, v24, v26);
      v14 = 0LL;
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( ThreadWin32Thread )
        v14 = *ThreadWin32Thread;
      if ( v13 == -1 )
        break;
      v16 = ValidateHwnd(a1);
      v13 = v16;
      if ( !v16 )
      {
        UserSessionSwitchLeaveCrit(v17);
        return 0LL;
      }
      if ( *(_QWORD *)(v16 + 16) == v14 && (*(_BYTE *)(*(_QWORD *)(v16 + 40) + 18LL) & 4) == 0 || v12 )
        break;
      v12 = 1;
      UserSessionSwitchLeaveCrit(v17);
    }
    v33 = 0LL;
    v32 = 0LL;
    if ( v13 != -1 )
    {
      *(_QWORD *)&v32 = *(_QWORD *)(v14 + 416);
      *(_QWORD *)(v14 + 416) = &v32;
      *((_QWORD *)&v32 + 1) = v13;
      HMLockObject(v13);
    }
    if ( v12 )
    {
      if ( (unsigned int)v8 >= 0x400 )
      {
        v18 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64))mpFnidPfn[((_BYTE)a6 + 6) & 0x1F])(
                v13,
                (unsigned int)v8,
                a3,
                a4,
                a5);
      }
      else
      {
        _mm_lfence();
        LOBYTE(v11) = a7 != 0;
        v18 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64, int, int))gapfnMessageCall[(unsigned __int8)MessageTable[v8]])(
                v13,
                (unsigned int)v8,
                a3,
                a4,
                a5,
                a6,
                v11);
      }
    }
    else
    {
      v27 = 0LL;
      v28 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v28 )
        v27 = *v28;
      v29 = *(_DWORD *)(v27 + 1508);
      *(_DWORD *)(v27 + 1508) = 0;
      if ( (unsigned int)v8 < 0x400 )
      {
        _mm_lfence();
        LOBYTE(v11) = a7 != 0;
        v18 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64, int, int))gapfnMessageCall[(unsigned __int8)MessageTable[v8]])(
                v13,
                (unsigned int)v8,
                a3,
                a4,
                a5,
                a6,
                v11);
      }
      else
      {
        v18 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64))mpFnidPfn[((_BYTE)a6 + 6) & 0x1F])(
                v13,
                (unsigned int)v8,
                a3,
                a4,
                a5);
      }
      *(_DWORD *)(v27 + 1508) = v29;
    }
    v22 = v18;
    if ( v13 != -1 )
      ThreadUnlock1(v20, v19, v21);
    UserSessionSwitchLeaveCrit(v20);
    return v22;
  }
}
