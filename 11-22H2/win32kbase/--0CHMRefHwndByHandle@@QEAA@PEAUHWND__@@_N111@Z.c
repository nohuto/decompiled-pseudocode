/*
 * XREFs of ??0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z @ 0x1C00DE4F0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00462A0 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMReferenceObjectByHandle @ 0x1C004ED80 (HMReferenceObjectByHandle.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     EtwTraceUIPIHandleValidationError @ 0x1C007476C (EtwTraceUIPIHandleValidationError.c)
 *     CheckAccessEx @ 0x1C0091E70 (CheckAccessEx.c)
 *     IsGetDesktopViewSupported @ 0x1C00B5124 (IsGetDesktopViewSupported.c)
 *     GetDesktopView @ 0x1C00BDF44 (GetDesktopView.c)
 *     HMIsHandleEntrySecure @ 0x1C00DE734 (HMIsHandleEntrySecure.c)
 */

CHMRefHwndByHandle *__fastcall CHMRefHwndByHandle::CHMRefHwndByHandle(
        CHMRefHwndByHandle *this,
        HWND a2,
        char a3,
        char a4,
        bool a5,
        bool a6)
{
  struct tagTHREADINFO *v10; // rdi
  __int64 v11; // r8
  const struct tagPROCESSINFO **v12; // rsi
  const struct tagPROCESSINFO *v13; // rdx
  __int64 v14; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r8

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  if ( (int)HMReferenceObjectByHandle((int)a2, (__int64)a2, this) >= 0 )
  {
    v10 = PtiCurrentShared();
    v12 = *(const struct tagPROCESSINFO ***)(*(_QWORD *)this + 16LL);
    if ( a3 )
    {
      if ( v12 != (const struct tagPROCESSINFO **)v10
        && *(_QWORD *)(*(_QWORD *)this + 24LL) != *((_QWORD *)v10 + 57)
        && (*((_DWORD *)v10 + 122) & 4) == 0
        && ((int)IsGetDesktopViewSupported() < 0 || !GetDesktopView()) )
      {
        goto LABEL_30;
      }
    }
    if ( a4 && *((_DWORD *)v12[53] + 224) != 1 )
      a4 = 0;
    if ( a6 )
    {
      if ( v12 )
      {
        LOBYTE(v11) = a4;
        if ( !CheckAccessEx((int *)(*((_QWORD *)v10 + 53) + 888LL), (unsigned int *)v12[53] + 222, v11) )
        {
          v13 = v12[53];
          if ( *(PVOID *)v13 != gpepCSRSS )
          {
            EtwTraceUIPIHandleValidationError(*((struct tagPROCESSINFO **)v10 + 53), v13, (char)a2, 1);
            return this;
          }
        }
      }
    }
    if ( a5 )
    {
      v14 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)PtiCurrentShared() + 57) + 8LL) + 24LL);
      if ( v14 != *(_QWORD *)this )
      {
        if ( !UIPrivelegeIsolation::fEnforce
          || (v14 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 488LL), (v14 & 0xC) != 0) )
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14);
          v16 = CurrentProcessWin32Process;
          if ( CurrentProcessWin32Process )
            v16 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
          v17 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 424LL) + 772LL);
          if ( *(_DWORD *)(v16 + 772) != (_DWORD)v17 )
            goto LABEL_26;
          v18 = PsGetCurrentProcessWin32Process(v17);
          v19 = v18;
          if ( v18 )
            v19 = -(__int64)(*(_QWORD *)v18 != 0LL) & v18;
          if ( *(_DWORD *)(v19 + 776) != *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 424LL) + 776LL) )
          {
LABEL_26:
            UserSetLastError(5);
            return this;
          }
        }
      }
    }
    if ( (*((_DWORD *)v10 + 122) & 0x20000000) == 0
      || (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v10 + 53) + 760LL) + 24LL) & 1) == 0
      || (unsigned int)HMIsHandleEntrySecure(a2) )
    {
LABEL_30:
      *((_QWORD *)this + 1) = *(_QWORD *)this;
      *(_QWORD *)this = 0LL;
    }
  }
  return this;
}
