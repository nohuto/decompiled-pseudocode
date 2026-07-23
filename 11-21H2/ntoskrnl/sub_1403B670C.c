/*
 * XREFs of sub_1403B670C @ 0x1403B670C
 * Callers:
 *     sub_1408089F0 @ 0x1408089F0 (sub_1408089F0.c)
 *     sub_14084BE78 @ 0x14084BE78 (sub_14084BE78.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1403D4F68 @ 0x1403D4F68 (sub_1403D4F68.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14075FC44 @ 0x14075FC44 (sub_14075FC44.c)
 */

__int64 sub_1403B670C()
{
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp+7h] BYREF
  UNICODE_STRING *v2; // [rsp+50h] [rbp+17h] BYREF
  __int64 v3; // [rsp+58h] [rbp+1Fh]
  __int64 (__fastcall *v4)(int, int, int, int, __int64, __int64); // [rsp+60h] [rbp+27h]
  __int64 (__fastcall *v5)(ULONG_PTR); // [rsp+68h] [rbp+2Fh]
  __int64 (__fastcall *v6)(int, int, int, int, __int64); // [rsp+70h] [rbp+37h]
  __int64 v7; // [rsp+78h] [rbp+3Fh]
  int v8; // [rsp+80h] [rbp+47h]
  int v9; // [rsp+84h] [rbp+4Bh]
  UNICODE_STRING *v10; // [rsp+88h] [rbp+4Fh]
  PVOID BaseOfImage; // [rsp+A0h] [rbp+67h] BYREF
  __int64 v12; // [rsp+A8h] [rbp+6Fh] BYREF

  v12 = 0LL;
  v3 = 0LL;
  v9 = 0;
  BaseOfImage = 0LL;
  DestinationString = 0LL;
  if ( qword_140C54DC0 )
    return 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\System32\\Drivers\\crashdmp.sys");
  result = sub_14075FC44((unsigned int)&DestinationString, 0, 0, 0, 34, (__int64)&v12, (__int64)&BaseOfImage);
  if ( (int)result >= 0 )
  {
    if ( !RtlImageNtHeader(BaseOfImage) )
      return 3221225473LL;
    v2 = &stru_140D3CF58;
    v10 = &stru_140C22250;
    v3 = sub_1403D4F68();
    if ( !v3 )
      return 3221225626LL;
    v4 = sub_14081CF60;
    v5 = MmUnloadSystemImage;
    v7 = qword_140C48588;
    v6 = sub_14054ABD0;
    v8 = byte_140D06888 ? ((dword_140D0688C & 2) != 0) + 1 : 0;
    dword_140C54DD0 = 1;
    dword_140C54DD4 = 12;
    result = sub_14042A5E0(&v2, &dword_140C54DD0);
    if ( (int)result >= 0 )
    {
      qword_140C54DC0 = v12;
      ::BaseOfImage = BaseOfImage;
      return 0LL;
    }
  }
  return result;
}
