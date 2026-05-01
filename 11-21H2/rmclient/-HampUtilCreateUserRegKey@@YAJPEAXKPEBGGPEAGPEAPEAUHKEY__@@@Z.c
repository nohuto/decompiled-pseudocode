/*
 * XREFs of ?HampUtilCreateUserRegKey@@YAJPEAXKPEBGGPEAGPEAPEAUHKEY__@@@Z @ 0x180007DF0
 * Callers:
 *     ?HampUtilCreateVolatileUserRegKey@@YAJPEAXKPEAPEAUHKEY__@@@Z @ 0x180007D18 (-HampUtilCreateVolatileUserRegKey@@YAJPEAXKPEAPEAUHKEY__@@@Z.c)
 * Callees:
 *     ?HampSystemCreateKey@@YAJPEAUHKEY__@@PEBGKKPEAPEAU1@@Z @ 0x180007EA8 (-HampSystemCreateKey@@YAJPEAUHKEY__@@PEBGKKPEAPEAU1@@Z.c)
 *     ?RtlStringCbCatNW@@YAJPEAG_KPEBG1@Z @ 0x180007EF8 (-RtlStringCbCatNW@@YAJPEAG_KPEBG1@Z.c)
 */

__int64 __fastcall HampUtilCreateUserRegKey(
        PSID Sid,
        __int64 a2,
        const unsigned __int16 *a3,
        __int64 a4,
        unsigned __int16 *a5,
        HKEY *a6)
{
  unsigned __int16 *v6; // rdi
  unsigned __int64 v7; // rdx
  NTSTATUS v8; // ebx
  const unsigned __int16 *v9; // r8
  unsigned __int64 v10; // r9
  unsigned int v11; // r9d
  HKEY v12; // rcx
  struct _UNICODE_STRING v14; // [rsp+30h] [rbp-18h] BYREF
  HKEY v15; // [rsp+60h] [rbp+18h] BYREF

  v6 = a5;
  v15 = 0LL;
  *(_QWORD *)&v14.Length = 33292288LL;
  v14.Buffer = a5;
  v8 = RtlConvertSidToUnicodeString(&v14, Sid, 0);
  if ( v8 < 0
    || (v8 = RtlStringCbCatNW(v6, v7, v9, v10), v8 < 0)
    || (v8 = HampSystemCreateKey(HKEY_USERS, v6, 0, v11, &v15), v8 < 0) )
  {
    v12 = v15;
  }
  else
  {
    *a6 = v15;
    v12 = 0LL;
    v15 = 0LL;
    v8 = 0;
  }
  if ( v12 )
    RegCloseKey(v12);
  return (unsigned int)v8;
}
