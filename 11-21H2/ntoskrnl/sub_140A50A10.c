/*
 * XREFs of sub_140A50A10 @ 0x140A50A10
 * Callers:
 *     sub_1403B1020 @ 0x1403B1020 (sub_1403B1020.c)
 * Callees:
 *     sub_140259568 @ 0x140259568 (sub_140259568.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseSemaphore @ 0x1402D3440 (KeReleaseSemaphore.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     sub_1403945DC @ 0x1403945DC (sub_1403945DC.c)
 *     sub_140394878 @ 0x140394878 (sub_140394878.c)
 *     sub_1403A4DCC @ 0x1403A4DCC (sub_1403A4DCC.c)
 *     sub_1403A4EC4 @ 0x1403A4EC4 (sub_1403A4EC4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405D31E8 @ 0x1405D31E8 (sub_1405D31E8.c)
 */

__int64 __fastcall sub_140A50A10(__int64 a1, IRP *a2, __int64 a3)
{
  const unsigned __int16 *v3; // rdi
  char v5; // bp
  __int64 *v6; // r14
  int v7; // ebx
  int v8; // ebp
  NTSTATUS v9; // eax
  PRKSEMAPHORE *v10; // rbx
  KIRQL v12; // al
  __int64 v13; // r8
  unsigned __int64 v14; // rbx
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r10
  __int64 v17; // r8
  int v18; // eax
  bool v19; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v22; // r8
  int v23; // eax
  IRP *v24; // [rsp+30h] [rbp-48h] BYREF
  NTSTATUS Status; // [rsp+38h] [rbp-40h]
  int v26; // [rsp+3Ch] [rbp-3Ch]
  _QWORD v27[2]; // [rsp+40h] [rbp-38h] BYREF

  v3 = 0LL;
  v5 = byte_140C1F588;
  v6 = *(__int64 **)(a3 + 216);
  v7 = *(_DWORD *)(*((_QWORD *)&a2->Tail.CompletionKey + 9 * a2->StackCount + 10) + 192LL);
  if ( (xmmword_140D06910 & 0x8000) != 0 )
  {
    Status = a2->IoStatus.Status;
    v26 = 0;
    v27[0] = &v24;
    v24 = a2;
    v27[1] = 16LL;
    sub_14035EDE4((__int64)v27, 1u, 0x80008000, 0x1227u, 0x401802u);
  }
  if ( !dword_140D014A8 && !v5 || v7 != 1 )
    goto LABEL_6;
  v12 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v6 - 18);
  v13 = *(v6 - 10);
  v14 = v12;
  if ( !v13
    || !*(_QWORD *)(v13 + 136)
    || (_m_prefetchw((const void *)(v13 + 32)), (_InterlockedOr((volatile signed __int32 *)(v13 + 32), 0) & 0x800) == 0) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v6 - 18);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v14 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v22 = *((_QWORD *)CurrentPrcb + 4375);
          v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
          v19 = (v23 & *(_DWORD *)(v22 + 20)) == 0;
          *(_DWORD *)(v22 + 20) &= v23;
          if ( v19 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v14);
LABEL_6:
    v8 = a2->IoStatus.Status;
    if ( ((DWORD1(xmmword_140C22740) >> 23) & 1) != 0 || v8 >= 0 )
    {
      v9 = 0;
      if ( ((DWORD1(xmmword_140C22740) >> 23) & 1) == 0 )
        v9 = a2->IoStatus.Status;
      v8 = v9;
    }
    else
    {
      v3 = (const unsigned __int16 *)sub_140259568((__int64)a2);
    }
    sub_1403A4EC4((__int64)a2);
    sub_1403A4DCC(a2);
    v10 = (PRKSEMAPHORE *)qword_140C22750;
    if ( (unsigned __int8)(*(_BYTE *)qword_140C22750 - 2) <= 1u && *((int *)qword_140C22750 + 1) > 1 )
    {
      sub_140394878(*(v6 - 16));
      ObfDereferenceObjectWithTag((PVOID)*(v6 - 16), 0x72496F50u);
    }
    sub_1403945DC((__int64)v10, v6, v8, v3);
    KeReleaseSemaphore(v10[5], 0, 1, 0);
    return 3221225494LL;
  }
  _InterlockedOr((volatile signed __int32 *)(v13 + 32), 0x400u);
  sub_1405D31E8((__int64)a2);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v6 - 18);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v15 = KeGetCurrentIrql();
      if ( v15 <= 0xFu && (unsigned __int8)v14 <= 0xFu && v15 >= 2u )
      {
        v16 = KeGetCurrentPrcb();
        v17 = *((_QWORD *)v16 + 4375);
        v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
        v19 = (v18 & *(_DWORD *)(v17 + 20)) == 0;
        *(_DWORD *)(v17 + 20) &= v18;
        if ( v19 )
          sub_140418E4C((__int64)v16);
      }
    }
  }
  __writecr8(v14);
  return 3221225494LL;
}
