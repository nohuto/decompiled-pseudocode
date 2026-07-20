/*
 * XREFs of SmscpLoadSubSystemsForMuSession @ 0x140004430
 * Callers:
 *     SmscMain @ 0x1400048D8 (SmscMain.c)
 * Callees:
 *     SmpExecuteCommand @ 0x140004F44 (SmpExecuteCommand.c)
 *     SmpNtSerializeBoot @ 0x14000B0FC (SmpNtSerializeBoot.c)
 */

__int64 __fastcall SmscpLoadSubSystemsForMuSession(int a1)
{
  int v1; // r15d
  char v2; // r13
  NTSTATUS v3; // eax
  NTSTATUS v4; // ebx
  __int64 v5; // rax
  __int64 v7; // rax
  char *v8; // rcx
  int v9; // r14d
  _DWORD *v10; // r12
  char *v11; // r15
  __int64 v12; // rax
  char *v13; // r8
  unsigned int v14; // r14d
  char *v15; // r9
  int v16; // r8d
  signed __int32 v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  _DWORD *v21; // rsi
  char *v22; // r14
  int v23; // edi
  signed __int32 v24[8]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v25; // [rsp+20h] [rbp-48h]
  __int64 v26; // [rsp+30h] [rbp-38h]
  __int16 SystemInformation; // [rsp+38h] [rbp-30h] BYREF
  __int16 v28; // [rsp+3Ah] [rbp-2Eh]
  char *v29; // [rsp+40h] [rbp-28h]
  UNICODE_STRING String1; // [rsp+48h] [rbp-20h] BYREF
  unsigned int *v32; // [rsp+B8h] [rbp+50h]
  PVOID ReturnedState; // [rsp+C0h] [rbp+58h] BYREF
  char *v34; // [rsp+C8h] [rbp+60h]

  v1 = a1;
  v2 = 0;
  v3 = RtlAcquirePrivilege((PULONG)L"\n", 1u, 2u, &ReturnedState);
  v4 = v3;
  if ( v3 >= 0 )
  {
    if ( !v1 && SmpSerializeBoot == 1 )
    {
      v4 = SmpNtSerializeBoot();
      if ( v4 >= 0 )
      {
        v2 = 1;
      }
      else
      {
        *(_DWORD *)SmscpSharedWindow = 1;
        _InterlockedOr(v24, 0);
        *((_DWORD *)SmscpSharedWindow + 2) = 856;
        *((_DWORD *)SmscpSharedWindow + 1) = v4;
        *((_QWORD *)SmscpSharedWindow + 2) = NtSerializeBoot;
        v7 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
        SmpGlobalLog[2 * v7 + 2] = 858;
        SmpGlobalLog[2 * v7 + 3] = v4;
        *(_QWORD *)&SmpGlobalLog[2 * v7 + 4] = 0LL;
      }
    }
    v8 = (char *)SmpMappedView;
    v9 = 0;
    v10 = (char *)SmpMappedView + 64;
    if ( *((_DWORD *)SmpMappedView + 16) )
    {
      v11 = (char *)SmpMappedView + *((_QWORD *)SmpMappedView + 7);
      while ( 1 )
      {
        v29 = &v8[*(_QWORD *)&v11[16 * v9]];
        v28 = *(_WORD *)&v11[16 * v9 + 8];
        SystemInformation = v28;
        v4 = NtSetSystemInformation(SystemExtendServiceTableInformation, &SystemInformation, 0x10u);
        if ( v4 < 0 )
          break;
        if ( (unsigned int)++v9 >= *v10 )
          break;
        v8 = (char *)SmpMappedView;
      }
      v1 = a1;
    }
    RtlReleasePrivilege(ReturnedState);
    if ( v4 >= 0 )
    {
      v13 = (char *)SmpMappedView;
      v14 = 0;
      v15 = (char *)SmpMappedView + *((_QWORD *)SmpMappedView + 9);
      v32 = (unsigned int *)((char *)SmpMappedView + 80);
      v34 = v15;
      if ( *((_DWORD *)SmpMappedView + 20) )
      {
        while ( 1 )
        {
          v26 = v14;
          String1.Buffer = (PWSTR)&v13[*(_QWORD *)&v15[16 * v14]];
          String1.MaximumLength = *(_WORD *)&v15[16 * v14 + 8];
          String1.Length = String1.MaximumLength;
          v29 = &v13[*(_QWORD *)&v15[16 * v14 + 16]];
          v28 = *(_WORD *)&v15[16 * v14 + 24];
          SystemInformation = v28;
          RtlEqualUnicodeString(&String1, &SmpDebugKeyword, 1u);
          if ( !v2 && v1 == 1 && SmpSerializeBoot == 2 )
          {
            v16 = SmpNtSerializeBoot();
            if ( v16 >= 0 )
            {
              v2 = 1;
            }
            else
            {
              *(_DWORD *)SmscpSharedWindow = 1;
              _InterlockedOr(v24, 0);
              *((_DWORD *)SmscpSharedWindow + 2) = 972;
              *((_DWORD *)SmscpSharedWindow + 1) = v16;
              *((_QWORD *)SmscpSharedWindow + 2) = NtSerializeBoot;
              v17 = _InterlockedIncrement(SmpGlobalLog) & 0x8000003F;
              if ( v17 < 0 )
                v17 = v1 + (((_BYTE)v17 - (_BYTE)v1) | 0xFFFFFFC0);
              v18 = 2LL * v17;
              SmpGlobalLog[2 * v18 + 2] = 974;
              SmpGlobalLog[2 * v18 + 3] = v16;
              *(_QWORD *)&SmpGlobalLog[2 * v18 + 4] = v14;
            }
          }
          v4 = SmpExecuteCommand((int)&SystemInformation, 0LL);
          if ( v4 < 0 )
            break;
          v14 += 2;
          v13 = (char *)SmpMappedView;
          if ( v14 >= *v32 )
            goto LABEL_30;
          v15 = v34;
        }
        *(_DWORD *)SmscpSharedWindow = 1;
        _InterlockedOr(v24, 0);
        *((_DWORD *)SmscpSharedWindow + 2) = 990;
        *((_DWORD *)SmscpSharedWindow + 1) = v4;
        *((_QWORD *)SmscpSharedWindow + 2) = SmscpLoadSubSystemsForMuSession;
        v19 = v26;
        v20 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
        SmpGlobalLog[2 * v20 + 2] = 992;
        SmpGlobalLog[2 * v20 + 3] = v4;
        *(_QWORD *)&SmpGlobalLog[2 * v20 + 4] = v19;
      }
      else
      {
LABEL_30:
        v21 = v13 + 96;
        v22 = &v13[*((_QWORD *)v13 + 11)];
        v23 = 0;
        if ( *((_DWORD *)v13 + 24) )
        {
          while ( 1 )
          {
            v25 = 0LL;
            v29 = &v13[*(_QWORD *)&v22[16 * v23]];
            v28 = *(_WORD *)&v22[16 * v23 + 8];
            SystemInformation = v28;
            SmpExecuteCommand((int)&SystemInformation, 0LL);
            if ( (unsigned int)++v23 >= *v21 )
              break;
            v13 = (char *)SmpMappedView;
          }
        }
      }
    }
    else
    {
      *(_DWORD *)SmscpSharedWindow = 1;
      _InterlockedOr(v24, 0);
      *((_DWORD *)SmscpSharedWindow + 2) = 904;
      *((_DWORD *)SmscpSharedWindow + 1) = v4;
      *((_QWORD *)SmscpSharedWindow + 2) = SmscpLoadSubSystemsForMuSession;
      v12 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
      *(_QWORD *)&SmpGlobalLog[2 * v12 + 4] = 0LL;
      SmpGlobalLog[2 * v12 + 2] = 906;
      SmpGlobalLog[2 * v12 + 3] = v4;
    }
  }
  else
  {
    *(_DWORD *)SmscpSharedWindow = 1;
    _InterlockedOr(v24, 0);
    *((_DWORD *)SmscpSharedWindow + 2) = 831;
    *((_DWORD *)SmscpSharedWindow + 1) = v3;
    *((_QWORD *)SmscpSharedWindow + 2) = SmscpLoadSubSystemsForMuSession;
    v5 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
    SmpGlobalLog[2 * v5 + 2] = 833;
    SmpGlobalLog[2 * v5 + 3] = v4;
    *(_QWORD *)&SmpGlobalLog[2 * v5 + 4] = 0LL;
  }
  return (unsigned int)v4;
}
