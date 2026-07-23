/*
 * XREFs of sub_14096029C @ 0x14096029C
 * Callers:
 *     KeStartDynamicProcessor @ 0x140961810 (KeStartDynamicProcessor.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x140241620 (MmUnlockPagableImageSection.c)
 *     sub_1402F4B70 @ 0x1402F4B70 (sub_1402F4B70.c)
 *     sub_1402FD820 @ 0x1402FD820 (sub_1402FD820.c)
 *     sub_1403A0B28 @ 0x1403A0B28 (sub_1403A0B28.c)
 *     sub_1403C03EC @ 0x1403C03EC (sub_1403C03EC.c)
 *     sub_1403C1A84 @ 0x1403C1A84 (sub_1403C1A84.c)
 *     sub_1403C2638 @ 0x1403C2638 (sub_1403C2638.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     HalStartDynamicProcessor @ 0x140508D60 (HalStartDynamicProcessor.c)
 *     HalRegisterDynamicProcessor @ 0x14050A770 (HalRegisterDynamicProcessor.c)
 *     sub_14056918C @ 0x14056918C (sub_14056918C.c)
 *     sub_14056DA54 @ 0x14056DA54 (sub_14056DA54.c)
 *     sub_14056DB6C @ 0x14056DB6C (sub_14056DB6C.c)
 *     sub_14056EB1C @ 0x14056EB1C (sub_14056EB1C.c)
 *     sub_14057F9FC @ 0x14057F9FC (sub_14057F9FC.c)
 *     sub_14063A6C0 @ 0x14063A6C0 (sub_14063A6C0.c)
 *     sub_140825358 @ 0x140825358 (sub_140825358.c)
 *     sub_140825414 @ 0x140825414 (sub_140825414.c)
 *     sub_14082552C @ 0x14082552C (sub_14082552C.c)
 *     sub_140829A28 @ 0x140829A28 (sub_140829A28.c)
 *     sub_140829ACC @ 0x140829ACC (sub_140829ACC.c)
 *     sub_140829CBC @ 0x140829CBC (sub_140829CBC.c)
 *     sub_140829EEC @ 0x140829EEC (sub_140829EEC.c)
 *     sub_140829F84 @ 0x140829F84 (sub_140829F84.c)
 *     sub_14082A0D8 @ 0x14082A0D8 (sub_14082A0D8.c)
 *     sub_14082A2D4 @ 0x14082A2D4 (sub_14082A2D4.c)
 *     sub_14082A324 @ 0x14082A324 (sub_14082A324.c)
 *     sub_140851878 @ 0x140851878 (sub_140851878.c)
 *     sub_140919E48 @ 0x140919E48 (sub_140919E48.c)
 *     sub_140931100 @ 0x140931100 (sub_140931100.c)
 *     sub_14096ED20 @ 0x14096ED20 (sub_14096ED20.c)
 *     sub_1409783E8 @ 0x1409783E8 (sub_1409783E8.c)
 *     sub_1409DEEDC @ 0x1409DEEDC (sub_1409DEEDC.c)
 *     sub_140A545F8 @ 0x140A545F8 (sub_140A545F8.c)
 *     sub_140A59B28 @ 0x140A59B28 (sub_140A59B28.c)
 *     sub_140A59E20 @ 0x140A59E20 (sub_140A59E20.c)
 *     sub_140A693D8 @ 0x140A693D8 (sub_140A693D8.c)
 *     sub_140A69E6C @ 0x140A69E6C (sub_140A69E6C.c)
 *     sub_140A69EB4 @ 0x140A69EB4 (sub_140A69EB4.c)
 *     sub_140A6D30C @ 0x140A6D30C (sub_140A6D30C.c)
 */

