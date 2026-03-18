/*
 * XREFs of NVMeSetNonOperationalPowerStatePermissiveMode @ 0x1C0024864
 * Callers:
 *     NVMeControllerPowerUp @ 0x1C000E25C (NVMeControllerPowerUp.c)
 *     NVMePowerSettingChangeNotification @ 0x1C00105C0 (NVMePowerSettingChangeNotification.c)
 * Callees:
 *     ProcessCommand @ 0x1C00024B0 (ProcessCommand.c)
 *     NVMeControllerGetLocalCommand @ 0x1C0004558 (NVMeControllerGetLocalCommand.c)
 *     Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage @ 0x1C0004648 (Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025E80 (WaitForCommandCompleteWithCustomTimeout.c)
 */

void __fastcall NVMeSetNonOperationalPowerStatePermissiveMode(__int64 a1, unsigned __int8 a2)
{
  int v2; // edi
  int v4; // eax
  _BYTE *LocalCommand; // rax
  _BYTE *v6; // rdx
  __int64 v7; // rcx
  int v8; // eax

  v2 = a2;
  if ( !*(_BYTE *)(a1 + 20) )
  {
    v4 = *(_DWORD *)(a1 + 32);
    if ( (v4 & 8) == 0 )
    {
      if ( (v4 & 4) != 0 )
      {
        *(_DWORD *)(a1 + 4344) = *(_DWORD *)(a1 + 4344) ^ (*(_DWORD *)(a1 + 4344) ^ (4 * a2)) & 4 | 2;
      }
      else
      {
        LocalCommand = NVMeControllerGetLocalCommand(a1);
        v6 = LocalCommand;
        if ( LocalCommand )
        {
          *(_BYTE *)(*((_QWORD *)LocalCommand + 12) + 4253LL) |= 1u;
          *(_BYTE *)(*((_QWORD *)LocalCommand + 12) + 4253LL) &= ~2u;
          *(_WORD *)(*((_QWORD *)LocalCommand + 12) + 4244LL) = 0;
          v7 = *((_QWORD *)LocalCommand + 12);
          v8 = *(_DWORD *)(v7 + 4140) ^ v2;
          *(_BYTE *)(v7 + 4096) = 9;
          *(_DWORD *)(v7 + 4140) ^= v8 & 1;
          *(_BYTE *)(v7 + 4136) = 17;
          *(_QWORD *)(*((_QWORD *)v6 + 12) + 4224LL) = NVMeSetNonOperationalPowerStatePermissiveModeCompletion;
          ProcessCommand(a1, (__int64)(v6 + 8));
          Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage();
          WaitForCommandCompleteWithCustomTimeout(a1);
        }
      }
    }
  }
}
