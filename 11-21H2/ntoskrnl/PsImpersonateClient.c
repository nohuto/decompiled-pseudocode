/*
 * XREFs of PsImpersonateClient @ 0x1407AF1B0
 * Callers:
 *     sub_140695570 @ 0x140695570 (sub_140695570.c)
 *     SeImpersonateClientEx @ 0x1406BFE80 (SeImpersonateClientEx.c)
 *     sub_1406F0C9C @ 0x1406F0C9C (sub_1406F0C9C.c)
 *     sub_14070AAD0 @ 0x14070AAD0 (sub_14070AAD0.c)
 *     sub_140713F8C @ 0x140713F8C (sub_140713F8C.c)
 *     PsAssignImpersonationToken @ 0x1407AF0C0 (PsAssignImpersonationToken.c)
 *     PsRevertThreadToSelf @ 0x1407AF180 (PsRevertThreadToSelf.c)
 *     sub_1407B0C70 @ 0x1407B0C70 (sub_1407B0C70.c)
 *     PsRevertToSelf @ 0x1407F6CB0 (PsRevertToSelf.c)
 * Callees:
 *     sub_140243610 @ 0x140243610 (sub_140243610.c)
 *     sub_14024FBA4 @ 0x14024FBA4 (sub_14024FBA4.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402F7118 @ 0x1402F7118 (sub_1402F7118.c)
 *     sub_1402F7280 @ 0x1402F7280 (sub_1402F7280.c)
 *     sub_1402F89B0 @ 0x1402F89B0 (sub_1402F89B0.c)
 *     sub_140347920 @ 0x140347920 (sub_140347920.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     sub_14072295C @ 0x14072295C (sub_14072295C.c)
 *     sub_1407AF4B0 @ 0x1407AF4B0 (sub_1407AF4B0.c)
 *     sub_1407AFBE0 @ 0x1407AFBE0 (sub_1407AFBE0.c)
 */

NTSTATUS __stdcall PsImpersonateClient(
        PETHREAD Thread,
        PACCESS_TOKEN Token,
        BOOLEAN CopyOnOpen,
        BOOLEAN EffectiveOnly,
        SECURITY_IMPERSONATION_LEVEL ImpersonationLevel)
{
  int v5; // ebp
  __int64 v6; // rbx
  unsigned __int64 v9; // rsi
  void *v11; // rsi
  void *v12; // rbp
  struct _KTHREAD *CurrentThread; // rbx
  struct _KTHREAD *v14; // rdx
  void *v15; // rax
  unsigned __int64 v16; // r15
  __int64 v17; // r8
  struct _KTHREAD *v18; // r15
  unsigned __int64 v19; // rbx
  int v21; // eax
  signed __int64 *v22; // rcx
  NTSTATUS v23; // esi
  _DWORD *v24; // [rsp+30h] [rbp-48h] BYREF
  __int64 v25; // [rsp+88h] [rbp+10h]

  LOBYTE(v5) = ImpersonationLevel;
  v6 = *((_QWORD *)Thread + 68);
  v9 = (unsigned __int64)Token;
  v24 = 0LL;
  v25 = 0LL;
  if ( !Token )
  {
    v11 = 0LL;
    v12 = 0LL;
    if ( (*((_DWORD *)Thread + 344) & 8) == 0 )
      return 0;
    CurrentThread = KeGetCurrentThread();
    sub_1402F7280((__int64)Thread, (__int64)CurrentThread);
    if ( (*((_DWORD *)Thread + 344) & 8) != 0 )
    {
      v12 = (void *)*((_QWORD *)Thread + 193);
      v11 = (void *)(*((_QWORD *)Thread + 159) & 0xFFFFFFFFFFFFFFF8uLL);
      *((_QWORD *)Thread + 193) = 0LL;
      _InterlockedAnd((volatile signed __int32 *)Thread + 344, 0xFFFFFFF7);
    }
    sub_1402F7118((__int64)Thread, (__int64)CurrentThread);
    v14 = CurrentThread;
LABEL_15:
    sub_1407AF4B0(Thread, v14);
    if ( v11 )
      ObfDereferenceObjectWithTag(v11, 0x746C6644u);
    if ( v12 )
      ObfDereferenceObjectWithTag(v12, 0x746C6644u);
    return 0;
  }
  v15 = (void *)sub_140347920(v6, 0x746C6644u);
  v16 = (unsigned __int64)v15;
  if ( !v15 )
    goto LABEL_9;
  if ( (int)sub_1407AFBE0(v15, (PACCESS_TOKEN)v9) >= 0 )
  {
    sub_1402F89B0((signed __int64 *)(v6 + 1208), v16, 0x746C6644u);
LABEL_9:
    ObfReferenceObject((PVOID)v9);
LABEL_10:
    v18 = KeGetCurrentThread();
    v19 = v9 & 0xFFFFFFFFFFFFFFF8uLL | v5 & 3 | (4LL * (EffectiveOnly & 1));
    sub_1402F7280((__int64)Thread, (__int64)v18);
    if ( (*((_DWORD *)Thread + 344) & 8) != 0 )
    {
      v12 = (void *)*((_QWORD *)Thread + 193);
      v11 = (void *)(*((_QWORD *)Thread + 159) & 0xFFFFFFFFFFFFFFF8uLL);
    }
    else
    {
      v11 = 0LL;
      v12 = 0LL;
      _InterlockedOr((volatile signed __int32 *)Thread + 344, 8u);
    }
    *((_QWORD *)Thread + 193) = v25;
    *((_QWORD *)Thread + 159) = v19;
    if ( CopyOnOpen )
      _InterlockedOr((volatile signed __int32 *)Thread + 344, 0x100u);
    else
      _InterlockedAnd((volatile signed __int32 *)Thread + 344, 0xFFFFFEFF);
    sub_1402F7118((__int64)Thread, (__int64)v18);
    v14 = v18;
    goto LABEL_15;
  }
  v5 = 1;
  if ( *(_DWORD *)(v9 + 192) == 2 && *(int *)(v9 + 196) < 1 )
    v5 = *(_DWORD *)(v9 + 196);
  v21 = sub_14072295C(v9, v5, v17, 0, 0LL, (PVOID *)&v24);
  v22 = (signed __int64 *)(v6 + 1208);
  v23 = v21;
  if ( v21 >= 0 )
  {
    v9 = (unsigned __int64)v24;
    sub_1402F89B0(v22, v16, 0x746C6644u);
    goto LABEL_10;
  }
  sub_1402F89B0(v22, v16, 0x746C6644u);
  return v23;
}
