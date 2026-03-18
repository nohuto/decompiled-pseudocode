/*
 * XREFs of HmgFreeObjectAttr @ 0x1C00AD9C8
 * Callers:
 *     GreDeleteObject @ 0x1C0023690 (GreDeleteObject.c)
 *     NtGdiDeleteObjectApp @ 0x1C0024430 (NtGdiDeleteObjectApp.c)
 *     GreSetBrushOwner @ 0x1C00630E0 (GreSetBrushOwner.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C00636C0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C008E200 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     NtGdiCreateRectRgn @ 0x1C008E4C0 (NtGdiCreateRectRgn.c)
 *     bDeleteBrush @ 0x1C00C82E0 (bDeleteBrush.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     GreAcquireHmgrSemaphore @ 0x1C002DF20 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002E900 (GreReleaseHmgrSemaphore.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FC74 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 */

__int64 __fastcall HmgFreeObjectAttr(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rsi
  int v8; // ecx
  int v9; // r8d
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rax

  result = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( a1 && result )
  {
    if ( !*(_QWORD *)(result + 32) )
    {
      *(_QWORD *)(result + 32) = a1;
      return result;
    }
    result = PsGetCurrentProcessWin32Process(v3);
    v7 = result;
    if ( result )
    {
      GreAcquireHmgrSemaphore(v5, v4, v6);
      v10 = v7 + 208;
      v11 = *(_QWORD *)(v7 + 208);
      if ( v11 == v7 + 208 || *(_DWORD *)(v11 + 16) == 170 )
      {
        v11 = NSInstrumentation::CLeakTrackingAllocator::Allocate(
                (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                260LL,
                0x568uLL,
                1717658183);
        if ( !v11 )
          return GreReleaseHmgrSemaphore(v8, v11, v9);
        v12 = *(_QWORD *)v10;
        if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) != v10 )
          __fastfail(3u);
        *(_QWORD *)v11 = v12;
        *(_QWORD *)(v11 + 8) = v10;
        *(_QWORD *)(v12 + 8) = v11;
        *(_QWORD *)v10 = v11;
        *(_DWORD *)(v11 + 16) = 0;
      }
      *(_QWORD *)(v11 + 8LL * (unsigned int)(*(_DWORD *)(v11 + 16))++ + 24) = a1;
      *(_QWORD *)(v7 + 48) = a1;
      return GreReleaseHmgrSemaphore(v8, v11, v9);
    }
  }
  return result;
}
