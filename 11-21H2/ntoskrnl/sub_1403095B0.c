/*
 * XREFs of sub_1403095B0 @ 0x1403095B0
 * Callers:
 *     sub_14021538C @ 0x14021538C (sub_14021538C.c)
 *     sub_1402359C4 @ 0x1402359C4 (sub_1402359C4.c)
 *     sub_14024076C @ 0x14024076C (sub_14024076C.c)
 *     sub_14024B428 @ 0x14024B428 (sub_14024B428.c)
 *     sub_14026A28C @ 0x14026A28C (sub_14026A28C.c)
 *     MmCopyMemory @ 0x14026BBB0 (MmCopyMemory.c)
 *     sub_14026C124 @ 0x14026C124 (sub_14026C124.c)
 *     StartRoutine @ 0x14026C240 (StartRoutine.c)
 *     sub_14026D460 @ 0x14026D460 (sub_14026D460.c)
 *     sub_14026F180 @ 0x14026F180 (sub_14026F180.c)
 *     sub_14028DF40 @ 0x14028DF40 (sub_14028DF40.c)
 *     sub_1402BBEE0 @ 0x1402BBEE0 (sub_1402BBEE0.c)
 *     sub_1402BE8E0 @ 0x1402BE8E0 (sub_1402BE8E0.c)
 *     sub_1402DAEB0 @ 0x1402DAEB0 (sub_1402DAEB0.c)
 *     sub_1402F4B70 @ 0x1402F4B70 (sub_1402F4B70.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     sub_140323D70 @ 0x140323D70 (sub_140323D70.c)
 *     sub_1403B7B80 @ 0x1403B7B80 (sub_1403B7B80.c)
 *     sub_1403C289C @ 0x1403C289C (sub_1403C289C.c)
 *     sub_1403CF824 @ 0x1403CF824 (sub_1403CF824.c)
 *     MmMapMdl @ 0x140592400 (MmMapMdl.c)
 *     sub_140599780 @ 0x140599780 (sub_140599780.c)
 *     sub_14059B62C @ 0x14059B62C (sub_14059B62C.c)
 *     sub_1405A1128 @ 0x1405A1128 (sub_1405A1128.c)
 *     sub_1405A5990 @ 0x1405A5990 (sub_1405A5990.c)
 *     sub_1405A7D28 @ 0x1405A7D28 (sub_1405A7D28.c)
 *     sub_1405AF6F0 @ 0x1405AF6F0 (sub_1405AF6F0.c)
 *     sub_1406F3408 @ 0x1406F3408 (sub_1406F3408.c)
 *     sub_1406FF49C @ 0x1406FF49C (sub_1406FF49C.c)
 *     sub_1407614BC @ 0x1407614BC (sub_1407614BC.c)
 *     sub_1407BF070 @ 0x1407BF070 (sub_1407BF070.c)
 *     sub_1407F17B4 @ 0x1407F17B4 (sub_1407F17B4.c)
 *     sub_1407F1A10 @ 0x1407F1A10 (sub_1407F1A10.c)
 *     MmAllocateMappingAddressEx @ 0x1407F9D50 (MmAllocateMappingAddressEx.c)
 *     sub_140801D08 @ 0x140801D08 (sub_140801D08.c)
 *     sub_140829CBC @ 0x140829CBC (sub_140829CBC.c)
 *     sub_14082ACF0 @ 0x14082ACF0 (sub_14082ACF0.c)
 *     MmAllocateNonCachedMemory @ 0x14096A490 (MmAllocateNonCachedMemory.c)
 *     sub_140970AB4 @ 0x140970AB4 (sub_140970AB4.c)
 *     sub_140976140 @ 0x140976140 (sub_140976140.c)
 *     sub_140978F40 @ 0x140978F40 (sub_140978F40.c)
 *     sub_140981778 @ 0x140981778 (sub_140981778.c)
 *     sub_140A59E20 @ 0x140A59E20 (sub_140A59E20.c)
 *     sub_140AF47DC @ 0x140AF47DC (sub_140AF47DC.c)
 *     sub_140AF6B44 @ 0x140AF6B44 (sub_140AF6B44.c)
 *     sub_140B04AE0 @ 0x140B04AE0 (sub_140B04AE0.c)
 *     sub_140B05D00 @ 0x140B05D00 (sub_140B05D00.c)
 *     sub_140B06A84 @ 0x140B06A84 (sub_140B06A84.c)
 *     sub_140B07C00 @ 0x140B07C00 (sub_140B07C00.c)
 *     sub_140B09340 @ 0x140B09340 (sub_140B09340.c)
 *     sub_140B0A4A8 @ 0x140B0A4A8 (sub_140B0A4A8.c)
 *     sub_140B2D454 @ 0x140B2D454 (sub_140B2D454.c)
 *     sub_140B51F9C @ 0x140B51F9C (sub_140B51F9C.c)
 *     sub_140B5229C @ 0x140B5229C (sub_140B5229C.c)
 * Callees:
 *     sub_140269570 @ 0x140269570 (sub_140269570.c)
 *     sub_140269760 @ 0x140269760 (sub_140269760.c)
 *     sub_14026A818 @ 0x14026A818 (sub_14026A818.c)
 *     sub_14026CCC0 @ 0x14026CCC0 (sub_14026CCC0.c)
 *     sub_140309C60 @ 0x140309C60 (sub_140309C60.c)
 *     sub_140352EB0 @ 0x140352EB0 (sub_140352EB0.c)
 *     sub_1405B563C @ 0x1405B563C (sub_1405B563C.c)
 */

