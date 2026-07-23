/*
 * XREFs of NtDrawText @ 0x140606C70
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140435B00 (memmove.c)
 *     SeSinglePrivilegeCheck @ 0x140737CF0 (SeSinglePrivilegeCheck.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 *     BgkDrawText @ 0x140AF101C (BgkDrawText.c)
 */

NTSTATUS __cdecl NtDrawText(PUNICODE_STRING Text)
{
  NTSTATUS v2; // ebx
  void *v3; // rsi
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v6; // rax
  int v7; // ecx
  const void *v8; // r14
  unsigned __int64 v9; // rcx
  void *Pool2; // rax
  unsigned __int16 v11; // cx
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  int v13; // [rsp+58h] [rbp+10h]

  v12 = 0LL;
  v2 = 0;
  v3 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
    return -1073741727;
  if ( !Text )
    return -1073741811;
  if ( !PreviousMode )
    goto LABEL_17;
  v6 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)Text < 0x7FFFFFFF0000LL )
    v6 = (__int64)Text;
  v7 = *(_DWORD *)v6;
  v13 = *(_DWORD *)v6;
  LODWORD(v12) = *(_DWORD *)v6;
  v8 = *(const void **)(v6 + 8);
  *((_QWORD *)&v12 + 1) = v8;
  if ( !v8 || !HIWORD(v7) )
    goto LABEL_24;
  v9 = (unsigned __int64)v8 + HIWORD(v13);
  if ( v9 > 0x7FFFFFFF0000LL || v9 < (unsigned __int64)v8 )
    MEMORY[0x7FFFFFFF0000] = 0;
  Pool2 = (void *)ExAllocatePool2(64LL, HIWORD(v13), 1735554131LL);
  v3 = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, v8, HIWORD(v13));
    *((_QWORD *)&v12 + 1) = v3;
    Text = (PUNICODE_STRING)&v12;
LABEL_17:
    v2 = -1073741811;
    v11 = Text->MaximumLength >> 1;
    if ( v11 )
    {
      while ( Text->Buffer[v11 - 1] )
      {
        if ( !--v11 )
          goto LABEL_22;
      }
      v2 = 0;
    }
LABEL_22:
    if ( v2 >= 0 )
      v2 = BgkDrawText(Text->Buffer);
    goto LABEL_24;
  }
  v2 = -1073741801;
LABEL_24:
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return v2;
}
