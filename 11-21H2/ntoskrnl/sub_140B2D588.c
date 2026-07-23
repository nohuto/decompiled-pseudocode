/*
 * XREFs of sub_140B2D588 @ 0x140B2D588
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_14036A698 @ 0x14036A698 (sub_14036A698.c)
 *     sub_14036B090 @ 0x14036B090 (sub_14036B090.c)
 *     sub_14036B98C @ 0x14036B98C (sub_14036B98C.c)
 */

__int64 sub_140B2D588()
{
  int *v0; // rdx
  __int64 v1; // r8
  int v2; // ecx
  int v3; // ebx
  _DWORD v5[2]; // [rsp+30h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-30h] BYREF
  __int128 v7; // [rsp+48h] [rbp-20h]
  PVOID P; // [rsp+70h] [rbp+8h] BYREF

  dword_140C234C0 = 275;
  *(_QWORD *)&stru_140C23460.Header.Lock = 8LL;
  qword_140C234D8 = (__int64)sub_1403B68E0;
  v0 = dword_140D05340;
  P = 0LL;
  stru_140C23460.Header.WaitListHead.Blink = &stru_140C23460.Header.WaitListHead;
  v1 = 4LL;
  stru_140C23460.Header.WaitListHead.Flink = &stru_140C23460.Header.WaitListHead;
  qword_140C234A8 = 0LL;
  qword_140C234E0 = 0LL;
  qword_140C234F8 = 0LL;
  qword_140C234D0 = 0LL;
  stru_140C23460.DueTime.QuadPart = 0LL;
  stru_140C23460.Period = 0;
  LOWORD(stru_140C23460.Processor) = 0;
  do
  {
    v2 = 300000;
    if ( (unsigned int)*v0 < 0x493E0 )
      v2 = *v0;
    *v0++ = v2;
    --v1;
  }
  while ( v1 );
  v5[0] = 0;
  v5[1] = 1;
  DestinationString = 0LL;
  v7 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Power Manager");
  v3 = sub_14036B98C((unsigned __int64)v5, 0LL, 0LL, 1, 0LL, &P);
  if ( v3 >= 0 )
  {
    v3 = sub_14036A698(P, 0, &qword_140C234A0);
    if ( v3 < 0 )
      sub_14036B090(P);
  }
  return (unsigned int)v3;
}
