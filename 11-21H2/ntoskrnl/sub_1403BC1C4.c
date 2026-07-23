/*
 * XREFs of sub_1403BC1C4 @ 0x1403BC1C4
 * Callers:
 *     sub_1403BBEC4 @ 0x1403BBEC4 (sub_1403BBEC4.c)
 *     sub_14050F9E0 @ 0x14050F9E0 (sub_14050F9E0.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_140303720 @ 0x140303720 (sub_140303720.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

unsigned __int64 __fastcall sub_1403BC1C4(unsigned int a1, __int64 a2, __int64 a3, __int64 *a4, __int64 *a5)
{
  unsigned __int64 v7; // r14
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 QuadPart; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 result; // rax

  v7 = a1;
  do
  {
    v9 = __readcr2();
    __writecr2(v9);
    v10 = __rdtsc();
    v11 = __readcr2();
    __writecr2(v11);
    if ( a2 == qword_140C4E390 && byte_140C4E4F8 )
    {
      QuadPart = KeQueryPerformanceCounter(0LL).QuadPart;
    }
    else
    {
      v12 = sub_140303720(a2);
      QuadPart = sub_14042A5E0(v12, v13);
    }
    *a4 = QuadPart;
    v15 = __readcr2();
    __writecr2(v15);
    if ( a3 == qword_140C4E390 && byte_140C4E4F8 )
    {
      v18 = KeQueryPerformanceCounter(0LL).QuadPart;
    }
    else
    {
      v16 = sub_140303720(a3);
      v18 = sub_14042A5E0(v16, v17);
    }
    *a5 = v18;
    v19 = __readcr2();
    __writecr2(v19);
    v20 = __rdtsc();
    v21 = __readcr2();
    __writecr2(v21);
    result = (((unsigned __int64)HIDWORD(v20) << 32) | (unsigned int)v20) - v10;
  }
  while ( result > v7 );
  return result;
}