__int64 __fastcall sub_14096029C(__int64 a1, int a2, unsigned __int16 a3, unsigned int a4)
{
  __int64 v5; // r13
  _OWORD *v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // r14
  unsigned __int64 v9; // r15
  __int64 *v10; // r8
  SIZE_T v11; // rdx
  int v12; // ebx
  unsigned int v13; // r12d
  _OWORD *v14; // rcx
  __int128 v15; // xmm1
  __int64 v17; // rdx
  PVOID v18; // rcx
  __int64 v19; // r13
  int v20; // r12d
  int started; // eax
  unsigned __int16 v22; // [rsp+30h] [rbp-D0h] BYREF
  ULONG_PTR v23; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE BugCheckParameter3[12]; // [rsp+40h] [rbp-C0h] BYREF
  void *v25; // [rsp+50h] [rbp-B0h]
  __int64 v26; // [rsp+58h] [rbp-A8h]
  _QWORD v27[16]; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v28[23]; // [rsp+E0h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter1[184]; // [rsp+250h] [rbp+150h] BYREF

  LODWORD(v23) = a2;
  *(_QWORD *)BugCheckParameter3 = a4;
  *(_DWORD *)&BugCheckParameter3[8] = 0;
  memset(v28, 0, sizeof(v28));
  memset(BugCheckParameter1, 0, sizeof(BugCheckParameter1));
  v25 = 0LL;
  v22 = 0;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  LODWORD(v9) = 0;
  memset(v27, 0, 0x78uLL);
  v10 = qword_140D31700;
  v11 = 2LL;
  if ( (unsigned int)dword_140D06884 >= 0x800 || dword_140D06A08 && (unsigned int)dword_140D06884 >= dword_140D06A08 )
  {
    v12 = -1073741223;
    goto LABEL_23;
  }
  v12 = HalRegisterDynamicProcessor();
  if ( v12 >= 0 )
  {
    v22 = a3;
    v13 = *(_DWORD *)BugCheckParameter3;
    v12 = sub_1403C1A84(*(unsigned int *)BugCheckParameter3, &v23, &v22);
    if ( !v12 )
    {
      v9 = (unsigned int)sub_140A545F8((unsigned int)dword_140D068E8, &BugCheckParameter3[4], &BugCheckParameter3[8]);
      v8 = sub_140829CBC(v9, v22, 0LL, 0);
      if ( !v8 )
      {
        v12 = -1073741670;
        dword_140D06A9C = 0;
        goto LABEL_36;
      }
      v25 = sub_140829A28(v13, v22);
      if ( !v25 )
      {
        v12 = -1073741670;
        dword_140D06A9C = 0;
        goto LABEL_35;
      }
      v27[4] = sub_1402F4B70(0, v22, 0LL);
      if ( !v27[4]
        || (v27[5] = sub_1402F4B70(0, v22, 0LL)) == 0LL
        || !sub_140829ACC(&v27[6], v22)
        || !sub_140829ACC(&v27[7], v22)
        || !sub_140829ACC(&v27[11], v22)
        || !sub_140829ACC(&v27[9], v22)
        || !sub_140829ACC(&v27[10], v22)
        || !sub_140829ACC(&v27[8], v22) )
      {
        v12 = -1073741670;
        dword_140D06A9C = 0;
        goto LABEL_31;
      }
      v12 = sub_1403C2638(v22, (__int64)&v27[2] + 4);
      if ( v12 < 0 )
        goto LABEL_22;
      LODWORD(v27[0]) = 1;
      HIDWORD(v27[0]) = v9;
      v5 = qword_140D31700[v22];
      LODWORD(v27[1]) = v22;
      LODWORD(v27[2]) = dword_140D068E8;
      v27[3] = *(_QWORD *)&BugCheckParameter3[4];
      v26 = v5;
      v28[1] = *(_OWORD *)&PsLoadedModuleList;
      HIDWORD(v27[1]) = v13;
      v7 = sub_14082A324(BugCheckParameter1, v28, v8, (__int64)v27);
      if ( !v7 )
      {
        v12 = -1073741670;
        goto LABEL_22;
      }
      v6 = (_OWORD *)qword_140D31700[v22];
      if ( !(unsigned int)sub_140A59E20(v7) )
      {
        v12 = -1073741823;
LABEL_84:
        sub_14056DB6C(v7);
        goto LABEL_22;
      }
      v12 = sub_140A59B28(v7, v22);
      if ( v12 < 0 )
        goto LABEL_84;
      v12 = sub_14082A0D8(v7, v17);
      if ( v12 < 0 )
        goto LABEL_84;
      v12 = sub_1403C03EC(v7, 1);
      if ( v12 < 0 )
        goto LABEL_84;
      v12 = sub_140825414((_QWORD *)v7);
      if ( v12 < 0 )
        goto LABEL_84;
      v12 = sub_14082552C(v7, 0LL);
      if ( v12 < 0 )
        goto LABEL_84;
      v12 = sub_140825358(v7);
      if ( v12 < 0 )
        goto LABEL_84;
      v12 = sub_140829F84(v7);
      if ( v12 < 0 )
        goto LABEL_84;
      sub_140829EEC(*(_QWORD *)(v7 + 34472), *(_DWORD *)(v7 + 36));
      v12 = sub_140A6D30C(v7, 0LL);
      if ( v12 < 0 )
        goto LABEL_84;
      v12 = sub_14082A2D4((_SLIST_HEADER *)v7);
      if ( v12 < 0 )
        goto LABEL_84;
      if ( *(_QWORD *)(qword_140D088C0[0] + 13072) )
      {
        v12 = sub_140851878(v7);
        if ( v12 < 0 )
          goto LABEL_84;
      }
      v18 = ImageSectionHandle;
      *(_QWORD *)(v7 + 34968) = 0LL;
      *(_QWORD *)(v7 + 34976) = v7 + 34976;
      sub_1402FD820((ULONG_PTR)v18, 1uLL);
      sub_140A69EB4(v7);
      v19 = qword_140D068D0;
      dword_140D06A9C = 1;
      if ( !qword_140D068D0 )
      {
        qword_140D068D0 = (__int64)v28;
        v28[1] = *(_OWORD *)&PsLoadedModuleList;
      }
      v12 = sub_14056EB1C(0, *(_DWORD *)(v7 + 36), *(unsigned __int8 *)(v7 + 208), *(_BYTE *)(v7 + 209), v23, 0);
      v20 = 2;
      if ( v12 >= 0 )
      {
        started = HalStartDynamicProcessor((__int64)BugCheckParameter1, *(unsigned int *)BugCheckParameter3, v23, v22);
        if ( started == 3 )
          KeBugCheckEx(
            0x1DFu,
            (ULONG_PTR)BugCheckParameter1,
            3uLL,
            *(unsigned int *)BugCheckParameter3,
            (unsigned int)v23);
        if ( started == 2 )
        {
          v12 = -1073741823;
        }
        else
        {
          while ( *((_QWORD *)&v28[8] + 1) )
            _mm_pause();
          sub_140A693D8(v7);
          v20 = 1;
        }
      }
      sub_14056EB1C(v20, *(_DWORD *)(v7 + 36), *(unsigned __int8 *)(v7 + 208), *(_BYTE *)(v7 + 209), v23, v12);
      if ( v12 >= 0 )
      {
        sub_140A6D30C(v7, 1LL);
        sub_140919E48(v7);
        sub_14056918C(v7);
      }
      qword_140D068D0 = v19;
      MmUnlockPagableImageSection(ImageSectionHandle);
      v5 = v26;
    }
    if ( v12 >= 0 )
      return (unsigned int)v12;
    if ( !v7 )
      goto LABEL_22;
    goto LABEL_84;
  }
LABEL_22:
  v11 = 2LL;
  v10 = qword_140D31700;
LABEL_23:
  dword_140D06A9C = 0;
  if ( v5 )
  {
    v14 = (_OWORD *)v5;
    do
    {
      *v14 = *v6;
      v14[1] = v6[1];
      v14[2] = v6[2];
      v14[3] = v6[3];
      v14[4] = v6[4];
      v14[5] = v6[5];
      v14[6] = v6[6];
      v14 += 8;
      v15 = v6[7];
      v6 += 8;
      *(v14 - 1) = v15;
      --v11;
    }
    while ( v11 );
    *v14 = *v6;
    *((_QWORD *)v14 + 2) = *((_QWORD *)v6 + 2);
    qword_140D31700[v22] = v5;
  }
  if ( v7 )
  {
    sub_140931100(v7, v11, (MEMORY_CACHING_TYPE)qword_140D31700);
    sub_14057F9FC(v7);
    sub_1409DEEDC(v7);
  }
  if ( !v25 )
    goto LABEL_32;
  v13 = *(_DWORD *)BugCheckParameter3;
LABEL_31:
  sub_14063A6C0(v13);
LABEL_32:
  if ( !v8 )
    goto LABEL_36;
  if ( v7 )
    sub_140A69E6C(v7, BugCheckParameter1, v10);
LABEL_35:
  sub_14096ED20(v8, (unsigned int)v9);
LABEL_36:
  if ( WORD2(v27[2]) || BYTE6(v27[2]) )
    sub_14056DA54((unsigned __int16 *)&v27[2] + 2);
  if ( v27[4] )
    sub_1403A0B28(v27[4], 0);
  if ( v27[5] )
    sub_1403A0B28(v27[5], 0);
  if ( v27[6] )
    sub_1409783E8();
  if ( v27[7] )
    sub_1409783E8();
  if ( v27[8] )
    sub_1409783E8();
  if ( v27[10] )
    sub_1409783E8();
  if ( v27[9] )
    sub_1409783E8();
  if ( v27[11] )
    sub_1409783E8();
  return (unsigned int)v12;
}
