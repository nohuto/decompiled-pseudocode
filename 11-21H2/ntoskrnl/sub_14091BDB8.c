/*
 * XREFs of sub_14091BDB8 @ 0x14091BDB8
 * Callers:
 *     sub_140717EE4 @ 0x140717EE4 (sub_140717EE4.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_140742C78 @ 0x140742C78 (sub_140742C78.c)
 *     sub_1407454A8 @ 0x1407454A8 (sub_1407454A8.c)
 *     sub_14080B938 @ 0x14080B938 (sub_14080B938.c)
 */

__int64 __fastcall sub_14091BDB8(__int64 a1)
{
  __int64 v2; // rax
  UNICODE_STRING *v3; // r15
  int v4; // ebx
  unsigned int v5; // esi
  int v6; // eax
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-19h] BYREF
  UNICODE_STRING v9; // [rsp+50h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+60h] [rbp+7h] BYREF

  *(_QWORD *)&v9.Length = 0LL;
  v9.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  if ( (PVOID)a1 == RMKey )
  {
    v2 = qword_140C02770;
    v3 = (UNICODE_STRING *)&stru_1400020D8;
  }
  else
  {
    v4 = sub_140742C78(*(void **)(*(_QWORD *)(a1 + 80) + 1544LL), &v9);
    if ( v4 < 0 )
      goto LABEL_16;
    v2 = *(_QWORD *)(a1 + 80);
    v3 = &v9;
  }
  v4 = sub_1407454A8((unsigned int *)(*(_QWORD *)(v2 + 64) + 112LL), (__int64)&UnicodeString, 1);
  if ( v4 >= 0 )
  {
    v5 = *(_DWORD *)(a1 + 68);
    if ( v5 >= 0x100 )
    {
LABEL_10:
      if ( (unsigned int)dword_140C03868 > 5 && sub_1402A2000((__int64)&dword_140C03868, 1LL) )
        sub_14020A9C4((__int64)&dword_140C03868, (unsigned __int8 *)&dword_140029F94, 0LL, 0LL, 2u, &v10);
      v4 = -1073741670;
    }
    else
    {
      while ( 1 )
      {
        v6 = sub_14080B938(
               *(PLOG_FILE_OBJECT *)(a1 + 88),
               v3,
               &UnicodeString,
               &stru_1400020A8,
               &stru_1400020B8,
               v5,
               (PULONGLONG)(a1 + 72));
        v4 = v6;
        if ( v6 != -1073741771 && v6 != -1073741635 )
          break;
        if ( ++v5 >= 0x100 )
          goto LABEL_10;
      }
      if ( v6 >= 0 )
        ++*(_DWORD *)(a1 + 68);
    }
  }
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
LABEL_16:
  if ( v9.Buffer )
    RtlFreeUnicodeString(&v9);
  return (unsigned int)v4;
}
