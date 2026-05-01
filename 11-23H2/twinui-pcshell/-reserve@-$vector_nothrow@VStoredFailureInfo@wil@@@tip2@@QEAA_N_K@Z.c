/*
 * XREFs of ?reserve@?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@QEAA_N_K@Z @ 0x1801F12A0
 * Callers:
 *     ?push_back@?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@QEAA_N$$QEAVStoredFailureInfo@wil@@@Z @ 0x18046D5C0 (-push_back@-$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@QEAA_N$$QEAVStoredFailureInfo@wil@@@Z.c)
 * Callees:
 *     ??0StoredFailureInfo@wil@@QEAA@$$QEAV01@@Z @ 0x180024400 (--0StoredFailureInfo@wil@@QEAA@$$QEAV01@@Z.c)
 *     ??_GStoredFailureInfo@wil@@QEAAPEAXI@Z @ 0x180417BEC (--_GStoredFailureInfo@wil@@QEAAPEAXI@Z.c)
 */

char __fastcall tip2::vector_nothrow<wil::StoredFailureInfo>::reserve(void **a1, unsigned __int64 a2)
{
  HANDLE ProcessHeap; // rax
  LPVOID v5; // rax
  unsigned __int64 v6; // rbx
  LPVOID v7; // rbp
  __int64 v8; // r14
  unsigned int v9; // edx
  void *v10; // rbx
  HANDLE v11; // rax

  if ( a2 <= (unsigned __int64)a1[1] )
  {
LABEL_9:
    LOBYTE(v5) = 1;
    return (char)v5;
  }
  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, 0, 168 * a2);
  v6 = 0LL;
  v7 = v5;
  if ( v5 )
  {
    if ( *a1 )
    {
      if ( a1[2] )
      {
        v8 = 0LL;
        do
        {
          wil::StoredFailureInfo::StoredFailureInfo((__int64)v7 + v8, (__int64)*a1 + v8);
          wil::StoredFailureInfo::`scalar deleting destructor'((wil::StoredFailureInfo *)((char *)*a1 + v8), v9);
          ++v6;
          v8 += 168LL;
        }
        while ( v6 < (unsigned __int64)a1[2] );
      }
      v10 = *a1;
      v11 = GetProcessHeap();
      HeapFree(v11, 0, v10);
    }
    *a1 = v7;
    a1[1] = (void *)a2;
    goto LABEL_9;
  }
  return (char)v5;
}
