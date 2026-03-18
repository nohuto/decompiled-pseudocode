/*
 * XREFs of ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@KPEAUCompositionObject@@@Z @ 0x1C00B507C
 * Callers:
 *     ?AttachWindowCompositionTarget@@YAJPEAUHWND__@@KPEAUCompositionObject@@@Z @ 0x1C00B4F5C (-AttachWindowCompositionTarget@@YAJPEAUHWND__@@KPEAUCompositionObject@@@Z.c)
 * Callees:
 *     CreateVisRgnTracker @ 0x1C008300C (CreateVisRgnTracker.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C0083090 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C00B3CFC (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     ??$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z @ 0x1C00B52D0 (--$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z.c)
 *     ??$CreateWindowProp@VCHwndTargetProp@@@CWindowProp@@SAJPEAPEAVCHwndTargetProp@@@Z @ 0x1C00B5308 (--$CreateWindowProp@VCHwndTargetProp@@@CWindowProp@@SAJPEAPEAVCHwndTargetProp@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall _AttachWindowCompositionTarget(struct tagWND *a1, int a2, struct CompositionObject *a3)
{
  __int64 v4; // rdi
  signed int VisRgnTracker; // ebx
  CWindowProp *v7; // rsi
  char v8; // r14
  int v9; // edx
  CWindowProp *v11; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0LL;
  v4 = a2;
  if ( (unsigned int)CWindowProp::GetProp<CHwndTargetProp>(a1, &v11) )
  {
    v7 = v11;
    v8 = 0;
    VisRgnTracker = *((_QWORD *)v11 + 2 * v4 + 3) != 0LL ? 0xC0000022 : 0;
    if ( *((_QWORD *)v11 + 2 * v4 + 3) )
      return (unsigned int)VisRgnTracker;
  }
  else
  {
    VisRgnTracker = CWindowProp::CreateWindowProp<CHwndTargetProp>(&v11);
    if ( VisRgnTracker < 0 )
      return (unsigned int)VisRgnTracker;
    v7 = v11;
    if ( !(unsigned int)CWindowProp::SetProp(v11, (__int64)a1) )
    {
      (**(void (__fastcall ***)(CWindowProp *))v7)(v7);
      return (unsigned int)-1073741790;
    }
    v8 = 1;
  }
  VisRgnTracker = CHwndTargetProp::SetSystemVisual(v7, (unsigned int)v4, a3);
  if ( VisRgnTracker < 0 )
    goto LABEL_13;
  if ( (_DWORD)v4 )
  {
    if ( (_DWORD)v4 != 1 )
      return (unsigned int)VisRgnTracker;
    v9 = 8;
  }
  else
  {
    v9 = 4;
  }
  VisRgnTracker = CreateVisRgnTracker(a1, v9);
  if ( VisRgnTracker < 0 )
  {
LABEL_13:
    if ( v8 )
      CWindowProp::RemoveAndDeleteProp(v7);
  }
  return (unsigned int)VisRgnTracker;
}
