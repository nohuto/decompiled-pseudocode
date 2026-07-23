/*
 * XREFs of RtlpFcNotifyFeatureUsageTarget @ 0x1801226D4
 * Callers:
 *     RtlpFcSendFeatureUsageNotifications @ 0x1800B1986 (RtlpFcSendFeatureUsageNotifications.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     ZwQueryWnfStateData @ 0x1800A3C60 (ZwQueryWnfStateData.c)
 *     ZwUpdateWnfStateData @ 0x1800A4A60 (ZwUpdateWnfStateData.c)
 */

__int64 __fastcall RtlpFcNotifyFeatureUsageTarget(__int64 a1, WNF_STATE_NAME *a2)
{
  PVOID Buffer; // rdi
  NTSTATUS updated; // ebx
  ULONG v5; // r8d
  unsigned int v6; // ecx
  __int64 v7; // rdx
  ULONG BufferSize; // [rsp+40h] [rbp-28h] BYREF
  ULONG ChangeStamp; // [rsp+44h] [rbp-24h] BYREF
  WNF_STATE_NAME StateName; // [rsp+48h] [rbp-20h] BYREF

  StateName = *a2;
  Buffer = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x1000uLL);
  if ( Buffer )
  {
    do
    {
      BufferSize = 4096;
      updated = ZwQueryWnfStateData(&StateName, 0LL, 0LL, &ChangeStamp, Buffer, &BufferSize);
      if ( updated >= 0 )
      {
        v5 = BufferSize;
        v6 = 0;
        if ( (BufferSize & 7) != 0 )
          v5 = 0;
        BufferSize = v5;
        v7 = v5 >> 3;
        if ( (_DWORD)v7 )
        {
          while ( *((_DWORD *)Buffer + 2 * v6) != *(_DWORD *)a1 || *((_WORD *)Buffer + 4 * v6 + 2) != *(_WORD *)(a1 + 4) )
          {
            if ( ++v6 >= (unsigned int)v7 )
              goto LABEL_10;
          }
        }
        else
        {
LABEL_10:
          if ( (unsigned __int64)v5 + 8 <= 0x1000 )
          {
            v5 += 8;
            *((_DWORD *)Buffer + 2 * v7) = *(_DWORD *)a1;
            *((_WORD *)Buffer + 4 * v7 + 2) = *(_WORD *)(a1 + 4);
            BufferSize = v5;
          }
        }
        updated = ZwUpdateWnfStateData(&StateName, Buffer, v5, 0LL, 0LL, ChangeStamp, 1u);
      }
    }
    while ( updated == -1073741823 );
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)updated;
}
