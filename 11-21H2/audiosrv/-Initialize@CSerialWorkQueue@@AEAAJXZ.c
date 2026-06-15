/*
 * XREFs of ?Initialize@CSerialWorkQueue@@AEAAJXZ @ 0x1800C7220
 * Callers:
 *     ?QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@3@@Z @ 0x1800CACE0 (-QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV-$function@$$A6AXXZ@std@@AEAV-$unique_ptr@U_Recurr.c)
 *     ?QueueWaitItemInternal@CSerialWorkQueue@@AEAAJPEAXP6AXPEAU_TP_CALLBACK_INSTANCE@@0PEAU_TP_WAIT@@J@ZV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_WaitTask@@U?$default_delete@U_WaitTask@@@std@@@5@@Z @ 0x1800D396C (-QueueWaitItemInternal@CSerialWorkQueue@@AEAAJPEAXP6AXPEAU_TP_CALLBACK_INSTANCE@@0PEAU_TP_WAIT@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSerialWorkQueue::Initialize(PTP_POOL *this)
{
  signed int v2; // ebx
  PTP_POOL Threadpool; // rax
  signed int LastError; // eax
  signed int v5; // eax

  if ( *this )
    return 0;
  Threadpool = CreateThreadpool(0LL);
  *this = Threadpool;
  if ( Threadpool )
    goto LABEL_16;
  LastError = GetLastError();
  v2 = LastError;
  if ( LastError > 0 )
    v2 = (unsigned __int16)LastError | 0x80070000;
  if ( v2 >= 0 )
  {
LABEL_16:
    if ( SetThreadpoolThreadMinimum(*this, 1u) )
    {
      v2 = 0;
LABEL_12:
      SetThreadpoolThreadMaximum(*this, 1u);
      this[2] = *this;
      return (unsigned int)v2;
    }
    v5 = GetLastError();
    v2 = v5;
    if ( v5 > 0 )
      v2 = (unsigned __int16)v5 | 0x80070000;
    if ( v2 >= 0 )
      goto LABEL_12;
  }
  return (unsigned int)v2;
}
