/*
 * XREFs of sub_14032C1B0 @ 0x14032C1B0
 * Callers:
 *     sub_140709A08 @ 0x140709A08 (sub_140709A08.c)
 *     sub_1407BE3C0 @ 0x1407BE3C0 (sub_1407BE3C0.c)
 *     sub_14097A358 @ 0x14097A358 (sub_14097A358.c)
 *     sub_14097A714 @ 0x14097A714 (sub_14097A714.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_14023AF98 @ 0x14023AF98 (sub_14023AF98.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14028EDD0 @ 0x14028EDD0 (sub_14028EDD0.c)
 *     sub_14028FB74 @ 0x14028FB74 (sub_14028FB74.c)
 *     sub_14028FBF0 @ 0x14028FBF0 (sub_14028FBF0.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1402EE0E0 @ 0x1402EE0E0 (sub_1402EE0E0.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140319160 @ 0x140319160 (sub_140319160.c)
 *     sub_140319990 @ 0x140319990 (sub_140319990.c)
 *     sub_14032BCC0 @ 0x14032BCC0 (sub_14032BCC0.c)
 *     sub_14032CE60 @ 0x14032CE60 (sub_14032CE60.c)
 *     sub_14032E680 @ 0x14032E680 (sub_14032E680.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1403606C4 @ 0x1403606C4 (sub_1403606C4.c)
 *     sub_1403606EC @ 0x1403606EC (sub_1403606EC.c)
 *     sub_140366A20 @ 0x140366A20 (sub_140366A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140461B20 @ 0x140461B20 (sub_140461B20.c)
 *     sub_14057F4C8 @ 0x14057F4C8 (sub_14057F4C8.c)
 *     sub_1405B06E0 @ 0x1405B06E0 (sub_1405B06E0.c)
 *     sub_1405B2004 @ 0x1405B2004 (sub_1405B2004.c)
 *     sub_1405C14D4 @ 0x1405C14D4 (sub_1405C14D4.c)
 *     sub_1405C27C8 @ 0x1405C27C8 (sub_1405C27C8.c)
 *     sub_1405C2898 @ 0x1405C2898 (sub_1405C2898.c)
 *     sub_1405C3044 @ 0x1405C3044 (sub_1405C3044.c)
 *     sub_1406FEC50 @ 0x1406FEC50 (sub_1406FEC50.c)
 *     sub_1407BDB60 @ 0x1407BDB60 (sub_1407BDB60.c)
 *     sub_1407BE280 @ 0x1407BE280 (sub_1407BE280.c)
 *     sub_14097F200 @ 0x14097F200 (sub_14097F200.c)
 *     sub_14097F588 @ 0x14097F588 (sub_14097F588.c)
 */

