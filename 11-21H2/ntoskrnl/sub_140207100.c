/*
 * XREFs of sub_140207100 @ 0x140207100
 * Callers:
 *     <none>
 * Callees:
 *     ExDeleteResourceLite @ 0x14028A7C0 (ExDeleteResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1403494F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwDeleteWnfStateName @ 0x14041D320 (ZwDeleteWnfStateName.c)
 *     sub_1406789B0 @ 0x1406789B0 (sub_1406789B0.c)
 *     sub_140678A28 @ 0x140678A28 (sub_140678A28.c)
 *     sub_140678A8C @ 0x140678A8C (sub_140678A8C.c)
 *     sub_140678AEC @ 0x140678AEC (sub_140678AEC.c)
 *     sub_140678FCC @ 0x140678FCC (sub_140678FCC.c)
 *     sub_140681AD4 @ 0x140681AD4 (sub_140681AD4.c)
 *     sub_140682038 @ 0x140682038 (sub_140682038.c)
 *     sub_1406820CC @ 0x1406820CC (sub_1406820CC.c)
 *     sub_14068565C @ 0x14068565C (sub_14068565C.c)
 *     sub_1406D4CBC @ 0x1406D4CBC (sub_1406D4CBC.c)
 *     sub_1406F83A0 @ 0x1406F83A0 (sub_1406F83A0.c)
 *     sub_1406FFE90 @ 0x1406FFE90 (sub_1406FFE90.c)
 *     sub_1406FFED4 @ 0x1406FFED4 (sub_1406FFED4.c)
 *     sub_140724DC8 @ 0x140724DC8 (sub_140724DC8.c)
 *     IoFreeMiniCompletionPacket @ 0x14074F6E0 (IoFreeMiniCompletionPacket.c)
 *     sub_1407A08FC @ 0x1407A08FC (sub_1407A08FC.c)
 *     sub_1407A1AC0 @ 0x1407A1AC0 (sub_1407A1AC0.c)
 *     sub_1407A2B78 @ 0x1407A2B78 (sub_1407A2B78.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     sub_1407F8C6C @ 0x1407F8C6C (sub_1407F8C6C.c)
 *     sub_1409B03B4 @ 0x1409B03B4 (sub_1409B03B4.c)
 *     sub_1409B062C @ 0x1409B062C (sub_1409B062C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

LONG_PTR __fastcall sub_140207100(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  void *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  void *v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  struct _KTHREAD *v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rax
  LONG_PTR result; // rax
  void *v14; // rcx
  __int64 v15; // rax
  _QWORD *v16; // rcx
  void *v17; // rcx
  void *v18; // rcx
  __int64 v19; // [rsp+38h] [rbp-29h] BYREF
  __int128 v20; // [rsp+40h] [rbp-21h] BYREF
  __int64 v21; // [rsp+50h] [rbp-11h]
  _OWORD v22[2]; // [rsp+58h] [rbp-9h] BYREF
  __int64 v23; // [rsp+78h] [rbp+17h]
  _OWORD v24[2]; // [rsp+80h] [rbp+1Fh] BYREF
  int v25; // [rsp+A0h] [rbp+3Fh]

  v23 = 0LL;
  v21 = 0LL;
  memset(v22, 0, sizeof(v22));
  v25 = 0;
  v20 = 0LL;
  CurrentThread = KeGetCurrentThread();
  memset(v24, 0, sizeof(v24));
  v19 = 0LL;
  sub_1407A08FC(a1 + 1472);
  sub_140678A8C(a1);
  if ( *(_QWORD *)(a1 + 1200) || *(_QWORD *)(a1 + 1504) )
  {
    sub_140678FCC(a1, CurrentThread, &v19);
    sub_14068565C(a1, &v19);
    if ( *(_QWORD *)(a1 + 1200) )
      sub_140678AEC(a1);
    v15 = *(_QWORD *)(a1 + 1504);
    if ( v15 )
    {
      memset((char *)v22 + 8, 0, 24);
      v23 = 4LL;
      *(_QWORD *)&v22[0] = *(_QWORD *)(v15 + 56);
      sub_1409B03B4(v22);
      sub_1409B062C(a1);
    }
    if ( a1 != v19 )
      ExReleaseResourceLite((PERESOURCE)(a1 + 56));
    sub_1406FFE90(v19, CurrentThread);
  }
  sub_140678A28(a1);
  if ( *(_QWORD *)(a1 + 1544) )
  {
    sub_140678FCC(a1, CurrentThread, &v19);
    sub_14068565C(a1, &v19);
    if ( *(_QWORD *)(a1 + 1544) )
      sub_1406D4CBC((PVOID)a1);
    if ( a1 != v19 )
      ExReleaseResourceLite((PERESOURCE)(a1 + 56));
    sub_1406FFE90(v19, CurrentThread);
  }
  LODWORD(v19) = *(_DWORD *)(a1 + 576);
  if ( (unsigned int)v19 <= 0xFFFFFFFD )
  {
    *(_QWORD *)&v20 = a1;
    DWORD2(v20) = 2;
    v21 = 0LL;
    sub_1406FFED4(a1, CurrentThread);
    sub_1406F83A0(6LL, &v20, 1LL, &v19);
    sub_1406FFE90(a1, CurrentThread);
  }
  v3 = *(void **)(a1 + 552);
  *(_DWORD *)(a1 + 256) = 0;
  if ( v3 )
  {
    ObfDereferenceObjectWithTag(v3, 0x624A7350u);
    *(_QWORD *)(a1 + 552) = 0LL;
  }
  v4 = *(_QWORD *)(a1 + 528);
  if ( v4 )
  {
    SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(v4 + 8));
    ExFreePoolWithTag(*(PVOID *)(a1 + 528), 0x614A7350u);
    sub_140724DC8(*(PVOID *)(a1 + 536));
  }
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140D3B148, 0LL);
  v5 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(v5 + 8) != a1 + 24 )
    goto LABEL_44;
  v6 = *(_QWORD **)(a1 + 32);
  if ( *v6 != a1 + 24 )
    goto LABEL_44;
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  sub_140681AD4(CurrentThread);
  v7 = *(void **)(a1 + 1176);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0x624A7350u);
    v18 = *(void **)(a1 + 1184);
    *(_QWORD *)(a1 + 1176) = 0LL;
    sub_140724DC8(v18);
  }
  if ( *(_QWORD *)(a1 + 1192) )
    IoFreeMiniCompletionPacket();
  if ( (*(_DWORD *)(a1 + 1512) & 0x800) != 0 )
    ZwDeleteWnfStateName((PCWNF_STATE_NAME)(a1 + 1072));
  sub_1406789B0(a1, v24);
  sub_1406820CC(v24, 0LL, CurrentThread, 0LL);
  v8 = (_QWORD *)(a1 + 1232);
  v9 = *(_QWORD *)(a1 + 1232);
  if ( v9 != a1 + 1232 )
  {
    if ( *(_QWORD **)(v9 + 8) == v8 )
    {
      v16 = *(_QWORD **)(a1 + 1240);
      if ( (_QWORD *)*v16 == v8 )
      {
        *v16 = v9;
        *(_QWORD *)(v9 + 8) = v16;
        *(_QWORD *)(a1 + 1240) = a1 + 1232;
        *v8 = v8;
        ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)(a1 + 1264), 0x73507350u);
        *(_QWORD *)(a1 + 1264) = 0LL;
        goto LABEL_19;
      }
    }
LABEL_44:
    __fastfail(3u);
  }
LABEL_19:
  sub_140682038(v24, 0LL, CurrentThread);
  ExDeleteResourceLite((PERESOURCE)(a1 + 56));
  if ( *(_QWORD *)(a1 + 1296) )
  {
    v17 = *(void **)(a1 + 1304);
    if ( v17 )
    {
      ExFreePoolWithTag(v17, 0x624A7350u);
      *(_QWORD *)(a1 + 1304) = 0LL;
    }
  }
  if ( (*(_DWORD *)(a1 + 1512) & 0x40000000) != 0 )
    sub_1407F8C6C(a1);
  v10 = KeGetCurrentThread();
  --*((_WORD *)v10 + 242);
  v11 = *(_DWORD *)(a1 + 1428);
  if ( v11 )
  {
    v12 = sub_1407A1AC0(qword_140D3B128, v11);
    sub_1407A2B78(qword_140D3B128, *(unsigned int *)(a1 + 1428), v12);
  }
  result = sub_1402F9540(KeGetCurrentThread());
  v14 = *(void **)(a1 + 1752);
  if ( v14 )
    return ObfDereferenceObjectWithTag(v14, 0x624A7350u);
  return result;
}
