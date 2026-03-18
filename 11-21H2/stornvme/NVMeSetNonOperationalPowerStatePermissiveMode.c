/*
 * XREFs of NVMeSetNonOperationalPowerStatePermissiveMode @ 0x1C002473C
 * Callers:
 *     NVMePowerSettingChangeNotification @ 0x1C000B18C (NVMePowerSettingChangeNotification.c)
 *     NVMeControllerPowerUp @ 0x1C0018D60 (NVMeControllerPowerUp.c)
 * Callees:
 *     ProcessCommand @ 0x1C00039C8 (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000A1DC (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C00109C0 (memset.c)
 */

void __fastcall NVMeSetNonOperationalPowerStatePermissiveMode(__int64 a1, char a2)
{
  int v3; // eax
  int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rcx

  if ( !*(_BYTE *)(a1 + 20) )
  {
    v3 = *(_DWORD *)(a1 + 32);
    if ( (v3 & 8) == 0 )
    {
      v4 = a2 & 1;
      if ( (v3 & 4) != 0 )
      {
        *(_DWORD *)(a1 + 4136) = (4 * v4) | *(_DWORD *)(a1 + 4136) & 0xFFFFFFFB | 2;
      }
      else
      {
        *(_BYTE *)(a1 + 867) = 0;
        memset(*(void **)(a1 + 952), 0, 0x10A0uLL);
        *(_QWORD *)(*(_QWORD *)(a1 + 952) + 4232LL) = 0LL;
        v5 = *(_QWORD *)(a1 + 952);
        *(_QWORD *)(a1 + 920) = v5;
        *(_DWORD *)(a1 + 856) = 1;
        *(_BYTE *)(v5 + 4253) |= 1u;
        *(_BYTE *)(*(_QWORD *)(a1 + 952) + 4253LL) &= ~2u;
        *(_WORD *)(*(_QWORD *)(a1 + 952) + 4244LL) = 0;
        v6 = *(_QWORD *)(a1 + 952);
        LODWORD(v5) = *(_DWORD *)(v6 + 4140);
        *(_BYTE *)(v6 + 4096) = 9;
        *(_BYTE *)(v6 + 4136) = 17;
        *(_DWORD *)(v6 + 4140) = v4 | v5 & 0xFFFFFFFE;
        *(_QWORD *)(*(_QWORD *)(a1 + 952) + 4224LL) = NVMeSetNonOperationalPowerStatePermissiveModeCompletion;
        ProcessCommand(a1, a1 + 864);
        WaitForCommandCompleteWithCustomTimeout(a1, a1 + 864, 1, 10000000);
      }
    }
  }
}
