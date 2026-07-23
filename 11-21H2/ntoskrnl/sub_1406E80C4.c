/*
 * XREFs of sub_1406E80C4 @ 0x1406E80C4
 * Callers:
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_140758DB8 @ 0x140758DB8 (sub_140758DB8.c)
 *     sub_140797594 @ 0x140797594 (sub_140797594.c)
 *     sub_1407981E8 @ 0x1407981E8 (sub_1407981E8.c)
 */

NTSTATUS __fastcall sub_1406E80C4(__int64 a1, void **a2)
{
  void *v3; // rcx
  NTSTATUS result; // eax
  NTSTATUS v5; // esi
  _QWORD *v6; // rbx
  struct _KTHREAD *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rbp
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  v3 = *a2;
  Object = 0LL;
  result = ObReferenceObjectByHandle(v3, 0x800u, qword_140D06AE8, 1, &Object, 0LL);
  v5 = result;
  if ( result >= 0 )
  {
    v6 = Object;
    if ( *(_QWORD *)(*((_QWORD *)Object + 4) + 400LL) )
    {
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      ExAcquirePushLockExclusiveEx(*(_QWORD *)(v6[4] + 400LL) + 408LL, 0LL);
      *(_QWORD *)(*(_QWORD *)(v6[4] + 400LL) + 416LL) = KeGetCurrentThread();
    }
    v7 = KeGetCurrentThread();
    --*((_WORD *)v7 + 242);
    ExAcquirePushLockExclusiveEx(v6[4] + 408LL, 0LL);
    *(_QWORD *)(v6[4] + 416LL) = KeGetCurrentThread();
    if ( (*((_BYTE *)Object + 98) & 0x20) != 0 )
    {
      v5 = 0;
    }
    else
    {
      _InterlockedOr16((volatile signed __int16 *)Object + 49, 0x20u);
      v8 = 0LL;
      v9 = 8LL;
      do
      {
        v10 = v6[4];
        if ( *(_DWORD *)(v8 + v10 + 128) )
        {
          v15 = sub_140797594(a1, *(unsigned __int16 *)(v8 + v10 + 134), 0LL);
          v17 = v15;
          if ( v15 )
          {
            LOBYTE(v16) = 1;
            sub_140758DB8(v15, v16, Object);
            sub_1407981E8(v17, 0LL);
          }
        }
        v11 = v6[4];
        v12 = *(_QWORD *)(v11 + 400);
        if ( v12 )
        {
          if ( *(_DWORD *)(v8 + v12 + 128) )
          {
            v18 = sub_140797594(a1, *(unsigned __int16 *)(v8 + v11 + 134), 0LL);
            v20 = v18;
            if ( v18 )
            {
              LOBYTE(v19) = 1;
              sub_140758DB8(v18, v19, Object);
              sub_1407981E8(v20, 0LL);
            }
          }
        }
        v8 += 32LL;
        --v9;
      }
      while ( v9 );
    }
    *(_QWORD *)(v6[4] + 416LL) = 0LL;
    ExReleasePushLockEx(v6[4] + 408LL, 0LL);
    sub_1402F9540((__int64)KeGetCurrentThread());
    v13 = *(_QWORD *)(v6[4] + 400LL);
    if ( v13 )
    {
      *(_QWORD *)(v13 + 416) = 0LL;
      ExReleasePushLockEx(*(_QWORD *)(v6[4] + 400LL) + 408LL, 0LL);
      sub_1402F9540((__int64)KeGetCurrentThread());
    }
    ObfDereferenceObject(Object);
    return v5;
  }
  return result;
}
