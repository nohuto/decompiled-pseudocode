/*
 * XREFs of sub_140520920 @ 0x140520920
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140520580 @ 0x140520580 (sub_140520580.c)
 *     sub_1405211B4 @ 0x1405211B4 (sub_1405211B4.c)
 *     KeProfileInterruptWithSource @ 0x140571540 (KeProfileInterruptWithSource.c)
 *     PoGetProcessorIdleAccounting @ 0x1405C6DA0 (PoGetProcessorIdleAccounting.c)
 */

__int64 (__fastcall **__fastcall sub_140520920(__int64 a1, __int64 a2, __int64 a3))()
{
  __int64 (__fastcall **result)(); // rax
  unsigned int LockArray_high; // esi
  __int64 v5; // r9
  LARGE_INTEGER *v6; // r15
  __int64 v7; // r12
  __int64 i; // rsi
  unsigned int v9; // edi
  unsigned int v10; // ebx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // r13
  unsigned __int64 v14; // r15
  LARGE_INTEGER v15; // r11
  unsigned int v16; // ecx
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rbx
  unsigned int v22; // ecx
  int v23; // eax
  unsigned int v24; // eax
  int v25; // eax
  unsigned int v26; // r13d
  __int64 v27; // rax
  unsigned int v28; // r13d
  LARGE_INTEGER v29; // rax
  __int64 v30; // r8
  __int64 v31; // r10
  unsigned __int64 v32; // r9
  unsigned __int64 v33; // rdx
  __int64 v34; // r8
  unsigned __int64 v35; // rax
  unsigned __int64 QuadPart; // r13
  unsigned __int64 v37; // rdi
  __int64 *v38; // rbx
  __int64 v39; // r14
  unsigned __int64 v40; // rsi
  bool v41; // zf
  __int64 v42; // rsi
  LARGE_INTEGER v43; // r15
  __int64 v44; // rbx
  unsigned __int64 v45; // r12
  unsigned int v46; // ecx
  unsigned __int64 v47; // r8
  unsigned __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // r15
  __int64 v51; // rbx
  unsigned int v52; // ecx
  int v53; // eax
  unsigned int v54; // eax
  __int64 v55; // rax
  __int64 v56; // rax
  int v57; // eax
  __int64 v58; // r15
  LARGE_INTEGER v59; // rax
  __int64 v60; // r8
  __int64 v61; // r11
  unsigned int v62; // r9d
  unsigned __int64 v63; // r10
  unsigned int v64; // ecx
  unsigned __int64 v65; // rdx
  __int64 v66; // r8
  LARGE_INTEGER v67; // [rsp+20h] [rbp-48h] BYREF
  __int64 v68; // [rsp+28h] [rbp-40h]
  __int64 v69; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v70; // [rsp+38h] [rbp-30h]
  LARGE_INTEGER *v71; // [rsp+40h] [rbp-28h]
  unsigned __int64 v72; // [rsp+48h] [rbp-20h]
  LARGE_INTEGER v73; // [rsp+50h] [rbp-18h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+58h] [rbp-10h] BYREF
  int v76; // [rsp+B8h] [rbp+50h] BYREF
  unsigned int v77; // [rsp+C0h] [rbp+58h]
  unsigned int v78; // [rsp+C8h] [rbp+60h]

  v76 = 0;
  result = &off_1400032A0;
  LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
  v5 = a1;
  if ( off_140C02520 == &off_1400032A0 )
  {
    v6 = (LARGE_INTEGER *)qword_140C4D0A8;
  }
  else
  {
    result = (__int64 (__fastcall **)())qword_140C4D0A8;
    v6 = (LARGE_INTEGER *)(qword_140C4D0A8 + 8LL * LockArray_high * dword_140C4D044);
  }
  v71 = v6;
  if ( (unsigned int)dword_140C4A400 >= 2 )
  {
    v35 = __readmsr(0x38Eu);
    QuadPart = qword_140C4A458 & v35;
    PerformanceFrequency.QuadPart = qword_140C4A458 & v35;
    v37 = qword_140C4A458 & v35;
    if ( (qword_140C4A458 & v35 & 0x4000000000000000LL) != 0 )
    {
      sub_1405211B4(910LL, (unsigned __int64)HIDWORD(v35) << 32, a3, a1);
      v37 &= ~0x4000000000000000uLL;
    }
    v38 = (__int64 *)qword_140C4A430;
    if ( (__int64 *)qword_140C4A430 != &qword_140C4A430 )
    {
      v39 = LockArray_high;
      do
      {
        v40 = v37 & v38[v39 + 4];
        if ( v40 && v38[2] )
          sub_14042A5E0(v37 & v38[v39 + 4], v38);
        v38 = (__int64 *)*v38;
        v37 &= ~v40;
      }
      while ( v38 != &qword_140C4A430 );
    }
    v41 = !_BitScanForward64((unsigned __int64 *)&v42, v37);
    if ( v41 )
    {
LABEL_101:
      result = (__int64 (__fastcall **)())QuadPart;
      __writemsr(0x390u, QuadPart);
      return result;
    }
    while ( 1 )
    {
      v37 &= ~(1LL << v42);
      if ( (unsigned int)v42 >= 0x20 )
        v42 = (unsigned int)(dword_140C4A418 - 32 + v42);
      if ( *(_DWORD *)(v6[v42].QuadPart + 24) )
        goto LABEL_99;
      v43 = *v6;
      v44 = 5 * v42;
      LODWORD(v45) = 0;
      v68 = 5 * v42;
      v67 = v43;
      v72 = 0LL;
      LOBYTE(v76) = 0;
      v78 = v42;
      if ( (unsigned int)v42 < dword_140C4A418 )
      {
        v46 = v42 + 390;
        v70 = __readmsr((int)v42 + 390);
        v48 = v70 & 0xFFFFFFFFFFAFFFFFuLL;
      }
      else
      {
        v78 = v42 - dword_140C4A418 + 32;
        v46 = 911;
        v70 = ~(15LL << (4 * ((unsigned __int8)v42 - (unsigned __int8)dword_140C4A418))) & __readmsr(0x38Du);
        v47 = __readmsr(0x38Fu);
        _bittestandreset64((__int64 *)&v47, v78);
        v72 = v47;
        v48 = v47;
      }
      __writemsr(v46, v48);
      v49 = *(unsigned int *)(v43.QuadPart + 40 * v42 + 32);
      if ( (_DWORD)v49 )
      {
        KeProfileInterruptWithSource(a1, v49);
        LODWORD(v45) = *(_DWORD *)(v43.QuadPart + 40 * v42);
        goto LABEL_76;
      }
      v69 = 0LL;
      v73.QuadPart = 0LL;
      if ( qword_140D01738 )
        sub_14042A5E0(a1, v49);
      else
        KeProfileInterruptWithSource(a1, 0LL);
      v50 = qword_140C4C728;
      v51 = 32LL * HIDWORD(KeGetPcr()[1].LockArray);
      v52 = *(_DWORD *)(v51 + qword_140C4C728 + 24);
      if ( v52 )
      {
        v53 = *(_DWORD *)(v51 + qword_140C4C728 + 20);
        LODWORD(v45) = *(_DWORD *)(v51 + qword_140C4C728 + 16);
        if ( v53 )
        {
          v57 = v53 - 1;
          *(_DWORD *)(v51 + qword_140C4C728 + 20) = v57;
          if ( v57 )
            goto LABEL_75;
          v77 = 0x2710 / v52;
          *(_DWORD *)(v51 + v50 + 20) = 0x2710 / v52;
          if ( !(0x2710 / v52) )
          {
            *(_DWORD *)(v51 + v50 + 20) = 1;
            v77 = 1;
          }
          PoGetProcessorIdleAccounting(&v69, 0x2710 % v52);
          v55 = v69;
          if ( v69 == *(_QWORD *)(v51 + v50 + 8) )
          {
            v58 = v77 * (unsigned int)v45;
            v59 = KeQueryPerformanceCounter(&v73);
            v60 = qword_140C4C728;
            if ( v59.QuadPart != *(_QWORD *)(v51 + qword_140C4C728) )
            {
              v45 = v73.QuadPart
                  * (v58
                   * (unsigned __int64)*(unsigned int *)(v51 + qword_140C4C728 + 24)
                   / (v59.QuadPart - *(_QWORD *)(v51 + qword_140C4C728)))
                  / 0x989680;
              if ( v45 >= 0x1000 )
              {
                if ( v45 > 0x7FFFFFFF )
                  LODWORD(v45) = 0x7FFFFFFF;
              }
              else
              {
                LODWORD(v45) = 4096;
              }
              *(_DWORD *)(v51 + qword_140C4C728 + 16) = v45;
              *(LARGE_INTEGER *)(v51 + v60) = v59;
            }
            goto LABEL_75;
          }
        }
        else
        {
          v54 = 0x2710 / v52;
          if ( !(0x2710 / v52) )
            v54 = 1;
          *(_DWORD *)(v51 + qword_140C4C728 + 20) = v54;
          PoGetProcessorIdleAccounting(&v69, 0x2710 % v52);
          v55 = v69;
        }
        *(_QWORD *)(v51 + v50 + 8) = v55;
        *(LARGE_INTEGER *)(v51 + qword_140C4C728) = KeQueryPerformanceCounter(0LL);
      }
LABEL_75:
      v43 = v67;
      v44 = v68;
LABEL_76:
      if ( (unsigned int)v42 >= dword_140C4A418 )
      {
        if ( (unsigned int)dword_140C4A440 < 0x40 )
          v66 = (1LL << dword_140C4A440) - 1;
        else
          v66 = -1LL;
        v61 = v70;
        v63 = v72 | (1LL << v78);
        v64 = v42 - dword_140C4A418 + 777;
        v62 = 911;
        v65 = v66 & -(__int64)(unsigned int)v45;
      }
      else
      {
        if ( (unsigned int)dword_140C4A42C < 0x40 )
          v56 = (1LL << dword_140C4A42C) - 1;
        else
          v56 = -1LL;
        v61 = v70;
        v62 = v42 + 390;
        v63 = v70 | 0x500000;
        v64 = v42 + 193;
        v65 = v56 & -(__int64)(unsigned int)v45;
      }
      __writemsr(v64, v65);
      __writemsr(v62, v63);
      sub_140520580(v42, v61, &v76);
      if ( (_BYTE)v76 )
        *(_BYTE *)(v43.QuadPart + 8 * v44 + 36) = 1;
      v6 = v71;
LABEL_99:
      v41 = !_BitScanForward64((unsigned __int64 *)&v42, v37);
      if ( v41 )
      {
        QuadPart = PerformanceFrequency.QuadPart;
        goto LABEL_101;
      }
    }
  }
  if ( (unsigned int)dword_140C4A42C < 0x40 )
    v7 = (1LL << dword_140C4A42C) - 1;
  else
    v7 = -1LL;
  for ( i = 0LL; (unsigned int)i < dword_140C4A404; i = (unsigned int)(i + 1) )
  {
    result = (__int64 (__fastcall **)())v6[i].QuadPart;
    if ( !*((_DWORD *)result + 6) )
    {
      v9 = i + 390;
      v10 = i + 193;
      v78 = i + 390;
      v77 = i + 193;
      v11 = __readmsr((int)i + 193);
      v12 = (((unsigned __int64)HIDWORD(v11) << 32) | (unsigned int)v11) & v7;
      result = (__int64 (__fastcall **)())(v7 & 0xFFFFFFFF80000001uLL);
      if ( v12 < (v7 & 0xFFFFFFFF80000001uLL) )
      {
        v13 = 5 * i;
        v72 = 0LL;
        LODWORD(v14) = 0;
        LOBYTE(v76) = 0;
        v15 = *v71;
        v73 = *v71;
        v69 = 5 * i;
        LODWORD(v68) = i;
        if ( (unsigned int)i < dword_140C4A418 )
        {
          v16 = i + 390;
          v70 = __readmsr(v9);
          v18 = v70 & 0xFFFFFFFFFFAFFFFFuLL;
        }
        else
        {
          LODWORD(v68) = i - dword_140C4A418 + 32;
          v70 = ~(15LL << (4 * ((unsigned __int8)i - (unsigned __int8)dword_140C4A418))) & __readmsr(0x38Du);
          v16 = 911;
          v17 = __readmsr(0x38Fu);
          _bittestandreset64((__int64 *)&v17, (unsigned int)v68);
          v72 = v17;
          v18 = v17;
          v5 = a1;
        }
        __writemsr(v16, v18);
        v19 = *(unsigned int *)(v15.QuadPart + 40 * i + 32);
        if ( (_DWORD)v19 )
        {
          KeProfileInterruptWithSource(v5, v19);
          LODWORD(v14) = *(_DWORD *)(v73.QuadPart + 40 * i);
        }
        else
        {
          v67.QuadPart = 0LL;
          PerformanceFrequency.QuadPart = 0LL;
          if ( qword_140D01738 )
            sub_14042A5E0(v5, v19);
          else
            KeProfileInterruptWithSource(v5, 0LL);
          v20 = qword_140C4C728;
          v21 = 32LL * HIDWORD(KeGetPcr()[1].LockArray);
          v22 = *(_DWORD *)(v21 + qword_140C4C728 + 24);
          if ( v22 )
          {
            v23 = *(_DWORD *)(v21 + qword_140C4C728 + 20);
            LODWORD(v14) = *(_DWORD *)(v21 + qword_140C4C728 + 16);
            if ( v23 )
            {
              v25 = v23 - 1;
              *(_DWORD *)(v21 + qword_140C4C728 + 20) = v25;
              if ( !v25 )
              {
                *(_DWORD *)(v21 + v20 + 20) = 0x2710 / v22;
                v26 = 0x2710 / v22;
                if ( !(0x2710 / v22) )
                {
                  *(_DWORD *)(v21 + v20 + 20) = 1;
                  v26 = 1;
                }
                PoGetProcessorIdleAccounting(&v67, 0x2710 % v22);
                if ( v67.QuadPart == *(_QWORD *)(v21 + v20 + 8) )
                {
                  v28 = v14 * v26;
                  v29 = KeQueryPerformanceCounter(&PerformanceFrequency);
                  v30 = qword_140C4C728;
                  if ( v29.QuadPart != *(_QWORD *)(v21 + qword_140C4C728) )
                  {
                    v14 = PerformanceFrequency.QuadPart
                        * (v28
                         * (unsigned __int64)*(unsigned int *)(v21 + qword_140C4C728 + 24)
                         / (v29.QuadPart - *(_QWORD *)(v21 + qword_140C4C728)))
                        / 0x989680;
                    if ( v14 >= 0x1000 )
                    {
                      if ( v14 > 0x7FFFFFFF )
                        LODWORD(v14) = 0x7FFFFFFF;
                    }
                    else
                    {
                      LODWORD(v14) = 4096;
                    }
                    *(_DWORD *)(v21 + qword_140C4C728 + 16) = v14;
                    *(LARGE_INTEGER *)(v21 + v30) = v29;
                  }
                }
                else
                {
                  *(LARGE_INTEGER *)(v21 + v20 + 8) = v67;
                  *(LARGE_INTEGER *)(v21 + qword_140C4C728) = KeQueryPerformanceCounter(0LL);
                }
                v13 = v69;
              }
            }
            else
            {
              v24 = 0x2710 / v22;
              if ( !(0x2710 / v22) )
                v24 = 1;
              *(_DWORD *)(v21 + qword_140C4C728 + 20) = v24;
              PoGetProcessorIdleAccounting(&v67, 0x2710 % v22);
              *(LARGE_INTEGER *)(v21 + v20 + 8) = v67;
              *(LARGE_INTEGER *)(v21 + qword_140C4C728) = KeQueryPerformanceCounter(0LL);
            }
          }
          v9 = v78;
          v10 = v77;
        }
        if ( (unsigned int)i >= dword_140C4A418 )
        {
          if ( (unsigned int)dword_140C4A440 < 0x40 )
            v34 = (1LL << dword_140C4A440) - 1;
          else
            v34 = -1LL;
          v31 = v70;
          v32 = v72 | (1LL << v68);
          v10 = i - dword_140C4A418 + 777;
          v9 = 911;
          v33 = v34 & -(__int64)(unsigned int)v14;
        }
        else
        {
          if ( (unsigned int)dword_140C4A42C < 0x40 )
            v27 = (1LL << dword_140C4A42C) - 1;
          else
            v27 = -1LL;
          v31 = v70;
          v32 = v70 | 0x500000;
          v33 = v27 & -(__int64)(unsigned int)v14;
        }
        __writemsr(v10, v33);
        __writemsr(v9, v32);
        result = (__int64 (__fastcall **)())sub_140520580(i, v31, &v76);
        v6 = v71;
        v5 = a1;
        if ( (_BYTE)v76 )
        {
          result = (__int64 (__fastcall **)())v73.QuadPart;
          *(_BYTE *)(v73.QuadPart + 8 * v13 + 36) = 1;
        }
      }
    }
  }
  return result;
}
