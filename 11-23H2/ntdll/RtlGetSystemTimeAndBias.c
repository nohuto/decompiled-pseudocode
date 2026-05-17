/*
 * XREFs of RtlGetSystemTimeAndBias @ 0x18007D810
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 */

__int64 __fastcall RtlGetSystemTimeAndBias(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v6; // rbx
  __int64 v7; // r11
  __int64 v8; // r10
  __int64 v9; // r9
  int v10; // edx
  void *SharedData; // r9

  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
  {
    SharedData = NtCurrentPeb()->SharedData;
    v7 = (__int64)SharedData + 588;
    v8 = (__int64)SharedData + 592;
    v6 = (__int64)SharedData + 608;
    v9 = (__int64)SharedData + 616;
  }
  else
  {
    v6 = 2147353544LL;
    v7 = 2147353180LL;
    v8 = 2147352608LL;
    v9 = 2147353552LL;
  }
  while ( 1 )
  {
    v10 = *(_DWORD *)v7;
    if ( (*(_DWORD *)v7 & 1) == 0 )
    {
      while ( HIDWORD(*(_QWORD *)v8) != *(_DWORD *)(v8 + 8) )
        _mm_pause();
      *a1 = *(_QWORD *)v8;
      if ( a2 )
        *a2 = *(_QWORD *)v6;
      if ( a3 )
        *a3 = *(_QWORD *)v9;
      while ( MEMORY[0x7FFE0018] != MEMORY[0x7FFE001C] )
        _mm_pause();
      if ( v10 == *(_DWORD *)v7 )
        break;
    }
    _mm_pause();
  }
  return MEMORY[0x7FFE0014];
}
