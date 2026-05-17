/*
 * XREFs of EtwpProcessNotification @ 0x18005ECA4
 * Callers:
 *     EtwDeliverDataBlock @ 0x18005E7E0 (EtwDeliverDataBlock.c)
 * Callees:
 *     EtwpUpdateEnableInfoAndCallback @ 0x180031F78 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwProcessPrivateLoggerRequest @ 0x18005BA20 (EtwProcessPrivateLoggerRequest.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall EtwpProcessNotification(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4, _BYTE *a5)
{
  __int16 v5; // ax
  char v6; // di
  __int16 v7; // ax
  __int64 v8; // rax
  __int64 v10; // rax

  v5 = *(_WORD *)(a1 + 86);
  v6 = 0;
  if ( *(_DWORD *)a2 == 3 )
  {
    v7 = v5 & 0x3FFF;
    if ( v7 != 3 && v7 != 2 )
      return v6;
    if ( *(__int16 *)(a2 + 78) < 0 && PrivateLoggerNotificationEntry )
      v8 = *(_QWORD *)(PrivateLoggerNotificationEntry + 88);
    else
      v8 = *(_QWORD *)(a1 + 88);
    *a3 = v8;
    *(_QWORD *)(a2 + 24) = v8;
    EtwpUpdateEnableInfoAndCallback(a1, a2);
LABEL_6:
    *a5 = 1;
    return v6;
  }
  if ( *(_DWORD *)a2 == 4 )
  {
    if ( (v5 & 0x3FFF) == 3 || (v5 & 0x3FFF) == 2 )
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
      v10 = *(_QWORD *)(a1 + 88);
      *a3 = v10;
      *(_QWORD *)(a2 + 24) = v10;
      *a4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 48))(a2, *(_QWORD *)(a1 + 56));
      goto LABEL_6;
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
