/*
 * XREFs of sub_140A4AF0C @ 0x140A4AF0C
 * Callers:
 *     sub_140A48630 @ 0x140A48630 (sub_140A48630.c)
 *     sub_140A4E4B0 @ 0x140A4E4B0 (sub_140A4E4B0.c)
 *     sub_140A6BE04 @ 0x140A6BE04 (sub_140A6BE04.c)
 * Callees:
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     sub_1402DA4B0 @ 0x1402DA4B0 (sub_1402DA4B0.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     sub_14038B8A0 @ 0x14038B8A0 (sub_14038B8A0.c)
 *     sub_140399340 @ 0x140399340 (sub_140399340.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     DbgBreakPointWithStatus @ 0x140429800 (DbgBreakPointWithStatus.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     HalReturnToFirmware @ 0x14050A7E0 (HalReturnToFirmware.c)
 *     sub_140A4B4D4 @ 0x140A4B4D4 (sub_140A4B4D4.c)
 *     sub_140A4B974 @ 0x140A4B974 (sub_140A4B974.c)
 *     sub_140A4FE40 @ 0x140A4FE40 (sub_140A4FE40.c)
 *     sub_140A4FEE8 @ 0x140A4FEE8 (sub_140A4FEE8.c)
 *     sub_140A51570 @ 0x140A51570 (sub_140A51570.c)
 *     sub_140A8682C @ 0x140A8682C (sub_140A8682C.c)
 *     sub_140AADB90 @ 0x140AADB90 (sub_140AADB90.c)
 */

