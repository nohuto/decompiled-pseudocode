/*
 * XREFs of AslpFileQueryVersionString @ 0x1800A25A8
 * Callers:
 *     AslpFileMakeStringVersionAttributes @ 0x1800A1F4C (AslpFileMakeStringVersionAttributes.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     RtlStringCchCopyW @ 0x180094FC4 (RtlStringCchCopyW.c)
 *     RtlStringCchPrintfW @ 0x180095038 (RtlStringCchPrintfW.c)
 *     RtlStringCchCatW @ 0x1800971BC (RtlStringCchCatW.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 *     AslpFileVerQueryBlock @ 0x1800A2924 (AslpFileVerQueryBlock.c)
 *     AslpFileVerStringBlockGetValue @ 0x1800A2B40 (AslpFileVerStringBlockGetValue.c)
 */

__int64 __fastcall AslpFileQueryVersionString(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        unsigned __int16 *a4,
        unsigned __int64 a5,
        __int64 a6)
{
  __int64 v10; // rdi
  int v11; // ebx
  __int64 v12; // r11
  int v13; // eax
  unsigned __int64 v14; // rdi
  int v15; // eax
  __int64 v17; // [rsp+20h] [rbp-E0h]
  __int64 v18; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B0h]
  wchar_t v23[128]; // [rsp+60h] [rbp-A0h] BYREF

  *a1 = 0LL;
  *a2 = 0LL;
  v22 = a6;
  v23[0] = 0;
  v21 = 0LL;
  v10 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  while ( 1 )
  {
    v11 = RtlStringCchCopyW(v23, 128LL, (__int64)(&off_1800B5E50)[v10]);
    if ( v11 < 0 )
      break;
    v11 = RtlStringCchCatW(v23, 128LL, v12);
    if ( v11 < 0 )
      break;
    v13 = AslpFileVerQueryBlock(a3, v23, &v19, &v18);
    v11 = v13;
    if ( v13 >= 0 )
    {
      if ( (int)AslpFileVerStringBlockGetValue(&v21, &v20, v19, v18) >= 0 )
      {
LABEL_19:
        *a2 = v20;
        *a1 = v21;
        return 0LL;
      }
LABEL_10:
      if ( !a4 )
        return 3221226021LL;
      v14 = 0LL;
      if ( !a5 )
        return 3221226021LL;
      while ( 1 )
      {
        LODWORD(v17) = a4[1];
        v11 = RtlStringCchPrintfW(v23, 128LL, L"\\StringFileInfo\\%04X%04X\\%s", *a4, v17, v22);
        if ( v11 < 0 )
          goto LABEL_20;
        v15 = AslpFileVerQueryBlock(a3, v23, &v19, &v18);
        v11 = v15;
        if ( v15 >= 0 )
        {
          if ( (int)AslpFileVerStringBlockGetValue(&v21, &v20, v19, v18) < 0 )
            return 3221226021LL;
          goto LABEL_19;
        }
        if ( v15 != -1073741275 )
          goto LABEL_20;
        ++v14;
        a4 += 2;
        if ( v14 >= a5 )
          return 3221226021LL;
      }
    }
    if ( v13 != -1073741275 )
      break;
    if ( (unsigned __int64)++v10 >= 4 )
      goto LABEL_10;
  }
LABEL_20:
  AslLogCallPrintf(1LL);
  return (unsigned int)v11;
}
