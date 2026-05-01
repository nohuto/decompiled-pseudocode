/*
 * XREFs of AslPathCombine @ 0x1800A4074
 * Callers:
 *     SdbpGetPathAppPatch @ 0x1800978F0 (SdbpGetPathAppPatch.c)
 *     SdbpGetPathAppPatchPreRS3 @ 0x1800979F0 (SdbpGetPathAppPatchPreRS3.c)
 *     SdbpGetPathAppraiser @ 0x180097B80 (SdbpGetPathAppraiser.c)
 *     SdbpGetPathCustomSdb @ 0x180097CD0 (SdbpGetPathCustomSdb.c)
 *     SdbpGetPathCustomSdbPreRS3 @ 0x180097DD0 (SdbpGetPathCustomSdbPreRS3.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x1800A3334 (AslEnvGetSysNativeDirPathForGuestBuf.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x1800A346C (AslEnvGetSystem32DirPathBuf.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x180094FC4 (RtlStringCchCopyW.c)
 *     RtlStringCchCatW @ 0x1800971BC (RtlStringCchCatW.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 *     RtlStringCchLengthW @ 0x18009EFB8 (RtlStringCchLengthW.c)
 */

__int64 __fastcall AslPathCombine(_WORD *a1, _WORD *a2, _WORD *a3, __int64 a4)
{
  int v9; // ebx
  unsigned int v10; // r11d
  __int64 v11; // r15
  unsigned int v12; // r11d
  unsigned int v13; // r11d
  unsigned int v14; // eax
  _QWORD v15[7]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v16; // [rsp+88h] [rbp+20h] BYREF

  v15[0] = 0LL;
  v16 = 0LL;
  if ( !a4 )
    return 3221225507LL;
  v9 = RtlStringCchLengthW(a1, 0x7FFFFFFFLL, v15);
  if ( v9 < 0 )
    goto LABEL_23;
  v9 = RtlStringCchLengthW(a2, v10, &v16);
  if ( v9 < 0 )
    goto LABEL_23;
  if ( v15[0] )
  {
    if ( v16 )
    {
      v11 = (__int64)(a2 + 1);
      v12 = (a1[v15[0] - 1] == 92) + 1;
      if ( *a2 != 92 )
        v12 = a1[v15[0] - 1] == 92;
      if ( v12 <= 1 )
        v11 = (__int64)a2;
      v9 = RtlStringCchCopyW(a3, a4, (__int64)a1);
      if ( v9 >= 0 )
      {
        v14 = v13 - 1;
        if ( v13 <= 1 )
          v14 = v13;
        if ( v14 || (v9 = RtlStringCchCatW(a3, a4, (__int64)L"\\"), v9 >= 0) )
        {
          v9 = RtlStringCchCatW(a3, a4, v11);
          if ( v9 >= 0 )
            return 0;
        }
      }
LABEL_23:
      AslLogCallPrintf(1LL);
      return (unsigned int)v9;
    }
    a2 = a1;
LABEL_11:
    v9 = RtlStringCchCopyW(a3, a4, (__int64)a2);
    if ( v9 >= 0 )
      return (unsigned int)v9;
    goto LABEL_23;
  }
  if ( v16 )
    goto LABEL_11;
  *a3 = 0;
  return 0;
}
