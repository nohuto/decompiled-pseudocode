/*
 * XREFs of SdbpGetPathAppPatch @ 0x1800978F0
 * Callers:
 *     SdbpGetPathAppPatchPreRS3 @ 0x1800979F0 (SdbpGetPathAppPatchPreRS3.c)
 *     SdbpGetPathCustomSdb @ 0x180097CD0 (SdbpGetPathCustomSdb.c)
 *     SdbpGetPathCustomSdbPreRS3 @ 0x180097DD0 (SdbpGetPathCustomSdbPreRS3.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 *     AslPathCombine @ 0x1800A4074 (AslPathCombine.c)
 *     AslPathToSystemPathBuf @ 0x1800A41F0 (AslPathToSystemPathBuf.c)
 */

__int64 __fastcall SdbpGetPathAppPatch(_WORD *a1, unsigned __int64 a2, const unsigned __int16 *a3)
{
  const unsigned __int16 *v3; // r10
  int v7; // ebx
  const char *v8; // r9
  int v9; // r8d
  __int128 v10; // [rsp+30h] [rbp-258h] BYREF
  int v11; // [rsp+40h] [rbp-248h]
  _WORD v12[264]; // [rsp+50h] [rbp-238h] BYREF

  v3 = a3;
  v11 = *(_DWORD *)L"h";
  v10 = *(_OWORD *)L"\\AppPatch";
  if ( a2 < 0xA )
    return 3221225507LL;
  *a1 = 0;
  v12[0] = 0;
  if ( !a3 )
    v3 = &word_1800B7A9C;
  v7 = AslPathCombine(&v10, v3, v12, 260LL);
  if ( v7 < 0 )
  {
    v8 = "AslPathCombine failed [%x]";
    v9 = 939;
LABEL_9:
    AslLogCallPrintf(1, (unsigned int)"SdbpGetPathAppPatch", v9, (_DWORD)v8);
    return (unsigned int)v7;
  }
  v7 = AslPathToSystemPathBuf(a1, a2, v12);
  if ( v7 < 0 )
  {
    v8 = "AslPathToSystemPathBuf failed [%x]";
    v9 = 945;
    goto LABEL_9;
  }
  return (unsigned int)v7;
}
