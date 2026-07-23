/*
 * XREFs of sub_1402DA0F0 @ 0x1402DA0F0
 * Callers:
 *     sub_14063A300 @ 0x14063A300 (sub_14063A300.c)
 *     sub_140A6F7A0 @ 0x140A6F7A0 (sub_140A6F7A0.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     sub_14029B8BC @ 0x14029B8BC (sub_14029B8BC.c)
 *     sub_1402DA448 @ 0x1402DA448 (sub_1402DA448.c)
 *     sub_1402DA760 @ 0x1402DA760 (sub_1402DA760.c)
 *     sub_1402DA7A8 @ 0x1402DA7A8 (sub_1402DA7A8.c)
 *     sub_1402DA81C @ 0x1402DA81C (sub_1402DA81C.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402F4410 (KeRemoveProcessorAffinityEx.c)
 *     sub_140300030 @ 0x140300030 (sub_140300030.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     KeStallExecutionProcessor @ 0x140303560 (KeStallExecutionProcessor.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 */

char sub_1402DA0F0()
{
  unsigned int v0; // r15d
  unsigned int v1; // ebx
  char v2; // r15
  unsigned __int8 CurrentIrql; // r14
  unsigned __int64 v4; // r10
  int v5; // esi
  char v6; // bp
  unsigned int v7; // esi
  unsigned int *CurrentPrcb; // rdi
  __int64 v9; // rcx
  int v10; // esi
  __int64 v11; // rdx
  signed __int64 v12; // rbx
  LARGE_INTEGER v13; // rax
  unsigned __int64 v14; // r8
  __int64 v16; // r9
  int v17; // [rsp+20h] [rbp-168h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+28h] [rbp-160h] BYREF
  __int128 v19; // [rsp+30h] [rbp-158h] BYREF
  __int64 v20; // [rsp+40h] [rbp-148h]
  _QWORD v21[34]; // [rsp+50h] [rbp-138h] BYREF
  unsigned int v22; // [rsp+180h] [rbp-8h]

  memset(v21, 0, 0x108uLL);
  v17 = 0;
  PerformanceFrequency.QuadPart = 0LL;
  v0 = v22;
  v19 = 0LL;
  v20 = 0LL;
  _disable();
  v1 = (unsigned __int8)v20 + 1;
  v2 = (v20 + 1) & (v0 >> 9);
  CurrentIrql = KeGetCurrentIrql();
  v4 = (unsigned int)(unsigned __int8)v20 + 15;
  __writecr8(v4);
  if ( dword_140D06B08
    && ((unsigned __int8)dword_140D06B08 & (unsigned __int8)v1) != 0
    && CurrentIrql <= (unsigned __int8)(v20 + 15) )
  {
    v16 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v16 + 20) |= (-1 << (v1 + CurrentIrql)) & 0xFFFC;
  }
  dword_140C2B830 = 4;
  if ( ((unsigned __int8)v4 & (unsigned __int8)*((_DWORD *)KeGetCurrentPrcb() + 2914)) != 4 )
  {
LABEL_3:
    v5 = 750000;
    do
    {
      v6 = sub_1402DA448(&qword_140D31280);
      if ( v6 )
        break;
      if ( qword_140D312C0 )
        goto LABEL_3;
      KeStallExecutionProcessor(4u);
      --v5;
    }
    while ( v5 );
    v7 = v6 != 0 ? 4 * (750000 - v5) : 0;
    KeAcquireSpinLockAtDpcLevel(&qword_140D312C0);
    if ( v6 || ((unsigned __int8)dword_140C2B830 & (unsigned __int8)v1) == 0 )
      byte_140C4E930 = v6;
    else
      dword_140C2B830 |= 8u;
    if ( v7 > dword_140C2AD6C )
      dword_140C2AD6C = v7;
    CurrentPrcb = (unsigned int *)KeGetCurrentPrcb();
    sub_14029B8BC((__int64)CurrentPrcb);
    LOBYTE(v9) = v1;
    sub_14042A5E0(v9, 0LL);
    byte_140C2B1B0 = 0;
    if ( ((unsigned int)dword_140D06884 > v1 || CurrentPrcb[9]) && !byte_140C22260 )
    {
      qword_140C2AD80 = (__int64)CurrentPrcb;
      CurrentPrcb[2914] = 4;
      sub_1402DA760(CurrentPrcb);
      if ( !dword_140C0B798 || dword_140CE204C )
        v10 = 20000;
      else
        v10 = 20000 * dword_140C0B798;
      CurrentPrcb[8104] = v1;
      LODWORD(v21[0]) = 2097153;
      memset((char *)v21 + 4, 0, 0x104uLL);
      sub_140300030(v21, 32LL, &dword_140D06E40);
      KeRemoveProcessorAffinityEx(v21, CurrentPrcb[9]);
      if ( !byte_140C2A950 && (dword_140C31E20 & 3) == 3 )
        LOBYTE(v1) = 0;
      LOBYTE(v11) = v1;
      sub_1402DA81C(v21, v11);
      *((_QWORD *)&v19 + 1) = v21[1];
      *(_QWORD *)&v19 = v21;
LABEL_18:
      while ( !(unsigned int)KeEnumerateNextProcessor(&v17, (unsigned __int16 **)&v19) )
      {
        v12 = qword_140D088C0[v17];
        while ( *(_DWORD *)(v12 + 11656) != 2 )
        {
          if ( !v10 )
          {
            dword_140C2B830 |= 2u;
            _InterlockedCompareExchange64(&qword_140C2AD90, v12, 0LL);
            goto LABEL_18;
          }
          KeStallExecutionProcessor(0x32u);
          --v10;
        }
      }
    }
    byte_140C2AD68 = CurrentIrql;
    if ( !byte_140C22260 && (unsigned __int8)sub_1402DA7A8() )
    {
      v13 = KeQueryPerformanceCounter(&PerformanceFrequency);
      v14 = MEMORY[0xFFFFF78000000008]
          + 10000000 * (v13.QuadPart - MEMORY[0xFFFFF78000000350]) / (unsigned __int64)PerformanceFrequency.LowPart;
      MEMORY[0xFFFFF78000000010] = HIDWORD(v14);
      MEMORY[0xFFFFF78000000008] = v14;
      if ( DesiredTime )
      {
        dword_140C4F028 = DesiredTime * (v14 / DesiredTime + 1) - v14;
        MEMORY[0xFFFFF78000000328] = (v14 / DesiredTime) >> 32;
        MEMORY[0xFFFFF78000000320] = v14 / DesiredTime;
      }
      ++MEMORY[0xFFFFF78000000340];
    }
  }
  return v2;
}
