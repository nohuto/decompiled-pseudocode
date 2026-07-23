/*
 * XREFs of sub_1407D5884 @ 0x1407D5884
 * Callers:
 *     sub_1407D5A10 @ 0x1407D5A10 (sub_1407D5A10.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402D3C34 @ 0x1402D3C34 (sub_1402D3C34.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14035AB2C @ 0x14035AB2C (sub_14035AB2C.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_1407D55E4 @ 0x1407D55E4 (sub_1407D55E4.c)
 */

__int64 __fastcall sub_1407D5884(__int64 a1, void *a2, __int64 a3)
{
  volatile signed __int64 *v6; // rdi
  NTSTATUS v7; // eax
  _DWORD *v8; // rdx
  unsigned int v9; // ebp
  __int64 v10; // rax
  __int64 v11; // rax
  char *v12; // rax
  _QWORD *i; // r14
  void *v15; // rcx
  KSPIN_LOCK *v16; // rcx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  if ( !a2 )
    return 3221225485LL;
  v6 = (volatile signed __int64 *)(a1 + 352);
  ExAcquirePushLockExclusiveEx(a1 + 352, 0LL);
  if ( *(_QWORD *)(a1 + 32) )
  {
    if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6);
    sub_1402AFC00((ULONG_PTR)v6);
    return 3221225544LL;
  }
  else
  {
    if ( !*(_QWORD *)(a1 + 360) )
    {
      Object = 0LL;
      v7 = ObReferenceObjectByHandle(
             a2,
             2u,
             IoCompletionObjectType,
             *((_BYTE *)KeGetCurrentThread() + 562),
             &Object,
             0LL);
      v8 = Object;
      *(_QWORD *)(a1 + 32) = Object;
      v9 = v7;
      if ( v7 >= 0 )
      {
        v10 = *(_QWORD *)(a1 + 360);
        *(_QWORD *)(a1 + 40) = a3;
        if ( v10 )
        {
          v11 = *(_QWORD *)(v10 + 96) >> 3;
        }
        else
        {
          if ( (*(_BYTE *)v8 & 0x7F) == 0x15 )
            LODWORD(v11) = v8[166];
          else
            LODWORD(v11) = v8[11];
          if ( (unsigned int)v11 > 4 )
            LODWORD(v11) = 4;
        }
        v12 = sub_1407D55E4(v11, (__int64)v8, a3);
        *(_QWORD *)(a1 + 48) = v12;
        if ( v12 )
        {
          ExAcquirePushLockExclusiveEx(a1 + 136, 0LL);
          for ( i = *(_QWORD **)(a1 + 144); i != (_QWORD *)(a1 + 144); i = (_QWORD *)*i )
            sub_14035AB2C((_QWORD *)a1, 0, 0, 0);
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 136), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(a1 + 136);
          sub_1402AFC00(a1 + 136);
          v9 = 0;
LABEL_16:
          if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v6);
          sub_1402AFC00((ULONG_PTR)v6);
          return v9;
        }
        v9 = -1073741670;
      }
      v15 = *(void **)(a1 + 32);
      if ( v15 )
      {
        ObfDereferenceObject(v15);
        *(_QWORD *)(a1 + 32) = 0LL;
      }
      v16 = *(KSPIN_LOCK **)(a1 + 48);
      if ( v16 )
      {
        sub_1402D3C34(v16);
        *(_QWORD *)(a1 + 48) = 0LL;
      }
      goto LABEL_16;
    }
    if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6);
    sub_1402AFC00((ULONG_PTR)v6);
    return 3221225659LL;
  }
}
