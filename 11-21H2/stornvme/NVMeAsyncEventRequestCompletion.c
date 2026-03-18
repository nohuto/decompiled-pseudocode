/*
 * XREFs of NVMeAsyncEventRequestCompletion @ 0x1C00215A0
 * Callers:
 *     <none>
 * Callees:
 *     ProcessCommand @ 0x1C00039C8 (ProcessCommand.c)
 *     NVMeZeroMemory @ 0x1C0005100 (NVMeZeroMemory.c)
 *     GetNamespaceId @ 0x1C00051C8 (GetNamespaceId.c)
 *     GetSrbExtension @ 0x1C00053D0 (GetSrbExtension.c)
 *     BuildGetLogPageCommand @ 0x1C0005458 (BuildGetLogPageCommand.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00055C4 (NVMeAllocateDmaBuffer.c)
 *     IsNVMeControllerOnFatalError @ 0x1C0005834 (IsNVMeControllerOnFatalError.c)
 *     NVMeIssueAsyncEventCommand @ 0x1C0009474 (NVMeIssueAsyncEventCommand.c)
 *     GetLocalCommand @ 0x1C000A538 (GetLocalCommand.c)
 *     NVMeControllerAsyncReset @ 0x1C001892C (NVMeControllerAsyncReset.c)
 *     NVMeQueueWorkItem @ 0x1C001DF70 (NVMeQueueWorkItem.c)
 */

char __fastcall NVMeAsyncEventRequestCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SrbExtension; // rax
  __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // r8
  __int64 v9; // r9
  _DWORD *v10; // r15
  char v11; // r11
  int v12; // ecx
  unsigned int v13; // esi
  char v14; // al
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // r9
  char v18; // cl

  SrbExtension = GetSrbExtension(a2);
  v7 = SrbExtension;
  if ( !v8 || *(_BYTE *)(v6 + 3) == 14 || (*(_DWORD *)(a1 + 32) & 0xE) != 0 )
  {
    *(_BYTE *)(SrbExtension + 4253) |= 8u;
    return SrbExtension;
  }
  SrbExtension = GetLocalCommand(a1, v6);
  v10 = (_DWORD *)SrbExtension;
  if ( v11 != 1 )
  {
    *(_BYTE *)(v7 + 4253) |= 8u;
    if ( *(_BYTE *)(a1 + 22) )
      LOBYTE(SrbExtension) = StorPortExtendedFunction(86LL, a1, 0LL, 1LL);
    goto LABEL_51;
  }
  v12 = *(_DWORD *)a3 & 7;
  if ( !v12 )
  {
    v13 = 64;
    if ( *(_BYTE *)(a1 + 22) )
      StorPortExtendedFunction(86LL, a1, 0LL, 1LL);
    v14 = *(_BYTE *)(a3 + 1);
    if ( v14 == 1 )
    {
      v15 = a1;
    }
    else
    {
      if ( v14 != 3 || !IsNVMeControllerOnFatalError(a1) )
        goto LABEL_48;
      v15 = a1;
      if ( *(_QWORD *)(a1 + 4008) )
      {
        NVMeQueueWorkItem(a1, (__int64)NVMeControllerPanicResetActionWorkItem, 0LL, v16);
        goto LABEL_48;
      }
    }
    NVMeControllerAsyncReset(v15, 0, 0LL, 0LL);
LABEL_48:
    LOBYTE(SrbExtension) = NVMeAllocateDmaBuffer(a1, v13);
    goto LABEL_51;
  }
  if ( v12 == 1 )
  {
    v13 = 512;
    if ( !*(_BYTE *)(a1 + 22) )
      goto LABEL_48;
    goto LABEL_46;
  }
  if ( v12 != 2 )
  {
    if ( v12 == 6 )
    {
      v18 = *(_BYTE *)(a3 + 1);
      if ( v18 )
      {
        LOBYTE(SrbExtension) = v18 - 1;
        if ( (unsigned __int8)(v18 - 1) > 1u )
          goto LABEL_51;
        v13 = 512;
        if ( !*(_BYTE *)(a1 + 24) )
          goto LABEL_48;
      }
      else
      {
        v13 = 64;
        if ( !*(_BYTE *)(a1 + 24) )
          goto LABEL_48;
      }
LABEL_25:
      v17 = 0LL;
LABEL_47:
      StorPortExtendedFunction(86LL, a1, 0LL, v17);
      goto LABEL_48;
    }
    if ( v12 != 7 )
      goto LABEL_51;
    if ( *(_QWORD *)(a1 + 4008) && *(_BYTE *)(a3 + 1) == 1 )
    {
      if ( *(_BYTE *)(a1 + 22) )
        StorPortExtendedFunction(86LL, a1, 0LL, 1LL);
      LOBYTE(SrbExtension) = NVMeQueueWorkItem(a1, (__int64)NVMeControllerPanicResetActionWorkItem, 0LL, v9);
      goto LABEL_51;
    }
    v13 = 512;
    if ( !*(_BYTE *)(a1 + 22) )
      goto LABEL_48;
LABEL_46:
    v17 = 1LL;
    goto LABEL_47;
  }
  LOBYTE(SrbExtension) = *(_BYTE *)(a3 + 1);
  if ( (_BYTE)SrbExtension )
  {
    switch ( (_BYTE)SrbExtension )
    {
      case 1:
        v13 = 512;
        if ( !*(_BYTE *)(a1 + 24) )
          goto LABEL_48;
        goto LABEL_25;
      case 2:
        v13 = 512;
        if ( !*(_BYTE *)(a1 + 22) )
          goto LABEL_48;
        break;
      case 0xEF:
        v13 = 4096;
        if ( !*(_BYTE *)(a1 + 22) )
          goto LABEL_48;
        break;
      default:
        goto LABEL_51;
    }
    goto LABEL_46;
  }
  _interlockedbittestandset((volatile signed __int32 *)(a1 + 3828), 2u);
  if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 3828), 1u) )
  {
    v13 = 4096;
    if ( !*(_BYTE *)(a1 + 22) )
      goto LABEL_48;
    goto LABEL_46;
  }
LABEL_51:
  if ( v10 )
  {
    LODWORD(SrbExtension) = *(_DWORD *)(a1 + 32);
    if ( (SrbExtension & 0x10) == 0 )
    {
      *v10 = 0;
      LOBYTE(SrbExtension) = NVMeIssueAsyncEventCommand(a1, (__int64)v10);
    }
  }
  return SrbExtension;
}
