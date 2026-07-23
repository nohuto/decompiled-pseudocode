/*
 * XREFs of sub_14039A210 @ 0x14039A210
 * Callers:
 *     sub_140809614 @ 0x140809614 (sub_140809614.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140255D5C @ 0x140255D5C (sub_140255D5C.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140395A18 @ 0x140395A18 (sub_140395A18.c)
 *     sub_140395BDC @ 0x140395BDC (sub_140395BDC.c)
 *     sub_140397424 @ 0x140397424 (sub_140397424.c)
 *     sub_140398B2C @ 0x140398B2C (sub_140398B2C.c)
 *     sub_140399184 @ 0x140399184 (sub_140399184.c)
 *     sub_140399210 @ 0x140399210 (sub_140399210.c)
 *     sub_14039A88C @ 0x14039A88C (sub_14039A88C.c)
 *     sub_14039A994 @ 0x14039A994 (sub_14039A994.c)
 *     sub_14039AAB0 @ 0x14039AAB0 (sub_14039AAB0.c)
 *     sub_14039AC54 @ 0x14039AC54 (sub_14039AC54.c)
 *     sub_14039AD24 @ 0x14039AD24 (sub_14039AD24.c)
 *     sub_14039AD4C @ 0x14039AD4C (sub_14039AD4C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405C7F88 @ 0x1405C7F88 (sub_1405C7F88.c)
 *     sub_1406EBB94 @ 0x1406EBB94 (sub_1406EBB94.c)
 *     sub_1407628C0 @ 0x1407628C0 (sub_1407628C0.c)
 *     sub_140805320 @ 0x140805320 (sub_140805320.c)
 *     sub_140807750 @ 0x140807750 (sub_140807750.c)
 *     sub_140808700 @ 0x140808700 (sub_140808700.c)
 *     sub_140808CFC @ 0x140808CFC (sub_140808CFC.c)
 *     sub_14080A01C @ 0x14080A01C (sub_14080A01C.c)
 *     sub_14080A09C @ 0x14080A09C (sub_14080A09C.c)
 *     sub_14080A124 @ 0x14080A124 (sub_14080A124.c)
 *     sub_14080A2DC @ 0x14080A2DC (sub_14080A2DC.c)
 *     sub_14080A360 @ 0x14080A360 (sub_14080A360.c)
 *     sub_14080A3E4 @ 0x14080A3E4 (sub_14080A3E4.c)
 *     sub_14080A3F8 @ 0x14080A3F8 (sub_14080A3F8.c)
 *     sub_14080A454 @ 0x14080A454 (sub_14080A454.c)
 *     sub_1408111A0 @ 0x1408111A0 (sub_1408111A0.c)
 *     sub_140811764 @ 0x140811764 (sub_140811764.c)
 *     sub_140811A68 @ 0x140811A68 (sub_140811A68.c)
 *     sub_14098D49C @ 0x14098D49C (sub_14098D49C.c)
 *     sub_14098D650 @ 0x14098D650 (sub_14098D650.c)
 *     sub_14098E0AC @ 0x14098E0AC (sub_14098E0AC.c)
 *     sub_140998544 @ 0x140998544 (sub_140998544.c)
 *     sub_140998578 @ 0x140998578 (sub_140998578.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 __fastcall sub_14039A210(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r15d
  __int64 v9; // rdx
  char v10; // r13
  char v11; // r12
  bool v12; // zf
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  unsigned __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  _QWORD *v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  unsigned int v33; // eax
  KIRQL v34; // al
  unsigned __int64 v35; // rsi
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r10
  __int64 v38; // r9
  int v39; // eax
  KIRQL v40; // al
  __int64 v41; // r8
  unsigned __int64 v42; // r14
  unsigned int i; // esi
  __int64 v44; // rcx
  __int64 j; // rdx
  __int64 v46; // rax
  unsigned __int8 v47; // al
  struct _KPRCB *v48; // r9
  int v49; // eax
  __int64 v50; // r8
  __int64 v51; // r8
  __int64 *v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v57; // r8
  int v58; // eax
  unsigned int v59; // [rsp+30h] [rbp-D0h] BYREF
  int v60; // [rsp+34h] [rbp-CCh] BYREF
  int v61; // [rsp+38h] [rbp-C8h] BYREF
  int v62; // [rsp+3Ch] [rbp-C4h] BYREF
  int v63; // [rsp+40h] [rbp-C0h] BYREF
  int v64; // [rsp+44h] [rbp-BCh] BYREF
  int v65; // [rsp+48h] [rbp-B8h] BYREF
  int v66; // [rsp+4Ch] [rbp-B4h] BYREF
  int v67; // [rsp+50h] [rbp-B0h] BYREF
  int v68; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v69; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v70; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v71; // [rsp+68h] [rbp-98h] BYREF
  __int128 v72; // [rsp+70h] [rbp-90h] BYREF
  __int128 v73; // [rsp+80h] [rbp-80h]
  __int128 v74; // [rsp+90h] [rbp-70h]
  __int64 v75; // [rsp+A0h] [rbp-60h]
  _BYTE v76[80]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v77; // [rsp+100h] [rbp+0h] BYREF
  __int128 v78; // [rsp+110h] [rbp+10h] BYREF

  v4 = 0;
  v68 = 0;
  v70 = 0LL;
  v61 = 0;
  v59 = 0;
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  v78 = 0LL;
  v77 = 0LL;
  memset(v76, 0, 0x4CuLL);
  v62 = 0;
  v75 = 0LL;
  v10 = 0;
  v60 = *(_DWORD *)(a3 + 12);
  v11 = 0;
  LODWORD(v69) = *(_DWORD *)(a3 + 8);
  v13 = *a1 - 0x44FD8B8ECC99192BLL;
  v12 = *a1 == 0x44FD8B8ECC99192BLL;
  v67 = 0;
  v66 = 0;
  v64 = 0;
  v65 = 0;
  v63 = 0;
  v74 = 0LL;
  if ( v12 )
    v13 = a1[1] - 0x294D1B1462EFA9B0LL;
  if ( !v13 )
    v11 = sub_14080A454();
  if ( qword_140C5ADF8 )
  {
    sub_14042A5E0(a4 + 152, v9);
    *(_QWORD *)(a4 + 152) /= 0xAuLL;
  }
  sub_140A48330();
  v14 = MEMORY[0xFFFFF78000000008];
  v15 = *a1 - 0x44FD8B8ECC99192BLL;
  if ( *a1 == 0x44FD8B8ECC99192BLL )
    v15 = a1[1] - 0x294D1B1462EFA9B0LL;
  if ( v15 )
  {
    sub_140398B2C();
    sub_140395A18((__int64)&qword_140C21FA8);
    sub_140397424(a4, dword_140C21E30);
    v69 = a4;
    sub_140811764(1LL, &v69);
    sub_140399184(v30, dword_140C542C0);
    sub_140808CFC();
    sub_140395BDC();
    sub_140399210(v31, 10 * *(_QWORD *)(a4 + 32), 10 * *(_DWORD *)(a4 + 40));
    sub_140807750(a4);
    sub_140805320(a4, a2);
    if ( sub_14080A01C((unsigned int)dword_140C542C0) )
    {
      sub_14098D49C(v32, (unsigned int)dword_140C542C0);
      v4 = sub_14098D650(v54, (unsigned int)dword_140C542C0);
    }
    v33 = sub_14039A88C(0LL);
    sub_140808700(v33);
    qword_140C54148 = 0LL;
    v34 = KeAcquireSpinLockRaiseToDpc(&qword_140C22378);
    dword_140C22380 = 0;
    v35 = v34;
    KeReleaseSpinLockFromDpcLevel(&qword_140C22378);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v35 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v57 = *((_QWORD *)CurrentPrcb + 4375);
          v58 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v35 + 1));
          v12 = (v58 & *(_DWORD *)(v57 + 20)) == 0;
          *(_DWORD *)(v57 + 20) &= v58;
          if ( v12 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v35);
  }
  else
  {
    qword_140C21FA8 = a2;
    sub_14039AD4C(&v72);
    sub_14039AD24((unsigned int)dword_140C542C0, &v70, &v71);
    dword_140C54140 = v60;
    qword_140C54150 = *((_QWORD *)&v72 + 1);
    dword_140C54160 = DWORD2(v73);
    qword_140C54158 = v72;
    qword_140C541D8 = v73;
    qword_140C541E0 = v70;
    qword_140C541E8 = v71;
    dword_140C54218 = v69;
    qword_140C54148 = v14;
    qword_140C54180 = 0LL;
    qword_140C54168 = 0LL;
    qword_140C54170 = 0LL;
    qword_140C54190 = 0LL;
    qword_140C541C8 = 0LL;
    qword_140C541D0 = 0LL;
    qword_140C541A0 = 0LL;
    qword_140C541B0 = 0LL;
    qword_140C541C0 = 0LL;
    qword_140C54228 = 0LL;
    qword_140C54230 = 0LL;
    qword_140C54238 = 0LL;
    byte_140C54214 = 0;
    sub_14080A3F8(&v61);
    v16 = KeAcquireSpinLockRaiseToDpc(&qword_140C22378);
    qword_140C22368 = 0LL;
    qword_140C22370 = 0LL;
    qword_140C22360 = 0LL;
    dword_140C22380 = 1;
    KeReleaseSpinLockFromDpcLevel(&qword_140C22378);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v36 = KeGetCurrentIrql();
        if ( v36 <= 0xFu && (unsigned __int8)v16 <= 0xFu && v36 >= 2u )
        {
          v37 = KeGetCurrentPrcb();
          v38 = *((_QWORD *)v37 + 4375);
          v39 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
          v12 = (v39 & *(_DWORD *)(v38 + 20)) == 0;
          *(_DWORD *)(v38 + 20) &= v39;
          if ( v12 )
            sub_140418E4C(v37);
        }
      }
    }
    __writecr8(v16);
    sub_140811A68(&unk_140C21E40);
    byte_140C54208 = (dword_140C232CC == 0) | byte_140C54208 & 0xFE;
    byte_140C54209 ^= (byte_140C54209 ^ sub_14080A3E4()) & 1;
    if ( (((v61 - 1) & 0xFFFFFFFC) != 0 || v61 == 2)
      && (unsigned __int8)sub_140998578()
      && !(unsigned __int8)sub_140998544() )
    {
      byte_140C54209 &= ~2u;
    }
    else
    {
      byte_140C54209 |= 2u;
    }
    sub_140255D5C((__int64)qword_140011CF8, v17, 3, &v62, 4u, &v59);
    byte_140C54209 ^= (byte_140C54209 ^ (4 * v62)) & 4;
    sub_140255D5C((__int64)&qword_140011CD8, v18, 3, &v63, 4u, &v59);
    dword_140C541F0 = v63;
    sub_140255D5C((__int64)&qword_140011CB8, v19, 3, &v64, 4u, &v59);
    dword_140C541F4 = v64;
    byte_140C541F8 = v11;
    sub_140255D5C((__int64)&qword_14000FF28, v20, 3, &v65, 4u, &v59);
    dword_140C541FC = v65;
    sub_14080A360(&dword_140C54200, &dword_140C54204);
    byte_140C5421D = (char)KdDebuggerEnabled;
    v4 = sub_1407628C0(&xmmword_140C23400, v76);
    if ( v4 >= 0 )
      v10 = sub_1408111A0(v76);
    byte_140C5421C = v10;
    sub_140255D5C((__int64)&qword_14000FF18, v21, 3, &v66, 4u, &v59);
    dword_140C54220 = v66;
    sub_140255D5C((__int64)qword_140011CA8, v22, 3, &v67, 4u, &v59);
    dword_140C54224 = v67;
    sub_140255D5C((__int64)qword_140011C98, v23, 3, &v78, 0x10u, &v59);
    sub_140255D5C((__int64)qword_140011C88, v24, 3, &v77, 0x10u, &v59);
    sub_14039AC54(&v78, &v77, &v68);
    dword_140C54244 = v68;
    _InterlockedExchange64(&qword_140C54280, 0LL);
    if ( sub_14080A01C((unsigned int)dword_140C542C0) )
      v4 = sub_14098E0AC((unsigned int)dword_140C542C0);
    sub_14039AAB0();
    if ( qword_140D068A8 && *(_DWORD *)(qword_140D068A8 + 4) )
    {
      v40 = KeAcquireSpinLockRaiseToDpc(&qword_140C23008);
      v41 = qword_140D068A8;
      v42 = v40;
      for ( i = 0; i < *(_DWORD *)qword_140D068A8; ++i )
      {
        v44 = 448LL * i + v41 + 80;
        for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v44 + 28); *(_QWORD *)(*(_QWORD *)(v44 + 32) + (v46 << 6) + 56) = 0LL )
        {
          v46 = (unsigned int)j;
          j = (unsigned int)(j + 1);
        }
        LOBYTE(v41) = 1;
        LOBYTE(j) = 4;
        sub_1405C7F88(v44, j, v41);
        v41 = qword_140D068A8;
      }
      KeReleaseSpinLockFromDpcLevel(&qword_140C23008);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v47 = KeGetCurrentIrql();
          if ( v47 <= 0xFu && (unsigned __int8)v42 <= 0xFu && v47 >= 2u )
          {
            v48 = KeGetCurrentPrcb();
            v49 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v42 + 1));
            v50 = *((_QWORD *)v48 + 4375);
            v12 = (v49 & *(_DWORD *)(v50 + 20)) == 0;
            *(_DWORD *)(v50 + 20) &= v49;
            if ( v12 )
              sub_140418E4C(v48);
          }
        }
      }
      __writecr8(v42);
    }
    dword_140C5420C = dword_140C2344C;
    dword_140C54210 = dword_140C22390;
    sub_14080A2DC();
    if ( qword_140D068A8 && dword_140C542C0 != -1 )
    {
      v51 = 26LL;
      v52 = (__int64 *)(1008LL * (unsigned int)dword_140C542C0 + 200 + *(_QWORD *)(qword_140D068A8 + 48));
      v25 = &unk_140C22600;
      do
      {
        v53 = *v52;
        v52 += 4;
        *v25++ = v53;
        --v51;
      }
      while ( v51 );
    }
    LOBYTE(v25) = 1;
    v26 = (unsigned int)sub_14039A88C(v25);
    sub_14080A124(v26);
    sub_14080A09C(v27, (unsigned int)v26);
    v69 = qword_140C22048;
    sub_140811764(0LL, &v69);
    sub_14039A994();
    v60 = 0;
    sub_1406EBB94(&v60, v28);
    dword_140C54240 = v60;
  }
  sub_140A47CF8();
  return (unsigned int)v4;
}
