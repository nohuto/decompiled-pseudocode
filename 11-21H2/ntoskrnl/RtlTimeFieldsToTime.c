/*
 * XREFs of RtlTimeFieldsToTime @ 0x14022D4D0
 * Callers:
 *     HalSetRealTimeClock @ 0x140503420 (HalSetRealTimeClock.c)
 *     sub_14082D70C @ 0x14082D70C (sub_14082D70C.c)
 *     sub_1408357A0 @ 0x1408357A0 (sub_1408357A0.c)
 *     sub_140835844 @ 0x140835844 (sub_140835844.c)
 *     sub_140835D14 @ 0x140835D14 (sub_140835D14.c)
 *     sub_14090805C @ 0x14090805C (sub_14090805C.c)
 *     sub_14094E74C @ 0x14094E74C (sub_14094E74C.c)
 *     sub_1409F8350 @ 0x1409F8350 (sub_1409F8350.c)
 *     sub_140A33434 @ 0x140A33434 (sub_140A33434.c)
 *     sub_140A33600 @ 0x140A33600 (sub_140A33600.c)
 *     sub_140A33AD0 @ 0x140A33AD0 (sub_140A33AD0.c)
 *     sub_140A47884 @ 0x140A47884 (sub_140A47884.c)
 *     sub_140A523B0 @ 0x140A523B0 (sub_140A523B0.c)
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 * Callees:
 *     sub_14022D554 @ 0x14022D554 (sub_14022D554.c)
 */

BOOLEAN __stdcall RtlTimeFieldsToTime(PTIME_FIELDS TimeFields, PLARGE_INTEGER Time)
{
  char *v2; // rdi
  BOOLEAN v3; // bl
  unsigned int v5; // ebp
  LONGLONG v6; // rax
  unsigned int v7; // r8d
  __int64 *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rdx
  signed __int32 v12[10]; // [rsp+0h] [rbp-28h] BYREF
  LONGLONG v13; // [rsp+40h] [rbp+18h] BYREF

  v2 = (char *)qword_140C15B58;
  v3 = 0;
  v13 = 0LL;
  if ( !qword_140C15B58 || !*(_BYTE *)qword_140C15B58 )
    return sub_14022D554(TimeFields, Time);
  v5 = *((_DWORD *)qword_140C15B58 + 1);
  _InterlockedOr(v12, 0);
  if ( (unsigned __int8)sub_14022D554(TimeFields, &v13) )
  {
    v6 = v13;
    v7 = 0;
    if ( !v5 )
      goto LABEL_5;
    v9 = (__int64 *)(v2 + 8);
    while ( 1 )
    {
      v10 = *v9;
      if ( *v9 < 0 )
      {
        v11 = v10 & 0x7FFFFFFFFFFFFFFFLL;
        if ( v6 < v11 + 10000000 )
        {
          if ( v6 < v11 )
          {
LABEL_5:
            Time->QuadPart = v6;
            return 1;
          }
          return v3;
        }
        v6 -= 10000000LL;
      }
      else if ( v6 < v10 + 10000000 )
      {
        if ( v6 < v10 )
          goto LABEL_5;
        v6 = 2 * v6 - v10;
      }
      else
      {
        v6 += 10000000LL;
      }
      ++v7;
      ++v9;
      if ( v7 >= v5 )
        goto LABEL_5;
    }
  }
  return v3;
}
