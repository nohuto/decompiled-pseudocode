/*
 * XREFs of sub_14097079C @ 0x14097079C
 * Callers:
 *     FsRtlIsExtentDangling @ 0x14092ED10 (FsRtlIsExtentDangling.c)
 *     sub_140968388 @ 0x140968388 (sub_140968388.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402B2E00 @ 0x1402B2E00 (sub_1402B2E00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

unsigned __int64 __fastcall sub_14097079C(unsigned __int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  const signed __int64 *v8; // rsi
  __int64 v9; // rdi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v11; // r9
  _QWORD *v12; // rdx
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // rcx
  _QWORD *v15; // rcx
  _QWORD *v16; // r8
  __int64 i; // rcx
  struct _KTHREAD *v18; // rbx
  bool v19; // zf

  v4 = a1 + a2;
  v5 = a2;
  v6 = a1;
  v7 = a1;
  if ( a1 < a1 + a2 )
  {
    v8 = (const signed __int64 *)(48 * a1 - 0x21FFFFFFFFD8LL);
    while ( !(unsigned int)sub_1402B2E00(v7) || !_bittest64(v8, 0x35u) )
    {
      ++v7;
      v8 += 6;
      if ( v7 >= v4 )
        goto LABEL_8;
    }
    v4 = v7;
    v5 = v7 - v6;
  }
LABEL_8:
  v9 = 2LL;
  if ( (a3 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 243);
    ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C4F468, 0LL);
    v11 = &unk_140C4F458;
    do
    {
      v12 = (_QWORD *)*v11;
      v13 = v6;
      if ( *v11 )
      {
        do
        {
          v14 = v12[4];
          if ( v6 + v5 > v14 )
          {
            if ( v6 < v12[5] + v14 )
              break;
            v12 = (_QWORD *)v12[1];
          }
          else
          {
            v12 = (_QWORD *)*v12;
          }
        }
        while ( v12 );
        if ( v12 )
        {
          while ( 1 )
          {
            v15 = (_QWORD *)*v12;
            v16 = v12;
            if ( *v12 )
            {
              for ( ; v15[1]; v15 = (_QWORD *)v15[1] )
                ;
            }
            else
            {
              for ( i = v12[2]; ; i = v15[2] )
              {
                v15 = (_QWORD *)(i & 0xFFFFFFFFFFFFFFFCuLL);
                if ( !v15 || (_QWORD *)v15[1] == v16 )
                  break;
                v16 = v15;
              }
            }
            if ( !v15 || v15[4] + v15[5] <= v6 )
              break;
            v12 = v15;
          }
          v6 = v12[4];
          if ( v13 >= v6 )
            v6 = v13;
          if ( v4 > v6 )
            v4 = v6;
        }
      }
      ++v11;
      --v9;
    }
    while ( v9 );
    v18 = KeGetCurrentThread();
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C4F468, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140C4F468);
    sub_1402AFC00((ULONG_PTR)&qword_140C4F468);
    v19 = (*((_WORD *)v18 + 243))++ == 0xFFFF;
    if ( v19 && *((struct _KTHREAD **)v18 + 19) != (struct _KTHREAD *)((char *)v18 + 152) )
      KiCheckForKernelApcDelivery();
  }
  return v4;
}
