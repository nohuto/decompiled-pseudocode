/*
 * XREFs of AslPathToSystemPath @ 0x18005346C
 * Callers:
 *     SdbpGetManifestedMergeStubAlloc @ 0x180052070 (SdbpGetManifestedMergeStubAlloc.c)
 * Callees:
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 *     AslStringDuplicate @ 0x180099128 (AslStringDuplicate.c)
 *     AslPathToSystemPathBuf @ 0x18009DEE8 (AslPathToSystemPathBuf.c)
 */

__int64 __fastcall AslPathToSystemPath(_QWORD *a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  const char *v4; // r9
  int v5; // r8d
  int v7; // [rsp+20h] [rbp-238h]
  unsigned __int16 v8[264]; // [rsp+30h] [rbp-228h] BYREF

  *a1 = 0LL;
  v8[0] = 0;
  v2 = AslPathToSystemPathBuf(v8, 0x104uLL);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v2 = AslStringDuplicate(a1, v8);
    v3 = v2;
    if ( v2 >= 0 )
      return 0;
    v4 = "Failed to allocate path string [%x]";
    v5 = 1547;
  }
  else
  {
    v4 = "AslPathToSystemPathBuf failed [%x]";
    v5 = 1541;
  }
  v7 = v2;
  AslLogCallPrintf(1, (unsigned int)"AslPathToSystemPath", v5, (_DWORD)v4, v7);
  return v3;
}
