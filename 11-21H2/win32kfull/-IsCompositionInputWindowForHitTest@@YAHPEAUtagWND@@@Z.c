/*
 * XREFs of ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C006D2FC
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0058FB0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C006995C (-RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z.c)
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C006C570 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 * Callees:
 *     ?HasFallbackInteractionSink@@YAHPEBUtagWND@@@Z @ 0x1C0002554 (-HasFallbackInteractionSink@@YAHPEBUtagWND@@@Z.c)
 *     ?IsWindowHolographicForHitTest@@YAHQEAUtagWND@@@Z @ 0x1C006D450 (-IsWindowHolographicForHitTest@@YAHQEAUtagWND@@@Z.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C006D640 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall IsCompositionInputWindowForHitTest(struct tagWND *a1)
{
  unsigned int v2; // r14d
  __int64 v4; // rdi
  __int64 v5; // r15
  __int64 Prop; // rdi
  int v7; // esi
  tagObjLock **v8; // rdi
  __int128 v9; // [rsp+48h] [rbp-28h] BYREF
  char v10; // [rsp+58h] [rbp-18h]
  char v11; // [rsp+60h] [rbp-10h]

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
      v9 = 0LL;
      v10 = 0;
      v11 = 0;
      if ( !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser) )
      {
        v11 = 1;
        if ( v4 == gObjDummyLock )
          v4 = 0LL;
        *(_QWORD *)&v9 = v4;
        v7 = 0;
        v8 = (tagObjLock **)&v9;
        do
        {
          if ( *v8 )
            tagObjLock::LockExclusive(*v8);
          ++v7;
          ++v8;
        }
        while ( !v7 );
        v10 = 1;
      }
      Prop = RealGetProp(*((_QWORD *)a1 + 18), v5, 1LL);
      if ( v11 && v10 )
      {
        if ( (_QWORD)v9 )
          tagObjLock::UnLockExclusive((tagObjLock *)v9);
        v10 = 0;
      }
      if ( Prop && *(_DWORD *)(Prop + 28) )
        return 1LL;
    }
    if ( (*((_DWORD *)a1 + 80) & 0x1000) != 0 )
      return 0LL;
LABEL_11:
    if ( !(unsigned int)HasFallbackInteractionSink(a1) )
      return v2;
    return 0LL;
  }
  return 1LL;
}
