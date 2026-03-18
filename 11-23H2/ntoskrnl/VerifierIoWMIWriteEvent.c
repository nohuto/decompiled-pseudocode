/*
 * XREFs of VerifierIoWMIWriteEvent @ 0x140AE41A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     WmiVerifierCopyEvent @ 0x1405FBB48 (WmiVerifierCopyEvent.c)
 *     WmiVerifierTakeEventOwnership @ 0x1405FBBA0 (WmiVerifierTakeEventOwnership.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VerifierIoWMIWriteEvent(__int64 a1)
{
  unsigned int *v2; // rcx
  int v3; // ebx
  void *v4; // rsi
  void *v5; // rcx

  if ( WmiVerifierTakeEventOwnership(a1) )
  {
    v4 = WmiVerifierCopyEvent(v2);
    if ( v4 )
    {
      v3 = ((__int64 (__fastcall *)(void *))pXdvIoWMIWriteEvent)(v4);
      v5 = (void *)a1;
      if ( v3 < 0 )
        v5 = v4;
      ExFreePoolWithTag(v5, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)((__int64 (*)(void))pXdvIoWMIWriteEvent)();
  }
  return (unsigned int)v3;
}
