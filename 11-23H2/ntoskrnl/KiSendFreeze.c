/*
 * XREFs of KiSendFreeze @ 0x14020D150
 * Callers:
 *     KeFreezeExecution @ 0x14020D540 (KeFreezeExecution.c)
 *     KeBugCheck2 @ 0x140568950 (KeBugCheck2.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x14057ACAC (KiBugCheckRecoveryFreezeOtherProcessors.c)
 * Callees:
 *     HalSendNMI @ 0x14020CEE0 (HalSendNMI.c)
 *     KeEnumerateNextProcessor @ 0x140257370 (KeEnumerateNextProcessor.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402C0540 (KeRemoveProcessorAffinityEx.c)
 */

__int64 __fastcall KiSendFreeze(__int64 a1, char a2)
{
  __int64 result; // rax
  int v5; // edi
  __int64 v6; // rcx
  signed __int32 v7; // eax
  _QWORD v8[2]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v9; // [rsp+30h] [rbp-28h]
  int v10; // [rsp+32h] [rbp-26h]
  __int16 v11; // [rsp+36h] [rbp-22h]
  unsigned int v12; // [rsp+70h] [rbp+18h] BYREF

  v10 = 0;
  v11 = 0;
  v12 = 0;
  result = (unsigned int)_InterlockedIncrement(&KiFreezeNestingLevel);
  if ( (int)result > 1 )
    return result;
  v8[1] = *(_QWORD *)(a1 + 8);
  v5 = 0;
  v9 = 0;
  v8[0] = a1;
  while ( 1 )
  {
    result = KeEnumerateNextProcessor(&v12, v8);
    if ( (_DWORD)result )
      break;
    v6 = KiProcessorBlock[v12];
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 11656), 5, 0);
    if ( a2 )
    {
      if ( v7 )
      {
        do
        {
          do
            _mm_pause();
          while ( *(_DWORD *)(v6 + 11656) );
        }
        while ( _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 11656), 5, 0) );
      }
LABEL_6:
      ++v5;
    }
    else
    {
      if ( !v7 )
        goto LABEL_6;
      KeRemoveProcessorAffinityEx(a1, v12);
    }
  }
  if ( v5 )
    return HalSendNMI(a1);
  return result;
}
