/*
 * XREFs of sub_1403B6E4C @ 0x1403B6E4C
 * Callers:
 *     sub_1403CCD08 @ 0x1403CCD08 (sub_1403CCD08.c)
 *     sub_1408087A4 @ 0x1408087A4 (sub_1408087A4.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1403B719C @ 0x1403B719C (sub_1403B719C.c)
 *     sub_1403B7244 @ 0x1403B7244 (sub_1403B7244.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     EtwUnregister @ 0x1406B7470 (EtwUnregister.c)
 *     EtwSetInformation @ 0x1406DEBF0 (EtwSetInformation.c)
 *     sub_140A5496C @ 0x140A5496C (sub_140A5496C.c)
 */

__int64 __fastcall sub_1403B6E4C(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  const int *v3; // r14
  REGHANDLE v4; // r15
  REGHANDLE v5; // rdi
  NTSTATUS v6; // r12d
  int v7; // eax
  int *v8; // r13
  __int64 v9; // rdx
  _QWORD *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  REGHANDLE v13; // r14
  __int64 v14; // rcx
  const WCHAR *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v19; // eax
  char v20; // [rsp+48h] [rbp-49h]
  const int *v21; // [rsp+50h] [rbp-41h]
  ULONG UserDataCount; // [rsp+58h] [rbp-39h] BYREF
  int Data; // [rsp+5Ch] [rbp-35h] BYREF
  REGHANDLE v24; // [rsp+60h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-29h] BYREF
  REGHANDLE v26; // [rsp+78h] [rbp-19h] BYREF
  REGHANDLE RegHandle; // [rsp+80h] [rbp-11h] BYREF
  unsigned __int64 v28; // [rsp+88h] [rbp-9h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-1h] BYREF

  UserDataCount = 0;
  v2 = a1;
  v28 = a1 + (unsigned int)a2;
  Data = 0;
  v3 = &xmmword_140010DE8;
  RegHandle = 0LL;
  v26 = 0LL;
  v24 = 0LL;
  LOBYTE(a2) = 1;
  v21 = &xmmword_140010DE8;
  DestinationString = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v6 = sub_1403B7244(&qword_1400128A0, a2, &RegHandle);
  if ( v6 < 0 )
    goto LABEL_35;
  v20 = 0;
  v7 = sub_1403B7244(&qword_1400128B0, 0LL, &v26);
  v4 = v26;
  v6 = v7;
  if ( v7 < 0 )
    goto LABEL_35;
  while ( v2 < v28 )
  {
    if ( *(_DWORD *)(v2 + 8) != 6 )
      goto LABEL_20;
    v8 = (int *)(v2 + 68);
    sub_1403B719C(v2 + 48, v2 + 68, *(_DWORD *)(v2 + 64), (unsigned int)&UserData, (__int64)&UserDataCount);
    v10 = (_QWORD *)(v2 + 32);
    v11 = *(_QWORD *)(v2 + 32);
    v12 = 0x4BAA4D7A15CA44FFLL - v11;
    if ( v11 == 0x4BAA4D7A15CA44FFLL )
      v12 = 0x1E535E959809A5BBLL - *(_QWORD *)(v2 + 40);
    if ( v12 )
    {
      v16 = 0x56EFCE4F23B76A75LL - v11;
      if ( v11 == 0x56EFCE4F23B76A75LL )
        v16 = 0x6B3FAED6A2C303F9LL - *(_QWORD *)(v2 + 40);
      if ( v16 )
      {
        v17 = *(_QWORD *)v3 - v11;
        if ( *(_QWORD *)v3 == v11 )
          v17 = *((_QWORD *)v3 + 1) - *(_QWORD *)(v2 + 40);
        if ( v17 )
        {
          if ( v5 )
          {
            EtwUnregister(v5);
            v24 = 0LL;
          }
          LOBYTE(v9) = *(_BYTE *)(v2 + 51) != 11;
          v19 = sub_1403B7244(v2 + 32, v9, &v24);
          v5 = v24;
          v6 = v19;
          if ( v19 < 0 )
            goto LABEL_35;
          v13 = v24;
          v21 = (const int *)(v2 + 32);
          if ( *(_BYTE *)(v2 + 51) == 11 )
            EtwSetInformation(v24, (EVENT_INFO_CLASS)2, (PVOID)UserData.Ptr, UserData.Size);
        }
        else
        {
          v13 = v5;
        }
      }
      else
      {
        v13 = v4;
        if ( !v20 && *(_BYTE *)(v2 + 51) == 11 )
        {
          EtwSetInformation(v4, (EVENT_INFO_CLASS)2, (PVOID)UserData.Ptr, UserData.Size);
          v20 = 1;
        }
      }
    }
    else
    {
      v13 = RegHandle;
    }
    if ( EtwEventEnabled(v13, (PCEVENT_DESCRIPTOR)(v2 + 48)) )
    {
      v6 = EtwWriteEx(
             v13,
             (PCEVENT_DESCRIPTOR)(v2 + 48),
             0LL,
             0,
             (LPCGUID)((v2 + 16) & -(__int64)(*(_BYTE *)(v2 + 15) != 0)),
             0LL,
             UserDataCount,
             &UserData);
      if ( v6 < 0 )
        goto LABEL_35;
    }
    v14 = 0x4BAA4D7A15CA44FFLL - *v10;
    if ( *v10 == 0x4BAA4D7A15CA44FFLL )
      v14 = 0x1E535E959809A5BBLL - *(_QWORD *)(v2 + 40);
    if ( v14 )
      goto LABEL_25;
    switch ( *(_WORD *)(v2 + 48) )
    {
      case 0xB:
        v15 = L"POSTTime";
LABEL_24:
        RtlInitUnicodeString(&DestinationString, v15);
        sub_140A5496C((PVOID)(v2 + 68));
LABEL_25:
        v3 = v21;
        goto LABEL_20;
      case 0x10:
        goto LABEL_53;
      case 0x14:
        if ( !*v8 )
          ZwUpdateWnfStateData(&stru_1400377A8, 0LL, 0, 0LL, 0LL, 0, 0);
        goto LABEL_25;
      case 0x1D:
LABEL_53:
        dword_140D04C14 = *v8;
        goto LABEL_25;
      case 0x20:
        v15 = L"BootmgrUserInputTime";
        goto LABEL_24;
    }
    v3 = v21;
    if ( *(_WORD *)(v2 + 48) == 158 )
      dword_140D04C18 = *v8;
LABEL_20:
    v2 = (*(unsigned int *)(v2 + 4) + v2 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  }
  if ( (qword_140C15C78 & 4) != 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"BootmgrUserInputTime");
    sub_140A5496C(&Data);
    RtlInitUnicodeString(&DestinationString, L"POSTTime");
    sub_140A5496C(&Data);
  }
LABEL_35:
  if ( RegHandle )
    EtwUnregister(RegHandle);
  if ( v4 )
    EtwUnregister(v4);
  if ( v5 )
    EtwUnregister(v5);
  return (unsigned int)v6;
}
