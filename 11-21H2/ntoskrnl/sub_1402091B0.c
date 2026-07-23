/*
 * XREFs of sub_1402091B0 @ 0x1402091B0
 * Callers:
 *     sub_140682EA4 @ 0x140682EA4 (sub_140682EA4.c)
 *     sub_1407F2DBC @ 0x1407F2DBC (sub_1407F2DBC.c)
 *     sub_1409AFDD8 @ 0x1409AFDD8 (sub_1409AFDD8.c)
 *     sub_1409AFE9C @ 0x1409AFE9C (sub_1409AFE9C.c)
 * Callees:
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     sub_1403119F0 @ 0x1403119F0 (sub_1403119F0.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1402091B0(ULONG_PTR a1, char a2)
{
  ULONG_PTR v2; // rbp
  int v3; // r14d
  char v4; // si
  char v5; // di
  __int64 v6; // rbx
  KIRQL v7; // al
  KIRQL v8; // r15
  char v9; // dl
  BOOL v10; // r8d
  char v11; // r9
  unsigned int v12; // ebx
  __int64 v13; // rdx
  int v15; // [rsp+20h] [rbp-78h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-70h] BYREF
  _OWORD v17[3]; // [rsp+40h] [rbp-58h] BYREF

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v2 = a1 + 1664;
  v3 = 0;
  v4 = a2 & 0xF7;
  v17[0] = 0LL;
  if ( (a2 & 4) == 0 )
    v4 = a2;
  memset(&v17[1], 0, 32);
  v5 = (a2 & 4) != 0 ? 0x80 : 0;
  if ( (v4 & 1) != 0 )
  {
    v4 &= ~2u;
    v5 |= 0x40u;
  }
  if ( *((_QWORD *)KeGetCurrentThread() + 23) != a1 )
  {
    v3 = 1;
    sub_14030D5C0(a1);
  }
  v6 = sub_140282AD0(v2);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v6);
  *(_DWORD *)(v6 + 4) = 0;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = &qword_140C53340;
  v8 = v7;
  sub_1403119F0(&LockHandle);
  v15 = *(_DWORD *)(v2 + 184);
  v9 = v15;
  if ( (v4 & 8) != 0 )
  {
    v9 = v15 & 0x7F;
    LOBYTE(v15) = v15 & 0x7F;
  }
  v10 = (v4 & 8) != 0;
  if ( (v4 & 2) != 0 )
  {
    v9 &= ~0x40u;
    v10 = 1;
    LOBYTE(v15) = v9;
  }
  if ( v9 < 0 )
    v5 |= 0x80u;
  v11 = v5 | 0x40;
  if ( (v9 & 0x40) == 0 )
    v11 = v5;
  if ( v11 < 0 && (v11 & 0x40) != 0 && (unsigned __int64)(*(_QWORD *)(v2 + 112) + 6LL) >= *(_QWORD *)(v2 + 120) )
  {
    v12 = -1073741748;
    goto LABEL_19;
  }
  if ( (v4 & 4) != 0 )
  {
    v9 |= 0x80u;
    v10 = 1;
    LOBYTE(v15) = v9;
  }
  v12 = 0;
  if ( (v4 & 1) == 0 )
  {
LABEL_19:
    if ( !v10 )
      goto LABEL_21;
    goto LABEL_20;
  }
  LOBYTE(v15) = v9 | 0x40;
LABEL_20:
  *(_WORD *)(v2 + 184) = v15;
LABEL_21:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  LOBYTE(v13) = v8;
  sub_14030FA80(v2, v13);
  if ( v3 )
    sub_1402D0930(v17, 0LL);
  return v12;
}
