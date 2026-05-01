/*
 * XREFs of ?ShellSetWindowPos@PrivilegedWindowingOperations@@EEAAJPEAUHWND__@@0PEAUtagRECT@@KKW4__MIDL___MIDL_itf_privilegedoperations_0000_0010_0001@@@Z @ 0x1803BF680
 * Callers:
 *     <none>
 * Callees:
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x1800FB45C (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall PrivilegedWindowingOperations::ShellSetWindowPos(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        int a7)
{
  RTL_SRWLOCK *v7; // rbx
  unsigned int LastError; // edi
  signed __int32 Ptr_high; // eax
  const char *v13; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  RTL_SRWLOCK *v16; // [rsp+50h] [rbp+8h] BYREF

  v7 = *(RTL_SRWLOCK **)(a1 + 48);
  LastError = 0;
  v16 = v7;
  if ( v7 )
  {
    do
      Ptr_high = HIDWORD(v7[4].Ptr);
    while ( Ptr_high != 0x7FFFFFFF
         && Ptr_high != _InterlockedCompareExchange((volatile signed __int32 *)&v7[4].Ptr + 1, Ptr_high + 1, Ptr_high) );
    v7 = v16;
  }
  AcquireSRWLockExclusive(v7 + 6);
  EnableIAMAccess(v7[5].Ptr, 1LL);
  if ( !(unsigned int)ShellSetWindowPos(a2, a3, a4, a5, a6, a7) )
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x209,
                  (int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                  v13);
  IamAccess::SyncIamAccess::~SyncIamAccess(&v16);
  return LastError;
}
