/*
 * XREFs of EditionHandleAltTab @ 0x1C0121AA0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxSetWindowPos @ 0x1C0048A4C (xxxSetWindowPos.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C007D36C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     SetNewForegroundQueue @ 0x1C007FCD0 (SetNewForegroundQueue.c)
 *     PostInputMessage @ 0x1C00AB69C (PostInputMessage.c)
 *     HasHidTable @ 0x1C00ABFD0 (HasHidTable.c)
 *     PtiKbdFromQ @ 0x1C00AC810 (PtiKbdFromQ.c)
 *     AdjustPwndPtiPqForDelegation @ 0x1C00AC8D8 (AdjustPwndPtiPqForDelegation.c)
 *     xxxCancelCoolSwitch @ 0x1C01110F4 (xxxCancelCoolSwitch.c)
 */

_UNKNOWN **__fastcall EditionHandleAltTab(
        unsigned __int8 a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned __int64 a5,
        struct tagINPUT_MESSAGE_SOURCE *a6,
        void *a7,
        unsigned __int16 a8)
{
  _UNKNOWN **result; // rax
  int v10; // r14d
  int v11; // r15d
  unsigned __int64 v12; // r12
  __int64 v13; // rax
  struct tagWND *v14; // rbx
  const struct tagWND *v15; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // [rsp+78h] [rbp-19h] BYREF
  __int64 v21; // [rsp+80h] [rbp-11h] BYREF
  __int64 v22; // [rsp+88h] [rbp-9h] BYREF
  __int64 v23; // [rsp+90h] [rbp-1h] BYREF
  _QWORD v24[4]; // [rsp+98h] [rbp+7h] BYREF
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+3Fh] BYREF

  result = &retaddr;
  v24[2] = 0LL;
  v10 = a3;
  v11 = a2;
  v12 = a1;
  if ( gspwndAltTab )
  {
    if ( gpqForeground )
    {
      v13 = PtiKbdFromQ(gpqForeground);
      if ( !(unsigned int)HasHidTable(v13)
        || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(PtiKbdFromQ(gpqForeground) + 424) + 832LL) + 100LL) & 0x20) == 0 )
      {
        *(_DWORD *)(gpqForeground + 388LL) |= 0x80u;
        v22 = 0LL;
        v21 = 0LL;
        v20 = 0;
        v23 = gpqForeground;
        if ( (unsigned int)AdjustPwndPtiPqForDelegation(&v23, &v22, (struct tagTHREADINFO **)&v21, a8, a6, &v20) )
          PostInputMessage(gpqForeground, 0LL, a8, v12, ((v10 | v11) << 16) | 1, a4, 0LL, a5, 0, a6, a7, 0LL, v20, v21);
      }
    }
    result = (_UNKNOWN **)xxxCancelCoolSwitch();
    v14 = (struct tagWND *)gspwndActivate;
    if ( gspwndActivate )
    {
      v15 = *(const struct tagWND **)(gspwndActivate + 16);
      if ( gpqForeground == *((_QWORD *)v15 + 54) )
      {
        SetNewForegroundQueue(0LL, v15);
        v15 = (const struct tagWND *)*((_QWORD *)v14 + 2);
      }
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, v15, 0);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v24[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v24;
      v24[1] = v14;
      HMLockObject(v14);
      xxxSetForegroundWindow2((__int64)v14, 0LL, 0x12u);
      if ( (*(_BYTE *)(*((_QWORD *)v14 + 5) + 31LL) & 0x40) != 0 )
        xxxSetWindowPos(v14, 0LL, 0LL, 0LL, 0, 0, 16387);
      ThreadUnlock1(v18, v17, v19);
      return (_UNKNOWN **)HMAssignmentUnlock(&gspwndActivate);
    }
  }
  return result;
}
