/*
 * XREFs of AllocateW32Thread @ 0x1C00C53CC
 * Callers:
 *     W32pThreadCallout @ 0x1C00C5260 (W32pThreadCallout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AllocateW32Thread(__int64 a1)
{
  int v2; // edi
  __int64 *Pool2; // rsi
  __int64 v4; // rbx

  v2 = -1073741801;
  Pool2 = (__int64 *)ExAllocatePool2(64LL, 56LL, 1853125461LL);
  if ( Pool2 )
  {
    v4 = Win32AllocPoolWithQuotaZInit(W32ThreadSize, 1769239381LL);
    if ( v4 )
    {
      v2 = AddW32TlsData();
      if ( v2 >= 0 )
      {
        *(_QWORD *)v4 = a1;
        *Pool2 = v4;
        PsSetThreadWin32Thread(a1, Pool2, 0LL);
        ObfReferenceObject(*(PVOID *)v4);
        _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
        return 0LL;
      }
    }
    ExFreePoolWithTag(Pool2, 0);
    if ( v4 )
      ExFreePoolWithTag((PVOID)v4, 0);
  }
  return (unsigned int)v2;
}
