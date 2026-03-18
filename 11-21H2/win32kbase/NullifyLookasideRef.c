/*
 * XREFs of NullifyLookasideRef @ 0x1C0141C84
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00C64AC (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z @ 0x1C008AF34 (-FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z.c)
 */

void __fastcall NullifyLookasideRef(_DWORD *a1)
{
  bool v1; // zf

  *(_QWORD *)a1 = 0LL;
  v1 = a1[2] == 0;
  *((_BYTE *)a1 + 12) = 1;
  if ( v1 )
    NSInstrumentation::CLeakTrackingAllocator::FreeToPagedLookasideList(
      (NSInstrumentation::CLeakTrackingAllocator *)a1,
      (char *)gpStackRefLookAside,
      (struct _SLIST_ENTRY *)a1);
}
