/*
 * XREFs of RealInternalSetProp @ 0x1C0149FC0
 * Callers:
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C00D7F60 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 * Callees:
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1C0029368 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     CreateProp @ 0x1C0086858 (CreateProp.c)
 *     _FindProp @ 0x1C0090D48 (_FindProp.c)
 */

__int64 __fastcall RealInternalSetProp(struct _KTHREAD **a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 v4; // bp
  __int64 v9; // r9
  __int64 v10; // rdx
  _QWORD *Prop; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rcx

  v4 = a4;
  if ( !a2 )
  {
    UserSetLastError(87LL, 0LL, a3, a4);
    return 0LL;
  }
  LockRefactorStagingAssertOwned(a1, a2, a3, a4);
  Prop = (_QWORD *)FindProp((__int64)a1, a2, v4 & 1, v9);
  if ( !Prop )
  {
    v14 = CreateProp((__int64)a1, v10, v12, v13);
    Prop = (_QWORD *)v14;
    if ( !v14 )
      return 0LL;
    *(_WORD *)(v14 + 8) = a2;
    *(_WORD *)(v14 + 10) = v4;
    *(_DWORD *)(v14 + 12) = *(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 884);
  }
  *Prop = a3;
  return 1LL;
}
