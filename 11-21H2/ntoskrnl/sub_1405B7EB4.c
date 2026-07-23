/*
 * XREFs of sub_1405B7EB4 @ 0x1405B7EB4
 * Callers:
 *     sub_1402BE8E0 @ 0x1402BE8E0 (sub_1402BE8E0.c)
 *     sub_14031C860 @ 0x14031C860 (sub_14031C860.c)
 *     sub_140328690 @ 0x140328690 (sub_140328690.c)
 * Callees:
 *     sub_140220664 @ 0x140220664 (sub_140220664.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14029F6A8 @ 0x14029F6A8 (sub_14029F6A8.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_140353BB0 @ 0x140353BB0 (sub_140353BB0.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_1405B7E7C @ 0x1405B7E7C (sub_1405B7E7C.c)
 */

char __fastcall sub_1405B7EB4(unsigned int *a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  struct _KTHREAD *v3; // rsi
  unsigned __int64 v4; // rbx
  unsigned int v5; // eax
  __int64 v6; // rdx
  int v7; // eax
  _QWORD *v8; // rax
  unsigned int *i; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r8
  unsigned __int64 v13; // r9
  _QWORD *v14; // r8

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 243);
  v3 = KeGetCurrentThread();
  v4 = 0LL;
  _disable();
  v5 = *((unsigned __int8 *)v3 + 792);
  if ( *((_BYTE *)v3 + 792) || (v5 = sub_14029F6A8((__int64)&qword_140C55040, (__int64)v3)) != 0 )
  {
    _BitScanForward((unsigned int *)&v6, v5);
    *((_BYTE *)v3 + 792) = v5 & ~(1 << v6);
    _enable();
    v4 = (unsigned __int64)v3 + 96 * v6 + 1696;
    if ( (unsigned __int64)&qword_140C55040 - qword_140C50630 >= 0x8000000000LL )
      v7 = -1;
    else
      v7 = sub_140287F30(*((_QWORD *)v3 + 23));
    *(_DWORD *)(v4 + 8) = v7;
    *(_QWORD *)v4 = (unsigned __int64)&qword_140C55040 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C55040, 17LL, 0LL)
    || (LOBYTE(v8) = sub_140220664((signed __int64 *)&qword_140C55040, 0), (_BYTE)v8) )
  {
    if ( v4 )
      *(_BYTE *)(v4 + 18) = 1;
    for ( i = a1 + 4; ; i += 2 )
    {
      if ( i >= &a1[2 * a1[1] + 4] )
      {
        sub_1405B7E7C(a1);
        goto LABEL_24;
      }
      v10 = *(_QWORD *)i >> 12;
      v11 = (*(_QWORD *)i & 0x3FFLL) + 1;
      v12 = (*(_QWORD *)i >> 10) & 3LL;
      if ( ((*(_QWORD *)i >> 10) & 3) != 0 )
      {
        do
        {
          v11 <<= 9;
          v10 >>= 9;
          LODWORD(v12) = v12 - 1;
        }
        while ( (_DWORD)v12 );
      }
      v13 = v11 + v10;
      if ( v10 < v11 + v10 )
        break;
LABEL_21:
      ;
    }
    v14 = (_QWORD *)(48 * v10 - 0x21FFFFFFFFD8LL);
    while ( v10 <= qword_140C50840 && ((*v14 >> 54) & 1) != 0 )
    {
      ++v10;
      v14 += 6;
      if ( v10 >= v13 )
        goto LABEL_21;
    }
LABEL_24:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C55040, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140C55040);
    LOBYTE(v8) = sub_1402AFC00((ULONG_PTR)&qword_140C55040);
  }
  else if ( v4 )
  {
    LOBYTE(v8) = sub_140353BB0((ULONG_PTR)&qword_140C55040, v4);
  }
  if ( (*((_WORD *)CurrentThread + 243))++ == 0xFFFF )
  {
    v8 = (_QWORD *)((char *)CurrentThread + 152);
    if ( (_QWORD *)*v8 != v8 )
      LOBYTE(v8) = KiCheckForKernelApcDelivery();
  }
  return (char)v8;
}
