/*
 * XREFs of sub_1402F00BC @ 0x1402F00BC
 * Callers:
 *     sub_1407A0088 @ 0x1407A0088 (sub_1407A0088.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1402B3140 @ 0x1402B3140 (sub_1402B3140.c)
 *     sub_1402EE104 @ 0x1402EE104 (sub_1402EE104.c)
 *     ntoskrnl_36 @ 0x1402EEBC0 (ntoskrnl_36.c)
 *     sub_1402F3290 @ 0x1402F3290 (sub_1402F3290.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1402F6A70 @ 0x1402F6A70 (sub_1402F6A70.c)
 *     sub_1402F6BC0 @ 0x1402F6BC0 (sub_1402F6BC0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_1403119F0 @ 0x1403119F0 (sub_1403119F0.c)
 *     sub_140340390 @ 0x140340390 (sub_140340390.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     sub_14035B550 @ 0x14035B550 (sub_14035B550.c)
 *     sub_14035EF6C @ 0x14035EF6C (sub_14035EF6C.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14056B1E4 @ 0x14056B1E4 (sub_14056B1E4.c)
 *     sub_1405714E8 @ 0x1405714E8 (sub_1405714E8.c)
 *     sub_14062DA60 @ 0x14062DA60 (sub_14062DA60.c)
 */

