/*
 * XREFs of RtlRunOnceBeginInitialize @ 0x14075BE60
 * Callers:
 *     RtlRunOnceExecuteOnce @ 0x14075BD80 (RtlRunOnceExecuteOnce.c)
 * Callees:
 *     sub_1409BEBF8 @ 0x1409BEBF8 (sub_1409BEBF8.c)
 */

NTSTATUS __stdcall RtlRunOnceBeginInitialize(PRTL_RUN_ONCE RunOnce, ULONG Flags, PVOID *Context)
{
  signed __int64 Ptr; // rax
  NTSTATUS v6; // edi
  ULONG v8; // ebx
  signed __int64 v9; // rcx
  signed __int64 v10; // rtt

  if ( ((Flags - 1) & Flags) != 0 || (Flags & 0xFFFFFFFC) != 0 )
    return -1073741584;
  Ptr = (signed __int64)RunOnce->Ptr;
  v6 = 0;
  if ( ((__int64)RunOnce->Ptr & 3) == 2 )
    goto LABEL_3;
  if ( (Flags & 1) == 0 )
  {
    v8 = Flags & 2;
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = Ptr & 3;
        if ( (Ptr & 3) != 0 )
          break;
        v10 = Ptr;
        Ptr = _InterlockedCompareExchange64((volatile signed __int64 *)RunOnce, v8 != 0 ? 3LL : 1LL, Ptr);
        if ( v10 == Ptr )
          return 259;
      }
      if ( v9 != 1 )
        break;
      if ( v8 )
        return -1073741584;
      Ptr = sub_1409BEBF8(Ptr, RunOnce);
    }
    if ( v9 == 3 )
      return v8 != 0 ? 259 : -1073741584;
LABEL_3:
    if ( Context )
      *Context = (PVOID)(Ptr & 0xFFFFFFFFFFFFFFFCuLL);
    return v6;
  }
  return -1073741823;
}
