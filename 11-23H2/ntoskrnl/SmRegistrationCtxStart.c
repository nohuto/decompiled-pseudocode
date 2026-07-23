/*
 * XREFs of SmRegistrationCtxStart @ 0x140861AA0
 * Callers:
 *     SmFirstTimeInit @ 0x1407B7FF4 (SmFirstTimeInit.c)
 *     SmGetRegistrationInfo @ 0x140841684 (SmGetRegistrationInfo.c)
 *     SmcCacheCreatePrepare @ 0x1409D7FD0 (SmcCacheCreatePrepare.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     SmCreateEvent @ 0x140861AF8 (SmCreateEvent.c)
 */

__int64 __fastcall SmRegistrationCtxStart(_QWORD *a1)
{
  int v2; // ebx
  void *v3; // rcx
  void *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  v2 = SmCreateEvent(a1, &v5);
  if ( v2 < 0 )
  {
    v3 = v5;
  }
  else
  {
    v3 = 0LL;
    *a1 = v5;
    v2 = 0;
  }
  if ( v3 )
    ObfDereferenceObject(v3);
  return (unsigned int)v2;
}
