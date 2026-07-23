/*
 * XREFs of sub_1409F18BC @ 0x1409F18BC
 * Callers:
 *     sub_1409EFAE0 @ 0x1409EFAE0 (sub_1409EFAE0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     RtlDuplicateUnicodeString @ 0x1406A9D20 (RtlDuplicateUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 */

__int64 __fastcall sub_1409F18BC(__int64 a1, __int64 a2, const UNICODE_STRING *a3)
{
  __int64 v4; // rcx
  NTSTATUS v6; // edi
  wchar_t *Buffer; // rcx
  UNICODE_STRING StringOut; // [rsp+30h] [rbp-20h] BYREF
  __int128 v10; // [rsp+40h] [rbp-10h]

  v4 = *(_QWORD *)(a2 + 48);
  v10 = 0LL;
  StringOut = 0LL;
  if ( v4 && qword_140D00A28 && (int)sub_14042A5E0(v4, 512LL) >= 0 )
  {
    v6 = 0;
    *(_QWORD *)(a1 + 112) = *((_QWORD *)&v10 + 1);
    *(_WORD *)(a1 + 120) = (unsigned __int16)v10 >> 1;
    *(_QWORD *)(a1 + 104) = 1LL;
  }
  else if ( a3 && a3->Length )
  {
    v6 = RtlDuplicateUnicodeString(0, a3, &StringOut);
    if ( v6 >= 0 )
    {
      Buffer = StringOut.Buffer;
      v6 = 0;
      *(_WORD *)(a1 + 120) = StringOut.Length >> 1;
      *(_QWORD *)(a1 + 112) = Buffer;
      *(_QWORD *)(a1 + 104) = Buffer;
      StringOut = 0LL;
    }
  }
  else
  {
    v6 = -1073741275;
  }
  RtlFreeUnicodeString(&StringOut);
  return (unsigned int)v6;
}
