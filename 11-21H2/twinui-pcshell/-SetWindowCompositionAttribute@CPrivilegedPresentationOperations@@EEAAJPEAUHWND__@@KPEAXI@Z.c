/*
 * XREFs of ?SetWindowCompositionAttribute@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@KPEAXI@Z @ 0x1803BF270
 * Callers:
 *     ?SetHolographicComposition@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@H@Z @ 0x1803BF180 (-SetHolographicComposition@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@H@Z.c)
 * Callees:
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x1800FB45C (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CPrivilegedPresentationOperations::SetWindowCompositionAttribute(
        CPrivilegedPresentationOperations *this,
        HWND a2,
        int a3,
        void *a4,
        unsigned int a5)
{
  RTL_SRWLOCK *v5; // rbx
  signed __int32 Ptr_high; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  const char *v12; // r9
  unsigned int LastError; // ebx
  int v15; // [rsp+20h] [rbp-28h] BYREF
  void *v16; // [rsp+28h] [rbp-20h]
  unsigned int v17; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  RTL_SRWLOCK *v19; // [rsp+50h] [rbp+8h] BYREF

  v5 = (RTL_SRWLOCK *)*((_QWORD *)this + 6);
  v19 = v5;
  if ( v5 )
  {
    do
      Ptr_high = HIDWORD(v5[4].Ptr);
    while ( Ptr_high != 0x7FFFFFFF
         && Ptr_high != _InterlockedCompareExchange((volatile signed __int32 *)&v5[4].Ptr + 1, Ptr_high + 1, Ptr_high) );
    v5 = v19;
  }
  AcquireSRWLockExclusive(v5 + 6);
  EnableIAMAccess(v5[5].Ptr, 1LL);
  v17 = a5;
  v15 = a3;
  v16 = a4;
  if ( (unsigned int)SetWindowCompositionAttribute(a2, &v15, v10, v11) )
    LastError = 0;
  else
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0xE9,
                  (int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                  v12);
  IamAccess::SyncIamAccess::~SyncIamAccess(&v19);
  return LastError;
}
