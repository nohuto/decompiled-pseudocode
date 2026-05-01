/*
 * XREFs of ?Initialize@CActivatedEventArgsBase@@UEAAJ_KPEAUHSTRING__@@W4ApplicationExecutionState@Activation@ApplicationModel@Windows@@EE0U_GUID@@@Z @ 0x1805E6140
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1805F5290 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall CActivatedEventArgsBase::Initialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        __int64 a7,
        _OWORD *a8)
{
  int v9; // edi

  if ( *(_BYTE *)(a1 + 85) )
  {
    v9 = -2147418113;
    MicrosoftTelemetryAssertTriggeredNoArgs(a1, a2);
    RoOriginateError(2147549183LL, 0LL);
  }
  else
  {
    *(_BYTE *)(a1 + 86) = a6;
    *(_BYTE *)(a1 + 84) = a5;
    *(_QWORD *)(a1 + 104) = a7;
    *(_QWORD *)(a1 + 88) = a2;
    *(_DWORD *)(a1 + 60) = a4;
    *(_OWORD *)(a1 + 112) = *a8;
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(a1 - 16) + 80LL))(a1 - 16, a3, a1 + 56);
    if ( v9 >= 0 )
      *(_BYTE *)(a1 + 85) = 1;
  }
  return (unsigned int)v9;
}
