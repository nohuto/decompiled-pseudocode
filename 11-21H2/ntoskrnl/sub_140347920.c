/*
 * XREFs of sub_140347920 @ 0x140347920
 * Callers:
 *     sub_14023B484 @ 0x14023B484 (sub_14023B484.c)
 *     sub_1402EF324 @ 0x1402EF324 (sub_1402EF324.c)
 *     sub_1402F8F70 @ 0x1402F8F70 (sub_1402F8F70.c)
 *     sub_140668294 @ 0x140668294 (sub_140668294.c)
 *     sub_14066A21C @ 0x14066A21C (sub_14066A21C.c)
 *     sub_14066A57C @ 0x14066A57C (sub_14066A57C.c)
 *     sub_14066BFB8 @ 0x14066BFB8 (sub_14066BFB8.c)
 *     sub_14066F864 @ 0x14066F864 (sub_14066F864.c)
 *     sub_1406745EC @ 0x1406745EC (sub_1406745EC.c)
 *     sub_140695160 @ 0x140695160 (sub_140695160.c)
 *     sub_14069532C @ 0x14069532C (sub_14069532C.c)
 *     sub_1406953C8 @ 0x1406953C8 (sub_1406953C8.c)
 *     sub_14069B030 @ 0x14069B030 (sub_14069B030.c)
 *     sub_14069CAE8 @ 0x14069CAE8 (sub_14069CAE8.c)
 *     sub_1406C9928 @ 0x1406C9928 (sub_1406C9928.c)
 *     sub_1406DD598 @ 0x1406DD598 (sub_1406DD598.c)
 *     sub_1406DEAEC @ 0x1406DEAEC (sub_1406DEAEC.c)
 *     sub_1406E71BC @ 0x1406E71BC (sub_1406E71BC.c)
 *     sub_1406E9BE0 @ 0x1406E9BE0 (sub_1406E9BE0.c)
 *     sub_1406FD140 @ 0x1406FD140 (sub_1406FD140.c)
 *     sub_14070AFEC @ 0x14070AFEC (sub_14070AFEC.c)
 *     sub_14070B610 @ 0x14070B610 (sub_14070B610.c)
 *     sub_14070BA00 @ 0x14070BA00 (sub_14070BA00.c)
 *     sub_14070F0D8 @ 0x14070F0D8 (sub_14070F0D8.c)
 *     sub_140711F48 @ 0x140711F48 (sub_140711F48.c)
 *     sub_140712868 @ 0x140712868 (sub_140712868.c)
 *     NtOpenThreadTokenEx @ 0x140725A50 (NtOpenThreadTokenEx.c)
 *     SeCreateClientSecurity @ 0x1407271D0 (SeCreateClientSecurity.c)
 *     sub_140727350 @ 0x140727350 (sub_140727350.c)
 *     SeCreateClientSecurityEx @ 0x1407275D0 (SeCreateClientSecurityEx.c)
 *     NtOpenProcessTokenEx @ 0x1407279B0 (NtOpenProcessTokenEx.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 *     SeCaptureSubjectContextEx @ 0x14072A390 (SeCaptureSubjectContextEx.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     sub_14072ACC0 @ 0x14072ACC0 (sub_14072ACC0.c)
 *     sub_14078E3F0 @ 0x14078E3F0 (sub_14078E3F0.c)
 *     sub_1407A0088 @ 0x1407A0088 (sub_1407A0088.c)
 *     PsImpersonateClient @ 0x1407AF1B0 (PsImpersonateClient.c)
 *     PsReferencePrimaryToken @ 0x1407AFED0 (PsReferencePrimaryToken.c)
 *     sub_1407B3B60 @ 0x1407B3B60 (sub_1407B3B60.c)
 *     sub_1407B6CA0 @ 0x1407B6CA0 (sub_1407B6CA0.c)
 *     sub_1407CA1C0 @ 0x1407CA1C0 (sub_1407CA1C0.c)
 *     ObOpenObjectByNameEx @ 0x1407CAF90 (ObOpenObjectByNameEx.c)
 *     sub_1407DCA0C @ 0x1407DCA0C (sub_1407DCA0C.c)
 *     sub_1407F2DBC @ 0x1407F2DBC (sub_1407F2DBC.c)
 *     sub_1408315A4 @ 0x1408315A4 (sub_1408315A4.c)
 *     sub_140847BB4 @ 0x140847BB4 (sub_140847BB4.c)
 *     sub_140857B98 @ 0x140857B98 (sub_140857B98.c)
 *     sub_14097323C @ 0x14097323C (sub_14097323C.c)
 *     sub_14097A228 @ 0x14097A228 (sub_14097A228.c)
 *     sub_14097B500 @ 0x14097B500 (sub_14097B500.c)
 *     sub_1409C7C84 @ 0x1409C7C84 (sub_1409C7C84.c)
 *     sub_1409E4114 @ 0x1409E4114 (sub_1409E4114.c)
 *     sub_1409EB400 @ 0x1409EB400 (sub_1409EB400.c)
 *     sub_1409F4DA0 @ 0x1409F4DA0 (sub_1409F4DA0.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F339C @ 0x1402F339C (sub_1402F339C.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_1405C5EC8 @ 0x1405C5EC8 (sub_1405C5EC8.c)
 */

unsigned __int64 __fastcall sub_140347920(__int64 a1, ULONG a2)
{
  volatile signed __int64 *v3; // rdi
  signed __int64 v5; // r9
  signed __int64 v6; // rax
  signed __int64 v7; // rbx
  unsigned int v8; // r9d
  unsigned __int64 v9; // rbx
  struct _KTHREAD *CurrentThread; // r14
  volatile signed __int64 *v12; // rsi

  v3 = (volatile signed __int64 *)(a1 + 1208);
  _m_prefetchw((const void *)(a1 + 1208));
  v5 = *(_QWORD *)(a1 + 1208);
  if ( (v5 & 0xF) != 0 )
  {
    do
    {
      v6 = _InterlockedCompareExchange64(v3, v5 - 1, v5);
      if ( v5 == v6 )
        break;
      v5 = v6;
    }
    while ( (v6 & 0xF) != 0 );
  }
  v7 = v5;
  v8 = v5 & 0xF;
  v9 = v7 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v8 <= 1 )
  {
    if ( !v8 )
    {
LABEL_12:
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      v12 = (volatile signed __int64 *)(a1 + 1080);
      ExAcquirePushLockSharedEx((ULONG_PTR)v12, 0LL);
      v9 = *v3 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v9 )
        ObfReferenceObjectWithTag((PVOID)(*v3 & 0xFFFFFFFFFFFFFFF0uLL), a2);
      if ( _InterlockedCompareExchange64(v12, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v12);
      sub_1402AFC00((ULONG_PTR)v12);
      sub_1402AC800((__int64)CurrentThread);
      return v9;
    }
    sub_1402F339C((signed __int64 *)v3, v9);
  }
  if ( dword_140D05010 )
    sub_1405C5EC8(v9 - 48);
  if ( !v9 )
    goto LABEL_12;
  return v9;
}
