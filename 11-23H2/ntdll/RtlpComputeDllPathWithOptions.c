/*
 * XREFs of RtlpComputeDllPathWithOptions @ 0x18006A250
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026CF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026DB0 (RtlAcquireSRWLockShared.c)
 *     RtlpComputePath @ 0x18006A470 (RtlpComputePath.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpComputeDllPathWithOptions(
        __int16 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  int v6; // eax
  __int64 v7; // r10
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  bool v13; // zf
  _DWORD v14[10]; // [rsp+20h] [rbp-38h] BYREF

  RtlAcquireSRWLockShared(&LdrpDllDirectoryLock, a2, a3, a4);
  v6 = v14[0];
  if ( (a1 & 0x100) != 0 )
    v6 = 5;
  v14[0] = v6;
  LODWORD(v7) = (a1 & 0x100) != 0;
  if ( (a1 & 0x200) != 0 )
  {
    LODWORD(v7) = v7 + 1;
    v14[(a1 & 0x100) != 0] = 1;
  }
  if ( (a1 & 0x400) != 0 )
  {
    v12 = (unsigned int)v7;
    v7 = (unsigned int)(v7 + 1);
    v13 = (_WORD)LdrpDllDirectory == 0;
    v14[v12] = 6;
    if ( !v13 )
    {
      v14[v7] = 0;
      LODWORD(v7) = v7 + 1;
    }
  }
  if ( (a1 & 0x4800) != 0 )
  {
    v8 = (unsigned int)v7;
    LODWORD(v7) = v7 + 1;
    v14[v8] = 7;
  }
  if ( (_WORD)LdrpAppPackagesPath )
  {
    v11 = (unsigned int)v7;
    LODWORD(v7) = v7 + 1;
    v14[v11] = 8;
  }
  v9 = RtlpComputePath(v14, (unsigned int)v7, a2);
  RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
  if ( v9 )
    *(_BYTE *)(v9 + 116) = 1;
  return v9;
}
