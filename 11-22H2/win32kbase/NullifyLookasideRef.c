/*
 * XREFs of NullifyLookasideRef @ 0x1C012D370
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0051264 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z @ 0x1C00946EC (-FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z.c)
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
      (char *)a1);
}
