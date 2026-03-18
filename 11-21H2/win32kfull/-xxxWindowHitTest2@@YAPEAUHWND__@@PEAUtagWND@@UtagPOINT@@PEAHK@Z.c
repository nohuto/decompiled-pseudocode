/*
 * XREFs of ?xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z @ 0x1C0101328
 * Callers:
 *     xxxWindowFromPoint @ 0x1C006561C (xxxWindowFromPoint.c)
 *     ?xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z @ 0x1C0101270 (-xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C0206590 (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 * Callees:
 *     ?LayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z @ 0x1C00036E4 (-LayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C006D640 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C006D988 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?PtOutsideClipRgnOrMaxClip@tagWND@@QEBA_NAEBUtagPOINT@@@Z @ 0x1C0077940 (-PtOutsideClipRgnOrMaxClip@tagWND@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     PtInRect @ 0x1C0077984 (PtInRect.c)
 *     ?xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z @ 0x1C0101270 (-xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z.c)
 *     SizeBoxHwnd @ 0x1C025A230 (SizeBoxHwnd.c)
 */

HWND __fastcall xxxWindowHitTest2(
        const struct tagWND *BugCheckParameter2,
        struct tagPOINT a2,
        int *a3,
        unsigned int a4)
{
  const struct tagWND *v7; // rdi
  __int64 v8; // rcx
  HWND v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  int v14; // ecx
  __int64 v15; // rdx
  __int64 v17; // rax
  __int128 v18; // [rsp+50h] [rbp-28h] BYREF
  __int64 v19; // [rsp+60h] [rbp-18h]
  struct tagPOINT v20; // [rsp+88h] [rbp+10h] BYREF

  v20 = a2;
  v19 = 0LL;
  v7 = BugCheckParameter2;
  v18 = 0LL;
  if ( !BugCheckParameter2
    || !(unsigned int)IsCompositionInputWindow(BugCheckParameter2)
    && (*(_BYTE *)(*((_QWORD *)v7 + 5) + 31LL) & 0x10) == 0
    || !(unsigned int)IsCompositionInputWindow(v7) && !PtInRect((_DWORD *)(*((_QWORD *)v7 + 5) + 88LL), *(_QWORD *)&a2)
    || tagWND::PtOutsideClipRgnOrMaxClip(v7, &v20)
    || (*(_BYTE *)(*((_QWORD *)v7 + 5) + 26LL) & 8) != 0 && !LayerHitTest(v7, a2) )
  {
    return 0LL;
  }
  if ( (unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled(v7) && (a4 & 1) != 0 )
  {
    v13 = *((_QWORD *)v7 + 5);
    if ( (*(_BYTE *)(v13 + 31) & 0xC0) != 0x40 )
    {
      v14 = -2;
      goto LABEL_16;
    }
    return 0LL;
  }
  if ( !(unsigned int)IsCompositionInputWindow(v7) )
  {
    v8 = *((_QWORD *)v7 + 5);
    if ( (*(_BYTE *)(v8 + 31) & 0x20) == 0 && PtInRect((_DWORD *)(v8 + 104), *(_QWORD *)&a2) )
    {
      ThreadLock(*((_QWORD *)v7 + 14), (__int64 *)&v18);
      v9 = xxxWindowHitTest(*((struct tagWND **)v7 + 14), a2, a3, a4);
      ThreadUnlock1(v11, v10, v12);
      if ( v9 )
        return v9;
    }
  }
  LODWORD(v13) = IsCompositionInputWindow(v7);
  if ( (_DWORD)v13 || (LODWORD(v13) = gptiCurrent, *((_QWORD *)v7 + 2) != gptiCurrent) )
  {
    v14 = 1;
    goto LABEL_16;
  }
  _InterlockedIncrement(&glSendMessage);
  LODWORD(v13) = xxxSendTransformableMessageTimeout(
                   (unsigned __int64 *)v7,
                   0x84u,
                   0LL,
                   LOWORD(v20.x) | (LOWORD(v20.y) << 16),
                   0,
                   0,
                   0LL,
                   1,
                   0);
  v14 = v13;
  if ( (_DWORD)v13 == -1 )
    return 0LL;
LABEL_16:
  if ( a3 )
    *a3 = v14;
  v15 = *((_QWORD *)v7 + 5);
  LOBYTE(v13) = ~*(_BYTE *)(v15 + 26);
  if ( v14 == (((unsigned int)v13 >> 6) & 1 | 0x10) && (*(_BYTE *)(v15 + 30) & 4) == 0 )
  {
    v17 = SizeBoxHwnd(v7);
    if ( v17 )
      v7 = (const struct tagWND *)v17;
  }
  return *(HWND *)v7;
}
