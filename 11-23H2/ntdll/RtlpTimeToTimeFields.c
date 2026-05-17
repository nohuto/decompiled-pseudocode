/*
 * XREFs of RtlpTimeToTimeFields @ 0x1800596C0
 * Callers:
 *     RtlCutoverTimeToSystemTime @ 0x1800591D0 (RtlCutoverTimeToSystemTime.c)
 *     RtlTimeToTimeFields @ 0x1800596B0 (RtlTimeToTimeFields.c)
 * Callees:
 *     RtlpTimeToTimeFieldsNoLeapSeconds @ 0x1800F1A18 (RtlpTimeToTimeFieldsNoLeapSeconds.c)
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
  unsigned __int128 v14; // rax
  __int64 v15; // r9
  unsigned int v16; // ecx
  unsigned int v17; // edi
  unsigned int v18; // ebx
  __int64 v19; // r11
  __int64 v20; // rbx
  __int16 v21; // ax
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
    v14 = (unsigned __int64)-v13 * (unsigned __int128)(unsigned __int64)Magic86400000;
  else
    v14 = (unsigned __int64)v13 * (unsigned __int128)(unsigned __int64)Magic86400000;
  v15 = *((_QWORD *)&v14 + 1) >> 26;
  if ( v13 < 0 )
    LODWORD(v15) = -(int)v15;
  v16 = v13 - 86400000 * v15;
  HIWORD(v29) = ((int)v15 + 1) % 7u;
  v17 = (100
       * ((-36524 * ((100 * ((unsigned int)v15 % 0x23AB1) + 75) / 0x37BB49) + (unsigned int)v15 % 0x23AB1) % 0x5B5)
       + 75)
      / 0x8EAD
      + 4
      * ((-36524 * ((100 * ((unsigned int)v15 % 0x23AB1) + 75) / 0x37BB49) + (unsigned int)v15 % 0x23AB1) / 0x5B5
       + 25 * ((100 * ((unsigned int)v15 % 0x23AB1) + 75) / 0x37BB49 + 4 * ((unsigned int)v15 / 0x23AB1)));
  v18 = v17 + 1;
  v19 = (_DWORD)v15 + -365 * v17 - v17 / 0x190 - (v17 >> 2) + v17 / 0x64;
  if ( v17 + 1 != 400 * ((v17 + 1) / 0x190) && (v18 == 100 * (v18 / 0x64) || (v18 & 3) != 0) )
  {
    v20 = NormalYearDayToMonth[v19];
    v21 = NormalYearDaysPrecedingMonth[v20];
  }
  else
  {
    v20 = LeapYearDayToMonth[v19];
    v21 = LeapYearDaysPrecedingMonth[v20];
  }
  WORD1(v29) = v20 + 1;
  WORD2(v29) = v15 + -365 * v17 - v17 / 0x190 - (v17 >> 2) + v17 / 0x64 - v21 + 1;
  LOWORD(v29) = v17 + 1601;
  WORD3(v29) = v16 / 0x3E8 / 0x3C / 0x3C;
  WORD4(v29) = v16 / 0x3E8 / 0x3C % 0x3C;
  result = 1000;
  v23 = v16 / 0x3E8 % 0x3C;
  WORD5(v29) = v23;
  v24 = v16 % 0x3E8;
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
