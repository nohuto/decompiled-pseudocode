/*
 * XREFs of sub_1403BFE70 @ 0x1403BFE70
 * Callers:
 *     sub_1403BFD14 @ 0x1403BFD14 (sub_1403BFD14.c)
 *     sub_1403DC4D0 @ 0x1403DC4D0 (sub_1403DC4D0.c)
 *     sub_140418C1C @ 0x140418C1C (sub_140418C1C.c)
 * Callees:
 *     HviGetHypervisorFeatures @ 0x1403BF8B0 (HviGetHypervisorFeatures.c)
 *     sub_1403C02DC @ 0x1403C02DC (sub_1403C02DC.c)
 *     sub_1403C0314 @ 0x1403C0314 (sub_1403C0314.c)
 *     HviIsAnyHypervisorPresent @ 0x1403C03A0 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418BD8 @ 0x140418BD8 (sub_140418BD8.c)
 *     sub_140418CB0 @ 0x140418CB0 (sub_140418CB0.c)
 *     sub_140418D94 @ 0x140418D94 (sub_140418D94.c)
 */

char *__fastcall sub_1403BFE70(__int64 a1, char a2, __int64 a3, char *a4)
{
  int v4; // r15d
  char v6; // r14
  bool v7; // r12
  bool v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v21; // r8
  unsigned __int64 v22; // rax
  char v23; // bl
  int v32; // ecx
  __int64 v33; // rcx
  int v34; // ecx
  char v35; // al
  char v36; // al
  __int64 v37; // rdi
  char *result; // rax
  char v39; // [rsp+20h] [rbp-60h]
  char v40; // [rsp+21h] [rbp-5Fh]
  __int128 v41; // [rsp+28h] [rbp-58h]
  __int128 v45; // [rsp+58h] [rbp-28h] BYREF
  __int128 v46; // [rsp+68h] [rbp-18h] BYREF

  LOBYTE(v4) = *(_BYTE *)(a1 + 67);
  v39 = *(_BYTE *)(a1 + 141);
  v6 = 0;
  v41 = 0LL;
  v40 = *(_BYTE *)(a1 + 64);
  v7 = 0;
  v8 = 1;
  v45 = 0LL;
  DWORD2(v41) = 72;
  v46 = 0LL;
  if ( (unsigned __int8)sub_1403C0314() )
  {
    sub_1403C02DC(&v46);
    v45 = 0LL;
    HviGetHypervisorFeatures(&v45);
    if ( (v45 & 0x100000000000LL) != 0 )
      v8 = (v46 & 0x1000) != 0;
  }
  else
  {
    v8 = (unsigned __int8)HviIsAnyHypervisorPresent(v10, v9) != 0;
  }
  v11 = v41;
  _RAX = 0LL;
  __asm { cpuid }
  if ( (unsigned int)_RAX < 7 )
  {
    v21 = 0LL;
  }
  else
  {
    _RAX = 7LL;
    __asm { cpuid }
    v21 = (unsigned int)_RDX;
    if ( (_RDX & 0x20000000) != 0 )
    {
      v22 = __readmsr(0x10Au);
      _RDX = (unsigned __int64)HIDWORD(v22) << 32;
      if ( (v22 & 2) != 0 )
      {
        v7 = 1;
        v11 = v41 | 0x201;
        *(_QWORD *)&v41 = v41 | 0x201;
      }
      else
      {
        v7 = (v22 & 2) != 0;
      }
      v6 = v7;
      if ( (v22 & 0x10) != 0 )
      {
        v11 |= 0x100uLL;
        v6 = 1;
        *(_QWORD *)&v41 = v11;
      }
      if ( (v22 & 4) != 0 )
      {
        v11 |= 0x200uLL;
        v6 = 1;
        *(_QWORD *)&v41 = v11;
      }
    }
  }
  v23 = v39;
  if ( v39 == 1 )
  {
    _RAX = 0x80000000LL;
    __asm { cpuid }
    if ( (unsigned int)_RAX < 0x80000008 )
    {
      LODWORD(_RBX) = 0;
    }
    else
    {
      _RAX = 2147483656LL;
      __asm { cpuid }
    }
    if ( (_RBX & 0x1000) != 0 )
    {
      v11 |= 4uLL;
      v6 = 1;
      *(_QWORD *)&v41 = v11;
    }
    if ( (_RBX & 0x4000) != 0 )
    {
      v11 |= 0x10uLL;
      v6 = 1;
      *(_QWORD *)&v41 = v11;
    }
    if ( (_RBX & 0x8000) != 0 )
    {
      v11 |= 0x40uLL;
      v6 = 1;
      *(_QWORD *)&v41 = v11;
    }
    if ( (_RBX & 0x1000000) != 0 )
    {
      v11 |= 0x80uLL;
      *(_QWORD *)&v41 = v11;
    }
    if ( (_RBX & 0x4000000) != 0 )
    {
      v11 |= 0x180uLL;
      *(_QWORD *)&v41 = v11;
    }
    v23 = 1;
    if ( (v41 & 0x80u) != 0LL )
      goto LABEL_37;
  }
  else
  {
    if ( (v21 & 0x4000000) != 0 )
    {
      v11 |= 0x14uLL;
      v6 = 1;
      *(_QWORD *)&v41 = v11;
    }
    if ( (v21 & 0x8000000) != 0 )
    {
      v11 |= 0x44uLL;
      v6 = 1;
      *(_QWORD *)&v41 = v11;
    }
    if ( (int)v21 < 0 )
    {
      v11 |= 0x80uLL;
      *(_QWORD *)&v41 = v11;
LABEL_37:
      v6 = 1;
    }
  }
  if ( (a2 & 1) != 0 || dword_140D06C10 == 1 )
  {
    v11 |= 0x20uLL;
    *(_QWORD *)&v41 = v11;
  }
  if ( v23 == 2 && v40 == 6 )
  {
    if ( (unsigned __int8)(v4 - 78) <= 0x19u && (v32 = 50397313, _bittest(&v32, v4 - 78))
      || (_BYTE)v4 == 0x8E
      || (_BYTE)v4 == 0x9E )
    {
      v11 |= 0x200uLL;
      *(_QWORD *)&v41 = v11;
    }
    if ( (unsigned __int8)(v4 - 55) <= 0x37u && (v33 = 0x80404800680001LL, _bittest64(&v33, (unsigned int)(v4 - 55)))
      || (_BYTE)v4 == 117 )
    {
      v11 |= 0x200uLL;
      *(_QWORD *)&v41 = v11;
    }
  }
  if ( (v41 & 0x14) == 0x14 )
  {
    if ( v8 && (dword_140C2AF00 & 0x8000) == 0 )
      goto LABEL_110;
    v34 = *(_DWORD *)(a1 + 1740);
    if ( (v34 & 2) != 0 )
    {
      v11 |= 0x400uLL;
      *(_QWORD *)&v41 = v11;
    }
    if ( (v34 & 4) != 0 )
    {
      v11 |= 0x800uLL;
      *(_QWORD *)&v41 = v11;
      if ( (dword_140C2AF00 & 0x4000) != 0 )
      {
        v11 |= 1uLL;
        *(_QWORD *)&v41 = v11;
      }
    }
    if ( v23 == 2 )
    {
      if ( !v8 && !v7 || (v34 & 3) != 0 )
      {
        v11 |= 0x1000uLL;
LABEL_68:
        *(_QWORD *)&v41 = v11;
      }
    }
    else
    {
LABEL_110:
      if ( v23 == 1 )
      {
        v11 |= 0x1000uLL;
        *(_QWORD *)&v41 = v11;
        if ( (v11 & 0x40) != 0 )
        {
          v11 |= 0x4000uLL;
          goto LABEL_68;
        }
      }
    }
  }
  if ( (qword_140D06958 & 0x20000) != 0 && (dword_140C2AF00 & 0x400000) == 0 )
  {
    v11 |= 0x2000uLL;
    *(_QWORD *)&v41 = v11;
  }
  if ( (unsigned int)sub_140418BD8(a1, _RDX, v21, 512LL) )
  {
    v11 |= 0x8000uLL;
    *(_QWORD *)&v41 = v11;
  }
  if ( v23 != 1 || (qword_140D06958 & 0x2000000) != 0 )
  {
    v11 |= 8uLL;
    *(_QWORD *)&v41 = v11;
  }
  BYTE12(v41) = 0;
  if ( v23 == 2 )
  {
    if ( (qword_140D06958 & 0x4000000) == 0 && (v8 || v7) )
    {
      v11 |= 0x10000uLL;
      *(_QWORD *)&v41 = v11;
    }
    if ( (v11 & 0x10000) != 0 )
    {
      if ( (qword_140D06958 & 0x8000000) != 0 )
      {
        v11 |= 0x20000uLL;
        *(_QWORD *)&v41 = v11;
      }
      if ( dword_140D06C38 )
      {
        BYTE12(v41) = 3;
        goto LABEL_97;
      }
      if ( (qword_140D06958 & 0x8000000) == 0 )
      {
        if ( *(_BYTE *)(a1 + 64) != 6 )
          goto LABEL_95;
        v35 = *(_BYTE *)(a1 + 67);
        if ( v35 == -105 )
        {
          v36 = *(_BYTE *)(a1 + 66);
          if ( v36 != 2 && v36 != 5 )
            goto LABEL_95;
        }
        else if ( v35 != -102 || (unsigned __int8)(*(_BYTE *)(a1 + 66) - 3) > 1u )
        {
LABEL_95:
          BYTE12(v41) = 1;
          if ( !v8 )
            goto LABEL_97;
        }
      }
      BYTE12(v41) = 2;
    }
  }
LABEL_97:
  if ( (dword_140C2AF00 & 0x10000) != 0 )
  {
    v11 &= 0xFFFFFFFFFFFFF7FEuLL;
    *(_QWORD *)&v41 = v11;
  }
  if ( (unsigned int)sub_140418D94(a1) )
  {
    v11 |= 0x200000uLL;
    *(_QWORD *)&v41 = v11;
  }
  if ( v23 == 1 )
  {
    v11 |= 0x400000uLL;
    *(_QWORD *)&v41 = v11;
  }
  if ( (unsigned int)sub_140418CB0() )
  {
    v37 = v11 | 0x800000;
    *(_QWORD *)&v41 = v37;
    if ( _bittest64((const signed __int64 *)&qword_140D06958, 0x24u) )
      *(_QWORD *)&v41 = v37 | 0x1000000;
  }
  *(_OWORD *)a3 = v41;
  *(_QWORD *)(a3 + 16) = 4LL;
  result = a4;
  if ( a4 )
    *a4 = v6;
  return result;
}
