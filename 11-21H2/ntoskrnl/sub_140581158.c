/*
 * XREFs of sub_140581158 @ 0x140581158
 * Callers:
 *     sub_140211108 @ 0x140211108 (sub_140211108.c)
 * Callees:
 *     sub_1402393FC @ 0x1402393FC (sub_1402393FC.c)
 *     sub_140241980 @ 0x140241980 (sub_140241980.c)
 *     sub_140281A58 @ 0x140281A58 (sub_140281A58.c)
 *     sub_140281C44 @ 0x140281C44 (sub_140281C44.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_1402A10EC @ 0x1402A10EC (sub_1402A10EC.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_14057FA8C @ 0x14057FA8C (sub_14057FA8C.c)
 *     sub_140580028 @ 0x140580028 (sub_140580028.c)
 *     sub_1405801E4 @ 0x1405801E4 (sub_1405801E4.c)
 *     sub_1405FAA30 @ 0x1405FAA30 (sub_1405FAA30.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140581158(ULONG_PTR a1)
{
  _QWORD *v2; // r13
  struct _KTHREAD *CurrentThread; // rbp
  _QWORD *v4; // r15
  volatile LONG *v5; // rbx
  KIRQL v6; // al
  __int64 v7; // rdi
  __int64 v8; // rbx
  BOOL v9; // r12d
  unsigned __int64 v10; // r13
  _QWORD *v11; // rax
  _QWORD *i; // rdi
  __int64 v13; // rbx
  _QWORD **v14; // rax
  _QWORD *v15; // rcx
  _QWORD *v16; // rcx
  unsigned __int64 v17; // rdx
  volatile LONG *v18; // rbx
  KIRQL v19; // al
  int v20; // ecx
  char v21; // cl
  _QWORD *v22; // [rsp+70h] [rbp+8h]
  unsigned __int64 v23; // [rsp+78h] [rbp+10h] BYREF
  __int64 v24; // [rsp+80h] [rbp+18h]

  v23 = 0LL;
  sub_1402393FC(a1, 0LL);
  v2 = sub_140282AD0(a1 + 1664);
  CurrentThread = KeGetCurrentThread();
  v22 = v2;
  v24 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a1 + 1838));
  v4 = sub_1402828F0(64, 0x38uLL, 0x7243694Du);
  if ( !v4 )
    goto LABEL_31;
  v5 = (volatile LONG *)sub_140282AD0(a1 + 1664);
  v6 = ExAcquireSpinLockExclusive(v5);
  *((_DWORD *)v5 + 1) = 0;
  *(_BYTE *)(a1 + 1851) |= 0x60u;
  sub_14030FA80(a1 + 1664, v6);
  v7 = 1LL;
  if ( dword_140D05210 != 1 )
  {
    v8 = v24;
    v9 = 0;
    v10 = 0LL;
    if ( *(_DWORD *)(v24 + 1176) )
      v9 = sub_1402A10EC();
    --*((_WORD *)CurrentThread + 243);
    ExAcquirePushLockExclusiveEx(a1 + 1224, 0LL);
    *((_BYTE *)CurrentThread + 1384) |= 1u;
    v11 = *(_QWORD **)(a1 + 2008);
    i = 0LL;
    while ( v11 )
    {
      i = v11;
      v11 = (_QWORD *)*v11;
    }
    while ( i )
    {
      --*((_WORD *)CurrentThread + 243);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(i + 5), 0LL);
      *((_BYTE *)CurrentThread + 1384) |= 0x80u;
      if ( sub_140580028((__int64)i) )
      {
        v13 = sub_14057FA8C(v8, a1, a1 + 1664, (__int64)i, v9, v4 + 4);
        sub_140281C44((__int64)CurrentThread, (__int64)i);
        v10 += v13;
        v8 = v24;
      }
      else
      {
        sub_140281C44((__int64)CurrentThread, (__int64)i);
      }
      v14 = (_QWORD **)i[1];
      v15 = i;
      if ( v14 )
      {
        v16 = *v14;
        for ( i = (_QWORD *)i[1]; v16; v16 = (_QWORD *)*v16 )
          i = v16;
      }
      else
      {
        while ( 1 )
        {
          i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (_QWORD *)*i == v15 )
            break;
          v15 = i;
        }
      }
    }
    sub_140281A58((__int64)CurrentThread, a1);
    v7 = v10;
    _InterlockedExchange64((volatile __int64 *)(a1 + 1872), 0LL);
    if ( v9 )
    {
      sub_1405FAA30(a1, &v23);
      v17 = ((v23 & 0xFFF) != 0) + (v23 >> 12);
      v23 = v17;
      if ( v10 <= v17 )
      {
        v7 = 0LL;
LABEL_25:
        v2 = v22;
        goto LABEL_26;
      }
      v7 = v10 - v17;
    }
    if ( v7 )
      sub_14028CE10(v8, v7);
    goto LABEL_25;
  }
LABEL_26:
  v18 = (volatile LONG *)sub_140282AD0(a1 + 1664);
  v19 = ExAcquireSpinLockExclusive(v18);
  *((_DWORD *)v18 + 1) = 0;
  v20 = *(_DWORD *)(a1 + 1848);
  if ( v7 )
  {
    v2[4] = v4;
    v21 = HIBYTE(v20) & 0x9F | 0x40;
    v2[1] = v7;
    v4 = 0LL;
  }
  else
  {
    v21 = HIBYTE(v20) & 0x9F;
  }
  *(_BYTE *)(a1 + 1851) = v21;
  sub_14030FA80(a1 + 1664, v19);
  sub_1405801E4(a1, v7);
LABEL_31:
  sub_140241980(0LL, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
}
