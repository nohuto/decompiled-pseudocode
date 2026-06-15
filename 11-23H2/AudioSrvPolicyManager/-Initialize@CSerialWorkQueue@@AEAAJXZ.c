/*
 * XREFs of ?Initialize@CSerialWorkQueue@@AEAAJXZ @ 0x1800217B4
 * Callers:
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800226E0 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSerialWorkQueue::Initialize(PTP_POOL *this)
{
  signed int v2; // ebx
  PTP_POOL Threadpool; // rax
  signed int LastError; // eax
  signed int v5; // eax
  PTP_CLEANUP_GROUP ThreadpoolCleanupGroup; // rax
  signed int v7; // eax
  struct _TP_POOL *v8; // rcx

  if ( *this )
    return 0;
  Threadpool = CreateThreadpool(0LL);
  *this = Threadpool;
  if ( Threadpool )
    goto LABEL_10;
  LastError = GetLastError();
  v2 = LastError;
  if ( LastError > 0 )
    v2 = (unsigned __int16)LastError | 0x80070000;
  if ( v2 >= 0 )
  {
LABEL_10:
    if ( SetThreadpoolThreadMinimum(*this, 1u) )
      goto LABEL_11;
    v5 = GetLastError();
    v2 = v5;
    if ( v5 > 0 )
      v2 = (unsigned __int16)v5 | 0x80070000;
    if ( v2 >= 0 )
    {
LABEL_11:
      ThreadpoolCleanupGroup = CreateThreadpoolCleanupGroup();
      this[21] = ThreadpoolCleanupGroup;
      if ( ThreadpoolCleanupGroup )
      {
        v2 = 0;
LABEL_17:
        SetThreadpoolThreadMaximum(*this, 1u);
        this[2] = *this;
        v8 = this[21];
        this[4] = 0LL;
        this[3] = v8;
        return (unsigned int)v2;
      }
      v7 = GetLastError();
      v2 = v7;
      if ( v7 > 0 )
        v2 = (unsigned __int16)v7 | 0x80070000;
      if ( v2 >= 0 )
        goto LABEL_17;
    }
  }
  return (unsigned int)v2;
}
