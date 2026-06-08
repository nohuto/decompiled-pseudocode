/*
 * XREFs of GetHvPackage @ 0x1C003849C
 * Callers:
 *     RegisterHvPackage @ 0x1C0039200 (RegisterHvPackage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetHvPackage(int a1)
{
  __int64 v2; // rbx
  __int64 Pool2; // rax
  unsigned int *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdi
  unsigned int v8; // [rsp+48h] [rbp+10h] BYREF
  int v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = 0;
  v2 = 0LL;
  v8 = 0;
  if ( (int)HvlQueryStartedProcessors(&v8, 0LL) >= 0 )
  {
    Pool2 = ExAllocatePool2(256LL, 4LL * v8, 1919119952LL);
    v4 = (unsigned int *)Pool2;
    if ( Pool2 )
    {
      if ( (int)HvlQueryStartedProcessors(&v8, Pool2) >= 0 )
      {
        v5 = ExAllocatePool2(64LL, 320LL, 1919119952LL);
        v2 = v5;
        if ( v5 )
        {
          *(_DWORD *)(v5 + 32) = a1;
          v6 = 0LL;
          *(_QWORD *)(v5 + 24) = v5 + 16;
          for ( *(_QWORD *)(v5 + 16) = v5 + 16; (unsigned int)v6 < v8; v6 = (unsigned int)(v6 + 1) )
          {
            if ( (int)HvlQueryProcessorTopology(v4[v6], 0LL, &v9, 0LL) >= 0 && a1 == v9 )
              ++*(_DWORD *)(v2 + 36);
          }
        }
      }
      ExFreePoolWithTag(v4, (ULONG)1919119952);
    }
  }
  return v2;
}