__int64 __fastcall sub_140A4AF0C(int a1, __int64 a2)
{
  __int64 v2; // r15
  unsigned __int8 CurrentIrql; // r13
  signed int v5; // r12d
  __int64 *v6; // rsi
  __int64 v7; // rbx
  LARGE_INTEGER PerformanceCounter; // rdi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  char v15; // bl
  char v16; // bl
  __int64 v17; // rcx
  char v18; // al
  __int64 v20; // rcx
  __int64 v21; // r9
  unsigned int v22; // ebx
  int v23; // edi
  bool v24; // zf
  unsigned __int8 v25; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v27; // r8
  int v28; // eax
  LARGE_INTEGER v29; // [rsp+30h] [rbp-D0h] BYREF
  _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-C8h] BYREF
  LARGE_INTEGER v31; // [rsp+48h] [rbp-B8h] BYREF
  struct _KDPC Dpc; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD DeferredContext[10]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD *v34; // [rsp+E0h] [rbp-20h] BYREF
  int v35; // [rsp+E8h] [rbp-18h]
  int v36; // [rsp+ECh] [rbp-14h]
  _QWORD v37[2]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v38[2]; // [rsp+100h] [rbp+0h] BYREF
  _SLIST_ENTRY v39[10]; // [rsp+110h] [rbp+10h] BYREF
  __int128 v40; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v41; // [rsp+1C0h] [rbp+C0h]

  v2 = a1;
  v29.QuadPart = 0LL;
  CurrentIrql = 0;
  Affinity = 0LL;
  v5 = -1073741823;
  memset(&Dpc, 0, 60);
  memset(DeferredContext, 0, sizeof(DeferredContext));
  LODWORD(DeferredContext[5]) = v2;
  v41 = 0LL;
  DeferredContext[0] = &v40;
  DeferredContext[4] = &xmmword_140C22440;
  v40 = 0LL;
  if ( (_DWORD)v2 != 7 )
  {
    DeferredContext[0] = (char *)&unk_140C23340 + 24 * v2;
    if ( !*(_QWORD *)(DeferredContext[0] + 8LL) )
      return 3221225664LL;
  }
  LODWORD(DeferredContext[6]) = dword_140D06884;
  HIDWORD(DeferredContext[7]) = dword_140D06884;
  LODWORD(DeferredContext[7]) = 1;
  if ( (unsigned int)(v2 - 4) > 1 )
  {
    if ( dword_140C2238C )
    {
      v20 = *(unsigned int *)(DeferredContext[0] + 16LL);
      LODWORD(v20) = v20 | 0x40000;
      *(_QWORD *)(DeferredContext[0] + 16LL) = v20;
    }
    if ( ((_DWORD)v2 == 3 || (_DWORD)v2 == 6) && a2 )
    {
      DeferredContext[3] = a2;
      DeferredContext[1] = sub_140429620;
      DeferredContext[2] = a2;
    }
  }
  memset(v39, 0, sizeof(v39));
  if ( a2 )
  {
    qword_140C54800 = DeferredContext[0];
    v6 = &qword_140C54800;
    qword_140C54808 = DeferredContext[1];
    qword_140C54810 = DeferredContext[2];
    qword_140C54818 = DeferredContext[3];
    qword_140C54820 = DeferredContext[4];
    dword_140C54828 = DeferredContext[5];
    byte_140C5482C = BYTE4(DeferredContext[5]);
    dword_140C54830 = DeferredContext[6];
    qword_140C54838 = DeferredContext[7];
    ExpInterlockedPushEntrySList(&stru_140C54840, &v39[9]);
  }
  else
  {
    Affinity.Reserved[1] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)(dword_140D0E5E0[0] >> 6);
    Affinity.Mask = 1LL << (dword_140D0E5E0[0] & 0x3F);
    Affinity.Reserved[2] = 0;
    KeSetSystemGroupAffinityThread(&Affinity, 0LL);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v21 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v21 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    KeInitializeDpc(&Dpc, sub_140A4B520, DeferredContext);
    v22 = 0;
    for ( Dpc.Importance = 2; v22 < (unsigned int)dword_140D06884; ++v22 )
    {
      if ( v22 != *((_DWORD *)KeGetCurrentPrcb() + 9) )
      {
        v23 = HIDWORD(DeferredContext[6]);
        if ( !Dpc.DpcData )
          Dpc.Number = v22 + 2048;
        KeInsertQueueDpc(&Dpc, 0LL, 0LL);
        while ( v23 == HIDWORD(DeferredContext[6]) )
          _mm_pause();
      }
    }
    v6 = DeferredContext;
  }
  sub_140A4B4D4(v6, v39, 2LL);
  sub_140A4B4D4(v6, v39, 3LL);
  if ( dword_140C227E0 == 4 )
  {
    PerformanceCounter.QuadPart = 0LL;
    v7 = 1000000LL * *((unsigned int *)KeGetCurrentPrcb() + 17);
  }
  else
  {
    v7 = qword_140D069F8;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  }
  if ( (xmmword_140D06910 & 0x8000) != 0 )
  {
    v36 = 0;
    v34 = v38;
    v38[0] = PerformanceCounter.QuadPart;
    v38[1] = v7;
    v35 = 16;
    sub_14035EDE4((__int64)&v34, 1u, 0x80008000, 0x1230u, 0x401802u);
  }
  sub_140A4B4D4(v6, v39, 4LL);
  if ( a2 )
  {
    byte_140C548B0 = 0;
    if ( (unsigned int)sub_1402DA4B0() )
    {
      LOBYTE(v9) = 1;
      sub_140A8682C(v9);
    }
  }
  byte_140C22260 = 1;
  sub_140A4B974(17LL);
  if ( *((int *)&v39[7].Next + 2) >= 0 )
  {
    *((_BYTE *)v6 + 44) = 1;
    sub_140A4B4D4(v6, v39, 12LL);
    if ( (_DWORD)v2 != 3 && (_DWORD)v2 != 6 )
      sub_14042A5E0(v11, v10);
    if ( a2 )
    {
      sub_140A4B4D4(v6, v39, 5LL);
      if ( !_bittest(&dword_140C2227C, 8u) )
        sub_140A4FEE8();
      sub_140A4B4D4(v6, v39, 10LL);
    }
    sub_140A4B974(18LL);
    sub_140A4B4D4(v6, v39, 6LL);
    sub_140A4B974(26LL);
    v5 = *((_DWORD *)&v39[7].Next + 2);
    sub_14038B8A0();
    sub_14042A5E0(v13, v12);
    if ( a2 && v5 == 1073742484 )
      sub_140A4B4D4(v6, v39, 7LL);
    sub_140A4B4D4(v6, v39, 8LL);
    if ( a2 )
    {
      if ( v5 == 1073742484 )
      {
        sub_140A4B974(27LL);
        sub_140A4B4D4(v6, v39, 9LL);
        sub_140A4B974(32LL);
      }
      sub_140A51570(qword_140C22BE8, 19LL);
      v14 = *(_QWORD *)(a2 + 304);
      if ( v14 )
        sub_140A51570(v14, (unsigned int)(16 * *(_DWORD *)(a2 + 256)));
      sub_140A4B4D4(v6, v39, 10LL);
      if ( !_bittest(&dword_140C2227C, 8u) )
      {
        sub_140A4FEE8();
        sub_140A4FE40(0LL);
      }
      *(_BYTE *)(a2 + 3) = 0;
      sub_140A4B4D4(v6, v39, 11LL);
    }
    v15 = dword_140CF7060;
    if ( (dword_140CF7060 & 1) != 0 && (_BYTE)KdDebuggerEnabled )
      DbgBreakPointWithStatus(v5);
    if ( (v15 & 2) != 0 )
      KeBugCheckEx(0xA0u, 0xAuLL, 0LL, 0LL, 0LL);
    byte_140C22450 = 0;
    if ( v5 >= 0 )
    {
      ++dword_140C22284;
      dword_140C231B0 = 0;
      dword_140C223B4 = 0;
      dword_140C223B0 = 0;
      dword_140C226E8 = 1;
      if ( byte_140C223A8 )
      {
        _InterlockedOr(&dword_140C223B4, 1u);
        _InterlockedOr(&dword_140C223B0, 0x19u);
      }
    }
    *((_BYTE *)v6 + 44) = 0;
    sub_140A4B4D4(v6, v39, 12LL);
  }
  if ( a2 )
  {
    if ( v5 == -1073741632 )
    {
      if ( (dword_140C22278 & 0x1000) == 0 )
      {
        while ( 1 )
          ;
      }
      *(_BYTE *)a2 = 1;
    }
    else
    {
      byte_140C22280 = 0;
      *(_DWORD *)(a2 + 188) = v5;
      if ( !*(_BYTE *)a2 )
      {
        if ( (unsigned int)sub_1402DA4B0() )
          sub_140A8682C(0LL);
        if ( off_140C04340 == (_UNKNOWN *)&off_140C04340 )
          byte_140C548B0 = 1;
        *(_DWORD *)(a2 + 188) = 1073742484;
        goto LABEL_49;
      }
    }
    v24 = qword_140C233C0 == 0;
    *v6 = (__int64)&unk_140C233B8;
    v6[3] = 0LL;
    if ( !v24 )
      sub_140A4B4D4(v6, v39, 6LL);
    HalReturnToFirmware(3);
  }
