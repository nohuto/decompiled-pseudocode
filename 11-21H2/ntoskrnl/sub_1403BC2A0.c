/*
 * XREFs of sub_1403BC2A0 @ 0x1403BC2A0
 * Callers:
 *     sub_1403BBEC4 @ 0x1403BBEC4 (sub_1403BBEC4.c)
 *     sub_14050F9E0 @ 0x14050F9E0 (sub_14050F9E0.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_140303720 @ 0x140303720 (sub_140303720.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1403BC2A0(__int64 a1, __int64 a2)
{
  unsigned int v4; // esi
  __int64 v5; // rbp
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax

  v4 = -1;
  v5 = 25LL;
  do
  {
    v6 = __readcr2();
    __writecr2(v6);
    v7 = __rdtsc();
    v8 = __readcr2();
    __writecr2(v8);
    if ( a1 == qword_140C4E390 && byte_140C4E4F8 )
    {
      KeQueryPerformanceCounter(0LL);
    }
    else
    {
      v9 = sub_140303720(a1);
      sub_14042A5E0(v9, v10);
    }
    v11 = __readcr2();
    __writecr2(v11);
    if ( a2 == qword_140C4E390 && byte_140C4E4F8 )
    {
      KeQueryPerformanceCounter(0LL);
    }
    else
    {
      v12 = sub_140303720(a2);
      sub_14042A5E0(v12, v13);
    }
    v14 = __readcr2();
    __writecr2(v14);
    v15 = __rdtsc();
    v16 = __readcr2();
    __writecr2(v16);
    v17 = (((unsigned __int64)HIDWORD(v15) << 32) | (unsigned int)v15) - v7;
    if ( v17 >= v4 )
      LODWORD(v17) = v4;
    v4 = v17;
    --v5;
  }
  while ( v5 );
  return (unsigned int)(4 * v17);
}
