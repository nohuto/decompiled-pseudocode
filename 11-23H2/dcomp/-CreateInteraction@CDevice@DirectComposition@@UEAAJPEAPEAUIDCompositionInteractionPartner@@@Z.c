/*
 * XREFs of ?CreateInteraction@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionInteractionPartner@@@Z @ 0x1800EF840
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z @ 0x18005ADD4 (-CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateInteraction(
        DirectComposition::CDevice *this,
        struct IDCompositionInteractionPartner **a2)
{
  unsigned int v2; // ebx
  struct IDCompositionInteractionPartner *v4; // rdx
  unsigned int v5; // ecx
  unsigned int v7; // [rsp+48h] [rbp+10h] BYREF
  void *v8; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  if ( a2 )
  {
    *a2 = 0LL;
    if ( (int)DirectComposition::CDevice::CreateProxyInternal(
                (DirectComposition::CDevice *)((char *)this - 16),
                89,
                0,
                &v8,
                &v7) >= 0 )
    {
      v4 = (struct IDCompositionInteractionPartner *)v8;
      v5 = v7;
      *((_DWORD *)v8 + 2) = 1;
      *((_DWORD *)v4 + 3) = v5;
      *(_QWORD *)v4 = &DirectComposition::CInteractionProxy::`vftable';
      *a2 = v4;
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v2;
}
