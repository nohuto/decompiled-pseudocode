/*
 * XREFs of sub_14094A7D4 @ 0x14094A7D4
 * Callers:
 *     sub_1407455A8 @ 0x1407455A8 (sub_1407455A8.c)
 *     sub_1407702BC @ 0x1407702BC (sub_1407702BC.c)
 *     sub_14094D7E8 @ 0x14094D7E8 (sub_14094D7E8.c)
 *     sub_14094ED84 @ 0x14094ED84 (sub_14094ED84.c)
 *     sub_14095D488 @ 0x14095D488 (sub_14095D488.c)
 * Callees:
 *     sub_1402D1DA4 @ 0x1402D1DA4 (sub_1402D1DA4.c)
 *     sub_14039F184 @ 0x14039F184 (sub_14039F184.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406BE560 @ 0x1406BE560 (sub_1406BE560.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 */

__int64 __fastcall sub_14094A7D4(PUNICODE_STRING UnicodeString, const void **a2, const void **a3, char a4)
{
  unsigned int v4; // ebx
  unsigned int v9; // eax
  wchar_t *v10; // rax
  wchar_t *v11; // rcx
  unsigned __int16 v12; // ax
  unsigned __int16 Length; // dx
  int v14; // ecx
  SIZE_T v15; // rcx
  wchar_t *Buffer; // r12
  unsigned __int16 v17; // si
  unsigned __int64 v18; // rax
  _WORD *i; // r14
  __int64 v20; // rax
  unsigned int v21; // r13d
  UNICODE_STRING UnicodeStringa; // [rsp+20h] [rbp-38h] BYREF

  v4 = 0;
  *(_QWORD *)&UnicodeStringa.Length = 0LL;
  UnicodeStringa.Buffer = 0LL;
  if ( UnicodeString->Buffer )
  {
    Length = UnicodeString->Length;
    v14 = UnicodeString->Length;
    if ( Length <= 2u )
      v14 = 2;
    if ( a2 )
    {
      v15 = (unsigned int)*(unsigned __int16 *)a2 + 2 + v14;
    }
    else
    {
      if ( !a3 )
        goto LABEL_40;
      v15 = (unsigned int)*(unsigned __int16 *)a3 + v14;
      if ( Length )
        v15 = (unsigned int)(v15 - 2);
    }
    if ( (unsigned int)v15 > 0xFFFE )
      goto LABEL_4;
    UnicodeStringa.Buffer = (wchar_t *)sub_1406BE560(v15);
    Buffer = UnicodeStringa.Buffer;
    if ( !UnicodeStringa.Buffer )
      goto LABEL_6;
    if ( UnicodeString->Length <= 2u )
    {
      v17 = 0;
    }
    else
    {
      memmove(UnicodeStringa.Buffer, UnicodeString->Buffer, UnicodeString->Length);
      v17 = UnicodeString->Length - 2;
    }
    if ( a2 )
    {
      if ( a4 || !sub_14039F184(UnicodeString->Buffer, (const WCHAR *)a2[1]) )
      {
        memmove((char *)UnicodeStringa.Buffer + v17, a2[1], *(unsigned __int16 *)a2);
        v18 = (unsigned __int64)(unsigned __int16)(v17 + *(_WORD *)a2) >> 1;
        v17 += *(_WORD *)a2 + 2;
        UnicodeStringa.Buffer[v18] = 0;
      }
    }
    else if ( a3 )
    {
      if ( a4 )
      {
        memmove((char *)UnicodeStringa.Buffer + v17, a3[1], *(unsigned __int16 *)a3);
        v17 += *(_WORD *)a3 - 2;
      }
      else
      {
        for ( i = a3[1]; *i; i += (unsigned __int64)v21 >> 1 )
        {
          v20 = -1LL;
          do
            ++v20;
          while ( i[v20] );
          v21 = 2 * v20 + 2;
          if ( !sub_14039F184(UnicodeString->Buffer, i) )
          {
            memmove((char *)UnicodeStringa.Buffer + v17, i, v21);
            v17 += v21;
          }
        }
      }
    }
    UnicodeStringa.Length = v17 + 2;
    UnicodeStringa.MaximumLength = v17 + 2;
    Buffer[(unsigned __int64)v17 >> 1] = 0;
    RtlFreeUnicodeString(UnicodeString);
    *UnicodeString = UnicodeStringa;
    UnicodeStringa = 0LL;
    goto LABEL_41;
  }
  if ( !a2 )
  {
    if ( a3 )
    {
      if ( sub_1402D1DA4((__int64)UnicodeString, (__int64)a3) )
        goto LABEL_41;
      goto LABEL_6;
    }
LABEL_40:
    v4 = -1073741811;
    goto LABEL_41;
  }
  v9 = *(unsigned __int16 *)a2 + 4;
  if ( v9 > 0xFFFE )
  {
LABEL_4:
    v4 = -2147483643;
    goto LABEL_41;
  }
  v10 = (wchar_t *)sub_1406BE560(v9);
  UnicodeString->Buffer = v10;
  v11 = v10;
  if ( !v10 )
  {
LABEL_6:
    v4 = -1073741670;
    goto LABEL_41;
  }
  v12 = *(_WORD *)a2;
  UnicodeString->Length = *(_WORD *)a2;
  if ( *(_WORD *)a2 )
  {
    memmove(v11, a2[1], *(unsigned __int16 *)a2);
    UnicodeString->Buffer[(unsigned __int64)UnicodeString->Length >> 1] = 0;
    UnicodeString->Length += 2;
    v12 = UnicodeString->Length;
    v11 = UnicodeString->Buffer;
  }
  v11[(unsigned __int64)v12 >> 1] = 0;
  UnicodeString->Length += 2;
  UnicodeString->MaximumLength = UnicodeString->Length;
LABEL_41:
  RtlFreeUnicodeString(&UnicodeStringa);
  return v4;
}