__int64 __fastcall sub_1402F00BC(char *SystemArgument1)
{
  bool v1; // zf
  __int64 v3; // rdx
  __int64 v4; // rbp
  unsigned __int8 CurrentIrql; // cl
  char *v6; // rsi
  __int64 v7; // rdx
  char **v8; // rax
  unsigned __int64 v9; // rdx
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned __int16 *v11; // r14
  unsigned __int16 *v12; // r15
  signed __int64 *v13; // r8
  signed __int64 v14; // rax
  signed __int64 v15; // rcx
  int v16; // r8d
  __int64 v18; // r9
  unsigned __int16 *v19; // rsi
  char v20; // al
  __int64 v21; // r8
  __int64 v22; // rdx
  _QWORD *v23; // rcx
  __int64 v24; // rbp
  _QWORD *v25; // r12
  unsigned __int8 v26; // cl
  struct _KPRCB *v27; // rax
  __int64 v28; // r13
  struct _KPRCB *v29; // r13
  int v30; // ecx
  _QWORD *v31; // rdx
  __int64 v32; // r9
  __int64 v33; // r8
  struct _KPRCB *v34; // rsi
  __int64 v35; // rcx
  __int64 v36; // rcx
  int v37; // eax
  int v38; // eax
  signed __int32 v39[8]; // [rsp+0h] [rbp-88h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  int v41; // [rsp+90h] [rbp+8h] BYREF
  struct _KPRCB *v42; // [rsp+98h] [rbp+10h]
  struct _KPRCB *v43; // [rsp+A0h] [rbp+18h]

  v1 = (*((_DWORD *)SystemArgument1 + 29) & 0x1000) == 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !v1 )
    KeBugCheckEx(0x107u, (ULONG_PTR)SystemArgument1, 0LL, 0LL, 0LL);
  v3 = *((_QWORD *)SystemArgument1 + 45);
  if ( v3 )
    sub_1405714E8(SystemArgument1, *(_QWORD *)(v3 + 8));
  v4 = *((_QWORD *)SystemArgument1 + 68);
  SystemArgument1[643] = 22;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v18 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v18 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  v6 = SystemArgument1 + 760;
  if ( *((_QWORD *)SystemArgument1 + 95) == *((_QWORD *)SystemArgument1 + 96) )
  {
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (volatile PKSPIN_LOCK)&unk_140D31400;
    sub_1403119F0(&LockHandle);
    v22 = *(_QWORD *)(v4 + 848);
    v23 = *(_QWORD **)(v4 + 856);
    if ( *(_QWORD *)(v22 + 8) != v4 + 848 || *v23 != v4 + 848 )
LABEL_56:
      __fastfail(3u);
    *v23 = v22;
    *(_QWORD *)(v22 + 8) = v23;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  sub_1402F3290(v4);
  v7 = *(_QWORD *)v6;
  v8 = (char **)*((_QWORD *)SystemArgument1 + 96);
  if ( *(char **)(*(_QWORD *)v6 + 8LL) != v6 || *v8 != v6 )
    goto LABEL_56;
  *v8 = (char *)v7;
  *(_QWORD *)(v7 + 8) = v8;
  _InterlockedAnd((volatile signed __int32 *)v4, 0xFFFFFF7F);
  if ( *((_QWORD *)SystemArgument1 + 13) )
    sub_14035EF6C(SystemArgument1);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  v9 = *((_QWORD *)SystemArgument1 + 29);
  if ( v9 )
    sub_1402EE104((__int64)SystemArgument1, v9, (_QWORD *)SystemArgument1 + 65);
  CurrentPrcb = KeGetCurrentPrcb();
  v43 = CurrentPrcb;
  sub_1402F3290(SystemArgument1);
  v11 = (unsigned __int16 *)(SystemArgument1 + 8);
  *((_DWORD *)SystemArgument1 + 1) = 1;
  v12 = (unsigned __int16 *)*((_QWORD *)SystemArgument1 + 1);
  while ( v12 != v11 )
  {
    v19 = v12;
    v12 = *(unsigned __int16 **)v12;
    v20 = *((_BYTE *)v19 + 16);
    switch ( v20 )
    {
      case 1:
        v21 = v19[9];
        goto LABEL_31;
      case 2:
        *((_BYTE *)v19 + 17) = 5;
        v24 = *((_QWORD *)v19 + 3);
        *(_QWORD *)v19 = 0LL;
        v25 = (_QWORD *)(v24 + 8);
        v26 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v26 <= 0xFu )
        {
          v32 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
          *(_DWORD *)(v32 + 20) |= (-1 << (v26 + 1)) & 4;
        }
        v27 = KeGetCurrentPrcb();
        v42 = v27;
        v28 = *((_QWORD *)v27 + 1);
        if ( (DWORD1(xmmword_140D06900) & 0x1000000) != 0 )
        {
          LOBYTE(v33) = sub_14056B1E4(*((_QWORD *)v27 + 1));
          sub_14062DA60(v28, v19, v33);
        }
        sub_1402F3290(v24);
        if ( (_QWORD *)*v25 == v25
          || *(_DWORD *)(v24 + 40) >= *(_DWORD *)(v24 + 44)
          || *(_QWORD *)(v28 + 232) == v24 && *(_BYTE *)(v28 + 643) == 15 )
        {
          v29 = v42;
        }
        else
        {
          v29 = v42;
          if ( (unsigned __int8)sub_1402F6A70(v42, v24, v19) )
          {
            *(_QWORD *)v19 = 0LL;
            goto LABEL_53;
          }
        }
        v30 = *(_DWORD *)(v24 + 4);
        *(_DWORD *)(v24 + 4) = v30 + 1;
        v31 = *(_QWORD **)(v24 + 32);
        if ( *v31 != v24 + 24 )
          goto LABEL_56;
        *(_QWORD *)v19 = v24 + 24;
        *((_QWORD *)v19 + 1) = v31;
        *v31 = v19;
        *(_QWORD *)(v24 + 32) = v19;
        if ( !v30 && (_QWORD *)*v25 != v25 )
          sub_14035B550(v29, v24);
LABEL_53:
        _InterlockedAnd((volatile signed __int32 *)v24, 0xFFFFFF7F);
        CurrentPrcb = v43;
        break;
      case 4:
        *((_BYTE *)v19 + 17) = 5;
        *((_DWORD *)SystemArgument1 + 1) = 0;
        KeInsertQueueDpc(*((PRKDPC *)v19 + 3), SystemArgument1, v19);
        break;
      default:
        v21 = 256LL;
LABEL_31:
        sub_1402F6BC0(CurrentPrcb, v19, v21, 0LL);
        break;
    }
  }
  *((_QWORD *)SystemArgument1 + 2) = SystemArgument1 + 8;
  *(_QWORD *)v11 = v11;
  _InterlockedAnd((volatile signed __int32 *)SystemArgument1, 0xFFFFFF7F);
  SystemArgument1[388] = 4;
  if ( *((_QWORD *)CurrentPrcb + 1441) )
    sub_140340390(CurrentPrcb, 1LL, 0LL, 0LL);
  v13 = (signed __int64 *)(SystemArgument1 + 1192);
  _m_prefetchw(&qword_140C1BFE0);
  v14 = qword_140C1BFE0;
  do
  {
    *v13 = v14;
    v15 = v14;
    v14 = _InterlockedCompareExchange64(&qword_140C1BFE0, (signed __int64)v13, v14);
  }
  while ( v14 != v15 );
  if ( v14 )
  {
    if ( qword_140C1C018 && _interlockedbittestandreset((volatile signed __int32 *)&qword_140C1C018, 0) )
    {
      v16 = 0xFFFF;
      goto LABEL_20;
    }
  }
  else
  {
    v16 = -1;
LABEL_20:
    if ( !(unsigned __int8)ntoskrnl_36((ULONG_PTR)&qword_140C1C000, 2u, v16) )
      _interlockedbittestandset((volatile signed __int32 *)&qword_140C1C018, 0);
  }
  _InterlockedOr(v39, 0);
  if ( *((_QWORD *)SystemArgument1 + 8) )
  {
    v34 = KeGetCurrentPrcb();
    v41 = 0;
    while ( 1 )
    {
      v35 = *((_QWORD *)v34 + 4375);
      if ( v35 )
      {
        if ( *((_BYTE *)v34 + 32) <= 1u )
        {
          v37 = *(_DWORD *)(v35 + 24);
          *(_DWORD *)(v35 + 24) = v37 + 1;
          if ( v37 == -1 )
            sub_140418E4C(v34);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)SystemArgument1 + 16, 0LL) )
        break;
      v36 = *((_QWORD *)v34 + 4375);
      if ( v36 )
      {
        if ( *((_BYTE *)v34 + 32) <= 1u )
        {
          v38 = *(_DWORD *)(v36 + 24) - 1;
          *(_DWORD *)(v36 + 24) = v38;
          if ( !v38 )
            sub_140418E4C(v34);
        }
      }
      do
        sub_1402F32E0(&v41);
      while ( *((_QWORD *)SystemArgument1 + 8) );
    }
    sub_140224100((__int64)SystemArgument1);
  }
  return sub_1402B3140((__int64)SystemArgument1, (__int64)CurrentPrcb, 0LL);
}
