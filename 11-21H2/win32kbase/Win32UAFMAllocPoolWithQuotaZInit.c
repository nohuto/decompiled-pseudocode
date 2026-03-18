/*
 * XREFs of Win32UAFMAllocPoolWithQuotaZInit @ 0x1C0167490
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0030874 (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ?AdjustSize@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CA_K_K@Z @ 0x1C014640C (-AdjustSize@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CA_K_K@Z.c)
 *     ?GenerateCookie@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CAIXZ @ 0x1C01464BC (-GenerateCookie@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CAIX.c)
 */

__int64 __fastcall Win32UAFMAllocPoolWithQuotaZInit(size_t Size, __int64 a2, _DWORD *a3)
{
  __int64 v5; // rax
  int v6; // edx
  NSInstrumentation::CLeakTrackingAllocator *v7; // rcx
  __int64 v8; // rbx
  __int64 Quota; // rdi
  ULONG Cookie; // eax

  v5 = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AdjustSize(Size);
  v8 = 0LL;
  if ( v5 )
  {
    Quota = NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(v7, 260LL, v5, v6);
    if ( Quota )
    {
      Cookie = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::GenerateCookie();
      *(_DWORD *)(Quota + 12) = Cookie;
      v8 = Quota + 16;
      *a3 = Cookie - 1;
      memset((void *)(Quota + 16), 0, Size);
    }
  }
  return v8;
}
