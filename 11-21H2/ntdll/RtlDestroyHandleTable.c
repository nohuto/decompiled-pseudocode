/*
 * XREFs of RtlDestroyHandleTable @ 0x18008D180
 * Callers:
 *     RtlDestroyAtomTable @ 0x180091C70 (RtlDestroyAtomTable.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     ZwFreeVirtualMemory @ 0x1800A4430 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall RtlDestroyHandleTable(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int v2; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  v2 = 0;
  v4 = v1;
  if ( v1 )
  {
    if ( *(_DWORD *)(a1 + 8) )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
    }
    else
    {
      v5 = *(_QWORD *)(a1 + 40) - v1;
      return (unsigned int)ZwFreeVirtualMemory(-1LL, &v4, &v5, 0x8000LL);
    }
  }
  return v2;
}
