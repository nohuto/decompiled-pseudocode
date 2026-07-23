/*
 * XREFs of RtlpComputeDllPathWithOptions @ 0x1800827C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpComputePath @ 0x180033140 (RtlpComputePath.c)
 *     RtlAcquireSRWLockShared @ 0x18003A9D0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003AB90 (RtlReleaseSRWLockShared.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 */

int *__fastcall RtlpComputeDllPathWithOptions(__int16 a1, wchar_t *a2)
{
  int v4; // eax
  __int64 v5; // r10
  __int64 v6; // rax
  char v7; // r9
  int *v8; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  bool v12; // zf
  _DWORD v13[10]; // [rsp+20h] [rbp-38h] BYREF

  RtlAcquireSRWLockShared(&LdrpDllDirectoryLock);
  v4 = v13[0];
  if ( (a1 & 0x100) != 0 )
    v4 = 5;
  v13[0] = v4;
  LODWORD(v5) = (a1 & 0x100) != 0;
  if ( (a1 & 0x200) != 0 )
  {
    LODWORD(v5) = v5 + 1;
    v13[(a1 & 0x100) != 0] = 1;
  }
  if ( (a1 & 0x400) != 0 )
  {
    v11 = (unsigned int)v5;
    v5 = (unsigned int)(v5 + 1);
    v12 = LdrpDllDirectory.Length == 0;
    v13[v11] = 6;
    if ( !v12 )
    {
      v13[v5] = 0;
      LODWORD(v5) = v5 + 1;
    }
  }
  if ( (a1 & 0x4800) != 0 )
  {
    v6 = (unsigned int)v5;
    LODWORD(v5) = v5 + 1;
    v13[v6] = 7;
  }
  if ( (NtCurrentPeb()->ProcessParameters->Flags & 0x20000000) == 0 || (v7 = 1, (a1 & 0x800) == 0) )
    v7 = 0;
  if ( (_WORD)LdrpAppPackagesPath )
  {
    v10 = (unsigned int)v5;
    LODWORD(v5) = v5 + 1;
    v13[v10] = 8;
  }
  v8 = RtlpComputePath(v13, v5, a2, v7);
  RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
  if ( v8 )
    *((_BYTE *)v8 + 116) = 1;
  return v8;
}
