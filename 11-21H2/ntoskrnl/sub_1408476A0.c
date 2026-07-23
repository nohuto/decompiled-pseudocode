/*
 * XREFs of sub_1408476A0 @ 0x1408476A0
 * Callers:
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1403CD84C @ 0x1403CD84C (sub_1403CD84C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     sub_140847624 @ 0x140847624 (sub_140847624.c)
 *     sub_140847664 @ 0x140847664 (sub_140847664.c)
 *     sub_140847B10 @ 0x140847B10 (sub_140847B10.c)
 */

void __fastcall sub_1408476A0(__int64 a1)
{
  _QWORD *PrimaryToken; // r8
  _QWORD **ClientToken; // rax
  unsigned __int16 Length; // r10
  int v5; // eax
  __int64 v6; // r9
  char v7; // cl
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // r11
  char v12; // cl
  int v13; // eax
  __int64 v14; // r9
  __int64 v15; // r11
  char v16; // cl
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // r11
  char v21; // cl
  int v22; // eax
  __int64 v23; // r11
  char v24; // cl
  int v25; // eax
  __int64 v26; // r11
  char v27; // di
  __int64 v28; // r9
  __int16 v29; // r10
  unsigned __int16 v30; // ax
  int v31; // eax
  __int64 v32; // rdx
  int v33; // r8d
  char v34; // al
  int v35; // eax
  __int64 v36; // r11
  char v37; // cl
  _BYTE v38[8]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v39; // [rsp+28h] [rbp-D8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING v41; // [rsp+40h] [rbp-C0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD Src[132]; // [rsp+70h] [rbp-90h] BYREF

  SubjectContext.ImpersonationLevel = 0x80000000;
  memset(&SubjectContext.ImpersonationLevel + 1, 0, 20);
  SubjectContext.ClientToken = 0LL;
  memset(Src, 0, 0x418uLL);
  v38[0] = 0;
  v39 = 0LL;
  Src[0] = 0x12DA00000006LL;
  DestinationString = 0LL;
  LODWORD(Src[2]) = 524432;
  v41 = 0LL;
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  ClientToken = (_QWORD **)SubjectContext.PrimaryToken;
  LODWORD(Src[3]) = 4;
  if ( SubjectContext.ClientToken )
    ClientToken = (_QWORD **)SubjectContext.ClientToken;
  LODWORD(Src[7]) = 1;
  if ( SubjectContext.ClientToken )
    PrimaryToken = SubjectContext.ClientToken;
  HIDWORD(Src[7]) = 32;
  Src[11] = 0x800000005LL;
  Src[6] = *ClientToken[19];
  HIDWORD(Src[3]) = 4 * *(unsigned __int8 *)(Src[6] + 1LL) + 8;
  Src[10] = &qword_140001B08;
  Src[12] = PrimaryToken[3];
  if ( (int)sub_140847624(a1, 301989936LL, (__int64)&DestinationString) >= 0 && (Length = DestinationString.Length) != 0 )
  {
    if ( DestinationString.Length == DestinationString.MaximumLength )
    {
      Length = DestinationString.Length - 2;
      DestinationString.Length -= 2;
    }
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, &word_14086FF80);
    Length = DestinationString.Length;
  }
  LODWORD(Src[15]) = 1;
  HIDWORD(Src[15]) = Length + 16;
  Src[18] = &DestinationString;
  v5 = sub_140847B10(a1, 369098816LL, v38);
  v7 = v38[0];
  HIDWORD(Src[19]) = 4;
  if ( v5 < 0 )
    v7 = 0;
  LODWORD(Src[19]) = 21;
  v38[0] = v7;
  Src[20] = 1843LL - (v7 != 0);
  v8 = sub_140847664(a1, 352321607LL, (__int64)&v39, v6);
  v9 = v39;
  Src[23] = 0x400000015LL;
  if ( v8 < 0 )
    v9 = 0LL;
  v39 = v9;
  Src[24] = 1847LL - (v9 != 1);
  v10 = sub_140847B10(a1, 637534529LL, v38);
  v12 = v38[0];
  Src[27] = 0x400000015LL;
  if ( v10 < 0 )
    v12 = 0;
  v38[0] = v12;
  Src[28] = v11 - (v12 != 0);
  v13 = sub_140847B10(a1, 637534368LL, v38);
  v16 = v38[0];
  Src[31] = 0x400000015LL;
  if ( v13 < 0 )
    v16 = 0;
  v38[0] = v16;
  Src[32] = v15 - (v16 != 0);
  v17 = sub_140847664(a1, 620757314LL, (__int64)&v39, v14);
  v18 = v39;
  Src[35] = 0x400000015LL;
  if ( v17 < 0 )
    v18 = 0LL;
  v39 = v18;
  Src[36] = 1849LL - (v18 != 1);
  v19 = sub_140847B10(a1, 369098825LL, v38);
  v21 = v38[0];
  Src[39] = 0x400000015LL;
  if ( v19 < 0 )
    v21 = 0;
  v38[0] = v21;
  Src[40] = v20 - (v21 != 0);
  v22 = sub_140847B10(a1, 369098878LL, v38);
  v24 = v38[0];
  Src[43] = 0x400000015LL;
  if ( v22 < 0 )
    v24 = 0;
  v38[0] = v24;
  Src[44] = v23 - (v24 != 0);
  v25 = sub_140847B10(a1, 369098824LL, v38);
  v27 = v38[0];
  Src[47] = 0x400000015LL;
  if ( v25 < 0 )
    v27 = 0;
  Src[48] = v26 - (v27 != 0);
  if ( (int)sub_140847624(a1, 570425623LL, (__int64)&v41) >= 0 && (v30 = v41.Length) != 0 )
  {
    if ( v41.Length == v41.MaximumLength )
      DestinationString.Length = v29 - 2;
  }
  else
  {
    RtlInitUnicodeString(&v41, &word_14086FF80);
    v30 = v41.Length;
  }
  LODWORD(Src[51]) = 1;
  HIDWORD(Src[51]) = v30 + 16;
  Src[54] = &v41;
  v31 = sub_140847664(a1, 620757232LL, (__int64)&v39, v28);
  v32 = v39;
  v33 = v31;
  LODWORD(Src[55]) = 21;
  if ( v31 < 0 )
    v32 = 0LL;
  v34 = v27;
  HIDWORD(Src[55]) = 4;
  Src[56] = 1849LL - (v32 != 1);
  if ( v33 < 0 )
    v34 = 0;
  v38[0] = v34;
  v35 = sub_140847B10(a1, 637534450LL, v38);
  v37 = v38[0];
  LODWORD(Src[59]) = 21;
  if ( v35 < 0 )
    v37 = 0;
  HIDWORD(Src[59]) = 4;
  LODWORD(Src[1]) = 15;
  Src[60] = v36 - (v37 != 0);
  sub_1403CD84C(Src);
  SeReleaseSubjectContext(&SubjectContext);
}
