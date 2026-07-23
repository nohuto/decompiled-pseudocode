/*
 * XREFs of sub_140A56CDC @ 0x140A56CDC
 * Callers:
 *     sub_140A57680 @ 0x140A57680 (sub_140A57680.c)
 * Callees:
 *     HalIsHyperThreadingEnabled @ 0x1403BF8F0 (HalIsHyperThreadingEnabled.c)
 *     sub_1403BFB2C @ 0x1403BFB2C (sub_1403BFB2C.c)
 *     HviIsAnyHypervisorPresent @ 0x1403C03A0 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14054381C @ 0x14054381C (sub_14054381C.c)
 *     sub_14054382C @ 0x14054382C (sub_14054382C.c)
 *     sub_140A56118 @ 0x140A56118 (sub_140A56118.c)
 *     sub_140A56A48 @ 0x140A56A48 (sub_140A56A48.c)
 *     sub_140A5736C @ 0x140A5736C (sub_140A5736C.c)
 *     sub_140A573E8 @ 0x140A573E8 (sub_140A573E8.c)
 *     sub_140A57460 @ 0x140A57460 (sub_140A57460.c)
 *     sub_140A70470 @ 0x140A70470 (sub_140A70470.c)
 */

__int64 __fastcall sub_140A56CDC(__int64 a1)
{
  char v2; // bl
  unsigned __int8 v3; // cl
  char v4; // dl
  __int64 v5; // r8
  unsigned int v6; // eax
  ULONG_PTR v22; // r13
  unsigned int v23; // esi
  unsigned int v34; // r15d
  ULONG_PTR v35; // r12
  __int64 v36; // rsi
  char v37; // cl
  char v38; // r15
  int v39; // ebx
  unsigned __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdx
  unsigned __int64 v49; // rax
  char v50; // r10
  __int64 v55; // r8
  __int64 v56; // rsi
  unsigned __int64 v61; // rbx
  __int64 v62; // rcx
  __int64 v63; // r9
  unsigned __int64 v64; // rax
  __int64 result; // rax
  char v70; // al
  unsigned __int64 v71; // rcx
  bool v72; // zf
  char v73; // al
  unsigned __int8 v74; // cl
  int v75; // eax
  unsigned __int64 v90; // rax
  unsigned __int64 v91; // rax
  char v96; // r8
  int v97; // eax
  char v98; // al
  bool v99; // [rsp+30h] [rbp-98h]
  __int16 v100; // [rsp+38h] [rbp-90h]
  unsigned int v101; // [rsp+40h] [rbp-88h]
  unsigned int v102; // [rsp+44h] [rbp-84h]
  __int128 v103; // [rsp+48h] [rbp-80h] BYREF
  __int64 v104; // [rsp+58h] [rbp-70h]
  int v105; // [rsp+60h] [rbp-68h]
  __int64 v106; // [rsp+68h] [rbp-60h]
  __int128 v107; // [rsp+70h] [rbp-58h]
  __int128 v108; // [rsp+80h] [rbp-48h] BYREF
  __int128 v109; // [rsp+90h] [rbp-38h] BYREF

  v106 = a1;
  v107 = 0LL;
  v108 = 0LL;
  v109 = 0LL;
  v103 = 0LL;
  v104 = 0LL;
  v105 = 0;
  v2 = *(_BYTE *)(a1 + 64);
  v3 = *(_BYTE *)(a1 + 67);
  v4 = *(_BYTE *)(a1 + 141);
  v5 = (unsigned __int8)(v4 - 1) <= 1u;
  v99 = (unsigned __int8)(v4 - 1) <= 1u;
  if ( *(_DWORD *)(a1 + 36) )
  {
    v6 = sub_140A56A48(0LL, 0LL, 0LL, 0LL);
    sub_140A56118(a1, v6);
    goto LABEL_3;
  }
  if ( v4 == 2 )
  {
    if ( v2 != 6 )
      goto LABEL_3;
    dword_140D06C20 = 477;
    dword_140D06C24 = 478;
    if ( v3 <= 0x2Au )
    {
      if ( v3 == 42 )
        goto LABEL_83;
      if ( v3 > 0x1Du )
      {
        if ( v3 <= 0x1Fu || v3 == 37 )
          goto LABEL_83;
        if ( v3 <= 0x25u || v3 > 0x27u )
          goto LABEL_84;
        goto LABEL_118;
      }
      if ( v3 == 29 || v3 == 15 || v3 == 23 )
        goto LABEL_118;
      if ( v3 == 26 )
        goto LABEL_83;
      v72 = v3 == 28;
    }
    else
    {
      if ( v3 <= 0x3Cu )
      {
        if ( v3 == 60 )
        {
LABEL_83:
          dword_140D06AC8 = 1664;
          dword_140D06B04 = 1728;
          goto LABEL_84;
        }
        if ( v3 >= 0x2Cu )
        {
          if ( v3 <= 0x2Fu )
            goto LABEL_83;
          if ( v3 > 0x34u )
          {
            if ( v3 > 0x37u )
            {
              if ( v3 == 58 )
                goto LABEL_83;
              goto LABEL_84;
            }
LABEL_118:
            dword_140D06AC8 = 64;
            dword_140D06B04 = 96;
          }
        }
LABEL_84:
        if ( dword_140D06AC8 )
          dword_140D06D40 = 457;
        goto LABEL_3;
      }
      if ( v3 == 63 )
        goto LABEL_83;
      if ( v3 <= 0x44u )
        goto LABEL_84;
      if ( v3 <= 0x46u )
        goto LABEL_83;
      v72 = v3 == 77;
    }
    if ( !v72 )
      goto LABEL_84;
    goto LABEL_118;
  }
  if ( v4 == 1 )
  {
    dword_140D06AC8 = 475;
    dword_140D06B04 = 476;
    dword_140D06C20 = 477;
    dword_140D06C24 = 478;
  }
LABEL_3:
  _RAX = 0LL;
  __asm { cpuid }
  v102 = _RAX;
  LOBYTE(v5) = *(_BYTE *)(a1 + 141);
  if ( (_BYTE)v5 == 2 )
  {
    __writemsr(0x8Bu, 0LL);
    _RAX = 1LL;
    __asm { cpuid }
    LODWORD(v107) = _RAX;
LABEL_5:
    *(_QWORD *)(a1 + 35240) = __readmsr(0x8Bu);
    goto LABEL_6;
  }
  if ( (_BYTE)v5 == 1 )
  {
    LOBYTE(v5) = 1;
    goto LABEL_5;
  }
LABEL_6:
  _RAX = 1LL;
  __asm { cpuid }
  v22 = (unsigned int)_RDX;
  v100 = _RCX;
  v23 = _RBX;
  *(_QWORD *)&v109 = __PAIR64__(_RBX, _RAX);
  *((_QWORD *)&v109 + 1) = __PAIR64__(_RDX, _RCX);
  _RAX = 0x80000000LL;
  __asm { cpuid }
  v101 = _RAX;
  _RAX = 2147483649LL;
  __asm { cpuid }
  v34 = _RDX;
  v35 = (unsigned int)_RCX;
  *(_QWORD *)&v108 = __PAIR64__(_RBX, _RAX);
  *((_QWORD *)&v108 + 1) = __PAIR64__(_RDX, _RCX);
  if ( !*(_DWORD *)(a1 + 36) )
  {
    if ( (_BYTE)v5 == 1 )
    {
      LOBYTE(_RDX) = *(_BYTE *)(a1 + 64);
      v73 = *(_BYTE *)(a1 + 67);
      v74 = *(_BYTE *)(a1 + 66);
      if ( (_BYTE)_RDX == 15 && (v73 == 107 || v73 == 104) && v74 == 1 )
      {
        qword_140D06AE0 |= 1uLL;
      }
      else if ( (_BYTE)_RDX == 16 && (!v73 && v74 <= 2u || v73 == 2 && (v74 <= 2u || v74 == 10) || v73 == 4 && !v74) )
      {
        qword_140D06AE0 |= 2uLL;
      }
    }
    if ( !*(_DWORD *)(a1 + 36) )
    {
      v70 = *(_BYTE *)(a1 + 141);
      if ( v70 == 1 )
      {
        if ( *(_BYTE *)(a1 + 64) == 23 )
          dword_140D01958 = 1;
      }
      else if ( v70 == 2 && *(_BYTE *)(a1 + 64) == 6 )
      {
        if ( (v71 = *(unsigned __int8 *)(a1 + 67), (unsigned __int8)v71 <= 0x36u)
          && (_RDX = 0x6000C010000000LL, _bittest64(&_RDX, v71))
          || (LOBYTE(v71) = v71 - 55, (unsigned __int8)v71 <= 0x16u)
          && (v75 = 4718593, _bittest(&v75, v71))
          && *(_BYTE *)(a1 + 66) <= 7u )
        {
          dword_140D01958 = 2;
        }
      }
    }
  }
  sub_140A57460(a1, _RDX, v5, 1LL);
  _m_prefetchw((const void *)a1);
  if ( *(_BYTE *)(a1 + 141) == 1 )
  {
    v34 |= 0x100000u;
    HIDWORD(v108) = v34;
  }
  *(_DWORD *)(a1 + 212) = HIBYTE(v23);
  *(_DWORD *)(a1 + 232) = (v23 >> 5) & 0x7F8;
  if ( (v22 & 0x789F3FD) != 0x789F3FD
    || (v34 & 0x800) == 0
    || (v34 & 0x100000) == 0
    || (v100 & 0x2000) == 0
    || (v35 & 1) == 0
    || (_DWORD)dword_140C2A818 )
  {
    if ( !*(_DWORD *)(a1 + 36) )
      sub_140A70470(0LL, qword_140D068D0);
    KeBugCheckEx(0x5Du, v22, v34, v35, (unsigned int)dword_140C2A818);
  }
  v36 = *(_QWORD *)(a1 + 35232) | 0x20113DFELL;
  if ( (*(_QWORD *)(a1 + 35232) & 0x400000000LL) != 0 )
    __writemsr(0xC0000103, *(unsigned __int8 *)(a1 + 209) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 208) << 8));
  __writemsr(0x174u, 0LL);
  __writemsr(0x176u, 0LL);
  __writemsr(0x175u, 0LL);
  if ( (v34 & 0x2000000) != 0 )
    __writemsr(0xC0000080, __readmsr(0xC0000080) | 0x4000);
  *(_DWORD *)(a1 + 152) = 1;
  *(_DWORD *)(a1 + 156) = 1;
  *(_DWORD *)(a1 + 38984) = 1;
  *(_DWORD *)(a1 + 38988) = 1;
  sub_1403BFB2C(*(unsigned __int8 *)(a1 + 141), v102, v101, (__int64)&v108, &v109, (char *)&v103);
  if ( (BYTE4(v103) & 2) != 0 )
    *(_DWORD *)(a1 + 212) = v105;
  v37 = v103;
  if ( (v103 & 1) != 0 )
    *(_DWORD *)(a1 + 156) = DWORD2(v103);
  if ( (BYTE4(v103) & 1) != 0 )
    *(_DWORD *)(a1 + 38988) = HIDWORD(v104);
  if ( (v37 & 2) != 0 )
    *(_DWORD *)(a1 + 152) = HIDWORD(v103);
  if ( (v37 & 4) != 0 )
    *(_DWORD *)(a1 + 38984) = v104;
  v38 = *(_BYTE *)(a1 + 141);
  if ( v38 == 1 )
  {
    v36 |= 0x200000uLL;
  }
  else if ( v38 == 2 )
  {
    v36 |= 0x1000000uLL;
  }
  *(_BYTE *)(a1 + 142) = *(_BYTE *)(a1 + 152);
  *(_BYTE *)(a1 + 143) = *(_BYTE *)(a1 + 156);
  v39 = *(_DWORD *)(a1 + 156);
  if ( *(_DWORD *)(a1 + 36) && !HalIsHyperThreadingEnabled() )
    v39 *= *(_DWORD *)(a1 + 152);
  *(_DWORD *)(a1 + 220) = -v39;
  if ( (unsigned __int8)(v38 - 1) > 2u || v101 < 0x80000008 )
  {
    if ( v38 == 1 )
      byte_140C09818 = 40;
  }
  else
  {
    _RAX = 2147483656LL;
    __asm { cpuid }
    LODWORD(v107) = _RAX;
    byte_140C09818 = _RAX;
  }
  qword_140C09808 = ((1LL << byte_140C09818) - 1) & 0xFFFFFFFFFFFFF000uLL;
  qword_140C09810 = ((1LL << byte_140C09818) - 1) & 0xFFFFFFFFFFFFF000uLL;
  v45 = __readcr4();
  if ( (v36 & 1) != 0 )
    v45 |= 0x100000uLL;
  v46 = v45 | 0x10000;
  if ( (v36 & 0x10000000) == 0 )
    v46 = v45;
  if ( dword_140D069F0 )
    v46 |= 0x200000uLL;
  v47 = v46 | 0x800;
  if ( (qword_140D06958 & 4) == 0 )
    v47 = v46;
  _RCX = v47;
  if ( *(_DWORD *)(a1 + 36) && (v36 & 0x40000000000LL) != 0 && byte_140D0688A )
    _RCX = v47 | 0x20000;
  __writecr4(_RCX);
  if ( dword_140D069F0 )
    __asm { stac }
  if ( (_RCX & 0x20000) != 0 )
  {
    v49 = __readcr3();
    __writecr3(v49 | 2);
  }
  v50 = *(_BYTE *)(a1 + 141);
  if ( v50 == 2 && v102 >= 7 )
  {
    _RAX = 7LL;
    __asm { cpuid }
    if ( (_RBX & 0x8000) != 0 )
    {
      _RAX = 16LL;
      __asm { cpuid }
      if ( (_RBX & 2) != 0 )
        v36 |= 0x100000000000uLL;
    }
  }
  v55 = v36 | 0x20000;
  if ( !v99 )
    v55 = v36;
  v56 = v55;
  if ( v50 != 2 )
  {
    if ( v50 == 1 )
    {
      _RAX = 0x80000000LL;
      __asm { cpuid }
      if ( (unsigned int)_RAX >= 0x8000000A )
      {
        _RAX = 2147483658LL;
        __asm { cpuid }
        v56 = v55 | 0x4000000;
        if ( (_RDX & 1) == 0 )
          v56 = v55;
        if ( (_RDX & 0x20000) != 0 )
          sub_14054382C();
        if ( (_RDX & 0x2000) != 0 )
          sub_14054381C();
      }
      _RCX = 3221291284LL;
      v90 = __readmsr(0xC0010114);
      if ( (v90 & 0x10) == 0 )
      {
        v56 |= 0x8000000uLL;
        byte_140C54EDF |= 1u;
      }
    }
    goto LABEL_160;
  }
  _RAX = 1LL;
  __asm { cpuid }
  if ( (_RCX & 0x20) == 0 )
  {
LABEL_160:
    v63 = 0x10000000000LL;
    goto LABEL_74;
  }
  if ( (__readmsr(0x482u) & 0x8000000000000000uLL) == 0LL )
  {
    v63 = 0x10000000000LL;
  }
  else
  {
    v61 = __readmsr(0x48Bu);
    v62 = v55 | 0x4000000;
    if ( (v61 & 0x200000000LL) == 0 )
      v62 = v55;
    v55 = v62;
    if ( (v62 & 1) != 0 && (v61 & 0x40000000000000LL) != 0 )
      sub_14054382C();
    v63 = 0x10000000000LL;
    if ( (v61 & 0x10000000000LL) != 0 )
      sub_14054381C();
  }
  _RCX = 58LL;
  v64 = __readmsr(0x3Au);
  LOBYTE(_RCX) = v64 & 5;
  v56 = v55 | 0x8000000;
  if ( (v64 & 5) != 5 )
    v56 = v55;
  if ( (v64 & 4) != 0 )
    byte_140C54EDF |= 1u;
  if ( (v64 & 1) != 0 )
    byte_140C54EDF |= 2u;
