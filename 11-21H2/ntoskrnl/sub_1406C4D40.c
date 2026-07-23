/*
 * XREFs of sub_1406C4D40 @ 0x1406C4D40
 * Callers:
 *     sub_140B2B2EC @ 0x140B2B2EC (sub_140B2B2EC.c)
 *     sub_140B2BC5C @ 0x140B2BC5C (sub_140B2BC5C.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406C505C @ 0x1406C505C (sub_1406C505C.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_1406C4D40(unsigned __int64 a1, int a2, __int64 a3, UNICODE_STRING *a4)
{
  char v8; // r9
  __int64 v9; // rcx
  unsigned __int16 v10; // ax
  wchar_t *v11; // r8
  wchar_t *v12; // r8
  __m128i v13; // xmm1
  unsigned __int16 v14; // di
  unsigned int v15; // ebx
  REGHANDLE v16; // r10
  unsigned int v17; // r9d
  __int64 v18; // rax
  unsigned int v19; // r9d
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // r9d
  __int64 v23; // rax
  __int64 v24; // rax
  UNICODE_STRING *v26; // rax
  __int16 v27; // [rsp+30h] [rbp-F8h] BYREF
  UNICODE_STRING v28; // [rsp+38h] [rbp-F0h] BYREF
  int v29; // [rsp+48h] [rbp-E0h] BYREF
  unsigned int v30; // [rsp+50h] [rbp-D8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-D0h] BYREF
  UNICODE_STRING *v32; // [rsp+68h] [rbp-C0h]
  __int64 v33; // [rsp+70h] [rbp-B8h] BYREF
  __m128i v34; // [rsp+78h] [rbp-B0h]
  struct _EVENT_DATA_DESCRIPTOR UserData[6]; // [rsp+90h] [rbp-98h] BYREF

  v28 = 0LL;
  DestinationString = 0LL;
  HIDWORD(v33) = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&v28, 0LL);
  v8 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v8 )
  {
    if ( (a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = 0x7FFFFFFF0000LL;
    v32 = *(UNICODE_STRING **)(a3 + 16);
    if ( v32 )
    {
      DestinationString = *v32;
      v10 = _mm_cvtsi128_si32((__m128i)DestinationString);
      if ( v10 )
      {
        v11 = (wchar_t *)((char *)DestinationString.Buffer + v10);
        if ( (unsigned __int64)v11 > 0x7FFFFFFF0000LL || v11 < DestinationString.Buffer )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    v28 = *a4;
    if ( v28.MaximumLength )
    {
      v12 = (wchar_t *)((char *)v28.Buffer + v28.MaximumLength);
      if ( (unsigned __int64)v12 > 0x7FFFFFFF0000LL || v12 < v28.Buffer )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( a1 < 0x7FFFFFFF0000LL )
      v9 = a1;
    *(_QWORD *)v9 = *(_QWORD *)v9;
    v13 = (__m128i)v28;
  }
  else
  {
    v13 = *(__m128i *)a4;
    v28 = *a4;
    v26 = *(UNICODE_STRING **)(a3 + 16);
    if ( v26 )
      DestinationString = *v26;
  }
  if ( (v13.m128i_i8[2] & 1) != 0 )
  {
    v28.MaximumLength = v13.m128i_i16[1] & 0xFFFE;
    v13 = (__m128i)v28;
  }
  if ( !v28.MaximumLength )
    return 3221225485LL;
  v14 = _mm_cvtsi128_si32(v13);
  if ( v14 > v28.MaximumLength || (_mm_cvtsi128_si32(v13) & 1) != 0 )
    return 3221225485LL;
  v33 = 4LL;
  v34 = v13;
  v15 = sub_1406C505C(a1, a2, a3, (unsigned int)&v33, v8);
  v30 = v15;
  v29 = a2;
  v16 = qword_140C15DF8;
  if ( qword_140C15DF8 )
  {
    v27 = 0;
    v17 = 0;
    if ( DestinationString.Buffer )
    {
      UserData[0].Ptr = (ULONGLONG)DestinationString.Buffer;
      UserData[0].Size = DestinationString.Length;
      UserData[0].Reserved = 0;
      v17 = 1;
    }
    v18 = v17;
    UserData[v18].Ptr = (ULONGLONG)&v27;
    *(_QWORD *)&UserData[v18].Size = 2LL;
    v19 = v17 + 1;
    if ( v28.Buffer )
    {
      v20 = v19;
      UserData[v20].Ptr = (ULONGLONG)v28.Buffer;
      UserData[v20].Size = v14;
      *(&UserData[0].Reserved + 1 * v20) = 0;
      ++v19;
    }
    v21 = v19;
    UserData[v21].Ptr = (ULONGLONG)&v27;
    *(_QWORD *)&UserData[v21].Size = 2LL;
    v22 = v19 + 1;
    v23 = v22;
    UserData[v23].Ptr = (ULONGLONG)&v29;
    *(_QWORD *)&UserData[v23].Size = 4LL;
    v24 = ++v22;
    UserData[v24].Ptr = (ULONGLONG)&v30;
    *(_QWORD *)&UserData[v24].Size = 4LL;
    EtwWrite(v16, &stru_14000EB48, 0LL, v22 + 1, UserData);
  }
  return v15;
}
