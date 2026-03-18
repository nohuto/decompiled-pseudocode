/*
 * XREFs of ?AttachInputQueue@CInputQueueProp@@QEAAJPEAVIInputQueue@@@Z @ 0x1C00FF4A8
 * Callers:
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1C00FF424 (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 * Callees:
 *     ?Grow@?$CDynamicArray@PEAVIInputQueue@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C00FF534 (-Grow@-$CDynamicArray@PEAVIInputQueue@@$0HHHAHDFF@@@IEAAJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInputQueueProp::AttachInputQueue(CInputQueueProp *this, struct IInputQueue *a2)
{
  int v4; // edi
  void (__fastcall **v5)(_QWORD); // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = CDynamicArray<IInputQueue *,2003858261>::Grow((char *)this + 24);
  if ( v4 >= 0 )
  {
    *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * (unsigned int)(*((_DWORD *)this + 8))++) = a2;
    (**(void (__fastcall ***)(struct IInputQueue *))a2)(a2);
  }
  v5 = *(void (__fastcall ***)(_QWORD))a2;
  v7 = 0;
  if ( ((int (__fastcall *)(struct IInputQueue *, int *))v5[6])(a2, &v7) >= 0 )
    *((_DWORD *)this + 13) = v7;
  return (unsigned int)v4;
}
