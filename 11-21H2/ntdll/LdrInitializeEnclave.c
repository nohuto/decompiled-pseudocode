/*
 * XREFs of LdrInitializeEnclave @ 0x1800D8410
 * Callers:
 *     <none>
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18003B5D0 (RtlLeaveCriticalSection.c)
 *     ZwInitializeEnclave @ 0x1800A60E0 (ZwInitializeEnclave.c)
 *     NtTerminateEnclave @ 0x1800A79A0 (NtTerminateEnclave.c)
 *     RtlCallEnclave @ 0x1800A8170 (RtlCallEnclave.c)
 *     LdrpDereferenceEnclave @ 0x1800D8A60 (LdrpDereferenceEnclave.c)
 *     LdrpObtainLockedEnclave @ 0x1800D9138 (LdrpObtainLockedEnclave.c)
 *     LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry @ 0x1800DC328 (LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry.c)
 */

__int64 __fastcall LdrInitializeEnclave(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  int v3; // edi
  __int64 locked; // rax
  __int64 v5; // rbx
  bool v6; // zf

  v2 = a2;
  LOBYTE(a2) = 1;
  v3 = 0;
  locked = LdrpObtainLockedEnclave(v2, a2);
  v5 = locked;
  if ( locked && *(_DWORD *)(locked + 56) == 16 && *(_DWORD *)(locked + 64) )
  {
    if ( *(_DWORD *)(locked + 64) != 1 )
    {
      v3 = -1073741502;
      goto LABEL_13;
    }
    goto LABEL_8;
  }
  v3 = ZwInitializeEnclave();
  if ( v3 < 0 )
  {
    if ( v5 )
      goto LABEL_13;
  }
  else if ( v5 )
  {
LABEL_8:
    v6 = *(_DWORD *)(v5 + 56) == 16;
    *(_DWORD *)(v5 + 64) = 1;
    if ( !v6 )
    {
LABEL_15:
      RtlLeaveCriticalSection(v5 + 16);
      LdrpDereferenceEnclave(v5);
      return (unsigned int)v3;
    }
    v3 = RtlCallEnclave();
    if ( v3 < 0 )
      NtTerminateEnclave();
    else
      *(_DWORD *)(v5 + 64) = 2;
LABEL_13:
    if ( *(_DWORD *)(v5 + 56) == 16 )
      LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry((unsigned int)v3);
    goto LABEL_15;
  }
  return (unsigned int)v3;
}
