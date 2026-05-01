/*
 * XREFs of AslEnvGetSystem32DirPathBuf @ 0x1800A346C
 * Callers:
 *     SdbpGetPathSystem @ 0x180097F50 (SdbpGetPathSystem.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x1800A3334 (AslEnvGetSysNativeDirPathForGuestBuf.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 *     RtlStringCchCopyW @ 0x180094FC4 (RtlStringCchCopyW.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 *     AslPathCombine @ 0x1800A4074 (AslPathCombine.c)
 *     AslPathToSystemPathBuf @ 0x1800A41F0 (AslPathToSystemPathBuf.c)
 */

__int64 __fastcall AslEnvGetSystem32DirPathBuf(_WORD *a1, __int64 a2, _WORD *a3, __int16 a4, __int16 *a5)
{
  __int16 v9; // cx
  __int64 v10; // r8
  _WORD *i; // rax
  int v12; // ebx
  _BYTE v14[128]; // [rsp+30h] [rbp-B8h] BYREF

  memset_0(v14, 0, sizeof(v14));
  *a1 = 0;
  if ( a5 )
    v9 = *a5;
  else
    v9 = a4;
  v10 = 0LL;
  for ( i = &unk_1800DC4C2; *(i - 1) != a4 || *i != v9; i += 8 )
  {
    if ( (unsigned __int64)++v10 >= 8 )
      return (unsigned int)-1073741637;
  }
  v12 = AslPathToSystemPathBuf(v14, 64LL, (&off_1800DC4C8)[2 * v10]);
  if ( v12 < 0 )
    goto LABEL_11;
  if ( a3 && *a3 )
  {
    v12 = AslPathCombine(v14, a3, a1, a2);
    if ( v12 < 0 )
      goto LABEL_11;
    return 0;
  }
  v12 = RtlStringCchCopyW(a1, a2, (__int64)v14);
  if ( v12 >= 0 )
    return 0;
LABEL_11:
  AslLogCallPrintf(1LL);
  return (unsigned int)v12;
}