ULONG_PTR __fastcall sub_1403095B0(__int64 a1, unsigned int a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // rsi
  ULONG_PTR v8; // r15
  int v9; // r15d
  unsigned __int64 v10; // r12
  unsigned __int64 *v11; // r9
  unsigned __int64 v12; // r10
  __int128 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // r12
  char v18; // r9
  unsigned __int64 v19; // r11
  __int64 v20; // r8
  unsigned __int64 *v21; // rdx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // r15
  __int64 v25; // rcx
  unsigned __int64 v26; // r8
  __int64 v27; // rax
  unsigned __int64 v29; // r13
  __int64 v30; // r9
  bool v31; // zf
  __int64 v32; // rax
  unsigned int v33; // r9d
  unsigned __int64 v34; // r13
  unsigned __int64 v35; // rax
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned __int64 v39; // r13
  unsigned __int64 v40; // r11
  __int64 v41; // r8
  unsigned int v42; // ecx
  unsigned __int64 *v43; // r8
  unsigned int v44; // r8d
  __int64 v45; // rcx
  __int64 v46; // rax
  bool v47; // sf
  __int64 v48; // rcx
  unsigned int v49; // eax
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rcx
  unsigned __int64 v54; // [rsp+20h] [rbp-98h]
  unsigned __int64 v55; // [rsp+28h] [rbp-90h]
  unsigned __int64 *v56; // [rsp+48h] [rbp-70h]
  unsigned __int64 *v57; // [rsp+50h] [rbp-68h]
  unsigned __int64 v58; // [rsp+58h] [rbp-60h]
  _OWORD v59[5]; // [rsp+60h] [rbp-58h] BYREF
  int v60; // [rsp+C0h] [rbp+8h]

  v2 = *(_DWORD *)(a1 + 24);
  v3 = 0;
  v4 = a2;
  v5 = a2;
  v6 = a2;
  v59[0] = 0LL;
  if ( (v2 & 2) != 0 )
  {
    v6 = (unsigned __int64)a2 >> 4;
  }
  else if ( (__int64 *)a1 == &qword_140C534C0 && a2 <= 0x40uLL )
  {
    v8 = sub_140309C60(a2);
    if ( v8 )
      goto LABEL_35;
  }
  if ( (unsigned int)v4 < 0x200 )
    goto LABEL_8;
  v37 = sub_14026A818((__int64 *)a1, v4);
  v8 = v37;
  if ( v37 )
  {
    if ( (__int64 *)a1 == &qword_140C534C0 && (dword_140D051BC & 2) != 0 )
      sub_1405B563C(v37, v4);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), -(__int64)v6);
    return v8;
  }
  if ( (__int64 *)a1 != &qword_140C534C0 )
  {
LABEL_8:
    v9 = 0;
    v60 = 0;
    v10 = 0LL;
    while ( 1 )
    {
      while ( 1 )
      {
        v11 = (unsigned __int64 *)a1;
        v12 = *(_QWORD *)(a1 + 56);
        v56 = (unsigned __int64 *)a1;
        if ( *(_QWORD *)a1 )
          break;
LABEL_60:
        if ( !v10 || v10 == *(_QWORD *)(a1 + 64) )
        {
          if ( (*(_DWORD *)(a1 + 24) & 1) == 0
            || ((v9 & 1) != 0 || (v9 |= 1u, v60 = v9, !(unsigned int)sub_140269570(a1, 0)))
            && ((v9 & 2) != 0 || (v9 |= 2u, v60 = v9, !sub_140269760(a1)) || !(unsigned int)sub_140269570(a1, 1)) )
          {
            v8 = sub_14026A818((__int64 *)a1, v5);
            if ( v8 )
              goto LABEL_34;
            if ( (*(_BYTE *)(a1 + 24) & 1) == 0 || (v60 & 4) != 0 )
              goto LABEL_138;
            v9 = v60 | 4;
            v60 |= 4u;
            sub_140269570(a1, 1);
          }
        }
      }
      v10 = *(_QWORD *)(a1 + 64);
      v58 = v10;
      if ( v10 )
      {
        if ( *(_QWORD *)a1 < v10 )
        {
          v10 = 0LL;
          v58 = 0LL;
        }
        else
        {
          *(_QWORD *)&v13 = *(_QWORD *)a1 - v10;
          *((_QWORD *)&v13 + 1) = *(_QWORD *)(a1 + 8) + 8 * (v10 >> 6);
          v59[0] = v13;
          v11 = (unsigned __int64 *)v59;
          v56 = (unsigned __int64 *)v59;
          if ( v12 )
            v12 -= v10;
        }
      }
      v14 = *v11;
      v15 = v12;
      v54 = *v11;
      if ( v12 >= *v11 )
        v15 = 0LL;
      if ( v6 )
      {
        v16 = v14 - 1;
        v17 = v11[1];
        while ( v16 - v15 + 1 < v6 )
        {
          v23 = -1LL;
LABEL_55:
          if ( !v15 )
          {
LABEL_26:
            LODWORD(v4) = a2;
            v24 = v23;
            v10 = v58;
            v5 = a2;
            v11 = v56;
            goto LABEL_27;
          }
          v29 = v6 + v12;
          if ( v6 + v12 > v14 )
            v29 = v14;
          v16 = v29 - 1;
          v15 = 0LL;
        }
        v18 = v16 - v6 + 1;
        v55 = v16 - v6 + 1;
        v19 = v17 + 8 * (v55 >> 6);
        v20 = *(_QWORD *)(v17 + 8 * (v15 >> 6)) | ((1LL << (v15 & 0x3F)) - 1);
        v21 = (unsigned __int64 *)(v17 + 8 * (v15 >> 6));
        if ( v6 > 0x7F )
        {
          v39 = v19 + 8;
          if ( (v18 & 0x3F) == 0 )
            v39 = v17 + 8 * (v55 >> 6);
          if ( v20 )
          {
            if ( *++v21 )
            {
              v40 = v55;
              goto LABEL_101;
            }
            v31 = !_BitScanReverse64((unsigned __int64 *)&v46, v20);
            if ( v31 )
              v42 = 64;
            else
              v42 = 63 - v46;
            v40 = v55;
          }
          else
          {
            v40 = v55;
            v42 = 0;
          }
LABEL_105:
          v23 = ((__int64)((__int64)v21 - v17) >> 3 << 6) - v42;
          if ( v23 > v40 )
            goto LABEL_53;
          v43 = &v21[(v6 - v42) >> 6];
          if ( ++v21 == v43 )
          {
LABEL_109:
            v44 = ((_BYTE)v6 - (_BYTE)v42) & 0x3F;
            if ( (((_BYTE)v6 - (_BYTE)v42) & 0x3F) != 0 )
            {
              v31 = !_BitScanForward64((unsigned __int64 *)&v45, *v21);
              if ( v31 )
                LODWORD(v45) = 64;
              if ( (unsigned int)v45 < v44 )
                goto LABEL_101;
            }
            goto LABEL_25;
          }
          while ( !*v21 )
          {
            if ( ++v21 == v43 )
              goto LABEL_109;
          }
LABEL_101:
          while ( (unsigned __int64)v21 <= v39 )
          {
            if ( !*++v21 )
            {
              v31 = !_BitScanReverse64((unsigned __int64 *)&v41, *(v21 - 1));
              if ( v31 )
                v42 = 64;
              else
                v42 = 63 - v41;
              goto LABEL_105;
            }
          }
        }
        else
        {
          if ( v6 >= 0x40 )
          {
            while ( 2 )
            {
              v47 = v20 < 0;
              while ( 1 )
              {
                if ( v47 )
                {
                  do
                  {
                    if ( (unsigned __int64)++v21 > v19 )
                      goto LABEL_53;
                    v20 = *v21;
                  }
                  while ( (*v21 & 0x8000000000000000uLL) != 0LL );
                }
                v31 = !_BitScanReverse64((unsigned __int64 *)&v48, v20);
                if ( v31 )
                  v49 = 64;
                else
                  v49 = 63 - v48;
                v23 = ((((__int64)((__int64)v21 - v17) >> 3) + 1) << 6) - v49;
                if ( v23 > v55 )
                  goto LABEL_53;
                v50 = v6 - v49;
                if ( v6 == v49 )
                  goto LABEL_25;
                v20 = v21[1];
                ++v21;
                if ( v50 < 0x40 )
                  break;
                v47 = v20 < 0;
                if ( !v20 )
                {
                  v50 -= 64LL;
                  if ( !v50 )
                    goto LABEL_25;
                  v20 = v21[1];
                  ++v21;
                  break;
                }
              }
              v31 = !_BitScanForward64(&v51, v20);
              if ( v31 )
                v51 = 64LL;
              if ( v51 < v50 )
                continue;
              goto LABEL_25;
            }
          }
          if ( v6 <= 1 )
          {
            if ( v20 == -1 )
            {
              while ( (unsigned __int64)++v21 <= v19 )
              {
                v20 = *v21;
                if ( *v21 != -1LL )
                  goto LABEL_23;
              }
            }
            else
            {
LABEL_23:
              _BitScanForward64(&v22, ~v20);
              v23 = v22 + ((__int64)((__int64)v21 - v17) >> 3 << 6);
LABEL_24:
              if ( v23 <= v55 )
              {
LABEL_25:
                if ( v23 != -1LL )
                  goto LABEL_26;
                goto LABEL_54;
              }
            }
LABEL_53:
            v23 = -1LL;
LABEL_54:
            v14 = v54;
            goto LABEL_55;
          }
          v30 = 0LL;
          v57 = (unsigned __int64 *)(v17 + 8 * (v16 >> 6));
          while ( v20 != -1 )
          {
LABEL_71:
            v31 = !_BitScanForward64((unsigned __int64 *)&v32, v20);
            if ( v31 )
              LODWORD(v32) = 64;
            if ( (unsigned int)(v30 + v32) >= v6 )
            {
              v36 = -v30;
LABEL_78:
              v23 = ((__int64)((__int64)v21 - v17) >> 3 << 6) + v36;
              goto LABEL_24;
            }
            v33 = v6;
            v34 = ~v20;
            while ( 1 )
            {
              v34 &= v34 >> (v33 >> 1);
              if ( !v34 )
                break;
              v33 -= v33 >> 1;
              if ( v33 <= 1 )
              {
                _BitScanForward64(&v35, v34);
                v36 = (unsigned int)v35;
                goto LABEL_78;
              }
            }
            if ( v21 == v57 )
              goto LABEL_90;
            v31 = !_BitScanReverse64((unsigned __int64 *)&v38, v20);
            if ( v31 )
              v30 = 64LL;
            else
              v30 = (unsigned int)(63 - v38);
            v20 = v21[1];
            ++v21;
          }
          while ( (unsigned __int64)++v21 <= v19 )
          {
            v20 = *v21;
            if ( *v21 != -1LL )
            {
              v30 = 0LL;
              goto LABEL_71;
            }
          }
        }
LABEL_90:
        v23 = -1LL;
        goto LABEL_54;
      }
      v24 = v15 & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_27:
      if ( v24 == -1LL )
      {
        v9 = v60;
        goto LABEL_60;
      }
      if ( (unsigned int)sub_14026CCC0((__int64)v11, v24, v6) )
      {
        if ( v56 == (unsigned __int64 *)v59 )
          v24 += v10;
        *(_QWORD *)(a1 + 56) = v6 + v24;
        v25 = 16 * v24;
        if ( (*(_DWORD *)(a1 + 24) & 2) == 0 )
          v25 = v24;
        v8 = *(_QWORD *)(a1 + 16) + 8 * v25;
LABEL_34:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), -(__int64)v6);
        if ( (__int64 *)a1 != &qword_140C534C0 )
        {
LABEL_37:
          if ( (unsigned int)v4 <= 0x10 )
          {
            if ( (_DWORD)v4 )
            {
              while ( 1 )
              {
                v26 = v8 + 8LL * v3;
                v27 = *(_QWORD *)v26;
                if ( v26 >= 0xFFFFF6FB7DBED000uLL
                  && v26 <= 0xFFFFF6FB7DBED7F8uLL
                  && (dword_140D06880 & 0xC00000) != 0
                  && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
                  && (v27 & 1) != 0
                  && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
                {
                  v52 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
                  if ( v52 )
                  {
                    v53 = *(_QWORD *)(v52 + 8 * ((v26 >> 3) & 0x1FF));
                    if ( (v53 & 0x20) != 0 )
                      v27 |= 0x20uLL;
                    if ( (v53 & 0x42) != 0 )
                      v27 |= 0x42uLL;
                  }
                }
                if ( qword_140C50780 )
                {
                  if ( (v27 & 0x10) == 0 )
                    v27 &= ~qword_140C50780;
                }
                if ( (v27 & 0xFFFFFFFF00000000uLL) != 0 )
                  break;
                if ( ++v3 >= (unsigned int)v4 )
                  goto LABEL_45;
              }
            }
            else
            {
LABEL_45:
              if ( v3 == (_DWORD)v4 )
                return v8;
            }
          }
          sub_140352EB0(v8);
          return v8;
        }
LABEL_35:
        if ( (dword_140D051BC & 2) != 0 )
          sub_1405B563C(v8, v5);
        goto LABEL_37;
      }
      v9 = v60;
    }
  }
LABEL_138:
  ++*(_DWORD *)(a1 + 32);
  return 0LL;
}
