/*
 * XREFs of AslpFileQueryVersionString @ 0x18009CC58
 * Callers:
 *     AslpFileMakeStringVersionAttributes @ 0x18009C5FC (AslpFileMakeStringVersionAttributes.c)
 * Callees:
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800748BC (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     RtlStringCchCatW @ 0x18008FB1C (RtlStringCchCatW.c)
 *     RtlStringCchPrintfW @ 0x18008FBA8 (RtlStringCchPrintfW.c)
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
 *     AslpFileVerQueryBlock @ 0x18009CFD4 (AslpFileVerQueryBlock.c)
 *     AslpFileVerStringBlockGetValue @ 0x18009D1E0 (AslpFileVerStringBlockGetValue.c)
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
  const char *v14; // r9
  int v15; // r8d
  unsigned __int64 v16; // rdi
  int v17; // eax
  __int64 v19; // [rsp+20h] [rbp-E0h]
  __int64 v20; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v21; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B0h]
  unsigned __int16 v25[128]; // [rsp+60h] [rbp-A0h] BYREF

  *a1 = 0LL;
  *a2 = 0LL;
  v24 = a6;
  v25[0] = 0;
  v23 = 0LL;
  v10 = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  while ( 1 )
  {
    v11 = RtlStringCchCopyW(v25, 128LL, off_1800B4688[v10]);
    if ( v11 < 0 )
      break;
    v11 = RtlStringCchCatW(v25, 128LL, v12);
    if ( v11 < 0 )
    {
      v14 = "RtlStringCchCatW failed [%x]";
      v15 = 2333;
      goto LABEL_23;
    }
    v13 = AslpFileVerQueryBlock(a3, v25, &v21, &v20);
    v11 = v13;
    if ( v13 >= 0 )
    {
      if ( (int)AslpFileVerStringBlockGetValue(&v23, &v22, v21, v20) < 0 )
      {
LABEL_10:
        if ( !a4 )
          return 3221226021LL;
        v16 = 0LL;
        if ( !a5 )
          return 3221226021LL;
        while ( 1 )
        {
          LODWORD(v19) = a4[1];
          v11 = RtlStringCchPrintfW(v25, 128LL, L"\\StringFileInfo\\%04X%04X\\%s", *a4, v19, v24);
          if ( v11 < 0 )
          {
            v14 = "RtlStringCchPrintfW failed [%x]";
            v15 = 2381;
            goto LABEL_23;
          }
          v17 = AslpFileVerQueryBlock(a3, v25, &v21, &v20);
          v11 = v17;
          if ( v17 >= 0 )
            break;
          if ( v17 != -1073741275 )
          {
            v14 = "AslpFileVerQueryBlock failed [%x]";
            v15 = 2411;
            goto LABEL_23;
          }
          ++v16;
          a4 += 2;
          if ( v16 >= a5 )
            return 3221226021LL;
        }
        if ( (int)AslpFileVerStringBlockGetValue(&v23, &v22, v21, v20) < 0 )
          return 3221226021LL;
      }
      *a2 = v22;
      *a1 = v23;
      return 0LL;
    }
    if ( v13 != -1073741275 )
    {
      v14 = "AslpFileVerQueryBlock failed [%x]";
      v15 = 2363;
      goto LABEL_23;
    }
    if ( (unsigned __int64)++v10 >= 4 )
      goto LABEL_10;
  }
  v14 = "RtlStringCchCopyW failed [%x]";
  v15 = 2327;
LABEL_23:
  LODWORD(v19) = v11;
  AslLogCallPrintf(1LL, (unsigned int)"AslpFileQueryVersionString", v15, (_DWORD)v14, v19);
  return (unsigned int)v11;
}
