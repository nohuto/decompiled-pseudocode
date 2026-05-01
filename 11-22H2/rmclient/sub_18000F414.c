/*
 * XREFs of sub_18000F414 @ 0x18000F414
 * Callers:
 *     sub_18000BE40 @ 0x18000BE40 (sub_18000BE40.c)
 *     sub_18000BE70 @ 0x18000BE70 (sub_18000BE70.c)
 *     sub_18000DCE0 @ 0x18000DCE0 (sub_18000DCE0.c)
 * Callees:
 *     sub_18000CE34 @ 0x18000CE34 (sub_18000CE34.c)
 *     sub_18000CE58 @ 0x18000CE58 (sub_18000CE58.c)
 *     sub_18000CE7C @ 0x18000CE7C (sub_18000CE7C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall sub_18000F414(LPCRITICAL_SECTION lpCriticalSection, PSRWLOCK SRWLock)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  void (__fastcall *v6)(__int64); // rbp
  __int64 v7; // r15
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rdx
  WORD *v9; // rax
  unsigned __int64 v10; // rcx
  __int128 v11; // xmm0
  RTL_SRWLOCK *v12; // [rsp+60h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+68h] [rbp+10h] BYREF

  AcquireSRWLockShared(SRWLock);
  v4 = (*(_QWORD *)&lpCriticalSection[1].LockCount - (unsigned __int64)lpCriticalSection[1].DebugInfo) >> 4;
  v12 = SRWLock;
  sub_18000CE7C(&v12);
  v5 = 0LL;
  if ( v4 )
  {
    v13 = lpCriticalSection;
    v12 = SRWLock;
    do
    {
      v6 = 0LL;
      v7 = 0LL;
      EnterCriticalSection(lpCriticalSection);
      AcquireSRWLockExclusive(SRWLock);
      if ( v5 < v4 )
      {
        DebugInfo = lpCriticalSection[1].DebugInfo;
        v9 = &DebugInfo->Type + 8 * v5;
        while ( 1 )
        {
          v10 = v5 + 1;
          if ( *(_QWORD *)v9 )
            break;
          v9 += 8;
          ++v5;
          if ( v10 >= v4 )
            goto LABEL_9;
        }
        v11 = *((_OWORD *)&DebugInfo->Type + v5++);
        v7 = *((_QWORD *)&v11 + 1);
        v6 = (void (__fastcall *)(__int64))v11;
      }
LABEL_9:
      sub_18000CE58(&v12);
      if ( v6 )
        v6(v7);
      sub_18000CE34(&v13);
    }
    while ( v5 < v4 );
  }
}
