/*
 * XREFs of ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C0121E78
 * Callers:
 *     ?RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00AB558 (-RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z.c)
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0121240 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012B430 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?HasFallbackInteractionSink@@YAHPEBUtagWND@@@Z @ 0x1C000E9C8 (-HasFallbackInteractionSink@@YAHPEBUtagWND@@@Z.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E0F8 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0121FB0 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?IsWindowHolographicForHitTest@@YAHQEAUtagWND@@@Z @ 0x1C0122140 (-IsWindowHolographicForHitTest@@YAHQEAUtagWND@@@Z.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0122344 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 */

__int64 __fastcall IsCompositionInputWindowForHitTest(struct tagWND *a1)
{
  unsigned int v2; // edi
  __int64 v4; // rsi
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 Prop; // rsi
  int v11; // r14d
  tagObjLock **v12; // rsi
  __int128 v13; // [rsp+48h] [rbp-28h] BYREF
  char v14; // [rsp+58h] [rbp-18h]
  char v15; // [rsp+60h] [rbp-10h]

  v2 = IsCompositionInputWindow(a1);
  if ( !(unsigned int)IsWindowHolographicForHitTest(a1) )
  {
    if ( !v2 )
      return v2;
    if ( a1 )
    {
      if ( (*((_DWORD *)a1 + 80) & 0x1000) == 0 )
        goto LABEL_11;
      v4 = *((_QWORD *)a1 + 18);
      v5 = CoreWindowProp::s_atom;
      v13 = 0LL;
      v14 = 0;
      v15 = 0;
      if ( !IS_USERCRIT_OWNED_EXCLUSIVE() && IS_USERCRIT_OWNED_AT_ALL(v7, v6, v8, v9) )
      {
        v15 = 1;
        if ( v4 == gObjDummyLock )
          v4 = 0LL;
        *(_QWORD *)&v13 = v4;
        v11 = 0;
        v12 = (tagObjLock **)&v13;
        do
        {
          if ( *v12 )
            tagObjLock::LockExclusive(*v12);
          ++v11;
          ++v12;
        }
        while ( !v11 );
        v14 = 1;
      }
      Prop = RealGetProp(*((_QWORD *)a1 + 18), v5, 1LL);
      if ( v15 && v14 )
      {
        if ( (_QWORD)v13 )
          tagObjLock::UnLockExclusive((tagObjLock *)v13);
        v14 = 0;
      }
      if ( Prop && *(_DWORD *)(Prop + 28) )
        return 1LL;
    }
    if ( (*((_DWORD *)a1 + 80) & 0x1000) != 0 )
      return 0LL;
LABEL_11:
    if ( (unsigned int)HasFallbackInteractionSink(a1) )
      return 0;
    return v2;
  }
  return 1LL;
}
