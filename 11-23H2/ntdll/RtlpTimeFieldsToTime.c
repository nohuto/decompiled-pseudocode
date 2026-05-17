/*
 * XREFs of RtlpTimeFieldsToTime @ 0x180059390
 * Callers:
 *     RtlCutoverTimeToSystemTime @ 0x1800591D0 (RtlCutoverTimeToSystemTime.c)
 *     RtlTimeFieldsToTime @ 0x180059380 (RtlTimeFieldsToTime.c)
 * Callees:
 *     RtlpTimeFieldsToTimeNoLeapSeconds @ 0x18005949C (RtlpTimeFieldsToTimeNoLeapSeconds.c)
 */

char __fastcall RtlpTimeFieldsToTime(__m128i *a1, _QWORD *a2, __int64 *a3)
{
  _LEAP_SECOND_DATA *LeapSecondData; // rdi
  unsigned int Count; // esi
  unsigned int v6; // ebx
  __int64 v7; // rbp
  __int64 v8; // rax
  unsigned int v9; // r8d
  unsigned __int64 v11; // xmm0_8
  unsigned int v12; // r8d
  _LARGE_INTEGER *Data; // rdi
  __int64 QuadPart; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  _LARGE_INTEGER *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  signed __int32 v21[8]; // [rsp+0h] [rbp-48h] BYREF
  __m128i v22; // [rsp+20h] [rbp-28h] BYREF
  __int64 v23; // [rsp+68h] [rbp+20h] BYREF

  LeapSecondData = NtCurrentPeb()->LeapSecondData;
  if ( !LeapSecondData || !LeapSecondData->Enabled )
    return ((__int64 (*)(void))RtlpTimeFieldsToTimeNoLeapSeconds)();
  Count = LeapSecondData->Count;
  _InterlockedOr(v21, 0);
  v6 = NtCurrentPeb()->LeapSecondFlags & 1;
  if ( a3 )
    v7 = *a3;
  else
    v7 = 0LL;
  if ( v6 )
  {
    v22 = *a1;
    v11 = _mm_srli_si128(v22, 8).m128i_u64[0];
    if ( WORD1(v11) == 60 )
    {
      v22.m128i_i16[5] = 59;
      v6 |= 2u;
    }
    if ( !(unsigned __int8)RtlpTimeFieldsToTimeNoLeapSeconds(&v22, &v23) )
      return 0;
    v8 = v23;
    v12 = 0;
    if ( !Count )
      goto LABEL_13;
    Data = LeapSecondData->Data;
    while ( 1 )
    {
      QuadPart = Data->QuadPart;
      if ( Data->QuadPart < 0 )
      {
        v16 = (QuadPart & 0x7FFFFFFFFFFFFFFFLL) - v7;
        if ( v8 < v16 + 10000000 )
        {
          if ( v8 >= v16 )
            return 0;
          goto LABEL_13;
        }
        v8 -= 10000000LL;
      }
      else
      {
        v15 = QuadPart - v7;
        if ( v8 < v15 + 10000000 )
        {
          if ( v8 >= v15 )
            v6 |= 4u;
LABEL_13:
          if ( (v6 & 2) == 0 )
            goto LABEL_8;
          if ( v6 >= 4 )
          {
            v8 += 10000000LL;
            goto LABEL_8;
          }
          return 0;
        }
        v8 += 10000000LL;
      }
      ++v12;
      ++Data;
      if ( v12 >= Count )
        goto LABEL_13;
    }
  }
  if ( !(unsigned __int8)RtlpTimeFieldsToTimeNoLeapSeconds(a1, &v23) )
    return 0;
  v8 = v23;
  v9 = 0;
  if ( !Count )
    goto LABEL_8;
  v17 = LeapSecondData->Data;
  while ( 1 )
  {
    v18 = v17->QuadPart;
    if ( v17->QuadPart >= 0 )
    {
      v19 = v18 - v7;
      if ( v8 < v19 + 10000000 )
      {
        if ( v8 < v19 )
          goto LABEL_8;
        v8 = 2 * v8 - v19;
      }
      else
      {
        v8 += 10000000LL;
      }
      goto LABEL_39;
    }
    v20 = (v18 & 0x7FFFFFFFFFFFFFFFLL) - v7;
    if ( v8 < v20 + 10000000 )
      break;
    v8 -= 10000000LL;
LABEL_39:
    ++v9;
    ++v17;
    if ( v9 >= Count )
      goto LABEL_8;
  }
  if ( v8 < v20 )
  {
LABEL_8:
    *a2 = v8;
    return 1;
  }
  return 0;
}