__int64 __fastcall sub_14032C1B0(
        ULONG_PTR a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        int a7,
        char a8,
        _WORD **a9,
        _DWORD *a10,
        _WORD *a11)
{
  int v14; // r10d
  unsigned int v15; // eax
  unsigned int v16; // r9d
  int v17; // eax
  unsigned __int64 v18; // r10
  char v19; // r11
  char v20; // r9
  unsigned __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rdx
  unsigned __int64 v24; // r15
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // r13
  __int64 v29; // rbx
  int v30; // edx
  __int64 v31; // r8
  __int64 v32; // r9
  struct _KTHREAD *v33; // r12
  ULONG_PTR v34; // rbx
  __int64 v35; // r13
  __int64 v36; // rbx
  unsigned __int16 v37; // r12
  unsigned __int64 v38; // r15
  __int64 v39; // r14
  int v40; // ecx
  unsigned __int8 v41; // al
  volatile __int32 *v42; // rbx
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // r14
  __int64 v45; // rcx
  signed __int32 v46; // ett
  unsigned __int64 v47; // rdx
  __int64 v48; // r14
  unsigned __int64 v49; // rbx
  unsigned __int64 v50; // r8
  __int64 v51; // rax
  __int64 v52; // rsi
  struct _KTHREAD *v53; // rdi
  __int64 v54; // r8
  char *v55; // rbx
  unsigned int j; // r9d
  int v57; // r8d
  struct _KTHREAD *v58; // rcx
  bool v59; // zf
  unsigned int v60; // ecx
  __int64 v61; // rdx
  unsigned __int64 v62; // rdx
  __int64 result; // rax
  int v64; // eax
  unsigned __int64 v65; // rbx
  __int64 v66; // rcx
  char v67; // al
  __int64 *v68; // rdx
  unsigned __int8 v69; // di
  __int64 v70; // rbx
  __int64 v71; // r9
  __int64 v72; // r10
  __int64 v73; // rcx
  unsigned int v74; // r10d
  __int64 v75; // rax
  __int64 v76; // r11
  __int64 v77; // rcx
  unsigned __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // r9
  int v85; // eax
  __int64 v86; // rdx
  int v87; // ebx
  __int64 v88; // r8
  struct _KTHREAD *v89; // rsi
  __int64 v90; // r8
  char *v91; // rdi
  unsigned int i; // ecx
  int v93; // r8d
  unsigned int v94; // eax
  __int64 v95; // rdx
  __int64 v96; // rax
  int v97; // eax
  int v98; // eax
  __int64 v99; // rcx
  __int64 v100; // rcx
  __int64 v101; // rax
  __int64 v102; // rbx
  int v103; // [rsp+50h] [rbp-B0h]
  __int64 v104; // [rsp+58h] [rbp-A8h]
  __int64 v105; // [rsp+60h] [rbp-A0h]
  _WORD **v106; // [rsp+68h] [rbp-98h]
  __int64 v107; // [rsp+68h] [rbp-98h]
  unsigned int v108; // [rsp+70h] [rbp-90h]
  int v109; // [rsp+74h] [rbp-8Ch]
  __int64 v111; // [rsp+80h] [rbp-80h]
  __int64 v112; // [rsp+88h] [rbp-78h]
  __int64 v113; // [rsp+90h] [rbp-70h]
  unsigned __int64 v114; // [rsp+90h] [rbp-70h]
  __int64 v115; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v116; // [rsp+A0h] [rbp-60h]
  int v117; // [rsp+A8h] [rbp-58h] BYREF
  int v118; // [rsp+ACh] [rbp-54h]
  int v119; // [rsp+B0h] [rbp-50h]
  int v120; // [rsp+B4h] [rbp-4Ch]
  unsigned __int64 v121; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v122; // [rsp+C0h] [rbp-40h]
  int v123; // [rsp+C8h] [rbp-38h]
  int v124; // [rsp+CCh] [rbp-34h] BYREF
  __int64 v125; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v126; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v127; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v128; // [rsp+E8h] [rbp-18h] BYREF
  _DWORD *v129; // [rsp+F0h] [rbp-10h]
  __int64 v130; // [rsp+F8h] [rbp-8h]
  __int64 v131; // [rsp+100h] [rbp+0h]
  unsigned __int64 v132; // [rsp+108h] [rbp+8h]
  __int64 *v133; // [rsp+110h] [rbp+10h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+118h] [rbp+18h]
  __int64 v135; // [rsp+120h] [rbp+20h]
  __int64 v136; // [rsp+128h] [rbp+28h] BYREF
  __int64 v137; // [rsp+130h] [rbp+30h]
  _QWORD v138[3]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v139[3]; // [rsp+158h] [rbp+58h] BYREF
  _QWORD v140[3]; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v141[3]; // [rsp+188h] [rbp+88h] BYREF

  v14 = *(_DWORD *)(a1 + 48);
  v129 = a10;
  v118 = v14 & 0x2200000;
  v133 = 0LL;
  v117 = 0;
  v15 = sub_14032BCC0(a4);
  v17 = sub_14032E680(a1, v16, v15);
  v20 = v17;
  v123 = v17;
  CurrentThread = KeGetCurrentThread();
  v105 = *((_QWORD *)CurrentThread + 23);
  if ( *(int *)(a1 + 52) < 0 )
    v21 = 8 * ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) & 0xFFFFFFFFFLL)
        - 0x98000000000LL;
  else
    v21 = 0LL;
  v127 = v21;
  v22 = 32LL * (v17 & 0x1F);
  v137 = 32LL * (v20 & 0x1F);
  if ( qword_140C50780 )
  {
    if ( (v22 & qword_140C50780) != 0 )
      v22 |= 0x10uLL;
    else
      v22 |= qword_140C50780;
  }
  v23 = v22 | 0x4000000;
  if ( (v18 & 0xA200000) != 0x8200000 )
    v23 = v22;
  v135 = v23;
  v130 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v24 = (a2 + a3 - 1) | 0xFFF;
  v25 = v130;
  v26 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v27 = 0LL;
  v132 = v26;
  v138[2] = 0LL;
  v139[2] = 0LL;
  v131 = ((__int64)(v26 - v130) >> 3) + 1;
  v140[2] = 0LL;
  v104 = v105 + 1664;
  v138[1] = v138;
  v138[0] = v138;
  v139[1] = v139;
  v139[0] = v139;
  v140[1] = v140;
  v140[0] = v140;
  v141[1] = v141;
  v141[0] = v141;
  v141[2] = 0LL;
  v106 = 0LL;
  v125 = 0LL;
  if ( (v18 & 0xA00000) == 0xA00000 )
  {
    v72 = (v18 >> 19) & 3;
    v73 = qword_1400161D0[v72];
    v74 = dword_140037160[v72];
    v75 = 16LL;
    v113 = v73;
    v108 = v74;
    if ( v73 != 16 )
      v75 = 1LL;
    v76 = v19 & 0x1A;
    v126 = v75;
    if ( v74 > 1 )
    {
      if ( v76 != 2 )
        return 3221225485LL;
    }
    else
    {
      if ( v74 == 1 )
      {
        if ( v76 != 8 )
          return 3221225485LL;
      }
      else if ( v76 != 16 )
      {
        return 3221225485LL;
      }
      v77 = 2 - v74;
      do
      {
        v25 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v26 = ((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v21 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v77;
      }
      while ( v77 );
      v127 = v21;
      v132 = v26;
    }
    if ( a9 == (_WORD **)1 )
    {
      v78 = sub_1402EE0E0(a1, 16);
      if ( !v78 )
      {
        v106 = 0LL;
LABEL_129:
        v79 = v105 + 1664;
        v27 = *(_QWORD *)(*(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(v105 + 1838)) + 176LL);
LABEL_130:
        v125 = v27;
        goto LABEL_106;
      }
      v106 = *(_WORD ***)(v78 + 24);
      v27 = (__int64)v106;
      if ( !v106 )
        goto LABEL_129;
    }
    else
    {
      if ( !a9 )
        goto LABEL_129;
      v106 = a9;
      v27 = (__int64)a9;
    }
    v79 = v105 + 1664;
    goto LABEL_130;
  }
  if ( (v19 & 0x1A) != 0 )
    return 3221225485LL;
  v108 = 3;
  v113 = 1LL;
  v126 = 1LL;
  if ( (int)sub_1407BE280(v105, ((__int64)(v26 - v130) >> 3) + 1) >= 0 )
  {
    v120 = 1;
    v28 = v131;
    v112 = v131;
LABEL_12:
    v29 = v105;
    goto LABEL_13;
  }
  v79 = v105 + 1664;
LABEL_106:
  v120 = 0;
  v67 = sub_1402CF4F0(v79);
  v68 = &v125;
  v69 = v67;
  if ( !v27 )
    v68 = 0LL;
  v70 = sub_14028EDD0(a2 & 0xFFFFFFFFFFFFF000uLL, v24, a1, v67, 0, 0LL, v68);
  sub_1402B0CE0(v104, v69);
  v71 = v131 - v70;
  v112 = v131 - v70;
  if ( !v125 && v113 != 1 )
    return 3221225496LL;
  v29 = v105;
  if ( v71 )
  {
    if ( v113 != 1 )
    {
      if ( !(unsigned int)sub_14097F200(v105, v71) )
        return 3221225773LL;
      if ( v106 )
      {
        if ( v106 != a9 && !(unsigned __int8)sub_1403606EC(v106, v80, v82) )
        {
          sub_14097F588(v105, v84);
          return 3221226656LL;
        }
        *a11 = **v106;
      }
      else if ( (int)sub_1407BE280(v81, v83) < 0 )
      {
        return sub_14097F588(v105, v112);
      }
      v85 = sub_1405B2004(a1);
      v28 = v112;
      v87 = sub_1405C14D4(a1, a2, v112, qword_14001C780[v85], a7, a8, (__int64)v106, 0, (__int64)v138);
      if ( v106 && v106 != a9 )
        sub_1403606C4(v106, v86, v88);
      if ( v87 < 0 )
      {
        if ( !v106 )
          sub_1406FEC50(v105, v112);
        sub_14097F588(v105, v112);
        return (unsigned int)v87;
      }
      goto LABEL_12;
    }
    result = sub_1407BE280(v105, v71);
    if ( (int)result < 0 )
      return result;
    v28 = v112;
  }
  else
  {
    v28 = 0LL;
  }
LABEL_13:
  v119 = 0;
  if ( !(unsigned int)sub_140319990(a1) )
    goto LABEL_16;
  v33 = CurrentThread;
  v119 = v30;
  --*((_WORD *)CurrentThread + 243);
  v34 = v29 + 1232;
  ExAcquirePushLockExclusiveEx(v34, 0LL);
  if ( (int)sub_1407BDB60(a1, a2) < 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v34, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v34);
    v89 = KeGetCurrentThread();
    if ( v34 - qword_140C50630 >= 0x8000000000LL )
      v90 = 0xFFFFFFFFLL;
    else
      v90 = (unsigned int)sub_140287F30(*((_QWORD *)v89 + 23));
    _disable();
    v91 = (char *)v89 + 1696;
    for ( i = 0; i < 6; ++i )
    {
      if ( (*(_QWORD *)v91 & 0x7FFFFFFFFFFFFFFCLL) == (v34 & 0x7FFFFFFFFFFFFFFCLL)
        && v91[18]
        && (*(_DWORD *)v91 & 1) == 0
        && *((_DWORD *)v91 + 2) == (_DWORD)v90 )
      {
        v91[18] = 0;
        if ( *(__int64 *)v91 < 0 )
        {
          *v91 |= 2u;
          _enable();
          sub_14034EE30(v91, 0x7FFFFFFFFFFFFFFCLL, v90);
          _disable();
        }
        v93 = *((_DWORD *)v91 + 22);
        *((_DWORD *)v91 + 22) = 0;
        v91[17] = 0;
        *(_QWORD *)v91 = 0LL;
        *((_BYTE *)v89 + 792) |= 1 << v91[16];
        _enable();
        if ( v93 )
          sub_14022B568((ULONG_PTR)v89, v34, v93);
        goto LABEL_172;
      }
      v91 += 96;
    }
    if ( (*((_DWORD *)v89 + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v89, v34, (unsigned int)v90, 0LL);
    _enable();
LABEL_172:
    v59 = (*((_WORD *)v33 + 243))++ == 0xFFFF;
    if ( v59 && *((struct _KTHREAD **)v33 + 19) != (struct _KTHREAD *)((char *)v33 + 152) )
      KiCheckForKernelApcDelivery();
    if ( v28 )
      sub_1406FEC50(v105, v28);
    return 3221225773LL;
  }
  v31 = 0LL;
LABEL_16:
  v35 = v113;
  v36 = v31;
  v122 = v31;
  v37 = v31;
  v107 = v31;
  v38 = v31;
  v121 = v31;
  v39 = v31;
  v111 = v31;
LABEL_17:
  v40 = v31;
  v103 = v31;
  v114 = v31;
  v109 = v31;
  if ( !v108 )
  {
    v94 = sub_14057F4C8(a1);
    v109 = 1;
    v96 = sub_1405B06E0(v104, v95, v94);
    v40 = v103;
    v31 = 0LL;
    v116 = v96;
    if ( (_BYTE)v96 != 17 )
      goto LABEL_31;
  }
  v41 = *(_BYTE *)(v105 + 1848) & 7;
  if ( v41 <= 4u )
  {
    if ( v41 == 2 )
      v42 = (volatile __int32 *)&unk_140C53D00;
    else
LABEL_20:
      v42 = (volatile __int32 *)(v105 + 1856);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v32 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v32 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
      v31 = 0LL;
    }
    if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
    {
      sub_140461B20(v42, CurrentIrql);
      v31 = 0LL;
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v45 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v45 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v97 = *(_DWORD *)(v45 + 24);
          *(_DWORD *)(v45 + 24) = v97 + 1;
          if ( v97 == -1 )
          {
            sub_140418E4C(CurrentPrcb);
            v31 = 0LL;
          }
        }
      }
      _m_prefetchw((const void *)v42);
      v46 = *v42 & 0x7FFFFFFF;
      if ( v46 != _InterlockedCompareExchange(v42, v46 + 1, v46) )
      {
        v66 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v66 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v98 = *(_DWORD *)(v66 + 24) - 1;
            *(_DWORD *)(v66 + 24) = v98;
            if ( !v98 )
              sub_140418E4C(CurrentPrcb);
          }
        }
        sub_140366A20(v42, CurrentIrql);
        v31 = 0LL;
      }
      v39 = v111;
    }
    if ( *((_DWORD *)v42 + 1) )
      _InterlockedExchange(v42 + 1, v31);
    v47 = CurrentIrql;
    v38 = v121;
    v116 = v47;
    goto LABEL_29;
  }
  if ( v41 == 5 )
    goto LABEL_20;
  v47 = KeGetCurrentIrql();
  v116 = v47;
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)v47 <= 0xFu )
  {
    v32 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    v47 = (-1LL << ((unsigned __int8)v47 + 1)) & 4;
    *(_DWORD *)(v32 + 20) |= v47;
    v31 = 0LL;
    goto LABEL_30;
  }
