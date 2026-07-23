/*
 * XREFs of sub_140788300 @ 0x140788300
 * Callers:
 *     sub_14077BCA0 @ 0x14077BCA0 (sub_14077BCA0.c)
 * Callees:
 *     sub_1402DF554 @ 0x1402DF554 (sub_1402DF554.c)
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1405636A4 @ 0x1405636A4 (sub_1405636A4.c)
 *     sub_140564468 @ 0x140564468 (sub_140564468.c)
 *     sub_14077C780 @ 0x14077C780 (sub_14077C780.c)
 *     sub_1407879A8 @ 0x1407879A8 (sub_1407879A8.c)
 *     sub_1407884B4 @ 0x1407884B4 (sub_1407884B4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140788300(__int64 a1, __int64 a2, _DWORD *a3, unsigned int a4, unsigned int a5, _DWORD *a6)
{
  void *v8; // rbx
  unsigned int v9; // r14d
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // edi
  __int64 v13; // r8
  int v14; // edi
  const WCHAR *v15; // r15
  NTSTATUS inited; // ecx
  signed int v17; // eax
  int v18; // eax
  unsigned int v20; // [rsp+50h] [rbp-59h] BYREF
  void *v21; // [rsp+58h] [rbp-51h] BYREF
  _DWORD *v22; // [rsp+60h] [rbp-49h]
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-41h] BYREF
  __int128 v24; // [rsp+78h] [rbp-31h] BYREF
  PCWSTR SourceString[2]; // [rsp+88h] [rbp-21h]
  __int64 v26; // [rsp+98h] [rbp-11h]

  v22 = a6;
  v26 = 0LL;
  *a6 = 0;
  v8 = 0LL;
  v9 = 0;
  v21 = 0LL;
  DestinationString = 0LL;
  v20 = 0;
  v24 = 0LL;
  *(_OWORD *)SourceString = 0LL;
  v12 = sub_1407884B4(a1, a2, a5, &v24);
  if ( v12 < 0 )
    goto LABEL_14;
  v14 = DWORD1(v24);
  v15 = SourceString[1];
  if ( (byte_140C0DD4B & 2) != 0 )
    sub_140564468(v11, v10, v13, (__int64)&v24 + 8, SourceString[1], BYTE6(v24) & 1);
  if ( !a3 || a4 < 0x14 || (v14 & 0xFFFE0000) != 0 || (_WORD)v14 )
  {
    inited = -1073741811;
    goto LABEL_11;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, v15);
  if ( inited < 0 )
    goto LABEL_11;
  v17 = sub_1407879A8(
          (int *)&v24 + 2,
          (unsigned __int64)&DestinationString & -(__int64)(DestinationString.Length != 0),
          (v14 & 0x10000) == 0,
          1,
          &v21,
          &v20);
  v9 = v20;
  inited = v17;
  v8 = v21;
  if ( a4 - 20 < v20 )
  {
    inited = -1073741789;
    goto LABEL_11;
  }
  if ( v17 < 0 )
  {
LABEL_11:
    v18 = sub_14077C780(inited, v9, 0, 0LL, 0, SHIDWORD(v26), a3, a4, v22);
    goto LABEL_12;
  }
  v18 = sub_14077C780(v17, v20, 0, v21, v20, SHIDWORD(v26), a3, a4, v22);
LABEL_12:
  v12 = v18;
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
LABEL_14:
  if ( SourceString[1] )
    sub_1402DF554(*((_BYTE *)KeGetCurrentThread() + 562), (void *)SourceString[1]);
  if ( (byte_140C0DD4B & 2) != 0 )
    sub_1405636A4(v11, (const EVENT_DESCRIPTOR *)qword_140014FD0, v13, v12);
  return (unsigned int)v12;
}
