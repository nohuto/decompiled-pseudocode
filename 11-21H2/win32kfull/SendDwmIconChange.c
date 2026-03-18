/*
 * XREFs of SendDwmIconChange @ 0x1C0085110
 * Callers:
 *     xxxSetLayeredWindow @ 0x1C0082DD4 (xxxSetLayeredWindow.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C0098A20 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00A36F0 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxRecreateSmallIcons @ 0x1C0158A28 (xxxRecreateSmallIcons.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C016DFC0 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 * Callees:
 *     _HasCaptionIcon @ 0x1C00684C0 (_HasCaptionIcon.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     DwmAsyncIconChange @ 0x1C00851B4 (DwmAsyncIconChange.c)
 *     xxxGetWindowSmIcon @ 0x1C0085264 (xxxGetWindowSmIcon.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

__int64 __fastcall SendDwmIconChange(ULONG_PTR BugCheckParameter2)
{
  void *v2; // rax
  char v4; // [rsp+30h] [rbp+8h] BYREF

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v4);
  if ( (unsigned int)HasCaptionIcon(BugCheckParameter2)
    && (*(_BYTE *)(*(_QWORD *)(BugCheckParameter2 + 40) + 30LL) & 8) != 0
    && xxxGetWindowSmIcon(BugCheckParameter2) )
  {
    xxxGetWindowSmIcon(BugCheckParameter2);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v4);
  v2 = (void *)ReferenceDwmApiPort();
  return DwmAsyncIconChange(v2);
}
