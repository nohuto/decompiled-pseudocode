/*
 * XREFs of NVMeHwStartIo @ 0x1C00022D0
 * Callers:
 *     <none>
 * Callees:
 *     ProcessCommand @ 0x1C00024B0 (ProcessCommand.c)
 *     Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage @ 0x1C0004648 (Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage.c)
 *     GetSrbScsiAddress @ 0x1C0007CD4 (GetSrbScsiAddress.c)
 *     NVMeControllerPowerDown @ 0x1C000E0D8 (NVMeControllerPowerDown.c)
 *     NVMeSetSenseData @ 0x1C0024B48 (NVMeSetSenseData.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025E80 (WaitForCommandCompleteWithCustomTimeout.c)
 */

char __fastcall NVMeHwStartIo(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  int v7; // ebp
  __int64 v8; // rsi
  __int64 v9; // rax
  int v10; // ecx
  bool v11; // zf
  __int64 v12; // rcx
  unsigned int v14; // [rsp+50h] [rbp+8h] BYREF
  char v15; // [rsp+58h] [rbp+10h] BYREF
  char v16; // [rsp+60h] [rbp+18h] BYREF

  v6 = *(unsigned __int8 *)(a2 + 2);
  if ( (_BYTE)v6 == 40 )
  {
    v7 = *(_DWORD *)(a2 + 20);
    v8 = *(_QWORD *)(a2 + 104);
  }
  else
  {
    v8 = *(_QWORD *)(a2 + 56);
    v7 = v6;
  }
  if ( (v8 & 0xFFF) != 0 )
    v8 = v8 - (v8 & 0xFFF) + 4096;
  if ( v7 )
  {
    a3 = 0x1C0000000uLL;
    switch ( v7 )
    {
      case 2:
      case 9:
      case 10:
        goto LABEL_24;
      case 7:
        v11 = *(_BYTE *)(a1 + 20) == 0;
        v14 = 0;
        if ( !v11 )
          NVMeControllerPowerDown(a1);
        GetSrbScsiAddress(a2, &v16, &v15, &v14);
        if ( v14 < *(_DWORD *)(a1 + 232) )
        {
          v12 = *(_QWORD *)(a1 + 8LL * v14 + 1952);
          if ( v12 )
            *(_DWORD *)(v12 + 20) |= 2u;
        }
        *(_BYTE *)(a2 + 3) = 1;
        break;
      case 37:
        if ( (_BYTE)v6 == 40 )
        {
          v9 = *(unsigned int *)(a2 + 120);
          v10 = *(_DWORD *)(v9 + a2 + 12);
          v11 = *(_DWORD *)(v9 + a2 + 16) == 1;
        }
        else
        {
          v10 = *(_DWORD *)(a2 + 8);
          v11 = *(_DWORD *)(a2 + 64) == 1;
        }
        if ( !v11 )
          goto LABEL_23;
        if ( v10 == 2 || v10 == 23 )
        {
          *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 32) & 0xFFFFFDF6 | 8;
          *(_BYTE *)(a2 + 3) = 1;
        }
        else if ( v10 == 4 )
        {
          *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 32) & 0xFFFFFDFC | 2;
          *(_BYTE *)(a2 + 3) = 1;
        }
        else
        {
LABEL_23:
          *(_BYTE *)(a2 + 3) = 6;
        }
        break;
      default:
        goto LABEL_23;
    }
  }
  else
  {
LABEL_24:
    if ( (*(_DWORD *)(a1 + 32) & 1) == 0 )
    {
      LOBYTE(a4) = 37;
      LOBYTE(a3) = 5;
      LOBYTE(v6) = 8;
      NVMeSetSenseData(a2, v6, a3, a4);
    }
  }
  if ( *(_BYTE *)(a2 + 3) )
  {
    StorPortNotification(0LL, a1, a2);
    return 1;
  }
  else
  {
    ProcessCommand(a1, a2);
    if ( v7 == 10 && (*(_BYTE *)(v8 + 4253) & 1) != 0 )
    {
      Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage();
      WaitForCommandCompleteWithCustomTimeout(a1);
    }
    return 1;
  }
}
