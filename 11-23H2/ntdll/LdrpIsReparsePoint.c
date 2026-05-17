/*
 * XREFs of LdrpIsReparsePoint @ 0x1800086DC
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x180005938 (LdrpResSearchResourceMappedFile.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18001F218 (LdrpLoadResourceFromAlternativeModule.c)
 * Callees:
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x180008820 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     LdrpGetLoadAsEntry @ 0x1800089C4 (LdrpGetLoadAsEntry.c)
 *     LdrFindEntryForAddress @ 0x180008A90 (LdrFindEntryForAddress.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     ZwQueryAttributesFile @ 0x1800A1650 (ZwQueryAttributesFile.c)
 */

__int64 __fastcall LdrpIsReparsePoint(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v6; // [rsp+28h] [rbp-59h] BYREF
  __int128 v7; // [rsp+30h] [rbp-51h] BYREF
  __int128 v8; // [rsp+40h] [rbp-41h] BYREF
  __int128 v9; // [rsp+50h] [rbp-31h]
  __int128 v10; // [rsp+60h] [rbp-21h]
  int v11; // [rsp+70h] [rbp-11h] BYREF
  __int64 v12; // [rsp+78h] [rbp-9h]
  __int128 *v13; // [rsp+80h] [rbp-1h]
  int v14; // [rsp+88h] [rbp+7h]
  __int128 v15; // [rsp+90h] [rbp+Fh]
  _BYTE v16[32]; // [rsp+A0h] [rbp+1Fh] BYREF
  int v17; // [rsp+C0h] [rbp+3Fh]

  v6 = 0LL;
  v1 = -1073741823;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( (a1 & 3) != 0 )
  {
    if ( (int)LdrpGetLoadAsEntry(a1, &v8) < 0 )
      return v1;
    v2 = *((_QWORD *)&v8 + 1);
  }
  else
  {
    if ( (int)LdrFindEntryForAddress(a1, &v6) < 0 )
      return v1;
    v2 = *(_QWORD *)(v6 + 80);
  }
  if ( (unsigned __int8)RtlDosPathNameToRelativeNtPathName_U(v2, &v7, 0LL, &v8) )
  {
    v3 = *((_QWORD *)&v7 + 1);
    if ( (_WORD)v8 )
    {
      v4 = v9;
      v7 = v8;
    }
    else
    {
      v4 = 0LL;
    }
    v11 = 48;
    v14 = 64;
    v13 = &v7;
    v12 = v4 & -(__int64)(v3 != 0);
    v15 = 0LL;
    if ( (int)ZwQueryAttributesFile(&v11, v16) >= 0 && (v17 & 0x400) != 0 )
      v1 = 0;
    if ( v3 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v3);
  }
  return v1;
}
