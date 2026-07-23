/*
 * XREFs of sub_140B1A290 @ 0x140B1A290
 * Callers:
 *     sub_140AFCEF0 @ 0x140AFCEF0 (sub_140AFCEF0.c)
 * Callees:
 *     KeGenericCallDpc @ 0x140217420 (KeGenericCallDpc.c)
 *     sub_1403CB204 @ 0x1403CB204 (sub_1403CB204.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 */

char sub_140B1A290()
{
  unsigned __int64 v0; // rbp
  unsigned __int64 v1; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v3; // r10
  unsigned __int8 v4; // r11
  __int64 v5; // r9
  unsigned __int64 v6; // rbx
  unsigned int v7; // ecx
  char v8; // cl
  unsigned __int64 v9; // rdx
  int v10; // eax
  unsigned int v12; // ecx
  __int64 v13; // r9
  unsigned __int8 v14; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v16; // r8
  int v17; // eax
  bool v18; // zf
  _DWORD v19[16]; // [rsp+60h] [rbp+0h] BYREF

  v0 = (unsigned __int64)v19 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_DWORD *)((unsigned __int64)v19 & 0xFFFFFFFFFFFFFFC0uLL) = 0;
  memset((void *)(((unsigned __int64)v19 & 0xFFFFFFFFFFFFFFC0uLL) + 64), 0, 0xC0uLL);
  v1 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v13 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v13 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  do
    v1 += sub_1403CB204((signed __int64 *)(v0 + 64));
  while ( v5 != 1 );
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v14 = KeGetCurrentIrql();
      if ( v14 <= v4 && CurrentIrql <= v4 && v14 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v16 = *((_QWORD *)CurrentPrcb + 4375);
        v17 = ~(unsigned __int16)(v3 << (CurrentIrql + 1));
        v18 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
        *(_DWORD *)(v16 + 20) &= v17;
        if ( v18 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  v6 = v1 >> 10;
  KeGenericCallDpc((__int64)sub_1403CB160, v0 + 64);
  if ( *(_QWORD *)(((unsigned __int64)v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0)
     / 1024LL
     / (unsigned __int64)*(int *)(((unsigned __int64)v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8) < 4 * v6 )
  {
    v10 = -1;
    byte_140D05017 = -1;
    dword_140D05104 = -1;
  }
  else
  {
    if ( HIDWORD(v6) )
    {
      _BitScanReverse(&v12, HIDWORD(v6));
      v7 = v12 + 32;
    }
    else
    {
      _BitScanReverse(&v7, v6);
    }
    if ( v7 < 2 )
      v8 = 0;
    else
      v8 = v7 - 2;
    byte_140D05017 = v8;
    v9 = (v6 + (v6 >> 2)) << 7 >> v8;
    if ( v9 > 0xFFFFFFFF )
      LODWORD(v9) = -1;
    v10 = 15728640;
    dword_140D05104 = v9;
  }
  dword_140D0519C = v10;
  return 1;
}
