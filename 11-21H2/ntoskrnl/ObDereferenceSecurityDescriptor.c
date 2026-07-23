/*
 * XREFs of ObDereferenceSecurityDescriptor @ 0x140725730
 * Callers:
 *     sub_1402D5CA8 @ 0x1402D5CA8 (sub_1402D5CA8.c)
 *     sub_14066FED4 @ 0x14066FED4 (sub_14066FED4.c)
 *     sub_1406BBAAC @ 0x1406BBAAC (sub_1406BBAAC.c)
 *     sub_1406D1830 @ 0x1406D1830 (sub_1406D1830.c)
 *     sub_1406D708C @ 0x1406D708C (sub_1406D708C.c)
 *     sub_1406DB04C @ 0x1406DB04C (sub_1406DB04C.c)
 *     ObReleaseObjectSecurity @ 0x1406E14B0 (ObReleaseObjectSecurity.c)
 *     sub_14071E8F0 @ 0x14071E8F0 (sub_14071E8F0.c)
 *     sub_1407228BC @ 0x1407228BC (sub_1407228BC.c)
 *     ObSetSecurityDescriptorInfo @ 0x1407255D0 (ObSetSecurityDescriptorInfo.c)
 *     sub_140731DA0 @ 0x140731DA0 (sub_140731DA0.c)
 *     sub_140791CAC @ 0x140791CAC (sub_140791CAC.c)
 *     sub_1407942E0 @ 0x1407942E0 (sub_1407942E0.c)
 *     sub_1407943B0 @ 0x1407943B0 (sub_1407943B0.c)
 *     sub_14080BF48 @ 0x14080BF48 (sub_14080BF48.c)
 *     sub_1409EB878 @ 0x1409EB878 (sub_1409EB878.c)
 * Callees:
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall ObDereferenceSecurityDescriptor(__int64 a1, unsigned int a2)
{
  volatile signed __int64 *v3; // rsi
  signed __int64 v4; // rax
  __int64 v5; // r15
  signed __int64 i; // rcx
  signed __int64 v7; // rtt
  struct _KTHREAD *CurrentThread; // rbp
  volatile signed __int64 *v9; // rdi
  volatile signed __int64 *v10; // r14
  __int64 v11; // rax
  volatile signed __int64 *j; // rcx

  v3 = (volatile signed __int64 *)(a1 - 32);
  _m_prefetchw((const void *)(a1 - 32 + 8));
  v4 = *(_QWORD *)(a1 - 32 + 8);
  v5 = a2;
  for ( i = v4 - a2; i > 0; i = v4 - a2 )
  {
    v7 = v4;
    v4 = _InterlockedCompareExchange64(v3 + 1, i, v4);
    if ( v7 == v4 )
      return;
  }
  if ( i )
    __fastfail(0xEu);
  CurrentThread = KeGetCurrentThread();
  v9 = (volatile signed __int64 *)((char *)&unk_140D33BC0 + 16 * (unsigned __int8)*((_DWORD *)v3 + 4));
  --*((_WORD *)CurrentThread + 242);
  v10 = v9 + 1;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v9, 0LL);
  v11 = _InterlockedExchangeAdd64(v3 + 1, -a2) - v5;
  if ( v11 > 0 )
  {
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v9);
    sub_1402AFC00((ULONG_PTR)v9);
    sub_1402AC800((__int64)CurrentThread);
  }
  else
  {
    if ( v11 )
      __fastfail(0xEu);
    for ( j = (volatile signed __int64 *)*v10; j != v3; j = (volatile signed __int64 *)*j )
      v10 = j;
    *v10 = *v3;
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v9);
    sub_1402AFC00((ULONG_PTR)v9);
    sub_1402AC800((__int64)CurrentThread);
    ExFreePoolWithTag((PVOID)v3, 0x6353624Fu);
  }
}
