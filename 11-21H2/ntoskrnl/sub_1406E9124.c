/*
 * XREFs of sub_1406E9124 @ 0x1406E9124
 * Callers:
 *     sub_1406A0070 @ 0x1406A0070 (sub_1406A0070.c)
 *     sub_140714E58 @ 0x140714E58 (sub_140714E58.c)
 *     sub_140719278 @ 0x140719278 (sub_140719278.c)
 *     sub_140720260 @ 0x140720260 (sub_140720260.c)
 *     sub_140913E28 @ 0x140913E28 (sub_140913E28.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_140208AD8 @ 0x140208AD8 (sub_140208AD8.c)
 *     sub_140208C24 @ 0x140208C24 (sub_140208C24.c)
 *     Allocate @ 0x14024AC60 (Allocate.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     sub_140346D64 @ 0x140346D64 (sub_140346D64.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1406E137C @ 0x1406E137C (sub_1406E137C.c)
 *     sub_14091B86C @ 0x14091B86C (sub_14091B86C.c)
 */

void __fastcall sub_1406E9124(__int64 a1, unsigned __int16 *a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  wchar_t *Buffer; // rbx
  int v9; // eax
  __int64 v10; // r8
  struct _LOOKASIDE_LIST_EX *v11; // r9
  unsigned __int16 *p_Length; // rdi
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  const WCHAR *v15; // rdx
  __int64 v16; // r8
  __int16 v17; // r10
  unsigned __int64 v18; // r11
  char *v19; // r9
  UNICODE_STRING *p_DestinationString; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-10h] BYREF
  UNICODE_STRING *v22; // [rsp+68h] [rbp+38h] BYREF

  DestinationString = 0LL;
  v22 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( !a5 || (unsigned int)dword_140C03868 <= 4 || !sub_1402A2000((__int64)&dword_140C03868, 1LL) )
  {
    Buffer = DestinationString.Buffer;
    goto LABEL_3;
  }
  v9 = sub_1406E137C(a1, &v22);
  p_Length = &v22->Length;
  if ( v9 < 0 )
    goto LABEL_27;
  if ( !a2 )
  {
    p_DestinationString = v22;
LABEL_26:
    sub_14091B86C(p_DestinationString, a3, v10, a5);
    goto LABEL_27;
  }
  v13 = v22->Length + 2LL + *a2;
  if ( v13 <= 0xFFFF )
  {
    DestinationString.MaximumLength = v22->Length + 2 + *a2;
    DestinationString.Buffer = (wchar_t *)Allocate(PagedPool, (unsigned __int16)v13, 0x624E4D43u, v11);
    Buffer = DestinationString.Buffer;
    if ( !DestinationString.Buffer )
      goto LABEL_28;
    sub_140208AD8(&DestinationString, p_Length);
    if ( (DestinationString.Length & 1) == 0
      && (DestinationString.MaximumLength & 1) == 0
      && DestinationString.Length <= DestinationString.MaximumLength
      && DestinationString.MaximumLength != 0xFFFF
      && (DestinationString.Buffer || !DestinationString.Length && !DestinationString.MaximumLength) )
    {
      v14 = (unsigned __int64)DestinationString.Length >> 1;
      v15 = &word_140865B20;
      v16 = 0x7FFFLL;
      v17 = 0;
      v18 = ((unsigned __int64)DestinationString.MaximumLength >> 1) - v14;
      if ( (unsigned __int64)DestinationString.MaximumLength >> 1 != v14 )
      {
        v19 = (char *)DestinationString.Buffer + 2 * v14 - (_QWORD)&word_140865B20;
        do
        {
          if ( !v16 )
            break;
          if ( !*v15 )
            break;
          *(const WCHAR *)((char *)v15 + (_QWORD)v19) = *v15;
          --v16;
          ++v15;
          ++v17;
        }
        while ( v16 + v18 - 0x7FFF );
      }
      DestinationString.Length = 2 * (v17 + v14);
    }
    sub_140208C24(&DestinationString, a2);
    p_DestinationString = &DestinationString;
    goto LABEL_26;
  }
LABEL_27:
  Buffer = DestinationString.Buffer;
LABEL_28:
  if ( p_Length )
    sub_140346D64(p_Length, 0x624E4D43u);
LABEL_3:
  if ( Buffer )
    SeFreePrivileges((PPRIVILEGE_SET)Buffer);
}
