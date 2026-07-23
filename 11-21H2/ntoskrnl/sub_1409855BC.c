/*
 * XREFs of sub_1409855BC @ 0x1409855BC
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 */

__int64 __fastcall sub_1409855BC(char *Address, SIZE_T Length, unsigned int *a3)
{
  unsigned int *v3; // r13
  unsigned int v4; // esi
  unsigned int v6; // r12d
  unsigned int v7; // r14d
  struct _KTHREAD *CurrentThread; // rax
  char v9; // cl
  unsigned __int16 v10; // r13
  char *v11; // r10
  __int16 v12; // cx
  unsigned int i; // r9d
  unsigned int j; // r8d
  __int64 v15; // r15
  struct _KTHREAD *v16; // rax
  bool v17; // zf
  unsigned int v19; // [rsp+78h] [rbp+10h]

  v19 = Length;
  v3 = a3;
  v4 = Length;
  v6 = 0;
  if ( *((_BYTE *)KeGetCurrentThread() + 562) )
    ProbeForWrite(Address, (unsigned int)Length, 8u);
  v7 = 40;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C252D8, 0LL);
  v9 = dword_140D05010;
  if ( (dword_140D05010 & 2) != 0 )
  {
    v10 = 0;
    if ( (dword_140D05010 & 0x20) != 0 )
      v7 = stru_140C251F0.Length + 42;
    if ( (dword_140D05010 & 0x10) != 0 )
    {
      while ( v10 < 0x10u && *((_DWORD *)&xmmword_140C25280 + v10) )
        ++v10;
      if ( v10 )
        v7 += 10 * v10;
    }
    if ( v7 <= v19 )
    {
      v11 = Address + 40;
      *(_OWORD *)Address = 0LL;
      *((_OWORD *)Address + 1) = 0LL;
      *((_QWORD *)Address + 4) = 0LL;
      *Address = 1;
      Address[1] = (dword_140D05010 & 0x40) != 0;
      if ( (v9 & 0x20) != 0 )
      {
        *((_WORD *)Address + 4) = stru_140C251F0.Length;
        *((_WORD *)Address + 5) = stru_140C251F0.MaximumLength;
        *((_QWORD *)Address + 2) = v11;
        memmove(Address + 40, stru_140C251F0.Buffer, stru_140C251F0.MaximumLength);
        v11 = &Address[2 * ((unsigned __int64)stru_140C251F0.MaximumLength >> 1) + 40];
      }
      if ( (dword_140D05010 & 0x10) != 0 )
      {
        v12 = 2 * (5 * v10 - 1);
        *((_WORD *)Address + 12) = v12;
        *((_WORD *)Address + 13) = v12 + 2;
        *((_QWORD *)Address + 4) = v11;
        for ( i = 0; i < v10; ++i )
        {
          for ( j = 0; ; ++j )
          {
            v15 = j + 5 * i;
            if ( j >= 4 )
              break;
            *(_WORD *)&v11[2 * v15] = (unsigned __int8)(*((_DWORD *)&xmmword_140C25280 + i) >> (8 * j));
          }
          *(_WORD *)&v11[2 * v15] = 59;
        }
        *(_WORD *)&v11[10 * v10 - 2] = 0;
      }
      v3 = a3;
    }
    else
    {
      v6 = -1073741820;
      v3 = a3;
    }
  }
  else if ( v4 >= 0x28 )
  {
    *Address = 0;
  }
  else
  {
    v6 = -1073741820;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C252D8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C252D8);
  sub_1402AFC00((ULONG_PTR)&qword_140C252D8);
  v16 = KeGetCurrentThread();
  v17 = (*((_WORD *)v16 + 243))++ == 0xFFFF;
  if ( v17 && *((struct _KTHREAD **)v16 + 19) != (struct _KTHREAD *)((char *)v16 + 152) )
    KiCheckForKernelApcDelivery();
  if ( (int)(v6 + 0x80000000) < 0 || v6 == -1073741820 )
  {
    if ( v3 )
      *v3 = v7;
  }
  return v6;
}
