/*
 * XREFs of LdrDeleteEnclave @ 0x1800D8680
 * Callers:
 *     <none>
 * Callees:
 *     LdrpObtainLockedEnclave @ 0x1800220FC (LdrpObtainLockedEnclave.c)
 *     RtlLeaveCriticalSection @ 0x1800271F0 (RtlLeaveCriticalSection.c)
 *     ZwFreeVirtualMemory @ 0x18009F1B0 (ZwFreeVirtualMemory.c)
 *     LdrpDeleteEnclave @ 0x1800D8CEC (LdrpDeleteEnclave.c)
 *     LdrpDereferenceEnclave @ 0x1800D8D70 (LdrpDereferenceEnclave.c)
 *     LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry @ 0x1800DC768 (LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry.c)
 */

__int64 __fastcall LdrDeleteEnclave(unsigned __int64 a1)
{
  __int64 *v1; // rax
  __int64 *v2; // rdi
  int v3; // ebx
  int v4; // esi

  v1 = LdrpObtainLockedEnclave(a1, 1);
  v2 = v1;
  if ( !v1 )
    goto LABEL_5;
  v3 = *((_DWORD *)v1 + 14);
  v4 = LdrpDeleteEnclave(v1);
  RtlLeaveCriticalSection((__int64)(v2 + 2));
  LdrpDereferenceEnclave(v2);
  if ( v3 != 16 )
    v2 = 0LL;
  if ( v4 >= 0 )
LABEL_5:
    v4 = ZwFreeVirtualMemory();
  if ( v2 )
    LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry((unsigned int)v4);
  return (unsigned int)v4;
}
