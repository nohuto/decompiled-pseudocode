/*
 * XREFs of AslEnvGetSystem32DirPathBuf @ 0x1800A02BC
 * Callers:
 *     SdbpGetPathSystem @ 0x180092C30 (SdbpGetPathSystem.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x1800A0184 (AslEnvGetSysNativeDirPathForGuestBuf.c)
 * Callees:
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800534BA (memset_0.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800748BC (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
 *     AslPathCombine @ 0x18009D99C (AslPathCombine.c)
 *     AslPathToSystemPathBuf @ 0x18009DB78 (AslPathToSystemPathBuf.c)
 */

__int64 __fastcall AslEnvGetSystem32DirPathBuf(
        unsigned __int16 *a1,
        __int64 a2,
        unsigned __int16 *a3,
        __int16 a4,
        __int16 *a5)
{
  __int16 v9; // cx
  __int64 v10; // r8
  _WORD *i; // rax
  unsigned int v12; // ebx
  int v14; // eax
  const char *v15; // r9
  int v16; // r8d
  unsigned __int16 v17[64]; // [rsp+30h] [rbp-B8h] BYREF

  memset_0(v17, 0, sizeof(v17));
  *a1 = 0;
  if ( a5 )
    v9 = *a5;
  else
    v9 = a4;
  v10 = 0LL;
  for ( i = &unk_1800DB472; *(i - 1) != a4 || *i != v9; i += 8 )
  {
    if ( (unsigned __int64)++v10 >= 8 )
      return (unsigned int)-1073741637;
  }
  v14 = AslPathToSystemPathBuf(v17, 64LL, (__int64)(&off_1800DB478)[2 * v10]);
  v12 = v14;
  if ( v14 >= 0 )
  {
    if ( a3 && *a3 )
    {
      v14 = AslPathCombine(v17, a3, a1, a2);
      v12 = v14;
      if ( v14 < 0 )
      {
        v15 = "AslPathCombine failed [%x]";
        v16 = 1471;
        goto LABEL_12;
      }
    }
    else
    {
      v14 = RtlStringCchCopyW(a1, a2, v17);
      v12 = v14;
      if ( v14 < 0 )
      {
        v15 = "RtlStringCchCopyW failed [%x]";
        v16 = 1479;
        goto LABEL_12;
      }
    }
    return 0;
  }
  v15 = "AslPathToSystemPathBuf failed [%x]";
  v16 = 1461;
LABEL_12:
  AslLogCallPrintf(1LL, (unsigned int)"AslEnvGetSystem32DirPathBuf", v16, (_DWORD)v15, v14);
  return v12;
}
