/*
 * XREFs of sub_140A22A30 @ 0x140A22A30
 * Callers:
 *     sub_140827888 @ 0x140827888 (sub_140827888.c)
 *     sub_140A2296C @ 0x140A2296C (sub_140A2296C.c)
 *     sub_140A22DB0 @ 0x140A22DB0 (sub_140A22DB0.c)
 *     sub_140A22F0C @ 0x140A22F0C (sub_140A22F0C.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_140A2CF04 @ 0x140A2CF04 (sub_140A2CF04.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140A22A30(UNICODE_STRING *P)
{
  char *v2; // rcx
  wchar_t *Buffer; // rcx
  char *v4; // rcx
  wchar_t *v5; // rcx
  char *v6; // rcx
  wchar_t *v7; // rcx
  char *v8; // rcx
  char *v9; // rcx
  wchar_t *v10; // rcx
  char *v11; // rcx
  wchar_t *v12; // rcx

  RtlFreeUnicodeString(P + 2);
  v2 = *(char **)&P[4].Length;
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    ZwClose(v2);
  Buffer = P[4].Buffer;
  if ( (unsigned __int64)Buffer - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    ZwClose(Buffer);
  v4 = *(char **)&P[5].Length;
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    ZwClose(v4);
  v5 = P[5].Buffer;
  if ( (unsigned __int64)v5 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    ZwClose(v5);
  v6 = *(char **)&P[6].Length;
  if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    ZwClose(v6);
  v7 = P[6].Buffer;
  if ( (unsigned __int64)v7 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    ZwClose(v7);
  v8 = *(char **)&P[7].Length;
  if ( (unsigned __int64)(v8 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    ZwClose(v8);
  v9 = *(char **)&P[8].Length;
  if ( (unsigned __int64)(v9 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    ZwClose(v9);
  v10 = P[8].Buffer;
  if ( (unsigned __int64)v10 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    ZwClose(v10);
  v11 = *(char **)&P[9].Length;
  if ( (unsigned __int64)(v11 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    ZwClose(v11);
  v12 = P[3].Buffer;
  if ( v12 )
    sub_140A2CF04(v12);
  ExFreePoolWithTag(P, 0);
  return 0LL;
}
