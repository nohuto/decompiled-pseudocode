/*
 * XREFs of NtUserLogicalToPhysicalPoint @ 0x1C01D64C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ?DCEPtInRect@@YA_NPEBUtagRECT@@UtagPOINT@@@Z @ 0x1C0151814 (-DCEPtInRect@@YA_NPEBUtagRECT@@UtagPOINT@@@Z.c)
 */

__int64 __fastcall NtUserLogicalToPhysicalPoint(__int64 a1, struct tagPOINT *a2, __int64 a3)
{
  int v5; // edi
  _BYTE *v6; // rdx
  ULONG64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  struct tagPOINT *v11; // rax
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  bool v13; // r14
  struct tagPOINT v15; // [rsp+90h] [rbp+18h] BYREF
  struct tagPOINT v16; // [rsp+98h] [rbp+20h] BYREF

  v5 = 0;
  v15 = 0LL;
  EnterSharedCrit(a1, a2, a3);
  v8 = ValidateHwnd(a1);
  if ( v8 )
  {
    v11 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v11 = (struct tagPOINT *)MmUserProbeAddress;
    v15 = *v11;
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(MmUserProbeAddress);
    if ( (unsigned __int8)ShouldVirtualizeWindowRect(v8, CurrentThreadDpiAwarenessContext) )
    {
      v16 = 0LL;
      TransformPointBetweenCoordinateSpaces(&v16, &v15, v8, 0LL);
      v13 = DCEPtInRect((const struct tagRECT *)(*(_QWORD *)(v8 + 40) + 88LL), v16);
    }
    else
    {
      v13 = DCEPtInRect((const struct tagRECT *)(*(_QWORD *)(v8 + 40) + 88LL), v15);
      TransformPointBetweenCoordinateSpaces(&v15, &v15, 0LL, v8);
    }
    if ( v13 )
    {
      v7 = MmUserProbeAddress;
      v6 = a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v6 = (_BYTE *)MmUserProbeAddress;
      *v6 = *v6;
      v6[7] = v6[7];
      *a2 = v15;
      v5 = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v7, v6, v9, v10);
  return v5;
}
