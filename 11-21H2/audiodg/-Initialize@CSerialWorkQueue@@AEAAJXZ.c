/*
 * XREFs of ?Initialize@CSerialWorkQueue@@AEAAJXZ @ 0x140067FD0
 * Callers:
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x140068288 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
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
