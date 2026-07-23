/*
 * XREFs of sub_140201E8C @ 0x140201E8C
 * Callers:
 *     sub_14031CD90 @ 0x14031CD90 (sub_14031CD90.c)
 * Callees:
 *     sub_14024D050 @ 0x14024D050 (sub_14024D050.c)
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_14030EA70 @ 0x14030EA70 (sub_14030EA70.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall sub_140201E8C(unsigned __int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v3; // r15d
  __int64 v4; // rdi
  unsigned __int64 v5; // rsi
  __int64 v6; // r14
  _QWORD *i; // r8
  __int64 v8; // rbx
  __int64 v10; // rbx
  __int64 v11; // rbx

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  v4 = a2;
  v5 = a1 >> 12;
  v6 = *((_QWORD *)CurrentThread + 23);
LABEL_2:
  for ( i = *(_QWORD **)(v6 + 1240); i; i = (_QWORD *)*i )
  {
    v8 = i[1];
    if ( v5 >= (*(unsigned int *)(v8 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 32) << 32))
      && v5 <= (*(unsigned int *)(v8 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 33) << 32)) )
    {
      if ( (struct _KTHREAD *)i[2] == CurrentThread )
        return v3;
      v3 = 1;
      if ( (*(_BYTE *)(v4 + 13) & 1) != 0 )
      {
        if ( !_InterlockedIncrement((volatile signed __int32 *)(v8 + 36)) )
          __fastfail(0xEu);
        LOBYTE(a2) = *(_BYTE *)(v4 + 12);
        sub_14030FA80(v6 + 1664, a2);
        --*((_WORD *)CurrentThread + 243);
        ExAcquirePushLockSharedEx(v8 + 40, 0LL);
        *((_BYTE *)CurrentThread + 1385) |= 0x40u;
        sub_14030EA70((PVOID)v8);
        v11 = sub_140282AD0(v6 + 1664);
        ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v11);
        *(_DWORD *)(v11 + 4) = 0;
      }
      else
      {
        sub_14024D050(v4);
        v10 = sub_140282AD0(v6 + 1664);
        ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v10);
        *(_DWORD *)(v10 + 4) = 0;
        *(_BYTE *)(v4 + 13) |= 1u;
      }
      goto LABEL_2;
    }
  }
  return v3;
}
