/*
 * XREFs of NtDisplayString @ 0x1409F8CE0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140435B00 (memmove.c)
 *     BgkDisplayStringEx @ 0x14054F464 (BgkDisplayStringEx.c)
 *     SeSinglePrivilegeCheck @ 0x140737CF0 (SeSinglePrivilegeCheck.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl NtDisplayString(PUNICODE_STRING String)
{
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v4; // rax
  _WORD *v5; // rbx
  unsigned __int64 v6; // rcx
  _WORD *Pool2; // rax
  _WORD *v8; // rdi
  wchar_t *Buffer; // rax
  __int64 MaximumLength; // rcx
  _WORD *v11; // rax
  char v12; // bl
  int P; // [rsp+40h] [rbp+8h]

  if ( !String )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
    return -1073741727;
  if ( PreviousMode )
  {
    v4 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)String < 0x7FFFFFFF0000LL )
      v4 = (__int64)String;
    P = *(_DWORD *)v4;
    v5 = *(_WORD **)(v4 + 8);
    if ( !v5 || !HIWORD(*(_DWORD *)v4) )
      return 0;
    v6 = (unsigned __int64)v5 + HIWORD(P);
    if ( v6 > 0x7FFFFFFF0000LL || v6 < (unsigned __int64)v5 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( !*v5 )
      return 0;
    Pool2 = (_WORD *)ExAllocatePool2(64LL, HIWORD(P) + 2LL, 1735554131LL);
    v8 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, v5, HIWORD(P));
      v8[(unsigned __int64)HIWORD(P) >> 1] = 0;
      goto LABEL_24;
    }
    return -1073741801;
  }
  Buffer = String->Buffer;
  if ( !Buffer )
    return 0;
  MaximumLength = String->MaximumLength;
  if ( !(_WORD)MaximumLength || !*Buffer )
    return 0;
  v11 = (_WORD *)ExAllocatePool2(64LL, MaximumLength + 2, 1735554131LL);
  v8 = v11;
  if ( !v11 )
    return -1073741801;
  memmove(v11, String->Buffer, String->MaximumLength);
  v8[(unsigned __int64)String->MaximumLength >> 1] = 0;
LABEL_24:
  v12 = BgkDisplayStringEx(v8);
  ExFreePoolWithTag(v8, 0);
  if ( !v12 )
    return -1073741823;
  return 0;
}
