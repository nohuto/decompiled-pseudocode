/*
 * XREFs of sub_1403B1F04 @ 0x1403B1F04
 * Callers:
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x1403B58F0 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     sub_1403BAB70 @ 0x1403BAB70 (sub_1403BAB70.c)
 *     sub_1403BB0A0 @ 0x1403BB0A0 (sub_1403BB0A0.c)
 *     sub_1403BB820 @ 0x1403BB820 (sub_1403BB820.c)
 *     sub_1403BF088 @ 0x1403BF088 (sub_1403BF088.c)
 *     sub_1403CD2D0 @ 0x1403CD2D0 (sub_1403CD2D0.c)
 *     sub_1403CD570 @ 0x1403CD570 (sub_1403CD570.c)
 *     sub_1403CD7E0 @ 0x1403CD7E0 (sub_1403CD7E0.c)
 *     sub_1403CE24C @ 0x1403CE24C (sub_1403CE24C.c)
 *     sub_1403CE2B4 @ 0x1403CE2B4 (sub_1403CE2B4.c)
 *     HalInitializeBios @ 0x1403D0150 (HalInitializeBios.c)
 *     sub_1403D2700 @ 0x1403D2700 (sub_1403D2700.c)
 *     sub_1403D2750 @ 0x1403D2750 (sub_1403D2750.c)
 *     sub_1403DB0A0 @ 0x1403DB0A0 (sub_1403DB0A0.c)
 *     sub_140456F16 @ 0x140456F16 (sub_140456F16.c)
 *     sub_140509344 @ 0x140509344 (sub_140509344.c)
 *     sub_14050ADB0 @ 0x14050ADB0 (sub_14050ADB0.c)
 *     sub_14050E490 @ 0x14050E490 (sub_14050E490.c)
 *     sub_140511BD0 @ 0x140511BD0 (sub_140511BD0.c)
 *     sub_140512EF0 @ 0x140512EF0 (sub_140512EF0.c)
 *     sub_140514F70 @ 0x140514F70 (sub_140514F70.c)
 *     sub_140515200 @ 0x140515200 (sub_140515200.c)
 *     sub_14051A670 @ 0x14051A670 (sub_14051A670.c)
 *     sub_14051B094 @ 0x14051B094 (sub_14051B094.c)
 *     sub_14051B8BC @ 0x14051B8BC (sub_14051B8BC.c)
 *     sub_14051E390 @ 0x14051E390 (sub_14051E390.c)
 *     sub_14051FB70 @ 0x14051FB70 (sub_14051FB70.c)
 *     sub_14051FFF8 @ 0x14051FFF8 (sub_14051FFF8.c)
 *     sub_140522410 @ 0x140522410 (sub_140522410.c)
 *     sub_1405243A8 @ 0x1405243A8 (sub_1405243A8.c)
 *     sub_1405251A0 @ 0x1405251A0 (sub_1405251A0.c)
 *     sub_140525930 @ 0x140525930 (sub_140525930.c)
 *     sub_1405263E0 @ 0x1405263E0 (sub_1405263E0.c)
 *     sub_1405264A0 @ 0x1405264A0 (sub_1405264A0.c)
 *     sub_140527CF0 @ 0x140527CF0 (sub_140527CF0.c)
 *     sub_140527F70 @ 0x140527F70 (sub_140527F70.c)
 *     sub_140528900 @ 0x140528900 (sub_140528900.c)
 *     sub_140528B30 @ 0x140528B30 (sub_140528B30.c)
 *     sub_140529428 @ 0x140529428 (sub_140529428.c)
 *     sub_140529654 @ 0x140529654 (sub_140529654.c)
 *     sub_14052AF40 @ 0x14052AF40 (sub_14052AF40.c)
 *     sub_14052C0C8 @ 0x14052C0C8 (sub_14052C0C8.c)
 *     sub_1405346EC @ 0x1405346EC (sub_1405346EC.c)
 *     sub_140534CBC @ 0x140534CBC (sub_140534CBC.c)
 *     sub_140846E20 @ 0x140846E20 (sub_140846E20.c)
 *     sub_140908F2C @ 0x140908F2C (sub_140908F2C.c)
 *     sub_140909214 @ 0x140909214 (sub_140909214.c)
 *     sub_140A522B8 @ 0x140A522B8 (sub_140A522B8.c)
 *     sub_140A52CF4 @ 0x140A52CF4 (sub_140A52CF4.c)
 *     sub_140A54D70 @ 0x140A54D70 (sub_140A54D70.c)
 *     sub_140A55C3C @ 0x140A55C3C (sub_140A55C3C.c)
 *     sub_140A5A98C @ 0x140A5A98C (sub_140A5A98C.c)
 *     sub_140A5B2F8 @ 0x140A5B2F8 (sub_140A5B2F8.c)
 *     sub_140AF8A58 @ 0x140AF8A58 (sub_140AF8A58.c)
 *     sub_140AF8B84 @ 0x140AF8B84 (sub_140AF8B84.c)
 *     sub_140B1D9DC @ 0x140B1D9DC (sub_140B1D9DC.c)
 *     sub_140B1DB14 @ 0x140B1DB14 (sub_140B1DB14.c)
 *     sub_140B1DB9C @ 0x140B1DB9C (sub_140B1DB9C.c)
 *     sub_140B1DD34 @ 0x140B1DD34 (sub_140B1DD34.c)
 *     sub_140B1DE58 @ 0x140B1DE58 (sub_140B1DE58.c)
 *     sub_140B1DEB4 @ 0x140B1DEB4 (sub_140B1DEB4.c)
 *     sub_140B4BE3C @ 0x140B4BE3C (sub_140B4BE3C.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlSetBits @ 0x1402E4C80 (RtlSetBits.c)
 *     sub_1403B2460 @ 0x1403B2460 (sub_1403B2460.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_1403B1F04(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // r14
  KIRQL v6; // al
  __int64 *v7; // rdi
  unsigned __int64 v8; // r12
  unsigned int v9; // r8d
  unsigned int v10; // esi
  __int64 v11; // r11
  unsigned int v12; // r13d
  unsigned int v13; // ecx
  __int64 v14; // r9
  int v15; // eax
  unsigned int v16; // r10d
  unsigned int v17; // edx
  __int64 v18; // r11
  unsigned __int64 *v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rsi
  int v23; // ecx
  unsigned __int64 v24; // rax
  unsigned int v25; // r8d
  bool v26; // cc
  unsigned int v27; // edx
  unsigned int v28; // r13d
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 **v31; // rax
  __int64 v32; // rax
  unsigned int v34; // ecx
  bool v35; // sf
  bool v36; // zf
  __int64 v37; // rax
  unsigned int v38; // r10d
  __int64 v39; // rax
  unsigned __int64 v40; // r10
  __int64 v41; // rcx
  int v42; // eax
  unsigned int v43; // esi
  unsigned __int64 *v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  int v47; // ecx
  unsigned __int64 *v48; // r11
  __int64 v49; // rax
  unsigned int v50; // r10d
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // rax
  int v53; // edx
  __int64 v54; // rax
  __int64 v55; // rcx
  unsigned __int8 v56; // al
  struct _KPRCB *v57; // r10
  __int64 v58; // r9
  int v59; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v62; // r8
  int v63; // eax
  __int64 v64; // [rsp+30h] [rbp-48h]
  int i; // [rsp+38h] [rbp-40h]
  __int64 v66; // [rsp+58h] [rbp-20h]
  unsigned int v67; // [rsp+D0h] [rbp+58h]

  v2 = 0LL;
  if ( !a2 )
    KeBugCheckEx(0xACu, 0LL, 0xA0A0uLL, (ULONG_PTR)"minkernel\\hals\\lib\\mm\\memory.c", 0xBD8uLL);
  v3 = (a2 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  v4 = v3 + 16;
  if ( v3 >= 0x1000 )
    v4 = (a2 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  v5 = v4 >> 4;
  if ( v4 >= 0x1000 )
  {
    v4 = (v4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v7 = (__int64 *)sub_1403B2460(4096LL, v4);
    if ( !v7 )
      return v2;
LABEL_36:
    v29 = 0LL;
    LOBYTE(v8) = KeAcquireSpinLockRaiseToDpc(&qword_140C4DD50);
    goto LABEL_22;
  }
  v6 = KeAcquireSpinLockRaiseToDpc(&qword_140C4DD50);
  v7 = (__int64 *)qword_140C4DD40;
  v8 = v6;
  while ( 2 )
  {
    if ( v7 != &qword_140C4DD40 )
    {
      v9 = *((_DWORD *)v7 + 8);
      v11 = v7[5];
      v10 = *((_DWORD *)v7 + 6);
      v12 = v10 < v9 ? v10 : 0;
      v13 = v9 - 1;
      if ( !(_DWORD)v5 )
      {
        v28 = v12 & 0xFFFFFFF8;
        goto LABEL_21;
      }
      v14 = v7[5] & 4;
      v64 = v14;
      v15 = v14 != 0 ? 0x20 : 0;
      for ( i = v15; ; v15 = i )
      {
        v16 = v15 + v13;
        v17 = v15 + v12;
        v18 = v11 - (v14 != 0 ? 4 : 0);
        v66 = v18;
        if ( v13 - v12 + 1 >= (unsigned int)v5 )
          break;
        v27 = -1;
LABEL_31:
        if ( !v12 )
          goto LABEL_20;
        v11 = v7[5];
        v34 = v5 + v10;
        v12 = 0;
        if ( (unsigned int)v5 + v10 > v9 )
          v34 = v9;
        v13 = v34 - 1;
      }
      v19 = (unsigned __int64 *)(v18 + 8 * ((unsigned __int64)v17 >> 6));
      v20 = ((1LL << (v17 & 0x3F)) - 1) | *v19;
      v67 = v16 - v5 + 1;
      v21 = (unsigned __int64)v67 >> 6;
      v22 = v18 + 8 * v21;
      if ( (unsigned int)v5 > 0x7F )
      {
        v40 = v22 + 8;
        if ( (v67 & 0x3F) == 0 )
          v40 = v18 + 8 * v21;
        if ( v20 )
        {
          if ( *++v19 )
          {
            v43 = v67;
            goto LABEL_69;
          }
          v36 = !_BitScanReverse64((unsigned __int64 *)&v41, v20);
          if ( v36 )
            v42 = 64;
          else
            v42 = 63 - v41;
        }
        else
        {
          v42 = 0;
        }
        v43 = v67;
LABEL_62:
        v27 = ((unsigned int)(((__int64)v19 - v18) >> 3) << 6) - v42;
        if ( v27 > v43 )
          goto LABEL_29;
        v44 = &v19[(unsigned int)(v5 - v42) >> 6];
        while ( ++v19 != v44 )
        {
          if ( *v19 )
            goto LABEL_69;
        }
        if ( (((_BYTE)v5 - (_BYTE)v42) & 0x3F) != 0 )
        {
          v36 = !_BitScanForward64((unsigned __int64 *)&v45, *v19);
          if ( v36 )
            LODWORD(v45) = 64;
          if ( (unsigned int)v45 < (((_BYTE)v5 - (_BYTE)v42) & 0x3Fu) )
          {
LABEL_69:
            while ( (unsigned __int64)v19 <= v40 )
            {
              if ( !*++v19 )
              {
                v36 = !_BitScanReverse64((unsigned __int64 *)&v46, *(v19 - 1));
                if ( v36 )
                  v42 = 64;
                else
                  v42 = 63 - v46;
                goto LABEL_62;
              }
            }
            goto LABEL_29;
          }
        }
      }
      else
      {
        v23 = 64;
        if ( (unsigned int)v5 < 0x40 )
        {
          if ( (unsigned int)v5 > 1 )
          {
            v47 = 0;
            v48 = (unsigned __int64 *)(v18 + 8 * ((unsigned __int64)v16 >> 6));
            while ( v20 != -1 )
            {
LABEL_80:
              v36 = !_BitScanForward64((unsigned __int64 *)&v49, v20);
              if ( v36 )
                LODWORD(v49) = 64;
              if ( v47 + (int)v49 >= (unsigned int)v5 )
              {
                v53 = -v47;
LABEL_87:
                v27 = ((unsigned int)(((__int64)v19 - v66) >> 3) << 6) + v53;
                v26 = v27 <= v67;
                goto LABEL_17;
              }
              v50 = v4 >> 4;
              v51 = ~v20;
              while ( 1 )
              {
                v51 &= v51 >> (v50 >> 1);
                if ( !v51 )
                  break;
                v50 -= v50 >> 1;
                if ( v50 <= 1 )
                {
                  _BitScanForward64(&v52, v51);
                  v53 = v52;
                  goto LABEL_87;
                }
              }
              if ( v19 == v48 )
                goto LABEL_29;
              v36 = !_BitScanReverse64((unsigned __int64 *)&v54, v20);
              if ( v36 )
                v47 = 64;
              else
                v47 = 63 - v54;
              v20 = *++v19;
            }
            while ( (unsigned __int64)++v19 <= v22 )
            {
              v20 = *v19;
              if ( *v19 != -1LL )
              {
                v47 = 0;
                goto LABEL_80;
              }
            }
          }
          else
          {
            while ( v20 == -1 )
            {
              if ( (unsigned __int64)++v19 > v22 )
                goto LABEL_29;
              v20 = *v19;
            }
            _BitScanForward64(&v24, ~v20);
            v25 = v24 + ((unsigned int)(((__int64)v19 - v18) >> 3) << 6);
            v26 = v25 <= v67;
            v27 = v25;
LABEL_17:
            if ( v26 )
              goto LABEL_18;
          }
LABEL_29:
          v27 = -1;
LABEL_30:
          v10 = *((_DWORD *)v7 + 6);
          v14 = v64;
          v9 = *((_DWORD *)v7 + 8);
          goto LABEL_31;
        }
        do
        {
LABEL_41:
          v35 = v20 < 0;
          do
          {
            if ( v35 )
            {
              if ( (unsigned __int64)++v19 > v22 )
                goto LABEL_29;
              v20 = *v19;
              goto LABEL_41;
            }
            v36 = !_BitScanReverse64((unsigned __int64 *)&v37, v20);
            if ( !v36 )
              v23 = 63 - v37;
            v27 = (((unsigned int)(((__int64)v19 - v18) >> 3) + 1) << 6) - v23;
            if ( v27 > v67 )
              goto LABEL_29;
            v38 = v5 - v23;
            if ( (_DWORD)v5 == v23 )
              goto LABEL_18;
            ++v19;
            v23 = 64;
            v20 = *v19;
            if ( v38 < 0x40 )
              goto LABEL_51;
            v35 = v20 < 0;
          }
          while ( v20 );
          v38 -= 64;
          if ( !v38 )
            break;
          v20 = *++v19;
LABEL_51:
          v36 = !_BitScanForward64((unsigned __int64 *)&v39, v20);
          if ( v36 )
            LODWORD(v39) = 64;
        }
        while ( (unsigned int)v39 < v38 );
      }
LABEL_18:
      if ( v27 != -1 )
      {
        v27 -= i;
LABEL_20:
        v28 = v27;
LABEL_21:
        v29 = v28;
        if ( v28 != 0xFFFFFFFFLL )
        {
LABEL_22:
          RtlSetBits((PRTL_BITMAP)v7 + 2, v29, v5);
          *((_DWORD *)v7 + 6) = v5 + v29;
          v30 = *v7;
          v31 = (__int64 **)v7[1];
          if ( *(__int64 **)(*v7 + 8) != v7
            || *v31 != v7
            || (*v31 = (__int64 *)v30,
                *(_QWORD *)(v30 + 8) = v31,
                v32 = qword_140C4DD40,
                *(__int64 **)(qword_140C4DD40 + 8) != &qword_140C4DD40) )
          {
            __fastfail(3u);
          }
          *v7 = qword_140C4DD40;
          v7[1] = (__int64)&qword_140C4DD40;
          *(_QWORD *)(v32 + 8) = v7;
          qword_140C4DD40 = (__int64)v7;
          KeReleaseSpinLockFromDpcLevel(&qword_140C4DD50);
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v62 = *((_QWORD *)CurrentPrcb + 4375);
                v63 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
                v36 = (v63 & *(_DWORD *)(v62 + 20)) == 0;
                *(_DWORD *)(v62 + 20) &= v63;
                if ( v36 )
                  sub_140418E4C(CurrentPrcb);
              }
            }
          }
          __writecr8((unsigned __int8)v8);
          v2 = v7[2] + 16 * v29;
          if ( v4 >= 0x1000 )
          {
            *((_DWORD *)v7 + 7) = v5;
          }
          else
          {
            *(_QWORD *)v2 = v7;
            *(_DWORD *)(v2 + 8) = v5;
            v2 += 16LL;
          }
          return v2;
        }
        v7 = (__int64 *)*v7;
        continue;
      }
      goto LABEL_30;
    }
    break;
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C4DD50);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v56 = KeGetCurrentIrql();
      if ( v56 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v56 >= 2u )
      {
        v57 = KeGetCurrentPrcb();
        v55 = (unsigned int)(v8 + 1);
        v58 = *((_QWORD *)v57 + 4375);
        v59 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v36 = (v59 & *(_DWORD *)(v58 + 20)) == 0;
        *(_DWORD *)(v58 + 20) &= v59;
        if ( v36 )
          sub_140418E4C(v57);
      }
    }
  }
  __writecr8(v8);
  v7 = (__int64 *)sub_1403B2460(v55, 0x4000LL);
  if ( v7 )
    goto LABEL_36;
  return v2;
}
