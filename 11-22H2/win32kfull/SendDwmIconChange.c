/*
 * XREFs of SendDwmIconChange @ 0x1C00625D0
 * Callers:
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C001F89C (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C005A330 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     xxxSetLayeredWindow @ 0x1C00CEB30 (xxxSetLayeredWindow.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C0157270 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxRecreateSmallIcons @ 0x1C022DD3C (xxxRecreateSmallIcons.c)
 * Callees:
 *     DwmAsyncIconChange @ 0x1C006267C (DwmAsyncIconChange.c)
 *     _HasCaptionIcon @ 0x1C00631C8 (_HasCaptionIcon.c)
 *     xxxGetWindowSmIcon @ 0x1C0065C34 (xxxGetWindowSmIcon.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 */

__int64 __fastcall SendDwmIconChange(ULONG_PTR a1)
{
  __int64 v2; // rcx
  void *v3; // rax
  char v5; // [rsp+30h] [rbp+8h] BYREF

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v5);
  if ( (unsigned int)HasCaptionIcon(a1) && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 30LL) & 8) != 0 && xxxGetWindowSmIcon(a1) )
    xxxGetWindowSmIcon(a1);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v5);
  v3 = (void *)ReferenceDwmApiPort(v2);
  return DwmAsyncIconChange(v3);
}
