/*
 * XREFs of RtlpTimeToTimeFields @ 0x18005E2A0
 * Callers:
 *     RtlCutoverTimeToSystemTime @ 0x18005DDB0 (RtlCutoverTimeToSystemTime.c)
 *     RtlTimeToTimeFields @ 0x18005E290 (RtlTimeToTimeFields.c)
 * Callees:
 *     RtlpTimeToTimeFieldsNoLeapSeconds @ 0x1800F0A58 (RtlpTimeToTimeFieldsNoLeapSeconds.c)
 */

__int16 __fastcall RtlpTimeToTimeFields(__int64 *a1, _OWORD *a2, __int64 *a3)
{
  _LEAP_SECOND_DATA *LeapSecondData; // r9
  unsigned int Count; // r11d
  int v7; // edx
  unsigned int v8; // r8d
  __int64 v9; // r10
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rcx
  signed __int64 v13; // rcx
  unsigned __int64 v14; // rsi
  unsigned int v15; // ecx
  unsigned int v16; // ebp
  unsigned int v17; // r11d
  __int64 v18; // r9
  __int64 v19; // rbx
  __int16 v20; // ax
  unsigned int v21; // r10d
  __int16 result; // ax
  __int16 v23; // r9
  __int16 v24; // cx
  _LARGE_INTEGER *Data; // rdi
  __int64 QuadPart; // r9
  __int64 v27; // r9
  signed __int32 v28[8]; // [rsp+0h] [rbp-38h] BYREF
  __int128 v29; // [rsp+20h] [rbp-18h]

  LeapSecondData = NtCurrentPeb()->LeapSecondData;
  if ( !LeapSecondData || !LeapSecondData->Enabled )
    return RtlpTimeToTimeFieldsNoLeapSeconds();
  Count = LeapSecondData->Count;
  _InterlockedOr(v28, 0);
  v7 = 0;
  v8 = NtCurrentPeb()->LeapSecondFlags & 1;
  if ( a3 )
    v9 = *a3;
  else
    v9 = 0LL;
  v10 = *a1;
  v11 = 0;
  if ( Count )
  {
    Data = LeapSecondData->Data;
    do
    {
      QuadPart = Data->QuadPart;
      if ( Data->QuadPart < 0 )
      {
        if ( v10 < (QuadPart & 0x7FFFFFFFFFFFFFFFLL) - v9 )
          break;
        --v7;
      }
      else
      {
        v27 = QuadPart - v9;
        if ( v10 < v27 + 20000000 )
        {
          if ( v10 < v27 + 10000000 )
          {
            if ( v10 < v27 )
              break;
            v8 |= 4u;
          }
          else
          {
            v8 |= 2u;
          }
        }
        else
        {
          ++v7;
        }
      }
      ++v11;
      ++Data;
    }
    while ( v11 < Count );
  }
  v12 = -10000000LL * v7 + v10;
  if ( (v8 & 2) != 0 )
    v12 -= 10000000LL;
  if ( v12 < 0 )
    v13 = -(__int64)((unsigned __int64)(((unsigned __int64)-v12 * (unsigned __int128)(unsigned __int64)Magic10000) >> 64) >> 13);
  else
    v13 = (unsigned __int64)(((unsigned __int64)v12 * (unsigned __int128)(unsigned __int64)Magic10000) >> 64) >> 13;
  if ( v13 < 0 )
    LODWORD(v14) = -(int)((unsigned __int64)(((unsigned __int64)-v13 * (unsigned __int128)(unsigned __int64)Magic86400000) >> 64) >> 26);
  else
    v14 = (unsigned __int64)(((unsigned __int64)v13 * (unsigned __int128)(unsigned __int64)Magic86400000) >> 64) >> 26;
  v15 = v13 - 86400000 * v14;
  HIWORD(v29) = ((int)v14 + 1) % 7u;
  v16 = (100
       * ((-36524 * ((100 * ((unsigned int)v14 % 0x23AB1) + 75) / 0x37BB49) + (unsigned int)v14 % 0x23AB1) % 0x5B5)
       + 75)
      / 0x8EAD
      + 4
      * ((-36524 * ((100 * ((unsigned int)v14 % 0x23AB1) + 75) / 0x37BB49) + (unsigned int)v14 % 0x23AB1) / 0x5B5
       + 25 * ((100 * ((unsigned int)v14 % 0x23AB1) + 75) / 0x37BB49 + 4 * ((unsigned int)v14 / 0x23AB1)));
  v17 = v16 + 1;
  v18 = (_DWORD)v14 + -365 * v16 - v16 / 0x190 - (v16 >> 2) + v16 / 0x64;
  if ( v16 + 1 != 400 * ((v16 + 1) / 0x190) && (v17 == 100 * (v17 / 0x64) || (v17 & 3) != 0) )
  {
    v19 = NormalYearDayToMonth[v18];
    v20 = NormalYearDaysPrecedingMonth[v19];
  }
  else
  {
    v19 = LeapYearDayToMonth[v18];
    v20 = LeapYearDaysPrecedingMonth[v19];
  }
  WORD1(v29) = v19 + 1;
  WORD2(v29) = v14 + -365 * v16 - v16 / 0x190 - (v16 >> 2) + v16 / 0x64 - v20 + 1;
  v21 = v15 / 0x3E8 / 0x3C;
  LOWORD(v29) = v16 + 1601;
  WORD3(v29) = v21 / 0x3C;
  WORD4(v29) = v21 % 0x3C;
  result = 1000;
  v23 = v15 / 0x3E8 % 0x3C;
  WORD5(v29) = v23;
  v24 = v15 % 0x3E8;
  WORD6(v29) = v24;
  if ( (v8 & 1) != 0 )
  {
    if ( (v8 & 2) != 0 )
      WORD5(v29) = v23 + 1;
  }
  else
  {
    if ( (v8 & 4) != 0 )
    {
      v24 /= 2;
      result = v24;
      WORD6(v29) = v24;
    }
    if ( (v8 & 2) != 0 )
    {
      result = v24 / 2 + 500;
      WORD6(v29) = result;
    }
  }
  *a2 = v29;
  return result;
}
