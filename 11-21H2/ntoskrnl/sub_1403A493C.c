/*
 * XREFs of sub_1403A493C @ 0x1403A493C
 * Callers:
 *     sub_14039F05C @ 0x14039F05C (sub_14039F05C.c)
 *     sub_1403AD4F0 @ 0x1403AD4F0 (sub_1403AD4F0.c)
 *     BroadcastFunction @ 0x140A48E70 (BroadcastFunction.c)
 * Callees:
 *     sub_14020F1F8 @ 0x14020F1F8 (sub_14020F1F8.c)
 *     sub_14020F26C @ 0x14020F26C (sub_14020F26C.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 */

__int64 __fastcall sub_1403A493C(__int64 a1, __int64 a2, char a3)
{
  LARGE_INTEGER PerformanceCounter; // r14
  __int64 v7; // r11
  __int64 result; // rax
  __int16 v9; // [rsp+30h] [rbp-8h]

  _disable();
  sub_14020F26C((signed __int64 *)0xFFFFF78000000340LL);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v7 = sub_14020F1F8(PerformanceCounter.QuadPart);
  if ( a1 )
  {
    qword_140C548C8 = 0LL;
    v7 = a1 + MEMORY[0xFFFFF78000000014];
  }
  MEMORY[0xFFFFF78000000348] = PerformanceCounter.QuadPart;
  MEMORY[0xFFFFF7800000001C] = HIDWORD(v7);
  MEMORY[0xFFFFF78000000014] = v7;
  if ( a2 )
  {
    MEMORY[0xFFFFF78000000358] = *(_QWORD *)a2;
    MEMORY[0xFFFFF78000000368] = *(_BYTE *)(a2 + 8);
  }
  result = ++MEMORY[0xFFFFF78000000340];
  if ( (a3 & 1) == 0 )
  {
    if ( (a3 & 4) != 0 )
    {
      qword_140D06DA8 = 0LL;
      stru_140D06BB8.QuadPart = v7;
    }
    else
    {
      stru_140D06BB8.QuadPart += a1;
      qword_140D06DA8 += a1;
    }
  }
  if ( (v9 & 0x200) != 0 )
    _enable();
  return result;
}
