/*
 * XREFs of IoGetDeviceDirectory @ 0x140943540
 * Callers:
 *     sub_14060F0B0 @ 0x14060F0B0 (sub_14060F0B0.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ExUuidCreate @ 0x140681B30 (ExUuidCreate.c)
 *     sub_1406DF520 @ 0x1406DF520 (sub_1406DF520.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_1407454A8 @ 0x1407454A8 (sub_1407454A8.c)
 *     sub_1407690BC @ 0x1407690BC (sub_1407690BC.c)
 *     sub_14077198C @ 0x14077198C (sub_14077198C.c)
 *     sub_14077D91C @ 0x14077D91C (sub_14077D91C.c)
 *     sub_1409439F8 @ 0x1409439F8 (sub_1409439F8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoGetDeviceDirectory(__int64 a1, int a2, int a3, __int64 a4, _QWORD *a5)
{
  void *v7; // rdi
  WCHAR *v8; // r14
  __int64 v11; // rsi
  int inited; // ebx
  int v13; // eax
  __int64 v14; // r15
  unsigned __int64 v15; // rdx
  unsigned int v16; // r8d
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // eax
  unsigned __int16 Length; // r8
  int v21; // edx
  __int64 v22; // rax
  wchar_t *Buffer; // rdi
  int v24; // eax
  __int64 v26; // [rsp+68h] [rbp-51h] BYREF
  void *v27; // [rsp+70h] [rbp-49h] BYREF
  UNICODE_STRING v28; // [rsp+78h] [rbp-41h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-31h] BYREF
  PCWSTR SourceString; // [rsp+98h] [rbp-21h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+A0h] [rbp-19h] BYREF
  UNICODE_STRING v32; // [rsp+B8h] [rbp-1h] BYREF
  UUID Uuid; // [rsp+C8h] [rbp+Fh] BYREF

  v7 = 0LL;
  v26 = 0LL;
  v8 = 0LL;
  v27 = 0LL;
  DestinationString = 0LL;
  SourceString = 0LL;
  UnicodeString = 0LL;
  Uuid = 0LL;
  v28 = 0LL;
  v32 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  RtlInitUnicodeString(&v28, 0LL);
  RtlInitUnicodeString(&v32, 0LL);
  if ( a1 )
  {
    if ( !a3 && !a4 )
    {
      if ( a5 )
      {
        v11 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
        if ( v11 )
        {
          if ( *(_WORD *)(v11 + 40) && *(_QWORD *)(v11 + 48) && !a2 )
          {
            inited = sub_1406DF520(
                       L"DriverState",
                       L"\\SystemRoot\\System32\\DriverState",
                       LocationTypeFileSystem,
                       &DestinationString);
            if ( inited < 0 )
              goto LABEL_40;
            v13 = sub_14077D91C(
                    0x6F697050u,
                    0x4Eu,
                    *(_QWORD *)(v11 + 48),
                    1,
                    0LL,
                    0LL,
                    (__int64)&qword_140038538,
                    (__int64)&v26 + 4,
                    (PVOID *)&SourceString,
                    (unsigned int *)&v26,
                    0);
            v8 = (WCHAR *)SourceString;
            v14 = -1LL;
            inited = v13;
            if ( v13 < 0 )
            {
              if ( v13 != -1073741275 )
                goto LABEL_40;
            }
            else if ( HIDWORD(v26) == 18 && (unsigned int)v26 >= 2 )
            {
              v15 = -1LL;
              do
                ++v15;
              while ( SourceString[v15] );
              v16 = 0;
              if ( !v15 )
              {
LABEL_20:
                inited = RtlInitUnicodeStringEx(&v32, SourceString);
                if ( inited < 0 )
                  goto LABEL_40;
                v19 = sub_1409439F8(&DestinationString, (__int64)&v27);
LABEL_36:
                inited = v19;
                if ( v19 >= 0 )
                {
                  v7 = 0LL;
                  *a5 = v27;
                  goto LABEL_40;
                }
                goto LABEL_38;
              }
              v17 = 0LL;
              while ( 1 )
              {
                v18 = SourceString[v17];
                if ( (unsigned int)v18 > 0x7F || (*((_BYTE *)qword_140015C50 + v18) & 1) == 0 )
                  break;
                v17 = ++v16;
                if ( v16 >= v15 )
                  goto LABEL_20;
              }
            }
            inited = sub_1407690BC(&v28, (PCUNICODE_STRING)(v11 + 40));
            if ( inited < 0 )
              goto LABEL_40;
            Length = v28.Length;
            v21 = 0;
            if ( (v28.Length & 0xFFFE) != 0 )
            {
              do
              {
                v22 = v28.Buffer[v21];
                if ( (unsigned int)v22 > 0x7F )
                  goto LABEL_39;
                if ( (*((_BYTE *)qword_140015C50 + v22) & 1) == 0 )
                {
                  v28.Buffer[v21] = (*((_BYTE *)qword_140015C50 + v22) & 1) + 35;
                  Length = v28.Length;
                }
              }
              while ( ++v21 < (unsigned int)(Length >> 1) );
            }
            Buffer = v28.Buffer;
            v24 = sub_1409439F8(&DestinationString, (__int64)&v27);
            inited = v24;
            if ( v24 == -1073741766 )
            {
              inited = ExUuidCreate(&Uuid);
              if ( inited < 0 )
                goto LABEL_38;
              inited = sub_1407454A8(&Uuid.Data1, (__int64)&UnicodeString, 1);
              if ( inited < 0 )
                goto LABEL_38;
              Buffer = UnicodeString.Buffer;
              v24 = sub_1409439F8(&DestinationString, (__int64)&v27);
              inited = v24;
            }
            if ( v24 >= 0 )
            {
              do
                ++v14;
              while ( Buffer[v14] );
              v19 = sub_14077198C(
                      *(__int64 *)&qword_140D00AC0,
                      *(_QWORD *)(v11 + 48),
                      1,
                      0LL,
                      0LL,
                      (__int64)&qword_140038538,
                      18,
                      (__int64)Buffer,
                      2 * (int)v14 + 2,
                      0);
              goto LABEL_36;
            }
LABEL_38:
            v7 = v27;
            goto LABEL_40;
          }
        }
      }
    }
  }
LABEL_39:
  inited = -1073741811;
LABEL_40:
  RtlFreeUnicodeString(&DestinationString);
  RtlFreeUnicodeString(&UnicodeString);
  RtlFreeUnicodeString(&v28);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x6F697050u);
  if ( v7 )
    ZwClose(v7);
  return (unsigned int)inited;
}
