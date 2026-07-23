/*
 * XREFs of sub_1403B043C @ 0x1403B043C
 * Callers:
 *     sub_140A500C0 @ 0x140A500C0 (sub_140A500C0.c)
 *     sub_140A54BA0 @ 0x140A54BA0 (sub_140A54BA0.c)
 *     sub_140A62458 @ 0x140A62458 (sub_140A62458.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_1402520D4 @ 0x1402520D4 (sub_1402520D4.c)
 *     sub_140252134 @ 0x140252134 (sub_140252134.c)
 *     sub_140252164 @ 0x140252164 (sub_140252164.c)
 *     sub_140252344 @ 0x140252344 (sub_140252344.c)
 *     sub_140252380 @ 0x140252380 (sub_140252380.c)
 *     sub_1403B07C8 @ 0x1403B07C8 (sub_1403B07C8.c)
 *     sub_1403D59D4 @ 0x1403D59D4 (sub_1403D59D4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140510F68 @ 0x140510F68 (sub_140510F68.c)
 *     sub_14051E038 @ 0x14051E038 (sub_14051E038.c)
 *     sub_140A61798 @ 0x140A61798 (sub_140A61798.c)
 */

__int64 sub_1403B043C()
{
  unsigned __int8 v0; // al
  struct _KPRCB *CurrentPrcb; // r15
  ULONG_PTR v2; // rsi
  unsigned __int64 v3; // r12
  __int64 v4; // r8
  unsigned int v5; // ecx
  __int64 v6; // rdi
  char v7; // cl
  int v8; // eax
  int v9; // eax
  unsigned int v10; // r14d
  int v11; // ebx
  int v12; // ecx
  int v13; // ebx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rcx
  ULONG_PTR *v20; // r14
  int v21; // eax
  __int64 v22; // rdx
  int v23; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v25; // r10
  __int64 v26; // r9
  int v27; // eax
  bool v28; // zf
  __int64 v29; // [rsp+48h] [rbp-59h] BYREF
  unsigned int v30; // [rsp+50h] [rbp-51h]
  __int128 v31; // [rsp+58h] [rbp-49h] BYREF
  __int128 v32; // [rsp+68h] [rbp-39h] BYREF
  __int128 v33; // [rsp+78h] [rbp-29h]
  __int64 v34; // [rsp+88h] [rbp-19h]
  __int128 v35; // [rsp+90h] [rbp-11h] BYREF
  __int128 *v36; // [rsp+A0h] [rbp-1h]
  __int128 v37; // [rsp+A8h] [rbp+7h] BYREF
  __int128 v38; // [rsp+B8h] [rbp+17h] BYREF

  v35 = 0LL;
  LODWORD(v36) = 0;
  v38 = 0LL;
  v29 = 0LL;
  v31 = 0LL;
  v34 = 0LL;
  v32 = 0LL;
  v30 = 0;
  v33 = 0LL;
  v37 = 0LL;
  v0 = sub_140252344(&qword_140C4BEE8);
  CurrentPrcb = KeGetCurrentPrcb();
  v2 = 0LL;
  v3 = v0;
  v4 = (unsigned int)dword_140C54A90;
  v5 = 0;
  if ( (_DWORD)dword_140C54A90 )
  {
    while ( 1 )
    {
      v2 = qword_140C4E210 + ((unsigned __int64)v5 << 6);
      if ( *(_WORD *)(v2 + 16) == *((unsigned __int8 *)CurrentPrcb + 208)
        && *(_BYTE *)(v2 + 18) == *((_BYTE *)CurrentPrcb + 209) )
      {
        break;
      }
      if ( ++v5 >= (unsigned int)dword_140C54A90 )
        goto LABEL_7;
    }
    v4 = v5;
  }
LABEL_7:
  if ( (_DWORD)v4 == (_DWORD)dword_140C54A90 )
    KeBugCheckEx(
      0x5Cu,
      0x104uLL,
      *((unsigned __int8 *)CurrentPrcb + 209) | ((unsigned __int64)*((unsigned __int8 *)CurrentPrcb + 208) << 8),
      (unsigned int)dword_140C54A90,
      0LL);
  v6 = qword_140C4ADA0;
  if ( !qword_140C4ADA0 )
  {
LABEL_19:
    v13 = 0;
    goto LABEL_20;
  }
  while ( 1 )
  {
    v7 = 0;
    if ( *(_BYTE *)(v6 + 8) )
      break;
    if ( !*((_DWORD *)CurrentPrcb + 9) )
      goto LABEL_13;
LABEL_18:
    v6 = *(_QWORD *)v6;
    if ( !v6 )
      goto LABEL_19;
  }
  if ( !*(_BYTE *)(v2 + 13) )
    goto LABEL_18;
  v8 = *(_DWORD *)(v6 + 12);
  if ( v8 != -1 && v8 != *(_DWORD *)(v2 + 4) )
    goto LABEL_18;
  v7 = 1;
LABEL_13:
  v31 = 0LL;
  v32 = 0LL;
  v34 = 0LL;
  v33 = 0LL;
  v37 = 0LL;
  v9 = *(_DWORD *)(v6 + 16);
  if ( *(_BYTE *)(v6 + 8) )
  {
    v10 = (v9 & 0xC) != 12;
    DWORD2(v31) = v10;
    v11 = ((*(_BYTE *)(v6 + 16) & 3) == 3) + 1;
  }
  else
  {
    v10 = (v9 & 8) == 0;
    DWORD2(v31) = v10;
    v11 = 2 - ((*(_BYTE *)(v6 + 16) & 3u) < 2);
  }
  *(_QWORD *)&v32 = 0x2FFFFFFFFLL;
  LODWORD(v31) = v11;
  LODWORD(v37) = v37 & 0x80000000 | 0x40000002;
  v36 = &v37;
  v35 = 0uLL;
  HIDWORD(v31) = 16;
  if ( v7 )
  {
    LODWORD(v35) = 5;
    v12 = *(_DWORD *)(qword_140C54A88 + 240);
    HIDWORD(v29) = *(_DWORD *)(v6 + 20);
    LODWORD(v29) = v12;
LABEL_17:
    LOBYTE(v4) = 15;
    v13 = sub_1403B07C8(&v29, 0LL, v4, v10, v11, &v35, &v32);
    if ( v13 < 0 )
      goto LABEL_20;
    goto LABEL_18;
  }
  v15 = sub_140252380(*(unsigned int *)(v6 + 20), &v29);
  if ( v15 < 0 )
  {
    sub_14051E038(0, 18, v15, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 1480);
    goto LABEL_18;
  }
  if ( byte_140D011A0 )
  {
    LODWORD(v35) = 3;
  }
  else
  {
    v38 = 0LL;
    v16 = *((unsigned int *)CurrentPrcb + 9);
    LODWORD(v35) = 1;
    v17 = 0LL;
    _bittestandset64(&v17, dword_140D0E5E0[v16] & 0x3F);
    *(_QWORD *)&v38 = v17;
    *((_QWORD *)&v35 + 1) = &v38;
  }
  v18 = sub_1402520D4((unsigned int *)&v29);
  if ( v18 )
  {
    if ( !*(_BYTE *)(v18[6] + 16LL * v30 + 12) )
    {
      v20 = sub_140252134(v29);
      if ( !v20 )
      {
        sub_14051E038(0, 17, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 1519);
        goto LABEL_49;
      }
      v21 = sub_140252164(v19, (__int64)&v35, (__int64)&v32 + 8);
      if ( v21 < 0 )
      {
        sub_14051E038((_DWORD)v20, 19, v21, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 1540);
        goto LABEL_49;
      }
      if ( (*(_DWORD *)(qword_140C54A88 + 228) & 0x100) != 0 && *((_BYTE *)KeGetCurrentPrcb() + 141) != 1 )
      {
        sub_140510F68(0LL, v37 & 0x3FFFFFFF, &v31);
        DWORD2(v32) = 7;
        LODWORD(v33) = v37 & 0x3FFFFFFF;
      }
      if ( qword_140C4C4A8 )
      {
        v23 = sub_140A61798(*((unsigned int *)v20 + 60), v22, &v31, 0LL);
        v13 = v23;
        if ( v23 < 0 )
        {
          sub_14051E038((_DWORD)v20, 31, v23, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 1591);
          goto LABEL_20;
        }
      }
      HIDWORD(v31) &= ~0x10u;
      v13 = sub_1403D59D4(v20, &v29, &v31);
      if ( v13 < 0 )
        goto LABEL_20;
      v10 = DWORD2(v31);
      v11 = v31;
    }
    goto LABEL_17;
  }
  sub_14051E038(0, 18, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 1503);
LABEL_49:
  v13 = -1073741275;
LABEL_20:
  KeReleaseSpinLockFromDpcLevel(&qword_140C4BEE8);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
      {
        v25 = KeGetCurrentPrcb();
        v26 = *((_QWORD *)v25 + 4375);
        v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v28 = (v27 & *(_DWORD *)(v26 + 20)) == 0;
        *(_DWORD *)(v26 + 20) &= v27;
        if ( v28 )
          sub_140418E4C(v25);
      }
    }
  }
  __writecr8(v3);
  return (unsigned int)v13;
}