LABEL_31:
  while ( v25 <= v132 )
  {
    if ( !v40 || (v25 & 0xFFF) == 0 )
    {
      if ( v37 )
      {
        sub_14028FB74(v36, v37);
        v31 = 0LL;
        v37 = 0;
      }
      if ( v118 == 35651584 )
      {
        if ( v39 )
          v38 = v31;
        v121 = v38;
      }
      if ( v114 )
        sub_14020D8D0(v104, v114);
      v114 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      sub_14032CE60(v25, 0, (*(_DWORD *)(a1 + 48) >> 12) & 0x7F, (unsigned __int8)v116, v109);
      v47 = 0xFFFFF6FB7DBED000uLL;
      if ( v25 < 0xFFFFF6FB7DBED000uLL || v25 > 0xFFFFF6FB7DBEDFFFuLL )
      {
        v50 = ((((__int64)(v25 << 25) >> 16) & 0xFFFFFFE00000uLL) >> 18) - 0x904C0000000LL;
        v51 = *(_QWORD *)v50;
        if ( v50 >= 0xFFFFF6FB7DBED000uLL
          && v50 <= 0xFFFFF6FB7DBED7F8uLL
          && (dword_140D06880 & 0xC00000) != 0
          && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
          && (v51 & 1) != 0
          && ((v51 & 0x20) == 0 || (v51 & 0x42) == 0) )
        {
          v99 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
          if ( v99 )
          {
            v100 = *(_QWORD *)(v99 + 8 * ((v50 >> 3) & 0x1FF));
            if ( (v100 & 0x20) != 0 )
              v51 |= 0x20uLL;
            if ( (v100 & 0x42) != 0 )
              v51 |= 0x42uLL;
          }
        }
        v136 = v51;
        v122 = 48 * (((unsigned __int64)sub_140317A10((unsigned __int64)&v136) >> 12) & 0xFFFFFFFFFFLL)
             - 0x220000000000LL;
      }
      v103 = 1;
    }
    v48 = v126;
    if ( v38 )
    {
      v111 += v126;
    }
    else
    {
      v38 = v25;
      v121 = v25;
      v111 = v126;
    }
    v49 = *(_QWORD *)v25;
    if ( v25 >= 0xFFFFF6FB7DBED000uLL
      && v25 <= 0xFFFFF6FB7DBED7F8uLL
      && (dword_140D06880 & 0xC00000) != 0
      && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
      && (v49 & 1) != 0
      && ((v49 & 0x20) == 0 || (v49 & 0x42) == 0) )
    {
      v47 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
      if ( v47 )
      {
        v101 = *(_QWORD *)(v47 + 8 * ((v25 >> 3) & 0x1FF));
        if ( (v101 & 0x20) != 0 )
          v49 |= 0x20uLL;
        if ( (v101 & 0x42) != 0 )
          v49 |= 0x42uLL;
      }
    }
    v128 = v49;
    if ( v49 )
    {
      if ( sub_14023AF98((__int64)&v128) )
      {
        if ( v35 != 1 )
          goto LABEL_226;
        v65 = v137 | v49 & 0xFFFFFFFFFFFFFC1FuLL;
        v128 = v65;
        if ( (*(_DWORD *)(a1 + 48) & 0xA200000) == 0x8200000 )
        {
          v65 |= 0x4000000uLL;
          v128 = v65;
        }
        *(_QWORD *)v25 = v65;
      }
      else
      {
        v107 += v35;
        if ( !*v129 )
        {
          LOWORD(v115) = 0;
          v64 = sub_140319160(a1, v25, &v133, &v117, &v115);
          if ( v133 )
          {
            if ( v37 )
            {
              sub_14028FB74(v122, v37);
              v37 = 0;
            }
            v39 = v111;
            if ( v118 == 35651584 )
            {
              if ( v111 )
                v38 = 0LL;
              v121 = v38;
            }
            if ( v109 == 1 )
            {
              sub_14030FA80(v104, v116);
            }
            else
            {
              sub_14020D8D0(v104, v114);
              sub_1402B0CE0(v104, v116);
            }
            v31 = 0LL;
            v36 = v122;
            goto LABEL_17;
          }
          if ( v123 != v64 || v117 != a5 )
            *v129 = 1;
        }
      }
    }
    else
    {
      if ( v25 <= v127 )
        v107 += v35;
      if ( v35 != 1 )
      {
LABEL_226:
        v102 = sub_1405C3044(v138, v108, v31);
        sub_1405C27C8(48 * v102 - 0x220000000000LL, v130, v105);
        sub_1405C2898(a1, v130, v102, v108, v123);
        v38 = v121;
        goto LABEL_44;
      }
      if ( v25 < 0xFFFFF6FB7DBED000uLL || v25 > 0xFFFFF6FB7DBEDFFFuLL )
        v37 += v126;
      *(_QWORD *)v25 = v135;
    }
LABEL_44:
    v25 += 8 * v48;
    v39 = v111;
    v31 = 0LL;
    v130 += 8 * v35;
LABEL_29:
    v36 = v122;
LABEL_30:
    v40 = v103;
  }
  if ( v37 )
  {
    v124 = v31;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) )
    {
      do
        sub_1402F32E0(&v124, v47, v31, v32);
      while ( *(__int64 *)(v36 + 24) < 0 );
    }
    *(_QWORD *)(v36 + 16) ^= ((unsigned int)*(_QWORD *)(v36 + 16) ^ ((unsigned int)*(_QWORD *)(v36 + 16) + (v37 << 16))) & 0x3FF0000;
    _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v37 <= 1u )
      sub_14028FBF0(*(_QWORD *)(v36 + 8) | 0x8000000000000000uLL);
  }
  if ( v109 == 1 )
  {
    sub_14030FA80(v104, v116);
  }
  else
  {
    if ( v114 )
      sub_14020D8D0(v104, v114);
    sub_1402B0CE0(v104, v116);
  }
  if ( v119 )
  {
    v52 = v105 + 1232;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v105 + 1232), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v105 + 1232);
    v53 = KeGetCurrentThread();
    if ( (unsigned __int64)(v52 - qword_140C50630) < 0x8000000000LL )
      v54 = (unsigned int)sub_140287F30(*((_QWORD *)v53 + 23));
    else
      v54 = 0xFFFFFFFFLL;
    _disable();
    v55 = (char *)v53 + 1696;
    for ( j = 0; j < 6; ++j )
    {
      if ( (*(_QWORD *)v55 & 0x7FFFFFFFFFFFFFFCLL) == (v52 & 0x7FFFFFFFFFFFFFFCLL)
        && v55[18]
        && (*(_DWORD *)v55 & 1) == 0
        && *((_DWORD *)v55 + 2) == (_DWORD)v54 )
      {
        v55[18] = 0;
        if ( *(__int64 *)v55 < 0 )
        {
          *v55 |= 2u;
          _enable();
          sub_14034EE30(v55, 0x7FFFFFFFFFFFFFFCLL, v54);
          _disable();
        }
        v57 = *((_DWORD *)v55 + 22);
        *((_DWORD *)v55 + 22) = 0;
        v55[17] = 0;
        *(_QWORD *)v55 = 0LL;
        *((_BYTE *)v53 + 792) |= 1 << v55[16];
        _enable();
        if ( v57 )
          sub_14022B568((ULONG_PTR)v53, v105 + 1232, v57);
        goto LABEL_76;
      }
      v55 += 96;
    }
    if ( (*((_DWORD *)v53 + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v53, v105 + 1232, (unsigned int)v54, 0LL);
    _enable();
LABEL_76:
    v58 = CurrentThread;
    v59 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( v59 && *((struct _KTHREAD **)v58 + 19) != (struct _KTHREAD *)((char *)v58 + 152) )
      KiCheckForKernelApcDelivery();
  }
  if ( v120 )
  {
    if ( v107 )
      sub_1406FEC50(v105, v107);
    v112 = v131 - v107;
  }
  v60 = *(_DWORD *)(a1 + 52);
  v61 = v60;
  LODWORD(v61) = v60 & 0x7FFFFFFF;
  v62 = v112 + (((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31) | v61);
  *(_BYTE *)(a1 + 34) = v62 >> 31;
  *(_DWORD *)(a1 + 52) = v60 ^ (v62 ^ v60) & 0x7FFFFFFF;
  return 0LL;
}
