/*
 * XREFs of sub_14020F07C @ 0x14020F07C
 * Callers:
 *     KeClockInterruptNotify @ 0x140305780 (KeClockInterruptNotify.c)
 *     sub_140308240 @ 0x140308240 (sub_140308240.c)
 *     KeSynchronizeTimeToQpc @ 0x1403917D0 (KeSynchronizeTimeToQpc.c)
 * Callees:
 *     sub_14020F1F8 @ 0x14020F1F8 (sub_14020F1F8.c)
 *     sub_14020F26C @ 0x14020F26C (sub_14020F26C.c)
 *     sub_14020F290 @ 0x14020F290 (sub_14020F290.c)
 *     sub_140292B8C @ 0x140292B8C (sub_140292B8C.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 */

__int64 __fastcall sub_14020F07C(LARGE_INTEGER *a1, char a2, __int64 a3, __int64 a4)
{
  LARGE_INTEGER v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // r11
  __int64 v10; // r8
  __int64 result; // rax
  unsigned __int64 v12; // r10
  volatile CCHAR v13; // cl
  __int64 v14; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int64 v16; // [rsp+20h] [rbp-18h] BYREF
  __int64 v17; // [rsp+28h] [rbp-10h]

  v16 = 0LL;
  if ( a2 )
    goto LABEL_2;
  do
  {
    v14 = sub_140292B8C(0xFFFFF78000000340uLL);
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    *(_QWORD *)a3 = ((__int64 (__fastcall *)(_QWORD, _QWORD))sub_14020F290)(
                      (LARGE_INTEGER)PerformanceCounter.QuadPart,
                      &v16);
  }
  while ( MEMORY[0xFFFFF78000000340] != v14 );
  if ( v16 > 0x1F4 )
  {
LABEL_2:
    sub_14020F26C(0xFFFFF78000000340uLL);
    if ( a1 )
      v7 = *a1;
    else
      v7 = KeQueryPerformanceCounter(0LL);
    v17 = ((__int64 (__fastcall *)(_QWORD))sub_14020F1F8)((LARGE_INTEGER)v7.QuadPart);
    v8 = v17;
    *(_QWORD *)a3 = ((__int64 (__fastcall *)(_QWORD, _QWORD))sub_14020F290)((LARGE_INTEGER)v7.QuadPart, &v16);
    MEMORY[0xFFFFF7800000001C] = HIDWORD(v17);
    MEMORY[0xFFFFF78000000014] = v8;
    MEMORY[0xFFFFF78000000010] = *(_DWORD *)(a3 + 4);
    MEMORY[0xFFFFF78000000008] = *(_QWORD *)a3;
    MEMORY[0xFFFFF78000000348] = v7.QuadPart;
    MEMORY[0xFFFFF78000000350] = v7.QuadPart;
    v9 = MEMORY[0xFFFFF78000000320];
    v10 = (unsigned int)dword_140C4F028 - v16;
    *(_QWORD *)a4 = MEMORY[0xFFFFF78000000320];
    if ( v10 <= 0 )
    {
      v12 = 1LL;
      v10 += DesiredTime;
      if ( v10 <= 0 )
      {
        v13 = KeNumberProcessors[1];
        v12 = ((unsigned __int64)(((unsigned __int64)-v10 * (unsigned __int128)(unsigned __int64)qword_140D06FF0) >> 64) >> v13)
            + 2;
        LODWORD(v10) = (((unsigned __int64)(((unsigned __int64)-v10
                                           * (unsigned __int128)(unsigned __int64)qword_140D06FF0) >> 64) >> v13)
                      + 1)
                     * DesiredTime
                     + v10;
      }
      *(_QWORD *)a4 = v9 + v12;
      MEMORY[0xFFFFF78000000328] = *(_DWORD *)(a4 + 4);
      MEMORY[0xFFFFF78000000320] = *(_QWORD *)a4;
    }
    result = MEMORY[0xFFFFF78000000340] + 1LL;
    dword_140C4F028 = v10;
    ++MEMORY[0xFFFFF78000000340];
  }
  else
  {
    *(_QWORD *)a3 = MEMORY[0xFFFFF78000000008];
    result = MEMORY[0xFFFFF78000000320];
    *(_QWORD *)a4 = MEMORY[0xFFFFF78000000320];
  }
  return result;
}
