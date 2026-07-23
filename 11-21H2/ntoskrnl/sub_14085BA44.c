/*
 * XREFs of sub_14085BA44 @ 0x14085BA44
 * Callers:
 *     sub_1407DE5F0 @ 0x1407DE5F0 (sub_1407DE5F0.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14085BA44(__int64 a1, volatile void *a2, unsigned int a3, char a4)
{
  __int64 v4; // r15
  _DWORD *v5; // rsi
  unsigned int v6; // r14d
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdi
  _QWORD *v10; // rcx
  unsigned int v11; // edi
  int v12; // eax
  bool v13; // zf
  _DWORD *v15; // rcx
  char *v16; // r8
  _QWORD *i; // rdx
  int v18; // r13d
  _QWORD *v19; // r9
  __int64 v20; // r10
  unsigned __int64 v21; // rdx
  unsigned int v22; // r10d
  _QWORD *v23; // r9
  unsigned int v24; // [rsp+28h] [rbp-60h]
  struct _KTHREAD *v25; // [rsp+40h] [rbp-48h]
  unsigned __int64 v26; // [rsp+48h] [rbp-40h]

  v4 = a1;
  v5 = 0LL;
  v6 = 0;
  CurrentThread = KeGetCurrentThread();
  v25 = CurrentThread;
  if ( a3 < 4 )
  {
    v11 = -1073741820;
    v12 = 0;
  }
  else
  {
    if ( a4 )
      ProbeForWrite(a2, a3, 8u);
    --*((_WORD *)CurrentThread + 243);
    ExAcquirePushLockSharedEx(v4 + 16672, 0LL);
    v8 = (unsigned int)(dword_140C51860 + 32);
    v26 = v8;
    v9 = v8;
    v24 = dword_140C51860 + 32;
    v10 = *(_QWORD **)(v4 + 16624);
    if ( v10 != (_QWORD *)(v4 + 16624) )
    {
      v18 = dword_140C51860 + 32;
      do
      {
        v9 += v8;
        v18 += v8;
        v19 = v10 + 3;
        v20 = 4LL;
        do
        {
          v21 = v9 + 16;
          if ( *v19 == -1LL )
            v21 = v9;
          ++v19;
          --v20;
          v9 = v21;
        }
        while ( v20 );
        v10 = (_QWORD *)*v10;
      }
      while ( v10 != (_QWORD *)(v4 + 16624) );
      v24 = v18;
      CurrentThread = v25;
      v4 = a1;
    }
    if ( v9 > 0xFFFFFFFF )
    {
      v11 = -1073741675;
    }
    else
    {
      v5 = sub_1402828F0(256, (unsigned int)v9, 0x7153694Du);
      if ( v5 )
      {
        if ( v9 <= a3 )
        {
          v15 = v5;
          v16 = (char *)v5 + v24;
          for ( i = *(_QWORD **)(a1 + 16624); i != (_QWORD *)(a1 + 16624); i = (_QWORD *)*i )
          {
            *v15 = v26;
            v15[1] = 32;
            v15[3] = (_DWORD)v16 - (_DWORD)v15;
            *((_QWORD *)v15 + 3) = i[2];
            if ( i[9] )
              v15[2] |= 1u;
            v22 = 0;
            v23 = i + 3;
            do
            {
              if ( *v23 != -1LL )
              {
                *(_DWORD *)v16 = v22;
                *((_QWORD *)v16 + 1) = *v23;
                ++v15[4];
                v16 += 16;
              }
              ++v22;
              ++v23;
            }
            while ( v22 < 4 );
            v15 = (_DWORD *)((char *)v15 + v26);
          }
          v6 = v9;
          v11 = 0;
        }
        else
        {
          *v5 = v9;
          v11 = -1073741789;
          v6 = 4;
        }
      }
      else
      {
        v11 = -1073741670;
      }
      v4 = a1;
    }
    v12 = 1;
  }
  if ( v12 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 16672), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v4 + 16672));
    sub_1402AFC00(v4 + 16672);
    v13 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( v13 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      KiCheckForKernelApcDelivery();
  }
  if ( v6 )
    memmove((void *)a2, v5, v6);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return v11;
}
