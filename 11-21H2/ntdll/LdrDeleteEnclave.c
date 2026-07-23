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

NTSTATUS __cdecl LdrDeleteEnclave(PVOID BaseAddress)
{
  char v1; // dl
  _DWORD *locked; // rax
  _DWORD *v3; // rdi
  int v4; // ebx
  int v5; // esi
  PVOID BaseAddressa; // [rsp+40h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp+10h] BYREF

  BaseAddressa = BaseAddress;
  v1 = 1;
  locked = (_DWORD *)LdrpObtainLockedEnclave(BaseAddress, v1);
  v3 = locked;
  if ( !locked )
    goto LABEL_5;
  v4 = locked[14];
  v5 = LdrpDeleteEnclave(locked);
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(v3 + 4));
  LdrpDereferenceEnclave(v3);
  if ( v4 != 16 )
    v3 = 0LL;
  if ( v5 >= 0 )
  {
LABEL_5:
    RegionSize = 0LL;
    v5 = ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, &RegionSize, 0x8000u);
  }
  if ( v3 )
    LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry((unsigned int)v5);
  return v5;
}
