/*
 * XREFs of sub_1405BDFF8 @ 0x1405BDFF8
 * Callers:
 *     sub_14058DDC0 @ 0x14058DDC0 (sub_14058DDC0.c)
 * Callees:
 *     sub_140216E18 @ 0x140216E18 (sub_140216E18.c)
 *     sub_1402172E4 @ 0x1402172E4 (sub_1402172E4.c)
 *     ExReleaseSpinLockExclusive @ 0x140229990 (ExReleaseSpinLockExclusive.c)
 *     sub_14023B3C8 @ 0x14023B3C8 (sub_14023B3C8.c)
 *     sub_14023FD0C @ 0x14023FD0C (sub_14023FD0C.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     ExFreeCacheAwareRundownProtection @ 0x1402D2AA0 (ExFreeCacheAwareRundownProtection.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_14036071C @ 0x14036071C (sub_14036071C.c)
 *     sub_140360A00 @ 0x140360A00 (sub_140360A00.c)
 *     sub_14038E608 @ 0x14038E608 (sub_14038E608.c)
 *     ZwWaitForSingleObject @ 0x14041B7E0 (ZwWaitForSingleObject.c)
 *     sub_14053E098 @ 0x14053E098 (sub_14053E098.c)
 *     sub_140583BB8 @ 0x140583BB8 (sub_140583BB8.c)
 *     sub_140599CA8 @ 0x140599CA8 (sub_140599CA8.c)
 *     sub_1405A54BC @ 0x1405A54BC (sub_1405A54BC.c)
 *     sub_1405B25B4 @ 0x1405B25B4 (sub_1405B25B4.c)
 *     sub_1405BAEEC @ 0x1405BAEEC (sub_1405BAEEC.c)
 *     sub_1405BDF64 @ 0x1405BDF64 (sub_1405BDF64.c)
 *     sub_1405BF028 @ 0x1405BF028 (sub_1405BF028.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     sub_14096F240 @ 0x14096F240 (sub_14096F240.c)
 *     sub_14097E6E8 @ 0x14097E6E8 (sub_14097E6E8.c)
 *     sub_140981A04 @ 0x140981A04 (sub_140981A04.c)
 *     sub_140981F58 @ 0x140981F58 (sub_140981F58.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1405BDFF8(__int64 a1)
{
  HANDLE *v2; // rbx
  __int64 v3; // rbp
  HANDLE v4; // rsi
  struct _KTHREAD *CurrentThread; // r13
  __int64 v6; // rbp
  KIRQL v7; // al
  unsigned __int64 *v8; // rcx
  KIRQL v9; // r12
  unsigned __int64 *i; // rbx
  unsigned __int64 **v11; // rax
  unsigned __int64 *v12; // rsi
  unsigned __int64 *v13; // rcx
  unsigned __int64 *v14; // rcx
  _QWORD *v15; // rdx
  bool v16; // r8
  _QWORD *v17; // rax
  void *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rbx
  void *v23; // rcx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v24; // rcx
  void *v25; // rcx
  void *v26; // rcx
  _QWORD *v27; // [rsp+50h] [rbp+8h] BYREF

  v27 = 0LL;
  sub_14053E098(*(_QWORD **)(a1 + 176), 1);
  KeSetEvent((PRKEVENT)(a1 + 104), 1, 0);
  if ( *(_BYTE *)(a1 + 16732) )
  {
    sub_1402172E4(a1 + 17024, 0LL);
    sub_140216E18(a1, *(_QWORD *)(a1 + 17136));
  }
  v2 = (HANDLE *)(a1 + 128);
  v3 = 6LL;
  do
  {
    v4 = *v2;
    if ( *v2 )
    {
      ZwWaitForSingleObject(*v2, 0, 0LL);
      ObCloseHandle(v4, 0);
    }
    ++v2;
    --v3;
  }
  while ( v3 );
  sub_1405BAEEC((_SLIST_HEADER *)a1);
  sub_1405A54BC((_SLIST_HEADER *)a1, 1);
  *(_QWORD *)(a1 + 17496) -= sub_14096F240(a1);
  sub_14023B3C8(a1, (__int64)sub_1405B0E10, 0LL, 0xFFFFFFFF);
  CurrentThread = KeGetCurrentThread();
  v6 = **(_QWORD **)(*(_QWORD *)(a1 + 176) + 56LL);
  sub_14038E608(a1, 8u, 0);
  sub_140360A00(a1, (__int64)CurrentThread);
  ExAcquirePushLockExclusiveEx(**(_QWORD **)(*(_QWORD *)(a1 + 176) + 56LL) + 192LL, 0LL);
  sub_140981A04(a1, v6);
  if ( (ULONG_PTR *)v6 == &StartContext )
  {
    sub_1405BDF64((unsigned __int64 *)(a1 + 24));
    goto LABEL_31;
  }
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 200));
  v8 = *(unsigned __int64 **)(a1 + 24);
  v9 = v7;
  i = 0LL;
  while ( v8 )
  {
    i = v8;
    v8 = (unsigned __int64 *)*v8;
  }
LABEL_29:
  while ( 2 )
  {
    if ( i )
    {
      v11 = (unsigned __int64 **)i[1];
      v12 = i;
      v13 = i;
      if ( v11 )
      {
        v14 = *v11;
        for ( i = (unsigned __int64 *)i[1]; v14; v14 = (unsigned __int64 *)*v14 )
          i = v14;
      }
      else
      {
        while ( 1 )
        {
          i = (unsigned __int64 *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (unsigned __int64 *)*i == v13 )
            break;
          v13 = i;
        }
      }
      RtlAvlRemoveNode((unsigned __int64 *)(a1 + 24), v12);
      if ( !(unsigned int)sub_1405BF028(v6, v12, 0LL) )
        continue;
      v15 = v27;
      v16 = 0;
      if ( !v27 )
        goto LABEL_28;
      while ( 1 )
      {
        if ( (v12[3] & 0x3FFFFFFFFFFFFFFFLL) >= (v15[3] & 0x3FFFFFFFFFFFFFFFuLL) )
        {
          v17 = (_QWORD *)v15[1];
          if ( !v17 )
          {
            v16 = 1;
LABEL_28:
            RtlAvlInsertNodeEx((unsigned __int64 *)&v27, (unsigned __int64)v15, v16, v12);
            goto LABEL_29;
          }
        }
        else
        {
          v17 = (_QWORD *)*v15;
          if ( !*v15 )
          {
            v16 = 0;
            goto LABEL_28;
          }
        }
        v15 = v17;
      }
    }
    break;
  }
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 200), v9);
  sub_140981F58(v6);
LABEL_31:
  sub_140583BB8(a1);
  sub_14036071C(a1, (__int64)CurrentThread);
  sub_1405BDF64((unsigned __int64 *)&v27);
  v18 = *(void **)(a1 + 16600);
  if ( v18 )
  {
    ExFreePoolWithTag(v18, 0);
    *(_QWORD *)(a1 + 16600) = 0LL;
  }
  v19 = *(_QWORD *)(a1 + 96);
  if ( v19 )
    sub_14023FD0C(v19, 0);
  v20 = *(_QWORD *)(a1 + 32);
  if ( v20 )
    sub_14023FD0C(v20, 0);
  sub_140599CA8(a1);
  sub_1405B25B4(a1);
  sub_14097E6E8(a1);
  v21 = 11LL;
  v22 = a1 + 248;
  do
  {
    v23 = *(void **)(v22 + 88);
    if ( v23 )
      ObCloseHandle(v23, 0);
    if ( *(_QWORD *)v22 != a1 + 208 )
      ObfDereferenceObject(*(PVOID *)v22);
    v22 += 8LL;
    --v21;
  }
  while ( v21 );
  v24 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 2368);
  if ( v24 )
    ExFreeCacheAwareRundownProtection(v24);
  v25 = *(void **)(a1 + 240);
  if ( v25 )
    ObCloseHandle(v25, 0);
  v26 = *(void **)(a1 + 232);
  if ( v26 )
    ObCloseHandle(v26, 0);
}
