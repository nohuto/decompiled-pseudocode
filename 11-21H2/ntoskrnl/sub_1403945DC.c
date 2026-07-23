/*
 * XREFs of sub_1403945DC @ 0x1403945DC
 * Callers:
 *     sub_1405D6DC4 @ 0x1405D6DC4 (sub_1405D6DC4.c)
 *     sub_140A50A10 @ 0x140A50A10 (sub_140A50A10.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_14035AD70 @ 0x14035AD70 (sub_14035AD70.c)
 *     sub_140394914 @ 0x140394914 (sub_140394914.c)
 *     sub_140394980 @ 0x140394980 (sub_140394980.c)
 *     sub_140394A00 @ 0x140394A00 (sub_140394A00.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ?MSPLogRegister@@YAHPEBG@Z @ 0x140A6B7AC (-MSPLogRegister@@YAHPEBG@Z.c)
 */

LONG __fastcall sub_1403945DC(__int64 a1, __int64 *a2, int a3, const unsigned __int16 *a4)
{
  _QWORD *v4; // rsi
  __int64 v5; // r14
  __int64 v6; // r15
  bool v8; // r12
  char v9; // r13
  unsigned int v10; // edi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbp
  __int64 *v14; // rdx
  __int64 v15; // rcx
  __int64 **v16; // rax
  __int64 v17; // rax
  __int64 **v18; // rdx
  __int64 *v19; // r15
  __int64 *v20; // r11
  __int64 *i; // r10
  int v22; // eax
  __int64 v23; // r9
  LONG result; // eax
  unsigned __int64 OldIrql; // rbx
  __int64 v26; // rax
  __int64 **v27; // rdx
  __int64 *j; // rsi
  __int64 *v29; // r10
  struct _KPRCB *CurrentPrcb; // r10
  bool v31; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-68h] BYREF

  v4 = (_QWORD *)*(a2 - 19);
  v5 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = 0LL;
  v8 = (DWORD1(xmmword_140C22740) & 0x800000) != 0;
  if ( (PVOID)*(a2 - 18) != qword_140C46278 )
    v6 = *(a2 - 18);
  v9 = 0;
  v10 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)qword_140C22750 + 1, &LockHandle);
  v13 = v5 + 48;
  v14 = (__int64 *)*a2;
  v15 = 9LL * *((unsigned __int8 *)a2 + 56);
  v16 = (__int64 **)a2[1];
  if ( *(__int64 **)(*a2 + 8) != a2 || *v16 != a2 )
    goto LABEL_53;
  *v16 = v14;
  v14[1] = (__int64)v16;
  if ( !*(_BYTE *)(v5 + 464) )
  {
    v17 = v5 + 104 + 8 * v15;
    v18 = *(__int64 ***)(v17 + 8);
    if ( *v18 == (__int64 *)v17 )
    {
      *a2 = v17;
      a2[1] = (__int64)v18;
      *v18 = a2;
      *(_QWORD *)(v17 + 8) = a2;
      --*(_DWORD *)(v13 + 8 * v15 + 20);
      if ( v6 )
      {
        LOBYTE(v11) = *((_BYTE *)a2 + 56);
        LOBYTE(v12) = v8;
        v10 = (unsigned __int8)sub_140394980(v6 + 160, v5 + 48, v11, v12) != 0;
      }
      v19 = (__int64 *)a2[4];
      if ( v19 != a2 + 4 )
      {
        do
        {
          LOBYTE(v11) = *((_BYTE *)a2 + 56);
          LOBYTE(v12) = v8;
          if ( (unsigned __int8)sub_140394980(v19[5], v13, v11, v12) )
            ++v10;
          v19 = (__int64 *)*v19;
        }
        while ( v19 != a2 + 4 );
        v5 = a1;
      }
      while ( v4 )
      {
        LOBYTE(v11) = v8;
        sub_140394914(v4 + 20, v13, v11);
        v4 = (_QWORD *)*v4;
      }
      v20 = a2 + 2;
      for ( i = (__int64 *)a2[2]; i != v20; i = (__int64 *)*v29 )
      {
        LOBYTE(v11) = v8;
        sub_140394914(*(i - 1), v13, v11);
      }
      v22 = a3;
      if ( a3 >= 0 )
        goto LABEL_14;
      if ( a4 && *(_BYTE *)v5 == 3 )
      {
        MSPLogRegister(a4);
        v22 = a3;
      }
      if ( *(_BYTE *)(v5 + 466) || v22 == -1073741637 && *(_BYTE *)(v5 + 467) )
      {
LABEL_14:
        v9 = 0;
      }
      else if ( *(int *)(v5 + 448) < 0 )
      {
        v9 = 0;
      }
      else
      {
        *(_DWORD *)(v5 + 448) = v22;
        v9 = 1;
        *(_QWORD *)(v5 + 456) = a2[8];
      }
      goto LABEL_15;
    }
LABEL_53:
    __fastfail(3u);
  }
  v26 = v5 + 72 + 8 * v15;
  v27 = *(__int64 ***)(v26 + 8);
  if ( *v27 != (__int64 *)v26 )
    goto LABEL_53;
  *a2 = v26;
  a2[1] = (__int64)v27;
  *v27 = a2;
  *(_QWORD *)(v26 + 8) = a2;
  ++*(_DWORD *)(v13 + 8 * v15 + 20);
  while ( v4 )
  {
    LOBYTE(v11) = *((_BYTE *)a2 + 56);
    LOBYTE(v12) = v8;
    if ( (unsigned __int8)sub_140394A00(v4 + 20, v5 + 48, v11, v12) )
      ++v10;
    v4 = (_QWORD *)*v4;
  }
  for ( j = (__int64 *)a2[2]; j != a2 + 2; j = (__int64 *)*j )
  {
    LOBYTE(v11) = *((_BYTE *)a2 + 56);
    LOBYTE(v12) = v8;
    if ( (unsigned __int8)sub_140394A00(*(j - 1), v5 + 48, v11, v12) )
      ++v10;
  }
LABEL_15:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = dword_140D06B08;
  OldIrql = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v23 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v31 = (result & *(_DWORD *)(v23 + 20)) == 0;
        *(_DWORD *)(v23 + 20) &= result;
        if ( v31 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  if ( v9 )
    return KeSetEvent(*(PRKEVENT *)(v5 + 24), 0, 0);
  if ( v10 )
    return sub_14035AD70(*(volatile signed __int32 **)(v5 + 32), 0LL, v10, v23, 0);
  return result;
}
