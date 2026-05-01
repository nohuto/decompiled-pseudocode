/*
 * XREFs of SdbpGetPathAppPatch @ 0x1800925D0
 * Callers:
 *     SdbpGetPathAppPatchPreRS3 @ 0x1800926D0 (SdbpGetPathAppPatchPreRS3.c)
 *     SdbpGetPathCustomSdb @ 0x1800929B0 (SdbpGetPathCustomSdb.c)
 *     SdbpGetPathCustomSdbPreRS3 @ 0x180092AB0 (SdbpGetPathCustomSdbPreRS3.c)
 * Callees:
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
 *     AslPathCombine @ 0x18009D99C (AslPathCombine.c)
 *     AslPathToSystemPathBuf @ 0x18009DB78 (AslPathToSystemPathBuf.c)
 */

__int64 __fastcall SdbpGetPathAppPatch(unsigned __int16 *a1, unsigned __int64 a2, unsigned __int16 *a3)
{
  unsigned __int16 *v3; // r10
  int v7; // eax
  unsigned int v8; // ebx
  const char *v9; // r9
  int v10; // r8d
  unsigned __int16 v11[8]; // [rsp+30h] [rbp-258h] BYREF
  int v12; // [rsp+40h] [rbp-248h]
  unsigned __int16 v13[264]; // [rsp+50h] [rbp-238h] BYREF

  v3 = a3;
  v12 = *(_DWORD *)L"h";
  *(_OWORD *)v11 = *(_OWORD *)L"\\AppPatch";
  if ( a2 < 0xA )
    return 3221225507LL;
  *a1 = 0;
  v13[0] = 0;
  if ( !a3 )
    v3 = (unsigned __int16 *)&word_1800B66B4;
  v7 = AslPathCombine(v11, v3, v13);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = "AslPathCombine failed [%x]";
    v10 = 952;
LABEL_9:
    AslLogCallPrintf(1, (unsigned int)"SdbpGetPathAppPatch", v10, (_DWORD)v9, v7);
    return v8;
  }
  v7 = AslPathToSystemPathBuf(a1, a2);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = "AslPathToSystemPathBuf failed [%x]";
    v10 = 958;
    goto LABEL_9;
  }
  return v8;
}
