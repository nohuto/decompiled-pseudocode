/*
 * XREFs of sub_140421050 @ 0x140421050
 * Callers:
 *     sub_140420C10 @ 0x140420C10 (sub_140420C10.c)
 * Callees:
 *     sub_140223A20 @ 0x140223A20 (sub_140223A20.c)
 *     sub_140223B10 @ 0x140223B10 (sub_140223B10.c)
 *     sub_14024B080 @ 0x14024B080 (sub_14024B080.c)
 *     sub_140294110 @ 0x140294110 (sub_140294110.c)
 *     sub_1402B9660 @ 0x1402B9660 (sub_1402B9660.c)
 *     sub_14045B710 @ 0x14045B710 (sub_14045B710.c)
 *     sub_140569E70 @ 0x140569E70 (sub_140569E70.c)
 */

char __fastcall sub_140421050()
{
  __int64 v0; // rbp
  __int64 v1; // rsi
  unsigned __int64 v2; // rcx
  __int64 v3; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v5; // rax
  int v6; // r11d
  _DWORD *v7; // r10
  __int64 v8; // r8
  __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // r12
  bool v13; // zf
  int v14; // edi
  __int64 v15; // r12
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  int v18; // edx
  unsigned __int8 v20; // [rsp+20h] [rbp-48h]
  _BYTE v21[64]; // [rsp+28h] [rbp-40h] BYREF

  v2 = *(unsigned __int8 *)(v1 + 92);
  if ( dword_140D06B08 )
  {
    LOBYTE(v3) = sub_140569E70(v2);
  }
  else
  {
    LOBYTE(v3) = KeGetCurrentIrql();
    __writecr8(v2);
  }
  *(_BYTE *)(v0 - 87) = v3;
  *(_DWORD *)(v0 - 96) = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( ++*((_BYTE *)CurrentPrcb + 32) == 1 )
  {
    v5 = __rdtsc();
    v6 = *((_DWORD *)CurrentPrcb + 8824);
    v7 = (_DWORD *)((char *)CurrentPrcb + 4 * ((unsigned __int16)(v6 & 0x7FF) >> 5) + 35300);
    *v7 = v5 ^ __ROR4__(*v7, 5);
    *((_DWORD *)CurrentPrcb + 8824) = ++v6;
    if ( (v6 & 0x3FF) == 0 )
      *(_DWORD *)(v0 - 96) = 1;
    v8 = *((_QWORD *)CurrentPrcb + 1);
    v3 = v5 - *((_QWORD *)CurrentPrcb + 4144);
    *(_QWORD *)(v8 + 72) += v3;
    v9 = *(unsigned int *)(v8 + 80);
    *((_QWORD *)CurrentPrcb + 4144) += v3;
    v10 = v3 + v9;
    v11 = v10;
    if ( HIDWORD(v10) )
      v11 = -1;
    *(_DWORD *)(v8 + 80) = v11;
    if ( (*(_BYTE *)(v8 + 2) & 0xBE) != 0 )
      LOBYTE(v3) = sub_1402B9660((__int64)KeGetCurrentPrcb(), v8, v3);
  }
  _enable();
  if ( *(_DWORD *)(v0 - 96) )
    LOBYTE(v3) = sub_14024B080((__int64)KeGetCurrentPrcb());
  v12 = v1 + 8;
  v13 = (WORD2(xmmword_140D06900) & 0x4000) == 0;
  *(_BYTE *)(v0 + 243) = (WORD2(xmmword_140D06900) & 0x4000) != 0;
  if ( !v13 )
    LOBYTE(v3) = sub_140223A20((unsigned __int64)v21, 0x20004000uLL);
  while ( 2 )
  {
    v14 = 0;
    do
    {
      v15 = v12 - 8;
      if ( (*(_DWORD *)(v15 + 104) & 1) != 0 )
      {
        v20 = 0;
      }
      else
      {
        v16 = *(unsigned __int8 *)(v15 + 93);
        if ( !(_BYTE)v16 )
        {
          LOBYTE(v3) = sub_14045B710(v15);
          goto LABEL_29;
        }
        if ( (_BYTE)v16 != *(_BYTE *)(v1 + 92) )
          __writecr8(v16);
        LOBYTE(v3) = sub_140294110(v15, 1);
        v20 = v3;
        v17 = *(unsigned __int8 *)(v1 + 92);
        if ( (_BYTE)v17 != *(_BYTE *)(v15 + 93) )
          __writecr8(v17);
      }
      if ( *(_BYTE *)(v0 + 243) )
      {
        v18 = v20;
        BYTE1(v18) = *(_BYTE *)(v15 + 88);
        sub_140223B10(v15, v18, (__int64)v21);
        LOBYTE(v3) = sub_140223A20((unsigned __int64)v21, 0x20004000uLL);
      }
      if ( v20 )
      {
        if ( *(_WORD *)(v15 + 108) != 1 )
          goto LABEL_29;
        ++v14;
      }
      v12 = *(_QWORD *)(v15 + 8);
    }
    while ( v12 != v1 + 8 );
    if ( v14 )
      continue;
    break;
  }
LABEL_29:
  _disable();
  return v3;
}
