/*
 * XREFs of NtUserPhysicalToLogicalPoint @ 0x1C00F8560
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?DCEPtInRect@@YA_NPEBUtagRECT@@UtagPOINT@@@Z @ 0x1C00F8768 (-DCEPtInRect@@YA_NPEBUtagRECT@@UtagPOINT@@@Z.c)
 */

__int64 __fastcall NtUserPhysicalToLogicalPoint(__int64 a1, struct tagPOINT *a2, __int64 a3)
{
  int v5; // esi
  struct tagPOINT v6; // rbx
  ULONG64 v7; // rcx
  __int64 v8; // r13
  struct tagPOINT *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // edi
  bool v16; // zf
  struct tagPOINT v17; // rax
  _BYTE *v18; // rdx
  struct tagPOINT v20; // [rsp+90h] [rbp+18h] BYREF
  struct tagPOINT v21; // [rsp+98h] [rbp+20h]

  v5 = 0;
  v20 = 0LL;
  v6 = 0LL;
  EnterSharedCrit(a1, a2, a3);
  v8 = ValidateHwnd(a1);
  if ( v8 )
  {
    v9 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v9 = (struct tagPOINT *)MmUserProbeAddress;
    v21 = *v9;
    v20 = v21;
    if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) + 224LL) & 1) == 0 )
    {
      v11 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
      if ( (*(_BYTE *)(v11 + 224) & 0x20) == 0 )
      {
        v12 = *(_DWORD *)(*(_QWORD *)(v8 + 40) + 288LL);
        if ( (((unsigned __int16)(v12 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                 v11,
                                                                                 v10) >> 8)) & 0x1FF) != 0 )
          v6 = v20;
      }
    }
    TransformPointBetweenCoordinateSpaces(&v20, &v20, v8, 0LL);
    if ( DCEPtInRect((const struct tagRECT *)(*(_QWORD *)(v8 + 40) + 88LL), v20) )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) + 224LL) & 1) == 0 )
      {
        v14 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
        if ( (*(_BYTE *)(v14 + 224) & 0x20) == 0 )
        {
          v15 = *(_DWORD *)(*(_QWORD *)(v8 + 40) + 288LL);
          v16 = (((unsigned __int16)(v15 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                    v14,
                                                                                    v13) >> 8)) & 0x1FF) == 0;
          v17 = v20;
          if ( !v16 )
            v17 = v6;
          v20 = v17;
        }
      }
      v7 = MmUserProbeAddress;
      v18 = a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v18 = (_BYTE *)MmUserProbeAddress;
      *v18 = *v18;
      v18[7] = v18[7];
      *a2 = v20;
      v5 = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v7);
  return v5;
}
