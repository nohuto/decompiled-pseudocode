/*
 * XREFs of KiHvEnlightenedGuestPriorityKick @ 0x1402B30B0
 * Callers:
 *     KiDeferredReadySingleThread @ 0x14023A3A0 (KiDeferredReadySingleThread.c)
 *     KeSetTimer2 @ 0x140250220 (KeSetTimer2.c)
 *     KiIpiEnlightenedGuestPriorityKick @ 0x140254700 (KiIpiEnlightenedGuestPriorityKick.c)
 *     KiInsertQueueDpc @ 0x140254850 (KiInsertQueueDpc.c)
 *     KiSetPriorityThread @ 0x1402B0860 (KiSetPriorityThread.c)
 *     KiRemoveBoostThread @ 0x1402BB4E0 (KiRemoveBoostThread.c)
 *     KiCompleteRescheduleContextEntry @ 0x140308020 (KiCompleteRescheduleContextEntry.c)
 *     KiInsertTimer2 @ 0x14034B7A8 (KiInsertTimer2.c)
 *     KiApplyForegroundBoostThread @ 0x140350678 (KiApplyForegroundBoostThread.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140211EDC (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     HvlSetGuestSchedulerEventRegister @ 0x140540C70 (HvlSetGuestSchedulerEventRegister.c)
 */

__int64 __fastcall KiHvEnlightenedGuestPriorityKick(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  int v5; // r8d
  bool v6; // zf
  __int64 v7; // r8
  __int64 v8; // rbx
  _DWORD v9[2]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v10[2]; // [rsp+38h] [rbp-20h] BYREF

  result = *(_QWORD *)(a2 + 35000);
  if ( result )
  {
    if ( *(_QWORD *)(a1 + 35000) )
    {
      if ( a1 != a2 )
      {
        v5 = *(_DWORD *)result;
        result = *(_DWORD *)result & 0x40000;
        if ( (v5 & 0x100000) != 0 || (_DWORD)result && (result = (unsigned __int8)v5, (unsigned __int8)v5 < a3) )
        {
          v6 = HvlpVirtualProcessorsIdentityMapped == 0;
          v7 = *(_QWORD *)(a1 + 35000);
          *(_DWORD *)(v7 + 12) = 2;
          v8 = *(unsigned int *)(a2 + 36);
          if ( v6 )
            LODWORD(v8) = HvlpVirtualProcessorMapping[2 * (unsigned int)v8 + 1] | (HvlpVirtualProcessorMapping[2 * v8] << 6);
          *(_DWORD *)(v7 + 8) = v8;
          if ( (BYTE4(xmmword_140D1EAD0) & 0x20) != 0 )
          {
            v9[0] = *(_DWORD *)(a2 + 36);
            v9[1] = 2;
            v10[0] = v9;
            v10[1] = 8LL;
            EtwTraceKernelEvent((int)v10, 1, 0xA0000020, 3957, 4196866);
          }
          return HvlSetGuestSchedulerEventRegister((unsigned int)v8);
        }
      }
    }
  }
  return result;
}
