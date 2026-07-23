/*
 * XREFs of ExInitializeUtcTimeZoneBias @ 0x140865B90
 * Callers:
 *     Phase1InitializationDiscard @ 0x140B4FF9C (Phase1InitializationDiscard.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D390 (PsGetCurrentServerSiloGlobals.c)
 *     RtlTimeToTimeFields @ 0x14033B4B0 (RtlTimeToTimeFields.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x1407F8114 (RtlpQueryTimeZoneInformationWorker.c)
 *     RtlCutoverTimeToSystemTime @ 0x140840DF8 (RtlCutoverTimeToSystemTime.c)
 *     ExpWriteTimeZoneBias @ 0x14084101C (ExpWriteTimeZoneBias.c)
 */

__int64 __fastcall ExInitializeUtcTimeZoneBias(PLARGE_INTEGER CurrentSystemTime)
{
  __int64 result; // rax
  _DWORD *v3; // rsi
  int v4; // r14d
  int v5; // ebx
  BOOLEAN v6; // r9
  BOOLEAN v7; // r9
  LARGE_INTEGER v8; // r8
  LARGE_INTEGER v9; // rcx
  LARGE_INTEGER v10; // r11
  LARGE_INTEGER v11; // r9
  int v12; // edx
  int v13; // eax
  int v14; // edx
  int v15; // r10d
  bool v16; // sf
  bool v17; // of
  bool v18; // cc
  LONGLONG QuadPart; // rcx
  LARGE_INTEGER SystemTime; // [rsp+28h] [rbp-E0h] BYREF
  LARGE_INTEGER TimeFields[3]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v22[54]; // [rsp+48h] [rbp-C0h] BYREF

  SystemTime.QuadPart = 0LL;
  memset(TimeFields, 0, sizeof(TimeFields));
  memset(v22, 0, sizeof(v22));
  if ( !ExpRealTimeIsUniversal )
    return 3221225659LL;
  v3 = (_DWORD *)*((_QWORD *)PsGetCurrentServerSiloGlobals() + 157);
  result = RtlpQueryTimeZoneInformationWorker((char *)v22, 0x1B0uLL);
  if ( (int)result >= 0 )
  {
    v4 = LODWORD(v22[0]) + LODWORD(v22[21]);
    v5 = LODWORD(v22[0]) + HIDWORD(v22[10]);
    RtlTimeToTimeFields(CurrentSystemTime, (PTIME_FIELDS)&TimeFields[1]);
    if ( HIWORD(v22[8])
      && WORD1(v22[19])
      && RtlCutoverTimeToSystemTime((PTIME_FIELDS)((char *)&v22[8] + 4), TimeFields, CurrentSystemTime, v6)
      && RtlCutoverTimeToSystemTime((PTIME_FIELDS)&v22[19], &SystemTime, CurrentSystemTime, v7) )
    {
      v8.QuadPart = SystemTime.QuadPart + 600000000LL * v5;
      SystemTime = v8;
      v9.QuadPart = TimeFields[0].QuadPart + 600000000LL * v4;
      TimeFields[0] = v9;
      if ( v8.QuadPart >= v9.QuadPart )
      {
        v10 = v9;
        v11 = v8;
      }
      else
      {
        v10 = v8;
        v11 = v9;
      }
      v12 = 0;
      v13 = v4;
      if ( v8.QuadPart >= v9.QuadPart )
        v13 = v5;
      LOBYTE(v12) = v8.QuadPart < v9.QuadPart;
      v14 = v12 + 1;
      v15 = 0;
      v17 = __OFSUB__(v8.QuadPart, v9.QuadPart);
      v16 = v8.QuadPart - v9.QuadPart < 0;
      v18 = v8.QuadPart < v9.QuadPart;
      QuadPart = CurrentSystemTime->QuadPart;
      if ( !v18 )
        v5 = v4;
      if ( QuadPart < v10.QuadPart || QuadPart >= v11.QuadPart )
      {
        v13 = v5;
        LOBYTE(v15) = v16 == v17;
        v14 = v15 + 1;
      }
      else
      {
        v5 = v13;
      }
      v3[108] = v14;
      v3[109] = v5;
      *((_QWORD *)v3 + 55) = 600000000LL * v13;
      *(_DWORD *)(MmWriteableSharedUserData + 604) = 0;
      ExpWriteTimeZoneBias(v3 + 110);
      return 0LL;
    }
    else
    {
      return 3221225473LL;
    }
  }
  return result;
}
