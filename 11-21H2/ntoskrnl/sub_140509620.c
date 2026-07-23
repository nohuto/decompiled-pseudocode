/*
 * XREFs of sub_140509620 @ 0x140509620
 * Callers:
 *     sub_14051F570 @ 0x14051F570 (sub_14051F570.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_140345190 @ 0x140345190 (sub_140345190.c)
 *     sub_1403AAE50 @ 0x1403AAE50 (sub_1403AAE50.c)
 *     KeIpiGenericCall @ 0x1403B4600 (KeIpiGenericCall.c)
 *     WheaLogInternalEvent @ 0x1403D2A90 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140509880 @ 0x140509880 (sub_140509880.c)
 */

char sub_140509620()
{
  KPCR *Pcr; // rax
  __int64 v1; // rdi
  __int64 v2; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned int v4; // eax
  unsigned __int8 CurrentIrql; // si
  __int64 v6; // r9
  __int64 v7; // rbp
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v10; // r9
  int v11; // eax
  bool v12; // zf
  __int128 Src; // [rsp+30h] [rbp-38h] BYREF
  __int128 v15; // [rsp+40h] [rbp-28h]

  LOBYTE(Pcr) = byte_140C54998;
  Src = 0LL;
  v15 = 0LL;
  if ( !byte_140C54998 )
    return (char)Pcr;
  Pcr = KeGetPcr();
  v1 = *(_QWORD *)&Pcr->HalReserved[6];
  if ( !v1 )
    return (char)Pcr;
  while ( 1 )
  {
    v2 = *(_QWORD *)(v1 + 172);
    if ( *(_QWORD *)(v1 + 16) )
    {
      if ( *(_QWORD *)(v1 + 24) )
        break;
    }
LABEL_25:
    v1 = *(_QWORD *)(v1 + 184);
    if ( !v1 )
      return (char)Pcr;
  }
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  ++*(_DWORD *)(v1 + 124);
  if ( PerformanceCounter.QuadPart - *(_QWORD *)(v1 + 112) >= qword_140C54990 )
  {
    *(LARGE_INTEGER *)(v1 + 112) = PerformanceCounter;
    v4 = 1;
    *(_DWORD *)(v1 + 120) = 1;
  }
  else
  {
    v4 = ++*(_DWORD *)(v1 + 120);
  }
  if ( v4 <= dword_140C549A4 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xEuLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v6 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v6 + 20) |= (-1 << (CurrentIrql + 1)) & 0x7FFC;
    }
    if ( !*(_BYTE *)(v1 + 128) )
    {
      v7 = *(_QWORD *)(v1 + 24);
      if ( sub_1403AAE50() == 1 )
        sub_140509880(v7, v2);
      sub_140345190(v1 + 48, 0LL, 0LL, 0LL, 0);
    }
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v8 = KeGetCurrentIrql();
        if ( v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v10 = *((_QWORD *)CurrentPrcb + 4375);
          v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v12 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
          *(_DWORD *)(v10 + 20) &= v11;
          if ( v12 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    LOBYTE(Pcr) = CurrentIrql;
    __writecr8(CurrentIrql);
    goto LABEL_25;
  }
  LODWORD(Pcr) = _InterlockedIncrement(&dword_140D014B4);
  if ( (_DWORD)Pcr == 1 )
  {
    *(_QWORD *)&Src = 0x1674C6857LL;
    *((_QWORD *)&Src + 1) = 0x100000020LL;
    *(_QWORD *)&v15 = 0x80000003204C4148uLL;
    *((_QWORD *)&v15 + 1) = 2LL;
    WheaLogInternalEvent(&Src);
    KeIpiGenericCall(sub_140509C90, 0LL);
    LOBYTE(Pcr) = sub_140345190(v1 + 48, 0LL, 0LL, 0LL, 0);
  }
  return (char)Pcr;
}
