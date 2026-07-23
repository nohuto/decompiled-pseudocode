/*
 * XREFs of sub_140B4FCB0 @ 0x140B4FCB0
 * Callers:
 *     sub_140B105C4 @ 0x140B105C4 (sub_140B105C4.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14076FE20 @ 0x14076FE20 (sub_14076FE20.c)
 *     sub_140778D60 @ 0x140778D60 (sub_140778D60.c)
 *     sub_14077CD90 @ 0x14077CD90 (sub_14077CD90.c)
 *     RtlGUIDFromString @ 0x1407814E0 (RtlGUIDFromString.c)
 *     sub_140A236A4 @ 0x140A236A4 (sub_140A236A4.c)
 *     sub_140A23FCC @ 0x140A23FCC (sub_140A23FCC.c)
 */

__int64 __fastcall sub_140B4FCB0(__int64 a1, const WCHAR *a2)
{
  __int64 v4; // rax
  int v5; // ebx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  unsigned int v11; // [rsp+40h] [rbp-49h] BYREF
  int v12; // [rsp+44h] [rbp-45h] BYREF
  int v13; // [rsp+48h] [rbp-41h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-39h] BYREF
  GUID Guid; // [rsp+60h] [rbp-29h] BYREF
  WCHAR SourceString[40]; // [rsp+70h] [rbp-19h] BYREF

  v13 = 0;
  v12 = 0;
  Guid = 0LL;
  DestinationString = 0LL;
  DbgPrintEx(0x20u, 0, "Resetting device '%ws'\n", a2);
  if ( byte_140D018FC )
    __debugbreak();
  v11 = 78;
  if ( (int)sub_14077CD90(a1, (__int64)a2, 0LL, 9, (__int64)&v12, (__int64)SourceString, (__int64)&v11, 0) < 0
    || v12 != 1
    || v11 < 2
    || RtlInitUnicodeStringEx(&DestinationString, SourceString) < 0
    || RtlGUIDFromString(&DestinationString, &Guid) < 0 )
  {
    Guid = 0LL;
  }
  if ( sub_140778D60(a2) )
    goto LABEL_14;
  v4 = *(_QWORD *)&Guid.Data1 - 0x11CEE3254D36E968LL;
  if ( *(_QWORD *)&Guid.Data1 == 0x11CEE3254D36E968LL )
    v4 = *(_QWORD *)Guid.Data4 - 0x1803E12B0008C1BFLL;
  if ( !v4 )
  {
LABEL_14:
    v6 = sub_140A23FCC(a1, (__int64)a2, 17, 0);
    v5 = 0;
    if ( v6 < 0 )
      v5 = v6;
    v7 = sub_140A23FCC(a1, (__int64)a2, 18, 0);
    if ( v5 >= 0 && v7 < 0 )
      v5 = v7;
    v11 = 4;
    if ( (int)sub_14077CD90(a1, (__int64)a2, 0LL, 11, (__int64)&v12, (__int64)&v13, (__int64)&v11, 0) >= 0
      && v12 == 4
      && v11 == 4 )
    {
      v8 = v13;
    }
    else
    {
      v8 = 0;
    }
    if ( (v8 & 0x20) == 0 )
    {
      v13 = v8 | 0x20;
      v9 = sub_14076FE20(a1, (__int64)a2, 0LL, 0xBu, 4u, (__int64)&v13, 4u, 0);
      if ( v5 >= 0 && v9 < 0 )
        return (unsigned int)v9;
    }
  }
  else
  {
    return (unsigned int)sub_140A236A4(a1, (__int64)a2, 0);
  }
  return (unsigned int)v5;
}
