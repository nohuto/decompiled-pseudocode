/*
 * XREFs of ?AERTLockHeap@@YAJPEAX@Z @ 0x140005974
 * Callers:
 *     ?Start@CAudioPump@@UEAAJPEA_JPEAUISaDeviceCallback@@PEAUIUnknown@@@Z @ 0x140005DA0 (-Start@CAudioPump@@UEAAJPEA_JPEAUISaDeviceCallback@@PEAUIUnknown@@@Z.c)
 *     ?CreateConnectionHeap@CDeviceGraphObjectCache@@IEAAJ_JMI@Z @ 0x14001C7F0 (-CreateConnectionHeap@CDeviceGraphObjectCache@@IEAAJ_JMI@Z.c)
 * Callees:
 *     ?IncreaseProcessWorkingSet@@YAJ_K@Z @ 0x140002CB4 (-IncreaseProcessWorkingSet@@YAJ_K@Z.c)
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x14006E5CC (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 */

__int64 __fastcall AERTLockHeap(void *a1, int a2, int a3)
{
  unsigned __int64 v3; // rsi
  char v4; // di
  int v5; // ebx

  v3 = 0LL;
  v4 = (char)a1;
  if ( a1 )
  {
    do
    {
      v5 = RtlLockMemoryBlockLookaside();
      if ( v5 != -1073741663 )
        break;
      if ( v3 > 0x6400000 )
        break;
      v3 += 0x100000LL;
    }
    while ( (int)IncreaseProcessWorkingSet(v3) >= 0 );
  }
  else
  {
    v5 = 0;
  }
  if ( (byte_1400C1841 & 4) != 0 )
    McTemplateU0pqpqqqqqq_EventWriteTransfer((_DWORD)a1, a2, a3, 8, v4, 0, 0, 0);
  return v5 | 0x10000000u;
}
