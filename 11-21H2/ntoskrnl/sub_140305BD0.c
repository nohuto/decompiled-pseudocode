/*
 * XREFs of sub_140305BD0 @ 0x140305BD0
 * Callers:
 *     sub_140424300 @ 0x140424300 (sub_140424300.c)
 * Callees:
 *     sub_14023CBA4 @ 0x14023CBA4 (sub_14023CBA4.c)
 *     HalRequestIpi @ 0x14023DD20 (HalRequestIpi.c)
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     sub_140306100 @ 0x140306100 (sub_140306100.c)
 *     sub_1403086B0 @ 0x1403086B0 (sub_1403086B0.c)
 *     sub_14030B3F0 @ 0x14030B3F0 (sub_14030B3F0.c)
 *     KeCheckProcessorAffinityEx @ 0x140345D30 (KeCheckProcessorAffinityEx.c)
 *     sub_1403A1620 @ 0x1403A1620 (sub_1403A1620.c)
 *     sub_1403D1E20 @ 0x1403D1E20 (sub_1403D1E20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     HalProcessorIdle @ 0x14041B080 (HalProcessorIdle.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405C8B90 @ 0x1405C8B90 (sub_1405C8B90.c)
 */

__int64 __fastcall sub_140305BD0(ULONG_PTR BugCheckParameter4)
{
  unsigned __int16 v1; // bx
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // r12
  __int64 v6; // r15
  __int64 v7; // r10
  unsigned __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // r9
  unsigned __int64 *v11; // rax
  unsigned int v12; // ecx
  __int64 v13; // rax
  unsigned int v14; // esi
  int v15; // edx
  __int64 v17; // r13
  unsigned __int16 v18; // dx
  char v19; // di
  unsigned __int16 v20; // cx
  unsigned int v21; // r15d
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int16 *v23; // r10
  _DWORD *v24; // rsi
  unsigned int v25; // r12d
  unsigned int v26; // r9d
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  int v31; // ecx
  int v32; // eax
  char v33; // [rsp+40h] [rbp-C0h] BYREF
  char v34[3]; // [rsp+41h] [rbp-BFh] BYREF
  unsigned int v35; // [rsp+44h] [rbp-BCh] BYREF
  int v36; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v37; // [rsp+50h] [rbp-B0h] BYREF
  int v38; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v40; // [rsp+68h] [rbp-98h] BYREF
  __int64 v41; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v42[68]; // [rsp+80h] [rbp-80h] BYREF

  v1 = 0;
  v34[0] = 0;
  v37 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v33 = 0;
  v36 = 0;
  v35 = 0;
  memset(&v42[2], 0, 0x100uLL);
  result = dword_140C232CC;
  if ( BYTE5(off_140C03040[534 * dword_140C232CC + 23]) )
    return result;
  v4 = *(_QWORD *)(BugCheckParameter4 + 33600);
  v5 = *(_QWORD *)(BugCheckParameter4 + 33608);
  v6 = 0LL;
  v39 = 0LL;
  if ( !v4 )
    return HalProcessorIdle();
  *(_DWORD *)(v4 + 1084) = 0;
  v7 = *(_QWORD *)(BugCheckParameter4 + 33600);
  if ( *(_BYTE *)(v7 + 5) )
  {
    v8 = *(_QWORD *)(BugCheckParameter4 + 33616);
    *(_QWORD *)(BugCheckParameter4 + 33616) = 0LL;
    v9 = *(unsigned int *)(v7 + 20);
    *(_QWORD *)(BugCheckParameter4 + 33624) += v8;
    v10 = *(_QWORD *)(BugCheckParameter4 + 33608) + 1000 * v9;
    *(_QWORD *)(v10 + 40) += v8;
    if ( *(_DWORD *)(v7 + 68) == 3 )
    {
      if ( *(int *)(v7 + 64) < 0 )
      {
        ++*(_DWORD *)(v10 + 52);
      }
      else
      {
        ++*(_DWORD *)(v10 + 56);
        v11 = (unsigned __int64 *)&unk_140D05670;
        v12 = 0;
        while ( v8 >= *v11 )
        {
          if ( v8 < v11[3] )
          {
            if ( ++v12 >= 0x1A )
            {
LABEL_61:
              ++*(_DWORD *)(v10 + 60);
              goto LABEL_16;
            }
            break;
          }
          v11 += 6;
          v12 += 2;
          if ( v12 >= 0x1A )
            goto LABEL_61;
        }
        v13 = 32LL * v12;
        *(_QWORD *)(v13 + v10 + 208) += v8;
        ++*(_DWORD *)(v13 + v10 + 232);
        if ( v8 < *(_QWORD *)(v13 + v10 + 216) )
          *(_QWORD *)(v13 + v10 + 216) = v8;
        if ( v8 > *(_QWORD *)(v13 + v10 + 224) )
          *(_QWORD *)(v13 + v10 + 224) = v8;
LABEL_16:
        if ( v8 < *(_QWORD *)(v10 + 64) )
          *(_QWORD *)(v10 + 64) = v8;
        if ( v8 > *(_QWORD *)(v10 + 72) )
          *(_QWORD *)(v10 + 72) = v8;
      }
    }
    else
    {
      ++*(_DWORD *)(v10 + 48);
    }
  }
  *(_DWORD *)(v7 + 64) = 0;
  *(_DWORD *)(v7 + 68) = 3;
  *(_BYTE *)(v7 + 5) = 0;
  *(_BYTE *)(v4 + 5) = 1;
  v42[0] = 2097153;
  memset(&v42[1], 0, 0x104uLL);
  *(_WORD *)(v4 + 48) = 0;
  if ( !*(_BYTE *)v4 )
  {
    result = sub_1403086B0(
               BugCheckParameter4,
               (unsigned int)v34,
               (unsigned int)&v37,
               (unsigned int)&v40,
               (__int64)&v39,
               (__int64)v42);
    v14 = result;
    v35 = result;
    if ( (_DWORD)result != -2 )
    {
      if ( (_DWORD)result == -1 )
      {
        ++*(_DWORD *)(v5 + 12);
        return result;
      }
      v31 = *(_DWORD *)(v4 + 752);
      v36 = v31;
      if ( v31 != -1 )
      {
        **(_DWORD **)(v4 + 1096) = v31;
        *(_DWORD *)(v4 + 1084) = 1;
      }
      v6 = v39;
      v33 = *(_BYTE *)(344LL * (unsigned int)result + v4 + 1442) == 0;
      goto LABEL_24;
    }
    return HalProcessorIdle();
  }
  if ( byte_140C095A4 && *(_BYTE *)(v4 + 8) )
    return HalProcessorIdle();
  sub_1403A1620(
    BugCheckParameter4,
    (unsigned int)&v37,
    (unsigned int)&v40,
    (unsigned int)v34,
    (__int64)&v35,
    (__int64)&v36,
    (__int64)&v41,
    (__int64)&v33);
  v14 = v35;
LABEL_24:
  v15 = *(_DWORD *)(v4 + 16);
  if ( v14 != v15 )
  {
    *(_DWORD *)(v4 + 24) = v15;
    *(_DWORD *)(v4 + 16) = v14;
    sub_14023CBA4(v14, v15);
  }
  if ( (*(_DWORD *)(v5 + 4))++ == -1 )
    sub_1403D1E20(v5, v37);
  v17 = *(_QWORD *)(BugCheckParameter4 + 33600);
  v18 = 0;
  v19 = *(_BYTE *)(344LL * v14 + v4 + 1441);
  v20 = v42[0];
  if ( LOWORD(v42[0]) )
  {
    while ( !*(_QWORD *)&v42[2 * v18 + 2] )
    {
      if ( ++v18 >= LOWORD(v42[0]) )
        goto LABEL_31;
    }
    *(_WORD *)(v17 + 48) |= 0x400u;
    if ( dword_140D05038 && v6 )
      sub_1405C8B90(v6);
    v20 = v42[0];
  }
LABEL_31:
  v21 = dword_140C2B1C0;
  if ( !(_BYTE)dword_140D05304
    && !dword_140D06D00
    && !*(_BYTE *)(BugCheckParameter4 + 33)
    && *(_BYTE *)(qword_140D088C0[(unsigned int)dword_140C2B1C0] + 33)
    && !v19 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v38 = 0;
    v23 = (unsigned __int16 *)qword_140D31700[*(unsigned __int16 *)(*((_QWORD *)CurrentPrcb + 24) + 138LL)];
    v24 = &dword_140D0E5E0[*((unsigned int *)CurrentPrcb + 9)];
    v25 = *v23;
    while ( 1 )
    {
      v26 = *((_DWORD *)v23 + 4);
      while ( v26 )
      {
        _BitScanForward((unsigned int *)&v27, v26);
        v26 &= ~(1 << v27);
        v28 = *(_QWORD *)&v23[4 * v27 + 12];
        v29 = *(_QWORD *)(v28 + 64);
        v30 = *(_QWORD *)(v28 + 128);
        if ( v28 == *((_QWORD *)CurrentPrcb + 24) )
        {
          v29 &= ~(1LL << *((_BYTE *)CurrentPrcb + 209));
          _bittestandreset64(&v30, *v24 & 0x3F);
        }
        if ( v29 != v30 )
          goto LABEL_42;
      }
      v32 = sub_14030B3F0(v25, &v38);
      if ( v32 == -1 )
        break;
      v23 = (unsigned __int16 *)qword_140D31700[v32];
    }
    if ( !(unsigned int)KeCheckProcessorAffinityEx(v42, v21) )
    {
      KeAddProcessorAffinityEx((unsigned __int16 *)v42, v21);
      *(_WORD *)(v17 + 48) |= 0x800u;
    }
LABEL_42:
    v20 = v42[0];
  }
  if ( v20 )
  {
    while ( !*(_QWORD *)&v42[2 * v1 + 2] )
    {
      if ( ++v1 >= v20 )
        return sub_140306100(BugCheckParameter4, v34[0], v37, v40, v33);
    }
    HalRequestIpi(0, (__int64)v42);
  }
  return sub_140306100(BugCheckParameter4, v34[0], v37, v40, v33);
}
