/*
 * XREFs of sub_14093AAEC @ 0x14093AAEC
 * Callers:
 *     sub_14093A0B8 @ 0x14093A0B8 (sub_14093A0B8.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     RtlClearAllBitsEx @ 0x1402340F0 (RtlClearAllBitsEx.c)
 *     sub_14025E6F8 @ 0x14025E6F8 (sub_14025E6F8.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     sub_1403D4F68 @ 0x1403D4F68 (sub_1403D4F68.c)
 *     RtlSetAllBitsEx @ 0x1403D9CD0 (RtlSetAllBitsEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14055A628 @ 0x14055A628 (sub_14055A628.c)
 *     sub_14055A6A0 @ 0x14055A6A0 (sub_14055A6A0.c)
 *     sub_14055A93C @ 0x14055A93C (sub_14055A93C.c)
 *     sub_14093B1CC @ 0x14093B1CC (sub_14093B1CC.c)
 *     sub_14093B5F8 @ 0x14093B5F8 (sub_14093B5F8.c)
 *     sub_14093BF5C @ 0x14093BF5C (sub_14093BF5C.c)
 *     sub_14093C164 @ 0x14093C164 (sub_14093C164.c)
 *     sub_14093C268 @ 0x14093C268 (sub_14093C268.c)
 *     sub_14093CFC8 @ 0x14093CFC8 (sub_14093CFC8.c)
 *     sub_140A666B0 @ 0x140A666B0 (sub_140A666B0.c)
 *     sub_140A67974 @ 0x140A67974 (sub_140A67974.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14093AAEC(__int64 a1)
{
  unsigned int v2; // r12d
  _QWORD *v3; // rsi
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // ebx
  _DWORD *v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  unsigned __int64 v13; // rbx
  __int64 Pool2; // rax
  __int64 v15; // r10
  __int64 v16; // rcx
  unsigned __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r10
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // r10
  __int64 i; // rbx
  unsigned int v28; // r15d
  __int64 v29; // r13
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // rsi
  __int64 v33; // r14
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // ecx
  char v37; // al
  __int64 v38; // rax
  _DWORD *v40; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v41; // [rsp+40h] [rbp-C8h] BYREF
  char v42; // [rsp+48h] [rbp-C0h] BYREF
  bool v43; // [rsp+49h] [rbp-BFh] BYREF
  bool v44; // [rsp+4Ah] [rbp-BEh] BYREF
  __int64 v45; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v46; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v47; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v48; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+78h] [rbp-90h] BYREF
  __int64 *v50; // [rsp+98h] [rbp-70h]
  __int64 v51; // [rsp+A0h] [rbp-68h]
  _QWORD *v52; // [rsp+A8h] [rbp-60h]
  __int64 v53; // [rsp+B0h] [rbp-58h]
  char *v54; // [rsp+B8h] [rbp-50h]
  __int64 v55; // [rsp+C0h] [rbp-48h]
  __int64 *v56; // [rsp+C8h] [rbp-40h]
  __int64 v57; // [rsp+D0h] [rbp-38h]
  __int64 *v58; // [rsp+D8h] [rbp-30h]
  __int64 v59; // [rsp+E0h] [rbp-28h]
  bool *v60; // [rsp+E8h] [rbp-20h]
  __int64 v61; // [rsp+F0h] [rbp-18h]
  __int64 *v62; // [rsp+F8h] [rbp-10h]
  __int64 v63; // [rsp+100h] [rbp-8h]
  bool *v64; // [rsp+108h] [rbp+0h]
  __int64 v65; // [rsp+110h] [rbp+8h]
  __int64 *v66; // [rsp+118h] [rbp+10h]
  __int64 v67; // [rsp+120h] [rbp+18h]

  v2 = 0;
  v3 = 0LL;
  v4 = sub_14055A628(0);
  v5 = *(_QWORD *)(a1 + 936);
  v6 = v4;
  v7 = *(_QWORD *)(a1 + 928);
  v8 = *(_QWORD *)(a1 + 920);
  v41 = v4;
  if ( !sub_14055A6A0(v8, v7, v5) )
  {
    *(_QWORD *)(a1 + 304) = a1;
    sub_140A67974();
    v10 = (_DWORD *)sub_1403D4F68();
    v40 = v10;
    v3 = v10;
    if ( !v10 )
      goto LABEL_4;
    v11 = *v10;
    if ( !v11 )
    {
      v9 = -1073741595;
      goto LABEL_44;
    }
    v12 = v3[2 * (unsigned int)(v11 - 1) + 2] + v3[2 * (unsigned int)(v11 - 1) + 3];
    *(_QWORD *)(a1 + 88) = v12;
    v13 = (((unsigned __int64)(v12 + 7) >> 3) + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    Pool2 = ExAllocatePool2(64LL, (v13 + 4095) & 0xFFFFFFFFFFFFF000uLL, 1886217292LL);
    *(_QWORD *)(a1 + 592) = Pool2;
    if ( !Pool2 )
    {
LABEL_4:
      v9 = -1073741670;
      goto LABEL_44;
    }
    if ( !sub_14055A6A0(*(_QWORD *)(a1 + 920), *(_QWORD *)(a1 + 928), *(_QWORD *)(a1 + 936)) )
    {
      *(_QWORD *)(a1 + 576) = *(_QWORD *)(a1 + 88);
      *(_QWORD *)(a1 + 584) = v15;
      RtlSetAllBitsEx((_QWORD *)(a1 + 576));
      sub_14093C268(a1, *(_QWORD *)(a1 + 592), (v13 + 4095) & 0xFFFFFFFFFFFFF000uLL);
      if ( sub_14025E6F8() )
        v16 += 2 * v13;
      v17 = (v16 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      v18 = ExAllocatePool2(64LL, v17, 1886217292LL);
      *(_QWORD *)(a1 + 560) = v18;
      v19 = v18;
      if ( !v18 )
        goto LABEL_12;
      if ( sub_14055A6A0(*(_QWORD *)(a1 + 920), *(_QWORD *)(a1 + 928), *(_QWORD *)(a1 + 936)) )
      {
LABEL_14:
        v9 = -1073741248;
        goto LABEL_43;
      }
      *(_QWORD *)(a1 + 568) = v17;
      *(_QWORD *)(v19 + 8224) = v17;
      v20 = *(_QWORD *)(a1 + 88);
      *(_QWORD *)(v19 + 8240) = v20;
      *(_QWORD *)(a1 + 544) = v20;
      *(_QWORD *)(a1 + 552) = v19 + 8248;
      RtlClearAllBitsEx((PRTL_BITMAP_EX)(a1 + 544));
      sub_14093C268(a1, *(_QWORD *)(a1 + 560), *(_QWORD *)(a1 + 568));
      v21 = ExAllocatePool2(64LL, (v13 + 4095) & 0xFFFFFFFFFFFFF000uLL, 1886217292LL);
      *(_QWORD *)(a1 + 648) = v21;
      if ( v21 )
      {
        if ( sub_14055A6A0(*(_QWORD *)(a1 + 920), *(_QWORD *)(a1 + 928), *(_QWORD *)(a1 + 936)) )
          goto LABEL_14;
        *(_QWORD *)(a1 + 600) = *(_QWORD *)(a1 + 88);
        *(_QWORD *)(a1 + 608) = v22;
        sub_14093C268(a1, v22, (v13 + 4095) & 0xFFFFFFFFFFFFF000uLL);
        if ( sub_14025E6F8() )
        {
          *(_QWORD *)(a1 + 632) = v23;
          *(_QWORD *)(a1 + 640) = v19 + v13 + 8248;
          *(_QWORD *)(a1 + 616) = *(_QWORD *)(a1 + 88);
          *(_QWORD *)(a1 + 624) = v19 + 2 * (v13 + 4124);
        }
        else
        {
          *(_QWORD *)(a1 + 624) = *(_QWORD *)(a1 + 648);
          *(_QWORD *)(a1 + 616) = v23;
          v24 = *(_QWORD *)(a1 + 648);
          *(_QWORD *)(a1 + 632) = *(_QWORD *)(a1 + 88);
          *(_QWORD *)(a1 + 640) = v24;
        }
        v25 = ExAllocatePool2(64LL, (v13 + 4095) & 0xFFFFFFFFFFFFF000uLL, 1886217292LL);
        *(_QWORD *)(a1 + 672) = v25;
        if ( v25 )
        {
          if ( sub_14055A6A0(*(_QWORD *)(a1 + 920), *(_QWORD *)(a1 + 928), *(_QWORD *)(a1 + 936)) )
            goto LABEL_14;
          *(_QWORD *)(a1 + 656) = *(_QWORD *)(a1 + 88);
          *(_QWORD *)(a1 + 664) = v26;
          sub_14093C268(a1, v26, (v13 + 4095) & 0xFFFFFFFFFFFFF000uLL);
          for ( i = *(_QWORD *)(a1 + 56); i; i = *(_QWORD *)(i + 32) )
            sub_14093C268(a1, *(_QWORD *)(i + 16), *(unsigned int *)(i + 24));
          v9 = sub_14093C164(a1);
          if ( v9 < 0 )
            goto LABEL_43;
          if ( sub_14055A6A0(*(_QWORD *)(a1 + 920), *(_QWORD *)(a1 + 928), *(_QWORD *)(a1 + 936)) )
            goto LABEL_14;
          v9 = sub_140A666B0(a1);
          if ( v9 < 0 )
            goto LABEL_43;
          v9 = sub_14093B1CC(a1);
          if ( v9 >= 0 )
          {
            v9 = sub_14093B5F8(a1);
            if ( v9 >= 0 )
            {
              if ( !qword_140D018C8 || (v9 = sub_14093BF5C(a1), v9 >= 0) )
                sub_14055A93C();
            }
          }
          v28 = dword_140D06884;
          v29 = (unsigned int)dword_140D06884;
          v30 = ExAllocatePool2(64LL, 8LL * (unsigned int)dword_140D06884, 1886217292LL);
          *(_QWORD *)(a1 + 1112) = v30;
          if ( v30 )
          {
            v31 = (unsigned int)dword_140C0CBEC;
            *(_DWORD *)(a1 + 1104) = v28;
            v32 = (8 * v31 + 4095) & 0xFFFFFFFFFFFFF000uLL;
            if ( v28 )
            {
              v33 = 0LL;
              do
              {
                *(_QWORD *)(v33 + *(_QWORD *)(a1 + 1112)) = ExAllocatePool2(64LL, v32, 1886217292LL);
                if ( !*(_QWORD *)(v33 + *(_QWORD *)(a1 + 1112)) )
                  goto LABEL_12;
                ++v2;
                v33 += 8LL;
              }
              while ( v2 < v28 );
            }
            v34 = ExAllocatePool2(64LL, v32, 1886217292LL);
            *(_QWORD *)(a1 + 1120) = v34;
            if ( v34 )
            {
              v35 = ExAllocatePool2(64LL, v32, 1886217292LL);
              *(_QWORD *)(a1 + 1128) = v35;
              if ( v35 )
              {
                if ( !sub_14055A6A0(*(_QWORD *)(a1 + 920), *(_QWORD *)(a1 + 928), *(_QWORD *)(a1 + 936)) )
                {
                  sub_14093C268(a1, *(_QWORD *)(a1 + 1112), v32 * v29);
                  sub_14093C268(a1, *(_QWORD *)(a1 + 1120), v32);
                  sub_14093C268(a1, *(_QWORD *)(a1 + 1128), v32);
                  goto LABEL_43;
                }
                goto LABEL_14;
              }
            }
          }
          else
          {
            *(_DWORD *)(a1 + 1104) = 0;
          }
        }
      }
LABEL_12:
      v9 = -1073741670;
LABEL_43:
      v3 = v40;
      v6 = v41;
      goto LABEL_44;
    }
  }
  v9 = -1073741248;
LABEL_44:
  if ( (unsigned int)dword_140C064E0 > 5 && sub_1402A2000((__int64)&dword_140C064E0, 0x400000000000LL) )
  {
    v36 = *(_DWORD *)(a1 + 80);
    v50 = &v41;
    v40 = *(_DWORD **)(a1 + 680);
    v52 = &v40;
    v37 = *(_BYTE *)(a1 + 44) & 1;
    v41 = 0x1000000LL;
    v42 = v37;
    v54 = &v42;
    v45 = *(_QWORD *)(a1 + 696);
    v56 = &v45;
    v46 = *(_QWORD *)(a1 + 704);
    v58 = &v46;
    v43 = (v36 & 0x200) != 0;
    v44 = (v36 & 0x400) != 0;
    v60 = &v43;
    v47 = *(_QWORD *)(a1 + 1136);
    v62 = &v47;
    v64 = &v44;
    v51 = 8LL;
    v53 = 8LL;
    v55 = 1LL;
    v57 = 8LL;
    v59 = 8LL;
    v61 = 1LL;
    v63 = 8LL;
    v65 = 1LL;
    v38 = sub_14055A628(0);
    v67 = 8LL;
    v48 = v38 - v6;
    v66 = &v48;
    sub_14020A9C4(
      (__int64)&dword_140C064E0,
      (unsigned __int8 *)&word_14002B45E,
      (const GUID *)(a1 + 960),
      (const GUID *)(a1 + 944),
      0xBu,
      &v49);
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( v9 < 0 )
    sub_14093CFC8(a1);
  return (unsigned int)v9;
}
