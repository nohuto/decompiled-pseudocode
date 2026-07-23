/*
 * XREFs of NaptrDnsRecordConvert_2 @ 0x14084B698
 * Callers:
 *     sub_14084A7D0 @ 0x14084A7D0 (sub_14084A7D0.c)
 *     sub_14084AA8C @ 0x14084AA8C (sub_14084AA8C.c)
 *     sub_14096E2E0 @ 0x14096E2E0 (sub_14096E2E0.c)
 * Callees:
 *     sub_14025F1A4 @ 0x14025F1A4 (sub_14025F1A4.c)
 *     RtlSetAllBits @ 0x140262CA0 (RtlSetAllBits.c)
 *     sub_1402820F4 @ 0x1402820F4 (sub_1402820F4.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     InitializeSListHead @ 0x1402A05A0 (InitializeSListHead.c)
 *     RtlClearBits @ 0x140347580 (RtlClearBits.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1403CF824 @ 0x1403CF824 (sub_1403CF824.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14084BA14 @ 0x14084BA14 (sub_14084BA14.c)
 *     sub_14096F074 @ 0x14096F074 (sub_14096F074.c)
 */

_BYTE *__fastcall NaptrDnsRecordConvert_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        UNICODE_STRING *a6,
        int a7,
        char a8)
{
  _BYTE *v11; // rax
  _BYTE *v12; // r14
  UNICODE_STRING *v13; // rcx
  __int64 v14; // rdi
  unsigned int v15; // ebx
  PVOID v16; // rax
  unsigned int v17; // r12d
  __int64 v18; // rax
  __int64 v19; // rsi
  _QWORD *v20; // rax
  _QWORD *v21; // rdi
  int v22; // ecx
  int v23; // eax
  ULONG_PTR v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdi
  _RTL_BITMAP *v27; // rdi
  PVOID v28; // rax
  __int64 v31; // [rsp+28h] [rbp-160h]
  _BYTE v32[288]; // [rsp+30h] [rbp-158h] BYREF

  memset(v32, 0, sizeof(v32));
  v11 = sub_1402828F0(64, 0x120uLL, 0x20206D4Du);
  v12 = v32;
  if ( v11 )
    v12 = v11;
  *((_QWORD *)v12 + 1) = a5;
  *((_QWORD *)v12 + 7) = a2;
  *((_QWORD *)v12 + 3) = a4 - 2;
  *((_QWORD *)v12 + 6) = a4 - 2;
  *((_QWORD *)v12 + 28) = a3;
  *(_QWORD *)v12 = a4;
  *((_QWORD *)v12 + 2) = a4;
  *((_DWORD *)v12 + 31) = dword_140D051CC;
  *((_DWORD *)v12 + 34) = 4 * dword_140D051CC;
  *((_QWORD *)v12 + 31) = a1;
  InitializeSListHead((PSLIST_HEADER)v12 + 5);
  v13 = (UNICODE_STRING *)(v12 + 96);
  *((_QWORD *)v12 + 30) = 0LL;
  if ( a6 )
    *v13 = *a6;
  else
    RtlInitUnicodeString(v13, 0LL);
  if ( a7 < 0 )
  {
    *((_WORD *)v12 + 102) |= 0xB0u;
  }
  else if ( (a8 & 2) != 0 )
  {
    *((_WORD *)v12 + 102) |= 0x60u;
  }
  else if ( (a8 & 4) != 0 )
  {
    *((_WORD *)v12 + 102) |= 0x8A0u;
    *((_QWORD *)v12 + 32) = 0LL;
    *((_QWORD *)v12 + 33) = 0LL;
  }
  else
  {
    if ( (a7 & 0x40000000) != 0 )
      *((_WORD *)v12 + 102) |= 0x20u;
    if ( (a7 & 0x2000000) != 0 )
      *((_WORD *)v12 + 102) |= 0x80u;
  }
  if ( (a7 & 0x1000000) != 0 )
    *((_WORD *)v12 + 102) |= 0x400u;
  if ( (a8 & 1) != 0 )
    *((_WORD *)v12 + 102) |= 0x200u;
  if ( (a7 & 0x3C000000) != 0 )
    *((_DWORD *)v12 + 50) = (a7 & 0x3C000000u) >> 26;
  if ( v12 == v32 )
    goto LABEL_47;
  v14 = (unsigned int)dword_140D051CC;
  v31 = (unsigned int)dword_140D051CC;
  v15 = 2;
  if ( a7 < 0 )
  {
    v15 = 1;
  }
  else
  {
    if ( (a8 & 2) != 0 )
      goto LABEL_29;
    if ( (a8 & 4) != 0 )
    {
      v15 = dword_140D06884;
      if ( !(_DWORD)dword_140D06884 )
        goto LABEL_29;
    }
  }
  v16 = sub_1402828F0(64, 8LL * v15, 0x20206D4Du);
  *((_QWORD *)v12 + 8) = v16;
  if ( !v16 )
    goto LABEL_47;
  v17 = 0;
  if ( v15 )
  {
    v18 = a1;
    v19 = 0LL;
    do
    {
      v20 = sub_1402820F4(v18, v14, 0);
      v21 = v20;
      if ( !v20 )
        goto LABEL_47;
      memset(v20, 0, 0x108uLL);
      v18 = a1;
      ++v17;
      v21[24] = a1;
      v21[18] = v12;
      *(_QWORD *)(v19 + *((_QWORD *)v12 + 8)) = v21;
      v19 += 8LL;
      ++*((_DWORD *)v12 + 18);
      v14 = v31;
    }
    while ( v17 < v15 );
  }
LABEL_29:
  v22 = 0;
  v23 = 0;
  if ( (a8 & 4) == 0 )
  {
    LOBYTE(v22) = (a8 & 2) == 0;
    v23 = v22;
  }
  if ( v23 )
  {
    v24 = sub_1403CF824(*((_DWORD *)v12 + 2));
    if ( !v24 )
      goto LABEL_47;
    *((_QWORD *)v12 + 27) = v24;
  }
  v25 = sub_14084BA14(*((unsigned int *)v12 + 2));
  v26 = v25;
  if ( v25 )
  {
    *((_QWORD *)v12 + 14) = v25;
    RtlSetAllBits((PRTL_BITMAP)(v25 + 8));
    RtlClearBits((PRTL_BITMAP)(v26 + 8), 2u, *(_DWORD *)v12 - 2);
    v27 = (_RTL_BITMAP *)(v26 + 24);
    RtlSetAllBits(v27);
    if ( (a8 & 2) == 0 )
      RtlClearBits(v27, 2u, *(_DWORD *)v12 - 2);
    *((_DWORD *)v12 + 30) = 2;
    if ( (a8 & 2) != 0 )
      return v12;
    v28 = sub_1402828F0(64, 0x7000uLL, 0x6342694Du);
    *((_QWORD *)v12 + 24) = v28;
    if ( v28 )
    {
      sub_14025F1A4((__int64)v12);
      return v12;
    }
  }
LABEL_47:
  sub_14096F074(v12);
  return 0LL;
}
