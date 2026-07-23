/*
 * XREFs of LdrpMapDllRetry @ 0x1800569C0
 * Callers:
 *     LdrpProcessWork @ 0x180051120 (LdrpProcessWork.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x180025BF0 (NtdllpFreeStringRoutine.c)
 *     LdrpGetNtPathFromDosPath @ 0x18004F9CC (LdrpGetNtPathFromDosPath.c)
 *     LdrpMapDllNtFileName @ 0x18004FDE4 (LdrpMapDllNtFileName.c)
 *     LdrpFindExistingModule @ 0x180051548 (LdrpFindExistingModule.c)
 *     LdrpLoadContextReplaceModule @ 0x180053F88 (LdrpLoadContextReplaceModule.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpMapDllRetry(__int64 a1)
{
  __int64 v1; // rax
  int v3; // esi
  int ExistingModule; // ebx
  __int64 v6; // [rsp+30h] [rbp-138h] BYREF
  _UNICODE_STRING v7; // [rsp+40h] [rbp-128h] BYREF
  _WORD v8[128]; // [rsp+50h] [rbp-118h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  *(_DWORD *)&v7.Length = 0x1000000;
  v7.Buffer = v8;
  v3 = v1 + 72;
  v8[0] = 0;
  ExistingModule = LdrpFindExistingModule(
                     (unsigned __int16 *)(v1 + 88),
                     (_UNICODE_STRING *)(v1 + 72),
                     *(_DWORD *)(a1 + 32),
                     *(_DWORD *)(v1 + 264),
                     &v6);
  if ( v6 )
  {
    LdrpLoadContextReplaceModule(a1, v6);
  }
  else
  {
    ExistingModule = LdrpGetNtPathFromDosPath(v3, &v7);
    if ( ExistingModule >= 0 )
      ExistingModule = LdrpMapDllNtFileName(a1, &v7);
  }
  if ( v8 != v7.Buffer )
    NtdllpFreeStringRoutine(v7.Buffer);
  return (unsigned int)ExistingModule;
}
