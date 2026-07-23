/*
 * XREFs of sub_14095DC2C @ 0x14095DC2C
 * Callers:
 *     sub_14095D488 @ 0x14095D488 (sub_14095D488.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406BE560 @ 0x1406BE560 (sub_1406BE560.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     sub_14095BE9C @ 0x14095BE9C (sub_14095BE9C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14095DC2C(
        __int16 *a1,
        char a2,
        const UNICODE_STRING *a3,
        const UNICODE_STRING *a4,
        UNICODE_STRING *String1,
        PUNICODE_STRING Destination)
{
  const UNICODE_STRING *v6; // r14
  bool v7; // r15
  NTSTATUS appended; // ebx
  const UNICODE_STRING *v10; // r13
  PWCHAR v12; // rsi
  PWCHAR v13; // rax
  PWCHAR v14; // rax
  PWCHAR v15; // rax
  __int16 v16; // r8
  unsigned __int16 v17; // r15
  wchar_t *v18; // r14
  unsigned __int16 v19; // r8
  unsigned __int16 v20; // dx
  unsigned int v21; // ebx
  ULONG v22; // edx
  PVOID v23; // rsi
  wchar_t *Buffer; // rcx
  char v26; // [rsp+20h] [rbp-48h]
  unsigned int Length; // [rsp+24h] [rbp-44h]
  bool v28; // [rsp+28h] [rbp-40h]
  char v29; // [rsp+2Ch] [rbp-3Ch]
  int v30; // [rsp+30h] [rbp-38h]
  UNICODE_STRING Source; // [rsp+40h] [rbp-28h] BYREF
  UNICODE_STRING v32; // [rsp+50h] [rbp-18h]
  int v34; // [rsp+B8h] [rbp+50h]
  PUNICODE_STRING Destinationa; // [rsp+D8h] [rbp+70h]

  v6 = a4;
  v7 = 0;
  v26 = 0;
  v29 = 0;
  v28 = 0;
  Length = 0;
  v30 = a2 & 2;
  appended = 0;
  v32 = 0LL;
  v10 = 0LL;
  if ( (a2 & 2) != 0 && a3 )
  {
    v7 = RtlEqualUnicodeString(a3, &stru_140A37C58, 1u) != 0;
    v29 = v7;
  }
  v34 = a2 & 1;
  if ( (a2 & 1) != 0 && String1 && v6 )
    v28 = RtlEqualUnicodeString(String1, v6, 1u) != 0;
  Destination->Length = 0;
  Source = *(UNICODE_STRING *)a1;
  Destinationa = (PUNICODE_STRING)_mm_srli_si128((__m128i)Source, 8).m128i_u64[0];
  if ( !Destinationa->Length )
    return (unsigned int)-1073741275;
  while ( 1 )
  {
    v12 = 0LL;
    if ( v30 )
    {
      if ( a3 && !v7 )
      {
        v13 = sub_14095BE9C(&Source, (UNICODE_STRING *)&stru_140A37C58);
        if ( v13 )
        {
          v10 = a3;
          v12 = v13;
          Length = 22;
        }
        else
        {
          v29 = 1;
        }
      }
      if ( v6 && !v26 )
      {
        v14 = sub_14095BE9C(&Source, (UNICODE_STRING *)&stru_140A37FF0);
        if ( v14 )
        {
          if ( !v12 || v14 < v12 )
          {
            v12 = v14;
            Length = 24;
            v10 = v6;
          }
        }
        else
        {
          v26 = 1;
        }
      }
    }
    if ( v34 && v6 && !v28 && String1 && String1->Length > 2u )
    {
      v15 = sub_14095BE9C(&Source, String1);
      if ( v15 )
      {
        if ( !v12 || v15 < v12 )
        {
          v12 = v15;
          Length = String1->Length;
          v10 = v6;
        }
        goto LABEL_30;
      }
      v28 = 1;
    }
    if ( !v12 )
      break;
LABEL_30:
    v16 = *a1;
    v17 = 2 * (((char *)v12 - (char *)Destinationa) >> 1);
    v18 = &v12[(unsigned __int64)Length >> 1];
    Source.Length = v17;
    v32.Buffer = v18;
    v19 = v16 - 2 * ((__int64)((unsigned int)v12 + 2 * (Length >> 1) - *((_DWORD *)a1 + 2)) >> 1);
    v20 = v19;
    v32.Length = v19;
    v32.MaximumLength = v19 + 2;
    if ( *v18 )
    {
      if ( *v18 != 92 )
        goto LABEL_45;
      if ( v10->Buffer[((unsigned __int64)v10->Length >> 1) - 1] == 92 )
      {
        ++v18;
        v32.MaximumLength = v19;
        v20 = v19 - 2;
        v32.Buffer = v18;
        v32.Length = v19 - 2;
      }
    }
    v21 = v20 + Destination->Length + v17 + v10->Length + 2;
    if ( v21 > 0xFFFE )
      return (unsigned int)-2147483643;
    if ( v21 > Destination->MaximumLength )
    {
      v23 = sub_1406BE560(v21);
      if ( !v23 )
        return (unsigned int)-1073741670;
      Buffer = Destination->Buffer;
      if ( Buffer )
      {
        if ( Destination->Length )
        {
          memmove(v23, Destination->Buffer, Destination->Length);
          Buffer = Destination->Buffer;
        }
        ExFreePoolWithTag(Buffer, v22);
      }
      Destination->Buffer = (wchar_t *)v23;
      Destination->MaximumLength = v21;
    }
    if ( v17 )
    {
      appended = RtlAppendUnicodeStringToString(Destination, &Source);
      if ( appended < 0 )
        return (unsigned int)appended;
    }
    appended = RtlAppendUnicodeStringToString(Destination, v10);
    if ( appended < 0 )
      return (unsigned int)appended;
LABEL_45:
    Source = v32;
    if ( !*v18 )
      break;
    v6 = a4;
    v7 = v29;
    Destinationa = (PUNICODE_STRING)Source.Buffer;
  }
  if ( !Destination->Length )
    return (unsigned int)-1073741275;
  if ( Source.Length )
    return (unsigned int)RtlAppendUnicodeStringToString(Destination, &Source);
  return (unsigned int)appended;
}
