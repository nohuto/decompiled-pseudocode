/*
 * XREFs of NVMeGetLogPageCompletion @ 0x1C0023180
 * Callers:
 *     <none>
 * Callees:
 *     ProcessNvmeHealthInfoLog @ 0x1C00034D4 (ProcessNvmeHealthInfoLog.c)
 *     ProcessCommand @ 0x1C00039C8 (ProcessCommand.c)
 *     GetSrbExtension @ 0x1C00053D0 (GetSrbExtension.c)
 *     NVMeFreeDmaBuffer @ 0x1C00053FC (NVMeFreeDmaBuffer.c)
 *     NVMeIssueAsyncEventCommand @ 0x1C0009474 (NVMeIssueAsyncEventCommand.c)
 *     GetLocalCommand @ 0x1C000A538 (GetLocalCommand.c)
 *     memset @ 0x1C00109C0 (memset.c)
 *     NVMeReenumerateNameSpaceStart @ 0x1C0023AF0 (NVMeReenumerateNameSpaceStart.c)
 *     ProcessNvmeReservationNotification @ 0x1C0024EE8 (ProcessNvmeReservationNotification.c)
 *     ProcessNvmeSanitizeStatus @ 0x1C0024FDC (ProcessNvmeSanitizeStatus.c)
 */

__int64 __fastcall NVMeGetLogPageCompletion(__int64 a1, __int64 a2)
{
  __int64 LocalCommand; // r14
  __int64 v4; // r11
  __int64 result; // rax
  __int64 v6; // r11
  __int64 v7; // rdi
  char v8; // r15
  char v9; // cl
  __int64 v10; // rdx
  char v11; // si
  char v12; // al
  char v13; // bp
  __int16 v14; // cx
  void *v15; // rcx
  __int64 v16; // rax

  LocalCommand = GetLocalCommand(a1, a2);
  result = GetSrbExtension(v4);
  v7 = result;
  v8 = 0;
  if ( !LocalCommand )
  {
    *(_BYTE *)(result + 4253) |= 8u;
    return result;
  }
  v9 = *(_BYTE *)(v6 + 3);
  if ( v9 != 14 )
  {
    result = *(unsigned int *)(a1 + 32);
    if ( (result & 0xE) == 0 )
    {
      v10 = *(_QWORD *)(LocalCommand + 96);
      v11 = *(_BYTE *)(v10 + 4136);
      if ( !*(_QWORD *)(v7 + 4200) )
        goto LABEL_31;
      if ( v9 != 1 )
      {
        v13 = 1;
        if ( v11 == 4 && (v14 = *(_WORD *)(v7 + 4250), (v14 & 0xE00) == 0x200) && (v14 & 0x1FE) == 0x12 )
        {
          **(_DWORD **)(v10 + 4200) = -1;
          NVMeReenumerateNameSpaceStart(a1);
        }
        else
        {
          v13 = 0;
        }
        if ( *(_BYTE *)(a1 + 22) && v13 )
          StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
        goto LABEL_30;
      }
      if ( v11 != 1 )
      {
        switch ( v11 )
        {
          case 2:
            v12 = ProcessNvmeHealthInfoLog(a1, v6, *(char **)(v10 + 4200), 9);
LABEL_21:
            v8 = v12;
            break;
          case -128:
            v12 = ProcessNvmeReservationNotification(a1, v6, *(_QWORD *)(v10 + 4200));
            goto LABEL_21;
          case 4:
            if ( **(_DWORD **)(v10 + 4200) )
            {
              NVMeReenumerateNameSpaceStart(a1);
            }
            else
            {
              _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3828), 2u);
              _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3828), 1u);
            }
            break;
          case 8:
            if ( *(_BYTE *)(a1 + 22) )
              StorPortExtendedFunction(105LL, a1, 0LL, 1LL);
            break;
          case -127:
            v12 = ProcessNvmeSanitizeStatus(a1, v6, *(_QWORD *)(v10 + 4200));
            goto LABEL_21;
        }
      }
LABEL_30:
      NVMeFreeDmaBuffer(
        a1,
        *(unsigned int *)(*(_QWORD *)(LocalCommand + 96) + 4240LL),
        (__int64 *)(*(_QWORD *)(LocalCommand + 96) + 4200LL),
        *(_QWORD *)(*(_QWORD *)(LocalCommand + 96) + 4208LL));
      *(_BYTE *)(v7 + 4253) |= 8u;
      *(_DWORD *)(v7 + 4240) = 0;
LABEL_31:
      *(_DWORD *)LocalCommand = 0;
      if ( !v8 )
        return NVMeIssueAsyncEventCommand(a1, LocalCommand);
      v15 = *(void **)(LocalCommand + 96);
      *(_BYTE *)(LocalCommand + 11) = 0;
      memset(v15, 0, 0x10A0uLL);
      *(_QWORD *)(*(_QWORD *)(LocalCommand + 96) + 4232LL) = 0LL;
      v16 = *(_QWORD *)(LocalCommand + 96);
      *(_QWORD *)(LocalCommand + 64) = v16;
      *(_DWORD *)LocalCommand = 1;
      *(_BYTE *)(v16 + 4253) |= 1u;
      *(_BYTE *)(*(_QWORD *)(LocalCommand + 96) + 4253LL) &= ~2u;
      *(_WORD *)(*(_QWORD *)(LocalCommand + 96) + 4244LL) = 0;
      *(_DWORD *)(v7 + 4140) = *(_DWORD *)(a1 + 4032);
      *(_QWORD *)(v7 + 4224) = NVMeReConfigAsyncEventCompletion;
      *(_BYTE *)(v7 + 4096) = 9;
      *(_BYTE *)(v7 + 4136) = 11;
      return ProcessCommand(a1, LocalCommand + 8);
    }
  }
  if ( *(_QWORD *)(v7 + 4200) )
  {
    result = NVMeFreeDmaBuffer(
               a1,
               *(unsigned int *)(*(_QWORD *)(LocalCommand + 96) + 4240LL),
               (__int64 *)(*(_QWORD *)(LocalCommand + 96) + 4200LL),
               *(_QWORD *)(*(_QWORD *)(LocalCommand + 96) + 4208LL));
    *(_DWORD *)(v7 + 4240) = 0;
  }
  *(_BYTE *)(v7 + 4253) |= 8u;
  return result;
}
