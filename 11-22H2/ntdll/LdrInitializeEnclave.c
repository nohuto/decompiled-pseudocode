/*
 * XREFs of LdrInitializeEnclave @ 0x1800D8710
 * Callers:
 *     <none>
 * Callees:
 *     LdrpObtainLockedEnclave @ 0x1800220FC (LdrpObtainLockedEnclave.c)
 *     RtlLeaveCriticalSection @ 0x1800271F0 (RtlLeaveCriticalSection.c)
 *     ZwInitializeEnclave @ 0x1800A0E80 (ZwInitializeEnclave.c)
 *     NtTerminateEnclave @ 0x1800A27A0 (NtTerminateEnclave.c)
 *     RtlCallEnclave @ 0x1800A2FB0 (RtlCallEnclave.c)
 *     LdrpDereferenceEnclave @ 0x1800D8D70 (LdrpDereferenceEnclave.c)
 *     LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry @ 0x1800DC848 (LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry.c)
 */

__int64 __fastcall LdrInitializeEnclave(__int64 a1, unsigned __int64 a2)
{
  int v2; // edi
  __int64 *v3; // rax
  __int64 *v4; // rbx
  _DWORD *v5; // rsi
  bool v6; // zf

  v2 = 0;
  v3 = LdrpObtainLockedEnclave(a2, 1);
  v4 = v3;
  if ( v3 )
  {
    if ( *((_DWORD *)v3 + 14) == 16 )
    {
      v5 = v3 + 8;
      if ( *((_DWORD *)v3 + 16) )
      {
        if ( *v5 != 1 )
        {
          v2 = -1073741502;
          goto LABEL_13;
        }
        goto LABEL_8;
      }
    }
  }
  v2 = ZwInitializeEnclave();
  if ( v2 < 0 )
  {
    if ( v4 )
      goto LABEL_13;
  }
  else
  {
    v5 = v4 + 8;
    if ( v4 )
    {
LABEL_8:
      v6 = *((_DWORD *)v4 + 14) == 16;
      *v5 = 1;
      if ( !v6 )
      {
LABEL_15:
        RtlLeaveCriticalSection((__int64)(v4 + 2));
        LdrpDereferenceEnclave(v4);
        return (unsigned int)v2;
      }
      v2 = RtlCallEnclave();
      if ( v2 < 0 )
        NtTerminateEnclave();
      else
        *v5 = 2;
LABEL_13:
      if ( *((_DWORD *)v4 + 14) == 16 )
        LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry((unsigned int)v2);
      goto LABEL_15;
    }
  }
  return (unsigned int)v2;
}
