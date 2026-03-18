/*
 * XREFs of NtUserThunkedMenuItemInfo @ 0x1C0064A70
 * Callers:
 *     <none>
 * Callees:
 *     xxxInsertMenuItem @ 0x1C0065F38 (xxxInsertMenuItem.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0067394 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     xxxSetMenuItemInfo @ 0x1C00BCB7C (xxxSetMenuItemInfo.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C0159CB4 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C0159CDC (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall NtUserThunkedMenuItemInfo(__int64 a1, int a2, int a3, int a4, ULONG64 a5, PCWSTR SourceString)
{
  _OWORD *v10; // rcx
  PCWSTR v11; // rdx
  int v12; // ebx
  __int64 v13; // rcx
  WCHAR *v14; // rdx
  ULONG64 v15; // r8
  _BYTE **v16; // rax
  __int64 v17; // rax
  char v18; // al
  bool v19; // zf
  __int64 v20; // rcx
  int inserted; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  _QWORD v27[2]; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+40h] [rbp-98h]
  int v29; // [rsp+48h] [rbp-90h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-88h] BYREF
  __int128 v31; // [rsp+68h] [rbp-70h] BYREF
  __int64 v32; // [rsp+78h] [rbp-60h]
  _OWORD v33[5]; // [rsp+80h] [rbp-58h] BYREF

  memset(v33, 0, sizeof(v33));
  DestinationString = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  EnterCrit(0LL, 0LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v27);
  v10 = (_OWORD *)a5;
  if ( a5 >= MmUserProbeAddress )
    v10 = (_OWORD *)MmUserProbeAddress;
  v33[0] = *v10;
  v33[1] = v10[1];
  v33[2] = v10[2];
  v33[3] = v10[3];
  v33[4] = v10[4];
  v11 = SourceString;
  v12 = 0;
  if ( !SourceString )
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
    goto LABEL_16;
  }
  if ( (unsigned __int64)SourceString >= MmUserProbeAddress )
    v11 = (PCWSTR)MmUserProbeAddress;
  v13 = *(unsigned int *)v11;
  v29 = v13;
  *(_DWORD *)&DestinationString.Length = v13;
  v14 = (WCHAR *)*((_QWORD *)v11 + 1);
  DestinationString.Buffer = v14;
  if ( ((unsigned __int8)v14 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v15 = (ULONG64)v14 + (unsigned __int16)v13 + 2;
  v16 = (_BYTE **)MmUserProbeAddress;
  if ( v15 >= MmUserProbeAddress || (unsigned __int16)v13 > HIWORD(v29) )
    goto LABEL_11;
  if ( (v13 & 1) != 0 )
    goto LABEL_12;
  if ( v15 <= (unsigned __int64)v14 )
  {
LABEL_11:
    if ( (v13 & 1) == 0 )
    {
LABEL_13:
      **v16 = 0;
      goto LABEL_16;
    }
LABEL_12:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13);
    v16 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_13;
  }
LABEL_16:
  if ( (BYTE4(v33[0]) & 1) == 0 || (HIDWORD(v33[0]) & 0xFFFFEF74) == 0 )
  {
    v17 = ValidateHmenu(a1);
    v28 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v27, v17);
    v18 = SmartObjStackRef<tagMENU>::operator==(v27);
    if ( a4 )
    {
      if ( v18 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v27[0] + 40LL) + 40LL) & 0x40) != 0 )
        goto LABEL_28;
      v19 = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v27[0] + 40LL) + 40LL) & 0x200) == 0;
    }
    else
    {
      if ( v18 )
        goto LABEL_28;
      v19 = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v27[0] + 40LL) + 40LL) & 0x40) == 0;
    }
    if ( v19 )
    {
      v20 = v28;
      if ( !v28 )
        v20 = *(_QWORD *)v27[0];
      ThreadLock(v20, &v31);
      if ( a4 )
        inserted = xxxInsertMenuItem((unsigned int)v27, a2, a3, (unsigned int)v33, (__int64)&DestinationString);
      else
        inserted = xxxSetMenuItemInfo((unsigned int)v27, a2, a3, (unsigned int)v33, (__int64)&DestinationString);
      v12 = inserted;
      ThreadUnlock1(v23, v22, v24);
    }
  }
LABEL_28:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v27);
  UserSessionSwitchLeaveCrit(v25);
  return v12;
}
