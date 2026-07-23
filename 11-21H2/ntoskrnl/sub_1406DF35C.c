/*
 * XREFs of sub_1406DF35C @ 0x1406DF35C
 * Callers:
 *     sub_1407702BC @ 0x1407702BC (sub_1407702BC.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14067B470 @ 0x14067B470 (sub_14067B470.c)
 *     sub_1406CB238 @ 0x1406CB238 (sub_1406CB238.c)
 *     sub_1406DF440 @ 0x1406DF440 (sub_1406DF440.c)
 */

__int64 __fastcall sub_1406DF35C(PCWSTR SourceString)
{
  __int64 v1; // rdx
  int v2; // eax
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // r8
  HANDLE v6; // rdi
  UNICODE_STRING v8; // [rsp+30h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp+8h] BYREF

  Handle = 0LL;
  v8 = 0LL;
  if ( !SourceString )
    return (unsigned int)-1073741811;
  RtlInitUnicodeString(&v8, SourceString);
  v2 = sub_1406DF440(&v8, v1, &Handle);
  if ( v2 == -1073741275 )
  {
    v3 = 0;
  }
  else if ( v2 >= 0 || (v3 = sub_14067B470(&v8, 0x10000u, &Handle, 0LL, 0), v3 >= 0) )
  {
    if ( *(_QWORD *)&qword_140D00AC0 && (v4 = *(_QWORD *)(*(_QWORD *)&qword_140D00AC0 + 224LL)) != 0 )
      v5 = *(_QWORD *)(v4 + 8);
    else
      v5 = 0LL;
    v6 = Handle;
    v3 = sub_1406CB238((__int64)Handle, (__int64)L"StartOverride", v5, 0);
    if ( v3 == -1073741772 )
      v3 = 0;
    goto LABEL_10;
  }
  v6 = Handle;
LABEL_10:
  if ( v6 )
    ZwClose(v6);
  return (unsigned int)v3;
}
