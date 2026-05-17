/*
 * XREFs of EtwpProcessNotification @ 0x180007988
 * Callers:
 *     EtwDeliverDataBlock @ 0x180007500 (EtwDeliverDataBlock.c)
 * Callees:
 *     EtwProcessPrivateLoggerRequest @ 0x180006C90 (EtwProcessPrivateLoggerRequest.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180015ED4 (EtwpUpdateEnableInfoAndCallback.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall EtwpProcessNotification(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4, _BYTE *a5)
{
  __int16 v5; // r10
  char v6; // di
  __int64 v7; // rax
  __int64 v9; // rax

  v5 = *(_WORD *)(a1 + 98);
  v6 = 0;
  if ( *(_DWORD *)a2 == 3 )
  {
    if ( (unsigned __int16)((v5 & 0x3FFF) - 2) <= 1u )
    {
      if ( *(__int16 *)(a2 + 78) < 0 && PrivateLoggerNotificationEntry )
        v7 = *(_QWORD *)(PrivateLoggerNotificationEntry + 88);
      else
        v7 = *(_QWORD *)(a1 + 88);
      *a3 = v7;
      *(_QWORD *)(a2 + 24) = v7;
      EtwpUpdateEnableInfoAndCallback(a1, a2);
      goto LABEL_6;
    }
  }
  else if ( *(_DWORD *)a2 == 4 )
  {
    if ( (unsigned __int16)((v5 & 0x3FFF) - 2) <= 1u )
    {
      *a3 = *(_QWORD *)(a1 + 88);
      *a4 = EtwProcessPrivateLoggerRequest((char *)a2);
      v6 = 1;
      *a5 = 1;
    }
  }
  else
  {
    if ( (v5 & 0x3FFF) == *(_DWORD *)a2 )
    {
      v9 = *(_QWORD *)(a1 + 88);
      *a3 = v9;
      *(_QWORD *)(a2 + 24) = v9;
      *a4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 48))(a2, *(_QWORD *)(a1 + 56));
LABEL_6:
      *a5 = 1;
      return v6;
    }
    if ( (v5 & 0x3FFF) == 0xA
      && *(_DWORD *)a2 == 7
      && *(_DWORD *)(a2 + 36) == LODWORD(NtCurrentTeb()->ClientId.UniqueProcess) )
    {
      *a4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 48))(a2, *(_QWORD *)(a1 + 56));
      *a5 = 1;
    }
  }
  return v6;
}
