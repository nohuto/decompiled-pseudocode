/*
 * XREFs of sub_1405BA158 @ 0x1405BA158
 * Callers:
 *     sub_1409806C8 @ 0x1409806C8 (sub_1409806C8.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x14030B700 (PsChargeProcessNonPagedPoolQuota.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1405BA158(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v4; // ebp
  _QWORD *v5; // rsi
  unsigned __int64 v6; // r14
  __int64 v7; // rdi
  volatile LONG *v8; // rbx
  KIRQL v9; // al
  unsigned __int8 v10; // r13
  _QWORD *v11; // rcx
  _QWORD *i; // rbx
  _QWORD *v13; // rax
  _QWORD **v14; // rax
  _QWORD *v15; // rcx
  _QWORD *v16; // rcx
  _QWORD *v17; // rbx
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  *a2 = 0LL;
  v4 = 0;
  v5 = 0LL;
  v6 = 0LL;
  v7 = *((_QWORD *)CurrentThread + 23);
  v8 = (volatile LONG *)sub_140282AD0(v7 + 1664);
  v9 = ExAcquireSpinLockExclusive(v8);
  *((_DWORD *)v8 + 1) = 0;
  v10 = v9;
  v11 = *(_QWORD **)(v7 + 1264);
  i = 0LL;
  while ( v11 )
  {
    i = v11;
    v11 = (_QWORD *)*v11;
  }
  while ( i )
  {
    if ( i[6] )
    {
      v13 = sub_1402828F0(64, 0x70uLL, 0x64436D4Du);
      if ( !v13 )
      {
        v4 = -1073741670;
        break;
      }
      *v13 = v5;
      v5 = v13;
      v13[8] = i[8];
      v6 += i[8];
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
  sub_14030FA80(v7 + 1664, v10);
  if ( v4 < 0 || v6 && (v4 = PsChargeProcessNonPagedPoolQuota(a1, v6), v4 < 0) )
  {
    if ( v5 )
    {
      do
      {
        v17 = (_QWORD *)*v5;
        ExFreePoolWithTag(v5, 0);
        v5 = v17;
      }
      while ( v17 );
    }
    v5 = 0LL;
  }
  result = (unsigned int)v4;
  *a2 = v5;
  return result;
}
