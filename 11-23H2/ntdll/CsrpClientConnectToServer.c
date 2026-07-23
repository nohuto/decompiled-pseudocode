/*
 * XREFs of CsrpClientConnectToServer @ 0x180074A9C
 * Callers:
 *     CsrClientConnectToServer @ 0x18004B480 (CsrClientConnectToServer.c)
 * Callees:
 *     CsrAllocateMessagePointer @ 0x180074D10 (CsrAllocateMessagePointer.c)
 *     CsrAllocateCaptureBuffer @ 0x180074D60 (CsrAllocateCaptureBuffer.c)
 *     CsrClientCallServer @ 0x180074E30 (CsrClientCallServer.c)
 *     CsrFreeCaptureBuffer @ 0x180074FF0 (CsrFreeCaptureBuffer.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

__int64 __fastcall CsrpClientConnectToServer(int a1, void *a2, unsigned int a3)
{
  __int64 CaptureBuffer; // rax
  void *v6; // rbx
  unsigned int v7; // ebp
  int v8; // edi
  _PORT_MESSAGE SendMessageA; // [rsp+20h] [rbp-3C8h] BYREF
  int v11; // [rsp+60h] [rbp-388h]
  void *Src; // [rsp+68h] [rbp-380h] BYREF
  unsigned int v13; // [rsp+70h] [rbp-378h]

  v11 = a1;
  v13 = a3;
  CaptureBuffer = CsrAllocateCaptureBuffer(1LL, a3);
  v6 = (void *)CaptureBuffer;
  if ( !CaptureBuffer )
    return 3221225495LL;
  CsrAllocateMessagePointer(CaptureBuffer, a3, &Src);
  v7 = a3;
  memmove(Src, a2, a3);
  v8 = CsrClientCallServer(&SendMessageA);
  if ( v8 >= 0 )
    memmove(a2, Src, v7);
  CsrFreeCaptureBuffer(v6);
  return (unsigned int)v8;
}
