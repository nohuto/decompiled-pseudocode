/*
 * XREFs of ?clear@?$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAAXXZ @ 0x18006B080
 * Callers:
 *     ??$load_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@Z @ 0x180069368 (--$load_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVinput_archive@0@AEAV-$vector_nothrow@Utest_flag@t.c)
 *     ??1stored_flag_requirements@details@tip2@@QEAA@XZ @ 0x18006A3DC (--1stored_flag_requirements@details@tip2@@QEAA@XZ.c)
 *     ??1test_state@tip2@@QEAA@XZ @ 0x18006A40C (--1test_state@tip2@@QEAA@XZ.c)
 * Callees:
 *     ??_Gtest_flag@tip2@@QEAAPEAXI@Z @ 0x18006A624 (--_Gtest_flag@tip2@@QEAAPEAXI@Z.c)
 */

void __fastcall tip2::vector_nothrow<tip2::test_flag>::clear(_QWORD *a1)
{
  unsigned __int64 *v1; // rdi
  unsigned __int64 v3; // rbp
  __int64 v4; // rbx
  void *v5; // rbx
  HANDLE ProcessHeap; // rax

  v1 = a1 + 2;
  if ( *a1 )
  {
    v3 = 0LL;
    if ( *v1 )
    {
      v4 = 0LL;
      do
      {
        tip2::test_flag::`scalar deleting destructor'((PROPVARIANT *)(v4 + *a1));
        ++v3;
        v4 += 104LL;
      }
      while ( v3 < *v1 );
    }
    v5 = (void *)*a1;
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v5);
    *a1 = 0LL;
  }
  a1[1] = 0LL;
  *v1 = 0LL;
}
