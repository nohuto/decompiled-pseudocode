/*
 * XREFs of sub_140B02408 @ 0x140B02408
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1403588EC @ 0x1403588EC (sub_1403588EC.c)
 *     sub_14036A698 @ 0x14036A698 (sub_14036A698.c)
 *     sub_14036B090 @ 0x14036B090 (sub_14036B090.c)
 *     sub_14036B98C @ 0x14036B98C (sub_14036B98C.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140B02408(int a1)
{
  int v1; // ebx
  _DWORD v3[2]; // [rsp+30h] [rbp-38h] BYREF
  UNICODE_STRING v4[3]; // [rsp+38h] [rbp-30h] BYREF
  PVOID P; // [rsp+78h] [rbp+10h] BYREF

  P = 0LL;
  if ( !a1 )
  {
    qword_140C21D28 = 0LL;
    qword_140C21D20 = 0LL;
    memset(&qword_140C20BC0, 0, 0x1158uLL);
    DWORD2(xmmword_140C20BD0) = 1;
    qword_140C21D00 = (__int64)sub_140808DA0;
    LODWORD(xmmword_140C20BF8) = 0;
    stru_140C20C20.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_140995E60;
    qword_140C21D08 = 0LL;
    qword_140C21CF0 = 0LL;
    stru_140C20C20.Parameter = 0LL;
    stru_140C20C20.List.Flink = 0LL;
    word_140C20C42 = 0;
    sub_1403588EC((__int64)&unk_140C20C40, (__int64)sub_1405D4950, 0LL, 8);
    word_140C20CC8 = 0;
    qword_140C20CD8 = (__int64)&qword_140C20CD0;
    qword_140C20CD0 = (__int64)&qword_140C20CD0;
    byte_140C20CCA = 6;
    dword_140C20CCC = 0;
    return 0;
  }
  if ( a1 != 1 )
    return 0;
  v3[1] = 1;
  v3[0] = 0;
  memset(v4, 0, 32);
  RtlInitUnicodeString(v4, L"Sleep Idle State Disabled");
  v1 = sub_14036B98C((unsigned __int64)v3, 0LL, 0LL, 1, 0LL, &P);
  if ( v1 >= 0 )
  {
    v1 = sub_14036A698(P, 1, &qword_140C21D30);
    if ( v1 < 0 )
    {
      sub_14036B090(P);
      return (unsigned int)v1;
    }
    return 0;
  }
  return (unsigned int)v1;
}
