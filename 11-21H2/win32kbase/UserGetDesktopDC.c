/*
 * XREFs of UserGetDesktopDC @ 0x1C0071BC0
 * Callers:
 *     NtGdiOpenDCW @ 0x1C0071250 (NtGdiOpenDCW.c)
 *     NtGdiCreateMetafileDC @ 0x1C00CDAB0 (NtGdiCreateMetafileDC.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C001B500 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _GetDCEx @ 0x1C002B0A0 (_GetDCEx.c)
 *     ValidateHwndEx @ 0x1C002CB00 (ValidateHwndEx.c)
 *     GreCreateDisplayDC @ 0x1C002F6A0 (GreCreateDisplayDC.c)
 */

__int64 __fastcall UserGetDesktopDC(unsigned int a1, int a2, int a3)
{
  HDEV v6; // rbp
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 DisplayDC; // rax
  __int64 v13; // rbx
  _QWORD *v15; // rcx
  int v16; // [rsp+40h] [rbp+18h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v16);
  v6 = (HDEV)*((_QWORD *)gpDispInfo + 5);
  if ( a3
    && a1 != 2
    && (*((_DWORD *)gptiCurrent + 122) & 0x20000000) != 0
    && (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)gptiCurrent + 53) + 768LL) + 24LL) & 1) != 0 )
  {
    v15 = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)gptiCurrent + 57) + 8LL) + 24LL);
    if ( v15 )
      v15 = (_QWORD *)*v15;
    if ( !ValidateHwndEx((__int64)v15, 1LL, 0LL) )
      goto LABEL_16;
  }
  CurrentThread = KeGetCurrentThread();
  if ( a1 || PsIsSystemThread(CurrentThread) || PsGetThreadProcess(CurrentThread) == gpepCSRSS )
  {
    DisplayDC = (__int64)GreCreateDisplayDC(v6, a1, a2 != 0);
    goto LABEL_9;
  }
  v11 = *((_QWORD *)gptiCurrent + 57);
  if ( v11 )
  {
    DisplayDC = GetDCEx(*(_QWORD **)(*(_QWORD *)(v11 + 8) + 24LL), 0LL, 2155872259LL, v10);
LABEL_9:
    v13 = DisplayDC;
    goto LABEL_10;
  }
LABEL_16:
  v13 = 0LL;
LABEL_10:
  if ( !v16 )
    UserSessionSwitchLeaveCrit(v11, v8, v9, v10);
  return v13;
}