LABEL_49:
  sub_14038B8A0();
  sub_140399340();
  sub_140A4B974(33LL);
  byte_140C22260 = 0;
  sub_140A4B4D4(v6, v39, 13LL);
  if ( v5 >= 0 )
  {
    if ( dword_140C227E0 != 4 || byte_140C223A8 )
    {
      v16 = 0;
      v29 = KeQueryPerformanceCounter(0LL);
      qword_140C22E08 = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - qword_140C1D010;
    }
    else
    {
      v16 = 1;
      if ( !(unsigned __int8)sub_14042A5E0(&v29, 0LL) )
        v29.QuadPart = 0LL;
    }
    if ( (xmmword_140D06910 & 0x8000) != 0 )
    {
      v31 = v29;
      v37[1] = 8LL;
      v37[0] = &v31;
      sub_14035EDE4((__int64)v37, 1u, 0x80008000, 0x1231u, 0x401802u);
    }
    if ( v16 )
    {
      v29.QuadPart = v29.QuadPart
                   / (1000
                    * (unsigned __int64)*((unsigned int *)KeGetCurrentPrcb() + 17))
                   * (qword_140D069F8
                    / 0x3E8uLL);
      qword_140C22CE8 = v29.QuadPart - PerformanceCounter.QuadPart;
    }
  }
  sub_140A4B4D4(v6, v39, 14LL);
  sub_140A4B4D4(v6, v39, 15LL);
  sub_140A4B4D4(v6, v39, 16LL);
  if ( *((int *)&v39[7].Next + 2) >= 0 )
  {
    v17 = *v6;
    *((_DWORD *)&v39[7].Next + 2) = 0;
    v18 = *(_BYTE *)(v17 + 5);
    if ( v18 != -1 )
      *(_BYTE *)(v17 + 5) = v18 + 1;
  }
  if ( a2 )
  {
    if ( v5 == 1073742484 && !byte_140C22C01 )
    {
      if ( byte_140C547E0 )
        sub_140AADB90(qword_140C547D8, 0LL);
    }
  }
  else
  {
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v25 = KeGetCurrentIrql();
        if ( v25 <= 0xFu && CurrentIrql <= 0xFu && v25 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v27 = *((_QWORD *)CurrentPrcb + 4375);
          v28 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v24 = (v28 & *(_DWORD *)(v27 + 20)) == 0;
          *(_DWORD *)(v27 + 20) &= v28;
          if ( v24 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  return *((unsigned int *)&v39[7].Next + 2);
}
