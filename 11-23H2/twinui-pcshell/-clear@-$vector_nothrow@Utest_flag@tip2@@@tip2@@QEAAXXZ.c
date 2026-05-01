/*
 * XREFs of ?clear@?$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAAXXZ @ 0x1801B1834
 * Callers:
 *     ??1test_state@tip2@@QEAA@XZ @ 0x180085028 (--1test_state@tip2@@QEAA@XZ.c)
 *     ??1stored_flag_requirements@details@tip2@@QEAA@XZ @ 0x1802876F8 (--1stored_flag_requirements@details@tip2@@QEAA@XZ.c)
 *     ??$load_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@Z @ 0x180462FB8 (--$load_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVinput_archive@0@AEAV-$vector_nothrow@Utest_flag@t.c)
 * Callees:
 *     ??_Gtest_flag@tip2@@QEAAPEAXI@Z @ 0x180466D9C (--_Gtest_flag@tip2@@QEAAPEAXI@Z.c)
 */

void __fastcall tip2::vector_nothrow<tip2::test_flag>::clear(_QWORD *a1, unsigned int a2)
{
  unsigned __int64 *v2; // rdi
  unsigned __int64 v4; // rbp
  __int64 v5; // rbx
  void *v6; // rbx
  HANDLE ProcessHeap; // rax

  v2 = a1 + 2;
  if ( *a1 )
  {
    v4 = 0LL;
    if ( *v2 )
    {
      v5 = 0LL;
      do
      {
        tip2::test_flag::`scalar deleting destructor'((tip2::test_flag *)(v5 + *a1), a2);
        ++v4;
        v5 += 104LL;
      }
      while ( v4 < *v2 );
    }
    v6 = (void *)*a1;
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v6);
    *a1 = 0LL;
  }
  a1[1] = 0LL;
  *v2 = 0LL;
}
