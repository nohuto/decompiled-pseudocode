/*
 * XREFs of sub_140586E78 @ 0x140586E78
 * Callers:
 *     sub_14025C1B4 @ 0x14025C1B4 (sub_14025C1B4.c)
 *     sub_14096A988 @ 0x14096A988 (sub_14096A988.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140215340 (MmMapIoSpaceEx.c)
 *     MmUnmapVideoDisplay @ 0x140215660 (MmUnmapVideoDisplay.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140268284 @ 0x140268284 (sub_140268284.c)
 *     sub_14026A574 @ 0x14026A574 (sub_14026A574.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_1402C6260 @ 0x1402C6260 (sub_1402C6260.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_140339C20 @ 0x140339C20 (sub_140339C20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140424F50 @ 0x140424F50 (sub_140424F50.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405C041C @ 0x1405C041C (sub_1405C041C.c)
 *     sub_1405C04D4 @ 0x1405C04D4 (sub_1405C04D4.c)
 *     sub_1405C0634 @ 0x1405C0634 (sub_1405C0634.c)
 */

void __fastcall sub_140586E78(int a1)
{
  unsigned __int64 v2; // r15
  _QWORD *v3; // rax
  signed __int32 v4; // eax
  unsigned __int8 CurrentIrql; // r14
  unsigned __int64 v6; // rsi
  unsigned __int64 *v7; // rdi
  __int64 v8; // r9
  unsigned __int64 v9; // rbx
  int v10; // r12d
  bool v11; // zf
  _QWORD *v12; // rax
  BOOL v13; // esi
  unsigned __int8 v14; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // [rsp+28h] [rbp-E0h]
  __int128 v19; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v20[28]; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v21[16]; // [rsp+128h] [rbp+20h] BYREF

  memset(v20, 0, 0xD8uLL);
  v19 = 0LL;
  memset(v21, 0, sizeof(v21));
  v2 = (unsigned __int64)(a1 & 0x3FFFFF) << 18;
  v3 = sub_1402C1550(v2);
  sub_140339C20((char *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1664LL), *((_DWORD *)v3 + 2) + 1, (__int64)&v19);
  v4 = _InterlockedExchangeAdd((volatile signed __int32 *)v19, 1u);
  v18 = 0LL;
  CurrentIrql = 17;
  if ( (unsigned int)sub_14026A574((__int64)v21, DWORD2(v19) & (unsigned int)v4 | HIDWORD(v19), 1) )
  {
    v6 = sub_1402C6260(v21, 0, 0x40000LL, 0);
    v7 = (unsigned __int64 *)(((v6 >> 27) & 0x1FFFF8) - 0x90482600000LL);
  }
  else
  {
    v7 = 0LL;
    v6 = MmMapIoSpaceEx(v2 << 12, 0x40000000LL, 4u);
    if ( v6 )
      goto LABEL_20;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v8 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v8 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v18 = *((_QWORD *)KeGetCurrentPrcb() + 4199);
    v6 = sub_1402C6260((unsigned __int64 *)(v18 + 12352), 0, 0x40000LL, 0);
    v7 = (unsigned __int64 *)(((v6 >> 27) & 0x1FFFF8) - 0x90482600000LL);
    *(_QWORD *)(v18 + 12344) = v7;
  }
  if ( !v7 )
    goto LABEL_20;
  v9 = sub_1402CBD10((unsigned __int64)v7, v2, -2080374780);
  v10 = 0;
  if ( sub_140317A80((unsigned __int64)v7) )
  {
    if ( (unsigned int)sub_140229550() )
    {
      v10 = 1;
      if ( !HIBYTE(word_140C51864) )
      {
        v11 = (v9 & 1) == 0;
        goto LABEL_16;
      }
    }
    else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
    {
      v11 = (v9 & 1) == 0;
LABEL_16:
      if ( !v11 )
        v9 |= 0x8000000000000000uLL;
    }
  }
  *v7 = v9;
  if ( v10 )
    sub_1402294F0((__int64)v7, v9);
LABEL_20:
  if ( KeGetCurrentIrql() >= 2u || (KeGetPcr()[36].Unused0[2] & 0x10001) != 0 )
  {
    sub_140424F50((__m128i *)v6, 0x40000000uLL);
  }
  else
  {
    v12 = sub_1402C1550(v2);
    sub_1405C04D4(v20, *((unsigned int *)v12 + 2), 1LL);
    LODWORD(v20[23]) |= 8u;
    v20[0] = v2;
    v20[1] = 0x40000LL;
    v20[20] = v6;
    sub_1405C0634(v20);
    sub_1405C041C(v20);
  }
  if ( v7 )
  {
    v13 = 0;
    if ( sub_140317A80((unsigned __int64)v7) )
      v13 = sub_140229550() != 0;
    *v7 = 0LL;
    if ( v13 )
      sub_1402294F0((__int64)v7, 0LL);
    if ( CurrentIrql == 17 )
    {
      sub_140268284((__int64)v21);
    }
    else
    {
      *(_QWORD *)(v18 + 12344) = 0LL;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v14 = KeGetCurrentIrql();
          if ( v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v16 = *((_QWORD *)CurrentPrcb + 4375);
            v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v11 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
            *(_DWORD *)(v16 + 20) &= v17;
            if ( v11 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
  }
  else
  {
    MmUnmapVideoDisplay((PVOID)v6, 0x40000000uLL);
  }
}
