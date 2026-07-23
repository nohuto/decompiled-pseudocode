/*
 * XREFs of sub_140986628 @ 0x140986628
 * Callers:
 *     sub_1409858C0 @ 0x1409858C0 (sub_1409858C0.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140985FBC @ 0x140985FBC (sub_140985FBC.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140986628(__int64 a1)
{
  unsigned int v2; // r12d
  int v3; // esi
  char v4; // r9
  int v5; // r10d
  unsigned __int64 v6; // r11
  unsigned int i; // r9d
  unsigned int j; // r10d
  unsigned __int16 v9; // bx
  void *Pool2; // r12
  struct _KTHREAD *CurrentThread; // rax
  wchar_t *Buffer; // r15
  struct _KTHREAD *v14; // rax
  bool v15; // zf
  wchar_t *v16; // rcx
  struct _KTHREAD *v17; // rax
  char v18; // [rsp+20h] [rbp-C8h]
  int v19; // [rsp+24h] [rbp-C4h]
  PVOID P[2]; // [rsp+38h] [rbp-B0h]
  __int128 v21; // [rsp+48h] [rbp-A0h]
  void *Src[2]; // [rsp+58h] [rbp-90h]
  _OWORD v23[4]; // [rsp+70h] [rbp-78h] BYREF

  memset(v23, 0, sizeof(v23));
  v2 = 0;
  *(_OWORD *)P = 0LL;
  v3 = 0;
  v4 = *((_BYTE *)KeGetCurrentThread() + 562);
  v18 = v4;
  v21 = *(_OWORD *)(a1 + 24);
  *(_OWORD *)Src = *(_OWORD *)(a1 + 8);
  v5 = *(unsigned __int8 *)(a1 + 1);
  v19 = v5;
  if ( (_WORD)v21 )
  {
    if ( (*(_OWORD *)(a1 + 24) & 1) != 0
      || ((((unsigned __int64)(unsigned __int16)v21 >> 1) % 5) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
    {
      return 3221225485LL;
    }
    v6 = ((unsigned __int64)(unsigned __int16)v21 + 2) / 0xA;
    if ( (unsigned int)v6 > 0x10 )
      LODWORD(v6) = 16;
    if ( v4 )
    {
      if ( (BYTE8(v21) & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)(unsigned __int16)v21 + *((_QWORD *)&v21 + 1) > 0x7FFFFFFF0000LL
        || (unsigned __int64)(unsigned __int16)v21 + *((_QWORD *)&v21 + 1) < *((_QWORD *)&v21 + 1) )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    for ( i = 0; i < (unsigned int)v6; ++i )
    {
      for ( j = 0; j < 4; ++j )
        *((_DWORD *)v23 + i) = (*((_DWORD *)v23 + i) << 8) | *(unsigned __int16 *)(*((_QWORD *)&v21 + 1)
                                                                                 + 2LL * (5 * i - j + 3));
    }
    v3 = 16;
    v5 = v19;
  }
  if ( LOWORD(Src[0]) )
  {
    if ( ((__int64)Src[0] & 1) != 0 )
      return 3221225485LL;
    if ( LOWORD(Src[0]) >= 0x80u )
      v9 = 126;
    else
      v9 = (unsigned __int16)Src[0];
    LOWORD(P[0]) = v9;
    Pool2 = (void *)ExAllocatePool2(64LL, v9 + 2LL, 1951556175LL);
    P[1] = Pool2;
    if ( !Pool2 )
      return 3221225495LL;
    WORD1(P[0]) = v9 + 2;
    if ( v18 )
    {
      if ( ((__int64)Src[1] & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (char *)Src[1] + LOWORD(Src[0]) > (void *)0x7FFFFFFF0000LL || (char *)Src[1] + LOWORD(Src[0]) < Src[1] )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(Pool2, Src[1], v9);
    *((_WORD *)Pool2 + ((unsigned __int64)v9 >> 1)) = 0;
    v3 |= 0x20u;
    v2 = 0;
    v5 = v19;
  }
  if ( !v3 )
    return 3221225485LL;
  if ( v5 )
    v3 |= 0x40u;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C252D8, 0LL);
  if ( (dword_140D05010 & 0x73) == 0 )
    v2 = sub_140985FBC();
  if ( (v2 & 0x80000000) != 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C252D8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C252D8);
    sub_1402AFC00((ULONG_PTR)&qword_140C252D8);
    v17 = KeGetCurrentThread();
    v15 = (*((_WORD *)v17 + 243))++ == 0xFFFF;
    if ( v15 && *((struct _KTHREAD **)v17 + 19) != (struct _KTHREAD *)((char *)v17 + 152) )
      KiCheckForKernelApcDelivery();
    v16 = (wchar_t *)P[1];
    if ( !P[1] )
      return v2;
  }
  else
  {
    Buffer = stru_140C251F0.Buffer;
    stru_140C251F0 = *(UNICODE_STRING *)P;
    xmmword_140C25280 = v23[0];
    xmmword_140C25290 = v23[1];
    xmmword_140C252A0 = v23[2];
    xmmword_140C252B0 = v23[3];
    dword_140D05010 = v3 | dword_140D05010 & 0xFFFFFF8E | 2;
    dword_140C252C0 = dword_140D05010;
    qword_140C25260 = (unsigned __int64)&xmmword_140C25280 & -(__int64)((dword_140D05010 & 0x10) != 0);
    qword_140C25218 = (PCUNICODE_STRING)((unsigned __int64)&stru_140C251F0 & -(__int64)((dword_140D05010 & 0x20) != 0));
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C252D8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C252D8);
    sub_1402AFC00((ULONG_PTR)&qword_140C252D8);
    v14 = KeGetCurrentThread();
    v15 = (*((_WORD *)v14 + 243))++ == 0xFFFF;
    if ( v15 && *((struct _KTHREAD **)v14 + 19) != (struct _KTHREAD *)((char *)v14 + 152) )
      KiCheckForKernelApcDelivery();
    if ( !Buffer )
      return v2;
    v16 = Buffer;
  }
  ExFreePoolWithTag(v16, 0x7452624Fu);
  return v2;
}
