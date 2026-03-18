/*
 * XREFs of ?AttachWindowCompositionTarget@@YAJPEAUHWND__@@KPEAUCompositionObject@@@Z @ 0x1C00B4F5C
 * Callers:
 *     NtUserCreateDCompositionHwndTarget @ 0x1C00B4DF0 (NtUserCreateDCompositionHwndTarget.c)
 * Callees:
 *     ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@KPEAUCompositionObject@@@Z @ 0x1C00B507C (-_AttachWindowCompositionTarget@@YAJPEAUtagWND@@KPEAUCompositionObject@@@Z.c)
 */

__int64 __fastcall AttachWindowCompositionTarget(HWND a1, unsigned int a2, struct CompositionObject *a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  PETHREAD **v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct _KPROCESS *CurrentProcess; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // ebx
  __int128 v17; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+30h] [rbp-18h]

  v17 = 0LL;
  v18 = 0LL;
  EnterCrit(0LL, 0LL);
  v6 = ValidateHwnd(a1);
  v8 = (PETHREAD **)v6;
  if ( v6 && (v7 = *(_QWORD *)(v6 + 40), (((*(_WORD *)(v7 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0) )
  {
    *(_QWORD *)&v17 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v17;
    *((_QWORD *)&v17 + 1) = v6;
    HMLockObject(v6);
    CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v10, v9);
    if ( CurrentProcess == PsGetThreadProcess(*v8[2]) )
      v15 = _AttachWindowCompositionTarget((struct tagWND *)v8, a2, a3);
    else
      v15 = -1073741790;
    ThreadUnlock1(v13, v12, v14);
  }
  else
  {
    v15 = -1073741811;
  }
  UserSessionSwitchLeaveCrit(v7);
  return v15;
}
