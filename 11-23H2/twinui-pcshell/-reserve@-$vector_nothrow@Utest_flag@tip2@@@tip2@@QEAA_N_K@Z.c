/*
 * XREFs of ?reserve@?$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAA_N_K@Z @ 0x1801F10F0
 * Callers:
 *     ?push_back@?$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAA_N$$QEAUtest_flag@2@@Z @ 0x18046D564 (-push_back@-$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAA_N$$QEAUtest_flag@2@@Z.c)
 * Callees:
 *     ??0test_flag@tip2@@QEAA@$$QEAU01@@Z @ 0x180466148 (--0test_flag@tip2@@QEAA@$$QEAU01@@Z.c)
 *     ??_Gtest_flag@tip2@@QEAAPEAXI@Z @ 0x180466D9C (--_Gtest_flag@tip2@@QEAAPEAXI@Z.c)
 */

char __fastcall tip2::vector_nothrow<tip2::test_flag>::reserve(void **a1, unsigned __int64 a2)
{
  HANDLE ProcessHeap; // rax
  char *v5; // rax
  unsigned __int64 v6; // rbx
  char *v7; // rbp
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
  v5 = (char *)HeapAlloc(ProcessHeap, 0, 104 * a2);
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
          tip2::test_flag::test_flag(&v7[v8], (char *)*a1 + v8);
          tip2::test_flag::`scalar deleting destructor'((tip2::test_flag *)((char *)*a1 + v8), v9);
          ++v6;
          v8 += 104LL;
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
