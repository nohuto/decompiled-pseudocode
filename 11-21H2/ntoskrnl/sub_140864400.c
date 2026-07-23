/*
 * XREFs of sub_140864400 @ 0x140864400
 * Callers:
 *     <none>
 * Callees:
 *     RtlTimeToTimeFields @ 0x1402D1A30 (RtlTimeToTimeFields.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ntoskrnl_23 @ 0x140811D70 (ntoskrnl_23.c)
 */

__int64 __fastcall sub_140864400(__int64 a1, _DWORD *a2, _OWORD *a3, unsigned int a4, _DWORD *a5, _BYTE *a6)
{
  int v7; // ebx
  _TIME_FIELDS TimeFields; // [rsp+20h] [rbp-30h] BYREF
  LARGE_INTEGER Time; // [rsp+30h] [rbp-20h] BYREF
  __int128 v11; // [rsp+38h] [rbp-18h]

  HIDWORD(v11) = 0;
  Time.QuadPart = 0LL;
  *a5 = 16;
  TimeFields = 0LL;
  if ( a4 < 0x10 )
  {
    return (unsigned int)-1073741789;
  }
  else
  {
    if ( a2 )
      *a2 = 3;
    v7 = ntoskrnl_23(&Time, (__int64)a2);
    if ( v7 >= 0 )
    {
      RtlTimeToTimeFields(&Time, &TimeFields);
      LOWORD(v11) = TimeFields.Year;
      BYTE2(v11) = TimeFields.Month;
      BYTE11(v11) = HIBYTE(TimeFields.Second);
      *(_QWORD *)((char *)&v11 + 3) = *(_QWORD *)((char *)&TimeFields.Month + 1);
      *a3 = v11;
      *a6 = 1;
    }
  }
  return (unsigned int)v7;
}
