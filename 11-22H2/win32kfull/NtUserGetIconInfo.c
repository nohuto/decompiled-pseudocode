/*
 * XREFs of NtUserGetIconInfo @ 0x1C002BFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSizeForDpi@CCursorSizes@@QEBAII@Z @ 0x1C00273AC (-GetSizeForDpi@CCursorSizes@@QEBAII@Z.c)
 *     ?FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z @ 0x1C0027440 (-FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C002BA80 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     ?ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z @ 0x1C002BFB8 (-ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z.c)
 *     HMValidateHandle @ 0x1C002D0F8 (HMValidateHandle.c)
 *     GetDpiForSystem @ 0x1C00EDB80 (GetDpiForSystem.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ?EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ @ 0x1C011BC6C (-EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ.c)
 */

__int64 __fastcall NtUserGetIconInfo(
        __int64 a1,
        ULONG64 a2,
        struct _UNICODE_STRING *a3,
        struct _UNICODE_STRING *a4,
        unsigned int *a5,
        int a6)
{
  AtomicExecutionCheck *v10; // rcx
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v12; // rdi
  __int64 v13; // rdx
  struct tagCURSOR *v14; // rax
  struct tagCURSOR *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  ULONG64 v18; // rdx
  _DWORD *v19; // rdx
  ULONG64 v20; // rdx
  _BYTE *v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned int DpiForSystem; // eax
  CCursorSizes *v30; // rcx
  int SizeForDpi; // eax
  struct tagCURSOR *DPICursor; // rax
  struct _UNICODE_STRING *v33; // [rsp+48h] [rbp-70h]
  struct _UNICODE_STRING *v34; // [rsp+50h] [rbp-68h]
  __int128 v35; // [rsp+68h] [rbp-50h] BYREF
  __int128 v36; // [rsp+78h] [rbp-40h] BYREF

  v35 = 0LL;
  v36 = 0LL;
  EnterCrit(0LL, 1LL);
  AtomicExecutionCheck::EnforceConsistency(v10);
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
  ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
  v12 = 3LL;
  LOBYTE(v13) = 3;
  v14 = (struct tagCURSOR *)HMValidateHandle(a1, v13);
  v15 = v14;
  if ( v14 )
  {
    if ( ShouldVirtualizeIconCursorSize(v14) )
    {
      DpiForSystem = GetDpiForSystem(v17, v16);
      SizeForDpi = CCursorSizes::GetSizeForDpi(v30, DpiForSystem);
      DPICursor = FindDPICursor(v15, SizeForDpi);
      if ( DPICursor )
        v15 = DPICursor;
    }
    if ( a3 )
    {
      v20 = (ULONG64)a3;
      if ( (unsigned __int64)a3 >= MmUserProbeAddress )
        v20 = MmUserProbeAddress;
      LODWORD(v35) = *(_DWORD *)v20;
      *((_QWORD *)&v35 + 1) = *(_QWORD *)(v20 + 8);
      ProbeForWrite(*((volatile void **)&v35 + 1), WORD1(v35), 2u);
      v34 = (struct _UNICODE_STRING *)&v35;
    }
    else
    {
      v34 = 0LL;
    }
    if ( a4 )
    {
      v18 = (ULONG64)a4;
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        v18 = MmUserProbeAddress;
      LODWORD(v36) = *(_DWORD *)v18;
      *((_QWORD *)&v36 + 1) = *(_QWORD *)(v18 + 8);
      ProbeForWrite(*((volatile void **)&v36 + 1), WORD1(v36), 2u);
      v33 = (struct _UNICODE_STRING *)&v36;
    }
    else
    {
      v33 = 0LL;
    }
    if ( a5 )
    {
      v19 = a5;
      if ( (unsigned __int64)a5 >= MmUserProbeAddress )
        v19 = (_DWORD *)MmUserProbeAddress;
      *v19 = *v19;
    }
    if ( PsGetCurrentProcessWow64Process() )
      v12 = 0LL;
    if ( (v12 & a2) != 0 )
      ExRaiseDatatypeMisalignment();
    v21 = (_BYTE *)a2;
    if ( a2 >= MmUserProbeAddress )
      v21 = (_BYTE *)MmUserProbeAddress;
    *v21 = *v21;
    v21[31] = v21[31];
    LODWORD(v14) = (unsigned __int8)_InternalGetIconInfo(v15, (struct _ICONINFO *)a2, v34, v33, a5, a6 != 0);
    if ( a3 )
    {
      *(_DWORD *)(&v34->MaximumLength + 1) = 0;
      *a3 = *v34;
    }
    if ( a4 )
    {
      *(_DWORD *)(&v33->MaximumLength + 1) = 0;
      *a4 = *v33;
    }
  }
  v22 = (int)v14;
  v23 = PsGetCurrentThreadWin32Thread();
  --*(_DWORD *)(v23 + 48);
  UserSessionSwitchLeaveCrit(v25, v24, v26, v27);
  return v22;
}
