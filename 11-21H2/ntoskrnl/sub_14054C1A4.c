/*
 * XREFs of sub_14054C1A4 @ 0x14054C1A4
 * Callers:
 *     sub_140824AA0 @ 0x140824AA0 (sub_140824AA0.c)
 * Callees:
 *     sub_140294CC0 @ 0x140294CC0 (sub_140294CC0.c)
 *     sub_14039D8F0 @ 0x14039D8F0 (sub_14039D8F0.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_14039DF90 @ 0x14039DF90 (sub_14039DF90.c)
 *     HviGetHypervisorFeatures @ 0x1403BF8B0 (HviGetHypervisorFeatures.c)
 *     sub_1403C02DC @ 0x1403C02DC (sub_1403C02DC.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140545C94 @ 0x140545C94 (sub_140545C94.c)
 *     sub_14054BF60 @ 0x14054BF60 (sub_14054BF60.c)
 *     sub_14054C770 @ 0x14054C770 (sub_14054C770.c)
 *     sub_14054C810 @ 0x14054C810 (sub_14054C810.c)
 *     HviGetHardwareFeatures @ 0x140647B00 (HviGetHardwareFeatures.c)
 */

__int64 (__fastcall *sub_14054C1A4())(_DWORD *a1)
{
  int v0; // edi
  int v1; // esi
  __int64 v2; // rbx
  int v3; // r15d
  unsigned __int64 v4; // rax
  int v5; // ecx
  int v6; // r8d
  int v7; // r14d
  int v8; // edx
  int v9; // ecx
  int v10; // edi
  unsigned int v11; // ecx
  char v12; // r14
  int v13; // ecx
  int v14; // edx
  ULONG v15; // eax
  int v16; // ecx
  int v17; // r14d
  __int64 *v18; // rdi
  int v19; // ecx
  int v20; // edi
  int v21; // ebx
  char v22; // al
  __int64 v23; // rax
  int v24; // edx
  __int64 (__fastcall *result)(_DWORD *); // rax
  __int64 v26; // [rsp+28h] [rbp-59h] BYREF
  __int128 v27; // [rsp+38h] [rbp-49h] BYREF
  __int64 v28; // [rsp+48h] [rbp-39h]
  __int64 v29; // [rsp+50h] [rbp-31h]
  __int128 v30; // [rsp+58h] [rbp-29h] BYREF
  __int128 v31; // [rsp+68h] [rbp-19h] BYREF
  __int128 v32; // [rsp+78h] [rbp-9h] BYREF
  __int128 v33; // [rsp+88h] [rbp+7h] BYREF
  __int128 v34; // [rsp+98h] [rbp+17h] BYREF
  _BYTE v35[16]; // [rsp+A8h] [rbp+27h] BYREF

  v26 = 0LL;
  v28 = 0LL;
  v31 = 0LL;
  LODWORD(v29) = 0;
  v0 = 0;
  v30 = 0LL;
  byte_140D0505F = 0;
  v34 = 0LL;
  v32 = 0LL;
  v27 = 0LL;
  sub_1403C02DC(&v30);
  v33 = 0LL;
  HviGetHypervisorFeatures(&v33);
  HviGetHypervisorFeatures(&v34);
  HviGetHardwareFeatures(&v32);
  v1 = v30;
  if ( (v30 & 1) != 0 )
  {
    v0 = 8388615;
  }
  else if ( (v30 & 2) != 0 )
  {
    v0 = 8388614;
  }
  else if ( (v30 & 4) != 0 )
  {
    if ( (v30 & 0x20000) != 0 || (v0 = 8388612, v1 = v30, *((_BYTE *)KeGetCurrentPrcb() + 141) == 2) )
      v0 = 4;
  }
  v2 = v33;
  if ( (v33 & 0x10) != 0 )
    dword_140D0688C |= 0x80000u;
  if ( (v1 & 8) != 0 )
  {
    v0 |= 0x10u;
    dword_140D0688C |= 1u;
  }
  if ( (v1 & 0x200) != 0 )
  {
    v0 |= 0x1000u;
    dword_140D0688C |= 0x10u;
  }
  v3 = HIDWORD(v34);
  if ( (HIDWORD(v34) & 0x40000) != 0 )
  {
    v4 = __readmsr(0x40000001u);
    if ( (v4 & 2) == 0 )
      __writemsr(0x40000001u, v4 | 2);
    v0 |= 0x100000u;
  }
  if ( (v1 & 0x40000) != 0 )
    dword_140D0688C |= 0x400000u;
  if ( (v1 & 0x10000) != 0 )
    dword_140D0688C |= 0x800000u;
  v5 = v0 | 0x20000000;
  if ( (v1 & 0x100000) == 0 )
    v5 = v0;
  v6 = v5 | 0x80;
  v7 = (HIDWORD(v34) >> 4) & 1;
  if ( !v7 )
    v6 = v5;
  if ( (v1 & 0x800) != 0 )
    dword_140D0688C |= 0x80u;
  v8 = v6 | 0x20;
  if ( (v1 & 0x20) == 0 )
    v8 = v6;
  v9 = v8 | 0x4000;
  if ( (v1 & 0x400) == 0 )
    v9 = v8;
  v10 = v9 | 0x200;
  if ( (BYTE12(v34) & 0x20) == 0 )
    v10 = v9;
  if ( SDWORD1(v30) > 0 )
  {
    _BitScanReverse(&v11, DWORD1(v30));
    v10 |= 0x40u;
    dword_140D0527C = DWORD1(v30) | ((1 << v11) - 1);
  }
  if ( (v33 & 0x100000000000LL) != 0 && (unsigned __int8)sub_14054C810() )
    dword_140D0688C |= 2u;
  if ( (v3 & 0x10000000) != 0 )
  {
    v10 |= 0x4000000u;
    if ( !v7 )
      v10 &= ~0x4000000u;
  }
  if ( (dword_140D0688C & 2) != 0 )
  {
    sub_14054BF60(516, &v31);
    v12 = v31;
    v13 = v10 | 0x400;
    if ( (BYTE4(v31) & 1) == 0 )
      v13 = v10;
    v14 = v13 | 0x20000;
    if ( (BYTE4(v31) & 2) == 0 )
      v14 = v13;
    v10 = v14 | 0x40000;
    if ( (BYTE4(v31) & 4) == 0 )
      v10 = v14;
    if ( (v31 & 1) != 0 )
      dword_140D068B8 |= 0x20u;
    if ( (v31 & 2) != 0 )
      dword_140D068B8 |= 0x40u;
    if ( (int)v31 < 0 )
    {
      dword_140D068B8 |= 0x187u;
      v10 |= 0x10008u;
      byte_140D06B14 = 1;
      if ( (unsigned int)sub_140545C94() == 4 )
        v10 |= 0x40000u;
    }
    v15 = dword_140D068B8;
    if ( (dword_140D068B8 & 1) != 0 && (v12 & 4) != 0 )
    {
      v15 = dword_140D068B8 | 0x200;
      dword_140D068B8 |= 0x200u;
    }
    if ( (v2 & 0x10000000000LL) != 0 )
    {
      v15 |= 0x10u;
      dword_140D068B8 = v15;
    }
    if ( (v1 & 0x1000) != 0 )
      dword_140D068B8 = v15 | 0x400;
  }
  v16 = v10 | 0x800;
  if ( (v3 & 0x80u) == 0 )
    v16 = v10;
  if ( (v3 & 8) == 0 )
    dword_140D0688C |= 4u;
  v17 = v16 | 0x100;
  if ( (v2 & 0x202) != 0x202 )
    v17 = v16;
  if ( (v2 & 0x200000000LL) != 0 )
  {
    v18 = sub_14039DF90((PHYSICAL_ADDRESS *)&v27, 2, (__int64)v35, 8LL);
    HvlInvokeHypercall(70);
    sub_14039D8F0((__int64)&v27);
    qword_140D06E30 = *v18;
  }
  v19 = v17 | 0x2000;
  if ( (v3 & 0x400) == 0 )
    v19 = v17;
  if ( (v2 & 4) != 0 )
    dword_140D0688C |= 0x20u;
  if ( (v3 & 0x4000) == 0 )
    dword_140D0688C |= 0x2000u;
  if ( (v2 & 0x1000000000000LL) != 0 )
    dword_140D0688C |= 0x40u;
  v20 = v19 | 0x8000;
  if ( (v2 & 0x20000000000000LL) == 0 )
    v20 = v19;
  if ( (v1 & 0x2000) != 0 )
  {
    v21 = v20 | 0x80000;
    if ( (sub_140294CC0() & 2) == 0 )
      v21 = v20;
  }
  else
  {
    v21 = v20;
    if ( (dword_140D0688C & 0x40) != 0 )
      dword_140D0688C |= 0x20000u;
  }
  if ( (v32 & 0x800000) != 0 )
    dword_140D0688C |= 0x1000000u;
  if ( (v1 & 0x8000) != 0 && (v21 & 0x100) != 0 )
    dword_140D0688C |= 0x4000u;
  if ( (v32 & 0x10000) != 0 )
    dword_140D0688C |= 0x40000u;
  v22 = sub_14054C770(&v26);
  v23 = v26 & -(__int64)(v22 != 0);
  if ( (v23 & 0x10) != 0 )
    dword_140D0688C |= 0x8000u;
  if ( (v23 & 0x20) != 0 )
    dword_140D0688C |= 0x10000u;
  if ( (v23 & 8) != 0 )
    dword_140D0688C |= 0x100000u;
  if ( (v23 & 0x40) != 0 )
    dword_140D0688C |= 0x200000u;
  v24 = v21 | 0x200000;
  if ( (v23 & 2) == 0 )
    v24 = v21;
  if ( (v23 & 4) != 0 )
  {
    v24 |= 0x400000u;
    if ( (v23 & 0x80u) != 0LL )
      v24 |= 0x8000000u;
  }
  result = sub_140546B70;
  qword_140C01D60 = (__int64)sub_140546B70;
  dword_140D06A28 = ~dword_140D06D60 & v24;
  dword_140D0689C = ~dword_140D06D60 & v24;
  return result;
}
