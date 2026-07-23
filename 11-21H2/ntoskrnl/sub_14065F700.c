/*
 * XREFs of sub_14065F700 @ 0x14065F700
 * Callers:
 *     sub_14065F3BC @ 0x14065F3BC (sub_14065F3BC.c)
 *     sub_14095618C @ 0x14095618C (sub_14095618C.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ntoskrnl_19 @ 0x14041DE80 (ntoskrnl_19.c)
 *     sub_14078A470 @ 0x14078A470 (sub_14078A470.c)
 */

__int64 __fastcall sub_14065F700(PCWSTR SourceString, int a2, int a3)
{
  __int64 result; // rax
  int v7; // edi
  int v8; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-28h] BYREF
  __int128 v10; // [rsp+58h] [rbp-18h]
  __int64 v11; // [rsp+68h] [rbp-8h]
  int v12; // [rsp+A0h] [rbp+30h] BYREF
  int v13; // [rsp+A8h] [rbp+38h] BYREF

  v8 = 0;
  v12 = 0;
  v13 = 0;
  if ( (unsigned int)(a3 - 1) > 1 )
    return 3221225485LL;
  result = sub_14078A470(qword_140D00AC0, (_DWORD)SourceString, 0, (unsigned int)&v13, (__int64)&v12, (__int64)&v8);
  if ( (int)result >= 0 )
  {
    v7 = v12;
    if ( a2 && (v13 & 0x400) != 0 && v12 != a2 && a3 != 2 )
      return 3221225485LL;
    DestinationString = 0LL;
    v11 = 0LL;
    v10 = 0LL;
    RtlInitUnicodeString(&DestinationString, SourceString);
    DWORD1(v10) = 1024;
    if ( a2 )
    {
      LODWORD(v10) = 1;
      DWORD2(v10) = a2;
    }
    else
    {
      LODWORD(v10) = 2;
      DWORD2(v10) = v7;
    }
    return ntoskrnl_19(14LL, (__int64)&DestinationString);
  }
  return result;
}
