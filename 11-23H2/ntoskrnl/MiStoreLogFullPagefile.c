/*
 * XREFs of MiStoreLogFullPagefile @ 0x14065C854
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x14046DEAA (MiStoreWriteModifiedPages.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E64 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x140368110 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

void MiStoreLogFullPagefile()
{
  ULONG v0; // edx
  __int64 v1; // r8
  __int64 v2; // r10
  int v3; // [rsp+20h] [rbp-58h]
  int v4; // [rsp+28h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+40h] [rbp-38h] BYREF

  if ( *(_QWORD *)&qword_140C698E8 && **(_DWORD **)&qword_140C698E8 > 5u )
  {
    if ( tlgKeywordOn(*(__int64 *)&qword_140C698E8, 2LL) )
      tlgWriteEx_EtwWriteEx(v2, (unsigned __int8 *)&byte_140039B6D, v1, v0 - 1, v3, v4, v0, &v5);
  }
}
