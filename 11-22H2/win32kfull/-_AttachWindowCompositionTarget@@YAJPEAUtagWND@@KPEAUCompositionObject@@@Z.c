/*
 * XREFs of ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@KPEAUCompositionObject@@@Z @ 0x1C005950C
 * Callers:
 *     ?AttachWindowCompositionTarget@@YAJPEAUHWND__@@KPEAUCompositionObject@@@Z @ 0x1C00592DC (-AttachWindowCompositionTarget@@YAJPEAUHWND__@@KPEAUCompositionObject@@@Z.c)
 * Callees:
 *     ??$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z @ 0x1C0059638 (--$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z.c)
 *     ??$CreateWindowProp@VCHwndTargetProp@@@CWindowProp@@SAJPEAPEAVCHwndTargetProp@@@Z @ 0x1C0059670 (--$CreateWindowProp@VCHwndTargetProp@@@CWindowProp@@SAJPEAPEAVCHwndTargetProp@@@Z.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C00C9470 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     CreateVisRgnTracker @ 0x1C00CD0F8 (CreateVisRgnTracker.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C00F0584 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall _AttachWindowCompositionTarget(struct tagWND *a1, int a2, struct CompositionObject *a3)
{
  __int64 v4; // rdi
  signed int VisRgnTracker; // ebx
  CWindowProp *v7; // rsi
  char v8; // r14
  CWindowProp *v10; // [rsp+68h] [rbp+20h] BYREF

  v10 = 0LL;
  v4 = a2;
  if ( (unsigned int)CWindowProp::GetProp<CHwndTargetProp>(a1, &v10) )
  {
    v7 = v10;
    v8 = 0;
    VisRgnTracker = *((_QWORD *)v10 + 2 * v4 + 3) != 0LL ? 0xC0000022 : 0;
    if ( *((_QWORD *)v10 + 2 * v4 + 3) )
      return (unsigned int)VisRgnTracker;
  }
  else
  {
    VisRgnTracker = CWindowProp::CreateWindowProp<CHwndTargetProp>(&v10);
    if ( VisRgnTracker < 0 )
      return (unsigned int)VisRgnTracker;
    v7 = v10;
    if ( !(unsigned int)CWindowProp::SetProp(v10, a1) )
    {
      (**(void (__fastcall ***)(CWindowProp *))v7)(v7);
      return (unsigned int)-1073741790;
    }
    v8 = 1;
  }
  VisRgnTracker = CHwndTargetProp::SetSystemVisual(v7, (unsigned int)v4, a3);
  if ( VisRgnTracker < 0
    || (!(_DWORD)v4 || (_DWORD)v4 == 1) && (VisRgnTracker = CreateVisRgnTracker(a1), VisRgnTracker < 0) )
  {
    if ( v8 )
      CWindowProp::RemoveAndDeleteProp(v7);
  }
  return (unsigned int)VisRgnTracker;
}
