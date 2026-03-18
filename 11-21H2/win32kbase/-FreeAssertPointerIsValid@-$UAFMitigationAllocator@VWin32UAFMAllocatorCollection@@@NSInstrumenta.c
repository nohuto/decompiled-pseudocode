/*
 * XREFs of ?FreeAssertPointerIsValid@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAXPEAXI@Z @ 0x1C0146494
 * Callers:
 *     Win32UAFMFreePagedLookasideList @ 0x1C01675B0 (Win32UAFMFreePagedLookasideList.c)
 *     Win32UAFMFreePool @ 0x1C0167600 (Win32UAFMFreePool.c)
 *     Win32UAFMFreeToPagedLookasideList @ 0x1C0167630 (Win32UAFMFreeToPagedLookasideList.c)
 * Callees:
 *     ?PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z @ 0x1C0179900 (-PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z.c)
 */

__int64 __fastcall NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::FreeAssertPointerIsValid(
        __int64 a1,
        unsigned int a2)
{
  __int64 result; // rax

  result = (unsigned int)(*(_DWORD *)(a1 - 4) - 1);
  if ( a2 != (_DWORD)result )
    return NSInstrumentation::PlatformAbort(0LL, a1, a2);
  return result;
}
