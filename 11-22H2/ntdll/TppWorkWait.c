/*
 * XREFs of TppWorkWait @ 0x18002FC48
 * Callers:
 *     TpWaitForTimer @ 0x18002FB70 (TpWaitForTimer.c)
 *     TpWaitForWork @ 0x18004C990 (TpWaitForWork.c)
 *     TpWaitForWait @ 0x18004FD20 (TpWaitForWait.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     TppBarrierAdjust @ 0x180068030 (TppBarrierAdjust.c)
 *     TppETWCallbackCancel @ 0x180125E80 (TppETWCallbackCancel.c)
 */

struct _PEB *__fastcall TppWorkWait(_QWORD *a1, int a2)
{
  unsigned __int32 v3; // r8d
  unsigned __int32 v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _PEB *result; // rax
  __int64 v10; // rcx
  bool v11; // zf
  signed __int32 v12; // eax

  _m_prefetchw(a1 + 29);
  v3 = *((_DWORD *)a1 + 58);
  if ( a2 )
  {
    while ( 1 )
    {
      v4 = v3 >> 1;
      if ( !(v3 >> 1) )
        break;
      v12 = _InterlockedCompareExchange((volatile signed __int32 *)a1 + 58, v3 & 1, v3);
      v11 = v3 == v12;
      v3 = v12;
      if ( v11 )
        goto LABEL_4;
    }
  }
  v4 = 0;
LABEL_4:
  TppBarrierAdjust(a1 + 7, -v4, 1LL);
  result = (struct _PEB *)RtlGetCurrentServiceSessionId(v6, v5, v7, v8);
  if ( (_DWORD)result )
  {
    result = NtCurrentPeb();
    v10 = (__int64)result->SharedData + 556;
  }
  else
  {
    v10 = 2147353478LL;
  }
  if ( *(_BYTE *)v10 )
  {
    if ( v4 )
      return (struct _PEB *)TppETWCallbackCancel(a1[18], (int)a1 + 200, a1[10], a1[11], a1[13], v4);
  }
  return result;
}
