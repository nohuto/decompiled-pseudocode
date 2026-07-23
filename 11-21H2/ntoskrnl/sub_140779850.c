/*
 * XREFs of sub_140779850 @ 0x140779850
 * Callers:
 *     sub_1406DD014 @ 0x1406DD014 (sub_1406DD014.c)
 *     sub_1407762E4 @ 0x1407762E4 (sub_1407762E4.c)
 *     sub_1408449C8 @ 0x1408449C8 (sub_1408449C8.c)
 *     sub_140B0ED44 @ 0x140B0ED44 (sub_140B0ED44.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     RtlEnumerateGenericTableLikeADirectory @ 0x1402DEB90 (RtlEnumerateGenericTableLikeADirectory.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140779800 @ 0x140779800 (sub_140779800.c)
 *     sub_14077B33C @ 0x14077B33C (sub_14077B33C.c)
 *     sub_14077B394 @ 0x14077B394 (sub_14077B394.c)
 */

__int64 __fastcall sub_140779850(unsigned int a1, __int64 a2, __int64 a3)
{
  int v5; // esi
  __int64 v6; // rax
  __int64 v7; // rdi
  const wchar_t *v8; // rax
  struct _KTHREAD *CurrentThread; // rax
  PVOID v10; // rax
  void *v11; // rbx
  struct _KTHREAD *v12; // rax
  PVOID v13; // rax
  ULONG DeleteCount; // [rsp+44h] [rbp-75h] BYREF
  PVOID P; // [rsp+48h] [rbp-71h] BYREF
  PVOID RestartKey[2]; // [rsp+50h] [rbp-69h] BYREF
  _QWORD v18[14]; // [rsp+60h] [rbp-59h] BYREF

  v5 = 0;
  memset(v18, 0, sizeof(v18));
  RestartKey[0] = 0LL;
  DeleteCount = 0;
  P = v18;
  v6 = sub_14077B33C(a1);
  LODWORD(v18[3]) = 0;
  v7 = v6;
  HIDWORD(v18[3]) = a1;
  v8 = L"\\\\?\\";
  if ( a1 != 3 )
    v8 = &word_140867F00;
  v18[2] = v8;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceSharedLite((PERESOURCE)v7, 1u);
  v10 = RtlEnumerateGenericTableLikeADirectory((PRTL_AVL_TABLE)(v7 + 104), 0LL, 0LL, 0, RestartKey, &DeleteCount, &P);
  if ( v10 )
  {
    v11 = *(void **)v10;
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v10 + 8LL));
  }
  else
  {
    v11 = 0LL;
  }
  ExReleaseResourceLite((PERESOURCE)v7);
  KeLeaveCriticalRegion();
  while ( v11 )
  {
    if ( sub_140779800((ULONG_PTR)v11) )
    {
      v5 = sub_14042A5E0(v11, a3);
      if ( v5 < 0 )
      {
        sub_14077B394(v11);
        return (unsigned int)v5;
      }
    }
    P = v11;
    v12 = KeGetCurrentThread();
    --*((_WORD *)v12 + 242);
    ExAcquireResourceSharedLite((PERESOURCE)v7, 1u);
    v13 = RtlEnumerateGenericTableLikeADirectory((PRTL_AVL_TABLE)(v7 + 104), 0LL, 0LL, 1u, RestartKey, &DeleteCount, &P);
    if ( v13 )
    {
      v11 = *(void **)v13;
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v13 + 8LL));
    }
    else
    {
      v11 = 0LL;
    }
    ExReleaseResourceLite((PERESOURCE)v7);
    KeLeaveCriticalRegion();
    sub_14077B394(P);
  }
  return (unsigned int)v5;
}
