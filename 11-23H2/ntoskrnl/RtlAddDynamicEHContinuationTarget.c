/*
 * XREFs of RtlAddDynamicEHContinuationTarget @ 0x1409C275C
 * Callers:
 *     PspProcessDynamicEHContinuationTargets @ 0x1409AEF1C (PspProcessDynamicEHContinuationTargets.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x140288350 (RtlAvlInsertNodeEx.c)
 *     PspFindVsmEnclaveThread @ 0x1408A5FCC (PspFindVsmEnclaveThread.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall RtlAddDynamicEHContinuationTarget(unsigned __int64 *a1, unsigned __int64 a2)
{
  _QWORD *v2; // rbx
  bool v3; // di
  int VsmEnclaveThread; // eax
  _QWORD *v7; // rax
  unsigned __int64 Pool2; // rax

  v2 = (_QWORD *)*a1;
  v3 = 0;
  if ( *a1 )
  {
    while ( 1 )
    {
      VsmEnclaveThread = PspFindVsmEnclaveThread(a2, (__int64)v2);
      if ( VsmEnclaveThread <= 0 )
      {
        if ( VsmEnclaveThread >= 0 )
          return 3221225496LL;
        v7 = (_QWORD *)*v2;
        if ( !*v2 )
          break;
      }
      else
      {
        v7 = (_QWORD *)v2[1];
        if ( !v7 )
        {
          v3 = 1;
          break;
        }
      }
      v2 = v7;
    }
  }
  Pool2 = ExAllocatePool2(257LL, 32LL, 1313359172LL);
  if ( !Pool2 )
    return 3221225495LL;
  *(_QWORD *)(Pool2 + 24) = a2;
  RtlAvlInsertNodeEx(a1, (unsigned __int64)v2, v3, Pool2);
  return 0LL;
}
