/*
 * XREFs of sub_140580FA4 @ 0x140580FA4
 * Callers:
 *     sub_140211108 @ 0x140211108 (sub_140211108.c)
 * Callees:
 *     sub_1402393FC @ 0x1402393FC (sub_1402393FC.c)
 *     sub_140241980 @ 0x140241980 (sub_140241980.c)
 *     sub_140281A58 @ 0x140281A58 (sub_140281A58.c)
 *     sub_140281C44 @ 0x140281C44 (sub_140281C44.c)
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140580028 @ 0x140580028 (sub_140580028.c)
 *     sub_1405802D8 @ 0x1405802D8 (sub_1405802D8.c)
 *     sub_14058154C @ 0x14058154C (sub_14058154C.c)
 */

LONG __fastcall sub_140580FA4(ULONG_PTR a1)
{
  _QWORD *v2; // rax
  struct _KTHREAD *CurrentThread; // rdi
  _QWORD *v4; // r15
  __int64 v5; // r14
  _QWORD *v6; // rax
  _QWORD *i; // rbx
  _QWORD **v8; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rcx
  unsigned __int64 v11; // rdi
  volatile LONG *v12; // rbx
  KIRQL v13; // al
  struct _KEVENT *v14; // rbx
  unsigned __int64 v15; // rcx
  __int64 v16; // rcx

  sub_1402393FC(a1, 0LL);
  v2 = sub_140282AD0(a1 + 1664);
  CurrentThread = KeGetCurrentThread();
  v4 = v2;
  v5 = v2[4];
  if ( (*(_DWORD *)(v5 + 48) & 1) != 0 )
  {
    --*((_WORD *)CurrentThread + 243);
    ExAcquirePushLockExclusiveEx(a1 + 1224, 0LL);
    *((_BYTE *)CurrentThread + 1384) |= 1u;
    v6 = *(_QWORD **)(a1 + 2008);
    i = 0LL;
    while ( v6 )
    {
      i = v6;
      v6 = (_QWORD *)*v6;
    }
    while ( i )
    {
      --*((_WORD *)CurrentThread + 243);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(i + 5), 0LL);
      *((_BYTE *)CurrentThread + 1384) |= 0x80u;
      if ( sub_140580028((__int64)i) )
        sub_14058154C(i);
      sub_140281C44((__int64)CurrentThread, (__int64)i);
      v8 = (_QWORD **)i[1];
      v9 = i;
      if ( v8 )
      {
        v10 = *v8;
        for ( i = (_QWORD *)i[1]; v10; v10 = (_QWORD *)*v10 )
          i = v10;
      }
      else
      {
        while ( 1 )
        {
          i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (_QWORD *)*i == v9 )
            break;
          v9 = i;
        }
      }
    }
    sub_140281A58((__int64)CurrentThread, a1);
  }
  v11 = _InterlockedExchange64((volatile __int64 *)(a1 + 1872), 0LL);
  if ( v11 )
    sub_14028CE10(*(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a1 + 1838)), v11);
  v12 = (volatile LONG *)sub_140282AD0(a1 + 1664);
  v13 = ExAcquireSpinLockExclusive(v12);
  *((_DWORD *)v12 + 1) = 0;
  v14 = *(struct _KEVENT **)(v5 + 40);
  *(_QWORD *)(v5 + 40) = 0LL;
  v15 = *(_QWORD *)(v5 + 32);
  if ( v15 <= v11 )
    v16 = 0LL;
  else
    v16 = v15 - v11;
  *(_QWORD *)(v5 + 32) = v16;
  v4[1] += v11;
  sub_14030FA80(a1 + 1664, v13);
  sub_1405802D8();
  sub_140241980(0LL, 0);
  return KeSetEvent(v14, 0, 0);
}
