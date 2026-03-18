/*
 * XREFs of ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1C00E2830
 * Callers:
 *     ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@@Z @ 0x1C00E28EC (-ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@@Z.c)
 * Callees:
 *     ??$CreateWindowProp@VCInputQueueProp@@@CWindowProp@@SAJPEAPEAVCInputQueueProp@@@Z @ 0x1C00AFBDC (--$CreateWindowProp@VCInputQueueProp@@@CWindowProp@@SAJPEAPEAVCInputQueueProp@@@Z.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C00C9470 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     ?AttachInputQueue@CInputQueueProp@@QEAAJPEAVIInputQueue@@@Z @ 0x1C00E27A4 (-AttachInputQueue@CInputQueueProp@@QEAAJPEAVIInputQueue@@@Z.c)
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1C00E28B4 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C00F0584 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AttachInputQueueToWindow(struct tagWND *a1, struct IInputQueue *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  CInputQueueProp *v6; // rbx
  int Window; // edi
  struct tagWND *v9; // rdx
  CInputQueueProp *v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = 0LL;
  if ( (unsigned int)CWindowProp::GetProp<CInputQueueProp>(a1, &v10) )
  {
    v6 = v10;
  }
  else
  {
    Window = CWindowProp::CreateWindowProp<CInputQueueProp>((__int64 *)&v10);
    if ( Window < 0 )
      return (unsigned int)Window;
    v9 = a1;
    v6 = v10;
    if ( !(unsigned int)CWindowProp::SetProp(v10, v9) )
    {
      (**(void (__fastcall ***)(CInputQueueProp *))v6)(v6);
      return (unsigned int)-1073741790;
    }
  }
  Window = CInputQueueProp::AttachInputQueue(v6, a2, v4, v5);
  if ( Window < 0 && !*((_DWORD *)v6 + 8) )
    CWindowProp::RemoveAndDeleteProp(v6);
  return (unsigned int)Window;
}
