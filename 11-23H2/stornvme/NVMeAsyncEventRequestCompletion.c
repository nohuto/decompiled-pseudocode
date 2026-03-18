/*
 * XREFs of NVMeAsyncEventRequestCompletion @ 0x1C001BBE0
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C0002298 (GetSrbExtension.c)
 *     ProcessCommand @ 0x1C00024B0 (ProcessCommand.c)
 *     GetNamespaceId @ 0x1C0007C60 (GetNamespaceId.c)
 *     NVMeZeroMemory @ 0x1C0009358 (NVMeZeroMemory.c)
 *     GetLocalCommand @ 0x1C0009DC0 (GetLocalCommand.c)
 *     IsNVMeControllerOnFatalError @ 0x1C000C17C (IsNVMeControllerOnFatalError.c)
 *     NVMeAllocateDmaBuffer @ 0x1C000C2EC (NVMeAllocateDmaBuffer.c)
 *     NVMeControllerAsyncReset @ 0x1C000CBE0 (NVMeControllerAsyncReset.c)
 *     BuildGetLogPageCommand @ 0x1C0010FA4 (BuildGetLogPageCommand.c)
 *     NVMeQueueWorkItem @ 0x1C0016D68 (NVMeQueueWorkItem.c)
 *     NVMeIssueAsyncEventCommand @ 0x1C0020358 (NVMeIssueAsyncEventCommand.c)
 */

char __fastcall NVMeAsyncEventRequestCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 SrbExtension; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rbp
  __int64 v8; // r8
  _BYTE *v9; // r15
  char v10; // r11
  unsigned int v11; // esi
  int v12; // ecx
  char v13; // al
  __int64 v14; // rcx
  char v15; // cl
  char v16; // cl

  SrbExtension = GetSrbExtension(a2);
  v7 = SrbExtension;
  if ( !v8 || *(_BYTE *)(v6 + 3) == 14 || (*(_DWORD *)(a1 + 32) & 0xE) != 0 )
  {
    *(_BYTE *)(SrbExtension + 4253) |= 8u;
    return SrbExtension;
  }
  SrbExtension = GetLocalCommand(a1, v6);
  v9 = (_BYTE *)SrbExtension;
  if ( v10 != 1 )
  {
    *(_BYTE *)(v7 + 4253) |= 8u;
    if ( *(_BYTE *)(a1 + 22) )
      LOBYTE(SrbExtension) = StorPortExtendedFunction(86LL, a1, 0LL);
    goto LABEL_53;
  }
  v11 = 0;
  v12 = *(_DWORD *)a3 & 7;
  switch ( v12 )
  {
    case 0:
      v11 = 64;
      if ( *(_BYTE *)(a1 + 22) )
        StorPortExtendedFunction(86LL, a1, 0LL);
      v13 = *(_BYTE *)(a3 + 1);
      if ( v13 == 1 )
      {
        v14 = a1;
      }
      else
      {
        if ( v13 != 3 || !IsNVMeControllerOnFatalError(a1) )
          goto LABEL_50;
        v14 = a1;
        if ( *(_QWORD *)(a1 + 4216) )
        {
          NVMeQueueWorkItem(a1, (__int64)NVMeControllerPanicResetActionWorkItem);
          goto LABEL_50;
        }
      }
      NVMeControllerAsyncReset(v14, 0, 0LL, 0LL);
LABEL_50:
      LOBYTE(SrbExtension) = NVMeAllocateDmaBuffer(a1, v11);
      break;
    case 1:
      v11 = 512;
      if ( !*(_BYTE *)(a1 + 22) )
        goto LABEL_50;
LABEL_49:
      StorPortExtendedFunction(86LL, a1, 0LL);
      goto LABEL_50;
    case 2:
      v15 = *(_BYTE *)(a3 + 1);
      switch ( v15 )
      {
        case 0:
          _interlockedbittestandset((volatile signed __int32 *)(a1 + 4028), 2u);
          if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 4028), 1u) )
          {
            _interlockedbittestandreset((volatile signed __int32 *)(a1 + 4028), 2u);
            v11 = 4096;
          }
          if ( !*(_BYTE *)(a1 + 22) )
          {
LABEL_33:
            if ( v11 )
              goto LABEL_50;
            goto LABEL_53;
          }
LABEL_32:
          LOBYTE(SrbExtension) = StorPortExtendedFunction(86LL, a1, 0LL);
          goto LABEL_33;
        case 1:
          v11 = 512;
          if ( !*(_BYTE *)(a1 + 24) )
            goto LABEL_50;
          goto LABEL_49;
        case 2:
          v11 = 512;
          if ( !*(_BYTE *)(a1 + 22) )
            goto LABEL_50;
          goto LABEL_49;
        case -17:
          v11 = 4096;
          if ( !*(_BYTE *)(a1 + 22) )
            goto LABEL_50;
          goto LABEL_32;
      }
      break;
    case 6:
      v16 = *(_BYTE *)(a3 + 1);
      if ( !v16 )
      {
        v11 = 64;
        if ( !*(_BYTE *)(a1 + 24) )
          goto LABEL_50;
        goto LABEL_49;
      }
      LOBYTE(SrbExtension) = v16 - 1;
      if ( (unsigned __int8)(v16 - 1) <= 1u )
      {
        v11 = 512;
        if ( !*(_BYTE *)(a1 + 24) )
          goto LABEL_50;
        goto LABEL_49;
      }
      break;
    case 7:
      if ( *(_QWORD *)(a1 + 4216) && *(_BYTE *)(a3 + 1) == 1 )
      {
        if ( *(_BYTE *)(a1 + 22) )
          StorPortExtendedFunction(86LL, a1, 0LL);
        LOBYTE(SrbExtension) = NVMeQueueWorkItem(a1, (__int64)NVMeControllerPanicResetActionWorkItem);
        break;
      }
      v11 = 512;
      if ( !*(_BYTE *)(a1 + 22) )
        goto LABEL_50;
      goto LABEL_49;
  }
LABEL_53:
  if ( v9 )
  {
    LODWORD(SrbExtension) = *(_DWORD *)(a1 + 32);
    if ( (SrbExtension & 0x10) == 0 )
    {
      *v9 = 0;
      LOBYTE(SrbExtension) = NVMeIssueAsyncEventCommand(a1, v9);
    }
  }
  return SrbExtension;
}
