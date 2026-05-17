/*
 * XREFs of LdrDeleteEnclave @ 0x1800D8380
 * Callers:
 *     <none>
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18003B5D0 (RtlLeaveCriticalSection.c)
 *     ZwFreeVirtualMemory @ 0x1800A4430 (ZwFreeVirtualMemory.c)
 *     LdrpDeleteEnclave @ 0x1800D89DC (LdrpDeleteEnclave.c)
 *     LdrpDereferenceEnclave @ 0x1800D8A60 (LdrpDereferenceEnclave.c)
 *     LdrpObtainLockedEnclave @ 0x1800D9138 (LdrpObtainLockedEnclave.c)
 *     LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry @ 0x1800DC248 (LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry.c)
 */

__int64 __fastcall LdrDeleteEnclave(__int64 a1, __int64 a2)
{
  __int64 locked; // rax
  __int64 v3; // rdi
  int v4; // ebx
  int v5; // esi

  LOBYTE(a2) = 1;
  locked = LdrpObtainLockedEnclave(a1, a2);
  v3 = locked;
  if ( !locked )
    goto LABEL_5;
  v4 = *(_DWORD *)(locked + 56);
  v5 = LdrpDeleteEnclave(locked);
  RtlLeaveCriticalSection(v3 + 16);
  LdrpDereferenceEnclave(v3);
  if ( v4 != 16 )
    v3 = 0LL;
  if ( v5 >= 0 )
LABEL_5:
    v5 = ZwFreeVirtualMemory();
  if ( v3 )
    LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry((unsigned int)v5);
  return (unsigned int)v5;
}
