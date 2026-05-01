/*
 * XREFs of ?SetZOrderBandToMatch@PrivilegedWindowOwnershipOperations@@AEAAJPEAUHWND__@@0@Z @ 0x1803BF548
 * Callers:
 *     ?SetWindowOwner@PrivilegedWindowOwnershipOperations@@EEAAJPEAUHWND__@@0@Z @ 0x1803BF350 (-SetWindowOwner@PrivilegedWindowOwnershipOperations@@EEAAJPEAUHWND__@@0@Z.c)
 * Callees:
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x1800FB45C (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall PrivilegedWindowOwnershipOperations::SetZOrderBandToMatch(
        PrivilegedWindowOwnershipOperations *this,
        HWND a2,
        HWND a3)
{
  const char *v6; // r9
  __int64 v7; // rdx
  RTL_SRWLOCK *v9; // rbx
  signed __int32 Ptr_high; // eax
  const char *v11; // r9
  unsigned int LastError; // ebx
  int v13; // [rsp+20h] [rbp-18h] BYREF
  RTL_SRWLOCK *v14[2]; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v16; // [rsp+58h] [rbp+20h] BYREF

  if ( !(unsigned int)GetWindowBand(a2, &v13) )
  {
    v7 = 440LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v7,
             (int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
             v6);
  }
  if ( !(unsigned int)GetWindowBand(a3, &v16) )
  {
    v7 = 443LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v7,
             (int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
             v6);
  }
  if ( v13 == v16 )
    return 0LL;
  v9 = (RTL_SRWLOCK *)*((_QWORD *)this + 6);
  v14[0] = v9;
  if ( v9 )
  {
    do
      Ptr_high = HIDWORD(v9[4].Ptr);
    while ( Ptr_high != 0x7FFFFFFF
         && Ptr_high != _InterlockedCompareExchange((volatile signed __int32 *)&v9[4].Ptr + 1, Ptr_high + 1, Ptr_high) );
    v9 = v14[0];
  }
  AcquireSRWLockExclusive(v9 + 6);
  EnableIAMAccess(v9[5].Ptr, 1LL);
  if ( (unsigned int)SetWindowBand(a2, 0LL, v16) )
  {
    IamAccess::SyncIamAccess::~SyncIamAccess(v14);
    return 0LL;
  }
  LastError = wil::details::in1diag3::Return_GetLastError(
                retaddr,
                (void *)0x1C0,
                (int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                v11);
  IamAccess::SyncIamAccess::~SyncIamAccess(v14);
  return LastError;
}