LABEL_74:
  if ( *(_BYTE *)(a1 + 141) == 2 )
  {
    _RAX = 7LL;
    __asm { cpuid }
    if ( (_RBX & 4) != 0 )
    {
      v91 = __readmsr(0x3Au);
      _RCX = 262145LL;
      if ( (v91 & 0x40001) == 0x40001 )
      {
        _RAX = 18LL;
        __asm { cpuid }
        v96 = _RAX;
        if ( (_RAX & 1) != 0 )
        {
          v56 |= v63;
          v97 = MEMORY[0xFFFFF7800000036C] | 2;
          MEMORY[0xFFFFF7800000036C] |= 2u;
          if ( (v96 & 2) != 0 )
          {
            _RCX = 0x80000000000LL;
            v56 |= 0x80000000000uLL;
            MEMORY[0xFFFFF7800000036C] = v97 | 4;
          }
        }
      }
    }
  }
  if ( *(_BYTE *)(a1 + 141) == 1 )
  {
    v98 = *(_BYTE *)(a1 + 64);
    if ( v98 > 15 && v98 != 17 && !HviIsAnyHypervisorPresent() )
    {
      _RCX = 3221295145LL;
      __writemsr(0xC0011029, __readmsr(0xC0011029) | 2);
    }
  }
  sub_140A573E8(_RCX, *(unsigned int *)(a1 + 36));
  result = sub_140A5736C(*(unsigned int *)(a1 + 36));
  *(_QWORD *)(a1 + 35232) = v56;
  return result;
}
