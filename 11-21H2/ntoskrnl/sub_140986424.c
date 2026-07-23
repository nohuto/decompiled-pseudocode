/*
 * XREFs of sub_140986424 @ 0x140986424
 * Callers:
 *     sub_14072B3B0 @ 0x14072B3B0 (sub_14072B3B0.c)
 *     sub_14072DDC0 @ 0x14072DDC0 (sub_14072DDC0.c)
 *     sub_14072E210 @ 0x14072E210 (sub_14072E210.c)
 *     sub_1407CDED0 @ 0x1407CDED0 (sub_1407CDED0.c)
 * Callees:
 *     sub_1402A1054 @ 0x1402A1054 (sub_1402A1054.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140985CD8 @ 0x140985CD8 (sub_140985CD8.c)
 *     sub_140986128 @ 0x140986128 (sub_140986128.c)
 *     sub_1409E2AC8 @ 0x1409E2AC8 (sub_1409E2AC8.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

char __fastcall sub_140986424(__int64 a1)
{
  struct _KTHREAD *v2; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int16 *v4; // r9
  __int64 Pool2; // rax
  unsigned int v6; // r8d
  unsigned __int16 *v7; // rdi
  char v8; // al
  char v9; // cl
  unsigned __int16 *v12; // [rsp+48h] [rbp+10h] BYREF

  if ( (xmmword_140D06910 & 0x80u) != 0LL )
    sub_1409E2AC8(4400LL, a1);
  LOBYTE(v2) = dword_140D05010;
  if ( (dword_140D05010 & 0x73) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v12 = 0LL;
    --*((_WORD *)CurrentThread + 243);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C252D8, 0LL);
    if ( (dword_140D05010 & 0x73) != 0
      && ((dword_140D05010 & 0x20) == 0 || (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1120LL) & 0x200) != 0)
      && sub_140986128(a1)
      && (int)sub_140985CD8(a1, &v12) >= 0 )
    {
      v4 = v12;
      if ( v12 )
        goto LABEL_12;
      Pool2 = ExAllocatePool2(64LL, 6136LL, 1951556175LL);
      v12 = (unsigned __int16 *)Pool2;
      v4 = (unsigned __int16 *)Pool2;
      if ( Pool2 )
      {
        v6 = (((unsigned int)(a1 + 48) >> 4) & 0xFFFFF) % 0x191;
        *(_QWORD *)(Pool2 + 8) = *((_QWORD *)qword_140C252C8 + v6);
        *((_QWORD *)qword_140C252C8 + v6) = Pool2;
        *(_WORD *)(Pool2 + 34) = 508;
LABEL_12:
        ++dword_140C252E8;
        *(_QWORD *)v4 = a1;
        v7 = v12;
        sub_1402A1054((_BYTE *)v12 + 16, 16LL, *((_QWORD *)KeGetCurrentThread() + 23) + 1448LL);
        v7[16] = 0;
        memset(v7 + 18, 0, 12LL * v7[17]);
        v8 = dword_140D05010;
        v9 = *(_BYTE *)(a1 + 25) | 1;
        *(_BYTE *)(a1 + 25) = v9;
        if ( (v8 & 0x40) != 0 )
          *(_BYTE *)(a1 + 25) = v9 | 2;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C252D8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C252D8);
    sub_1402AFC00((ULONG_PTR)&qword_140C252D8);
    v2 = KeGetCurrentThread();
    if ( (*((_WORD *)v2 + 243))++ == 0xFFFF )
    {
      v2 = (struct _KTHREAD *)((char *)v2 + 152);
      if ( *(struct _KTHREAD **)v2 != v2 )
        LOBYTE(v2) = KiCheckForKernelApcDelivery();
    }
  }
  return (char)v2;
}
