/*
 * XREFs of NVMeFirmwareActivateCompletion @ 0x1C001CB60
 * Callers:
 *     <none>
 * Callees:
 *     ProcessCommand @ 0x1C00039C8 (ProcessCommand.c)
 *     GetSrbExtension @ 0x1C00053D0 (GetSrbExtension.c)
 *     NVMeControllerAsyncReset @ 0x1C001892C (NVMeControllerAsyncReset.c)
 *     FirmwareActivate @ 0x1C001A838 (FirmwareActivate.c)
 *     IsFirmwareActivateWithoutResetEnabled @ 0x1C001C698 (IsFirmwareActivateWithoutResetEnabled.c)
 *     NVMeQueueWorkItem @ 0x1C001DF70 (NVMeQueueWorkItem.c)
 */

char __fastcall NVMeFirmwareActivateCompletion(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r15
  char v8; // r14
  __int64 v9; // rsi
  unsigned int v10; // edx
  __int64 v11; // rcx
  char v12; // dl
  int v13; // eax
  __int16 v14; // r9
  int v15; // eax
  int v16; // eax

  SrbExtension = GetSrbExtension(a2);
  v7 = SrbExtension;
  v8 = 1;
  if ( *(_BYTE *)(v5 + 2) == 40 )
    v9 = *(_QWORD *)(v5 + 64);
  else
    v9 = *(_QWORD *)(v5 + 24);
  if ( !v6 )
  {
    *(_DWORD *)(v9 + 20) = 16;
    *(_BYTE *)(v5 + 3) = 4;
    *(_BYTE *)(SrbExtension + 4253) |= 8u;
    goto LABEL_31;
  }
  v10 = *(unsigned __int16 *)(v6 + 14);
  if ( (v10 & 0x1FE) == 0 && (v10 & 0xE00) == 0 )
  {
    if ( IsFirmwareActivateWithoutResetEnabled(a1) && !_bittest((const signed __int32 *)(a1 + 32), 0xAu) )
    {
      *(_DWORD *)(v9 + 20) = 0;
      *(_BYTE *)(a2 + 3) = 1;
      if ( (unsigned int)NVMeQueueWorkItem(a1, NVMeControllerIdentifyWorkItem) )
        *(_DWORD *)(a1 + 32) |= 0x20u;
      goto LABEL_29;
    }
    v11 = a1;
    *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 32) & 0xFFFFFBDF | 0x20;
    v12 = 0;
LABEL_12:
    if ( NVMeControllerAsyncReset(v11, v12, (__int64)NVMeFirmwareActivateCompletionAfterReset, a2) )
    {
      v8 = 0;
      goto LABEL_29;
    }
    goto LABEL_25;
  }
  if ( (v10 & 0xE00) == 0x200 )
  {
    v13 = (unsigned __int8)(v10 >> 1);
    if ( v13 == 7 )
    {
      *(_DWORD *)(v9 + 20) = 7;
    }
    else
    {
      if ( v13 == 11 )
      {
LABEL_25:
        *(_DWORD *)(v9 + 20) = 32;
        *(_BYTE *)(a2 + 3) = 1;
        goto LABEL_29;
      }
      v11 = a1;
      if ( (unsigned int)(v13 - 16) <= 1 )
      {
        *(_DWORD *)(a1 + 32) |= 0x20u;
        v12 = (v10 & 0x1FE) == 32;
        goto LABEL_12;
      }
      if ( IsFirmwareActivateWithoutResetEnabled(a1) )
      {
        v15 = *(_DWORD *)(a1 + 32);
        if ( (v15 & 0x400) == 0 )
        {
          *(_DWORD *)(a1 + 32) = v15 | 0x400;
          v8 = 0;
          FirmwareActivate(a1, a2);
          ProcessCommand(a1, a2);
          goto LABEL_29;
        }
      }
      v16 = 6;
      if ( v14 != 12 )
        v16 = 16;
      *(_DWORD *)(v9 + 20) = v16;
    }
  }
  else
  {
    *(_DWORD *)(v9 + 20) = 16;
  }
  *(_BYTE *)(a2 + 3) = 4;
LABEL_29:
  LOBYTE(SrbExtension) = 8 * v8;
  *(_BYTE *)(v7 + 4253) = (8 * v8) | *(_BYTE *)(v7 + 4253) & 0xF7;
  if ( v8 )
    *(_DWORD *)(a1 + 32) &= ~0x800u;
LABEL_31:
  if ( *(_BYTE *)(a2 + 3) != 1 && *(_BYTE *)(a1 + 22) )
    LOBYTE(SrbExtension) = StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
  return SrbExtension;
}
