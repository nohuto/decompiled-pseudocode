/*
 * XREFs of KiSetProcessorSignature @ 0x140A56118
 * Callers:
 *     KiSetFeatureBits @ 0x140A56CDC (KiSetFeatureBits.c)
 *     KiInitializeBootStructures @ 0x140A57680 (KiInitializeBootStructures.c)
 * Callees:
 *     KeGetPrcb @ 0x140348800 (KeGetPrcb.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     KdInitSystem @ 0x140A70470 (KdInitSystem.c)
 *     KiPublishProcessorFeatures @ 0x140AFABB0 (KiPublishProcessorFeatures.c)
 */

__int64 __fastcall KiSetProcessorSignature(__int64 a1, unsigned int a2)
{
  unsigned int v8; // r10d
  ULONG_PTR v14; // r9
  ULONG_PTR v15; // r13
  ULONG_PTR v16; // r15
  unsigned int v17; // edx
  unsigned int v18; // ebx
  __int64 *v19; // rsi
  unsigned int v20; // r8d
  unsigned int v21; // ecx
  int v27; // r11d
  __int64 v28; // r9
  unsigned int v29; // r10d
  int v30; // edx
  int v31; // edx
  int v32; // eax
  int v33; // ebx
  __int64 i; // r8
  unsigned int *v35; // rsi
  unsigned int v36; // edx
  unsigned int v37; // ecx
  ULONG_PTR v38; // rdx
  unsigned __int64 v39; // r11
  __int64 j; // rbx
  unsigned int v41; // ecx
  unsigned int v42; // edx
  int v43; // edx
  int v44; // edx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // r8
  int v49; // ecx
  ULONG_PTR v50; // rsi
  __int64 result; // rax
  ULONG_PTR BugCheckParameter4; // rbx
  __int64 Prcb; // rax
  unsigned int v54; // [rsp+30h] [rbp-68h]
  unsigned int v55; // [rsp+34h] [rbp-64h]
  unsigned int v56; // [rsp+38h] [rbp-60h]
  unsigned int v57; // [rsp+3Ch] [rbp-5Ch]
  unsigned int v58; // [rsp+40h] [rbp-58h]
  __int128 v59; // [rsp+68h] [rbp-30h]

  _RAX = 0x80000000LL;
  __asm { cpuid }
  v8 = _RAX;
  v58 = _RAX;
  _RAX = 0LL;
  __asm { cpuid }
  v14 = (unsigned int)_RAX;
  v56 = _RAX;
  *(_QWORD *)&v59 = __PAIR64__(_RBX, _RAX);
  *((_QWORD *)&v59 + 1) = __PAIR64__(_RDX, _RCX);
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0;
  v54 = 0;
  v18 = 0;
  v55 = 0;
  v57 = 0;
  v19 = qword_140015088;
  do
  {
    v20 = *((_DWORD *)v19 - 2);
    if ( (v20 & 2) == 0 )
    {
      if ( !HIBYTE(v20) || (v21 = HIBYTE(v20), _bittest((const int *)&v21, *(unsigned __int8 *)(a1 + 141))) )
      {
        _RAX = *((unsigned int *)v19 - 6);
        if ( *(v19 - 3) != __PAIR64__(v18, v17) )
        {
          v54 = *((_DWORD *)v19 - 6);
          v55 = *((_DWORD *)v19 - 5);
          if ( ((unsigned int)_RAX < 0x80000000 || (unsigned int)_RAX > v8) && (unsigned int)_RAX > (unsigned int)v14 )
          {
            v59 = 0LL;
          }
          else
          {
            __asm { cpuid }
            *(_QWORD *)&v59 = __PAIR64__(_RBX, _RAX);
            *((_QWORD *)&v59 + 1) = __PAIR64__(_RDX, _RCX);
          }
        }
        v27 = 0;
        v28 = *((int *)v19 - 3);
        v29 = *((_DWORD *)v19 - 4);
        if ( (v29 & *((_DWORD *)&v59 + v28)) != 0 )
        {
          v30 = v20 & 8;
        }
        else if ( (v20 & 8) != 0 && (v15 & *v19) == *v19 )
        {
          v30 = v20 & 8;
        }
        else
        {
          v30 = v20 & 8;
          if ( (v20 & 0x10) == 0 || (v16 & *v19) != *v19 )
          {
LABEL_19:
            if ( !v27 )
            {
              if ( (v20 & 1) != 0 )
              {
                if ( !*(_DWORD *)(a1 + 36) )
                {
                  KdInitSystem(0LL, KeLoaderBlock_0);
                  LODWORD(v28) = *((_DWORD *)v19 - 3);
                  v29 = *((_DWORD *)v19 - 4);
                }
                KeBugCheckEx(0x5Du, 0xFFFFFFFFuLL, *((unsigned int *)v19 - 6), v29, (int)v28);
              }
              if ( (v20 & 4) != 0 && *(_DWORD *)(a1 + 36) )
              {
                v31 = 0;
                if ( (v20 & 8) != 0 )
                {
                  LOBYTE(v31) = (KeFeatureBits & *v19) == *v19;
                }
                else if ( (v20 & 0x10) != 0 && (KeFeatureBits2 & *v19) == *v19 )
                {
LABEL_98:
                  KeBugCheckEx(
                    0x5Du,
                    0xFFFFFFFEuLL,
                    *((unsigned int *)v19 - 6),
                    *((unsigned int *)v19 - 4),
                    *((int *)v19 - 3));
                }
                if ( v31 )
                  goto LABEL_98;
              }
              goto LABEL_40;
            }
            if ( v30 )
            {
              v15 |= *v19;
              v32 = v20 & 0x10;
            }
            else
            {
              v32 = v20 & 0x10;
              if ( (v20 & 0x10) != 0 )
                v16 |= *v19;
            }
            if ( (v20 & 4) != 0 && *(_DWORD *)(a1 + 36) )
            {
              v33 = 0;
              if ( v30 )
              {
                LOBYTE(v33) = (KeFeatureBits & *v19) == *v19;
                goto LABEL_39;
              }
              if ( !v32 || (KeFeatureBits2 & *v19) != *v19 )
              {
LABEL_39:
                if ( !v33 )
                  KeBugCheckEx(
                    0x5Du,
                    0xFFFFFFFDuLL,
                    *((unsigned int *)v19 - 6),
                    *((unsigned int *)v19 - 4),
                    *((int *)v19 - 3));
              }
            }
LABEL_40:
            v17 = v54;
            v18 = v55;
            v14 = v56;
            v8 = v58;
            goto LABEL_41;
          }
        }
        v27 = 1;
        goto LABEL_19;
      }
    }
LABEL_41:
    ++v57;
    v19 += 4;
  }
  while ( v57 < 0x33 );
  for ( i = 0LL; (unsigned int)i < 2; i = (unsigned int)(i + 1) )
  {
    v35 = (unsigned int *)(0x140000000LL + 24 * i + 28648);
    v36 = *(_DWORD *)(0x140000004LL + 24 * i + 28648);
    if ( (v36 & 2) == 0 )
    {
      if ( !HIBYTE(v36) || (v37 = HIBYTE(v36), _bittest((const int *)&v37, *(unsigned __int8 *)(a1 + 141))) )
      {
        if ( (v36 & 8) != 0 )
        {
          v38 = v15;
        }
        else
        {
          if ( (v36 & 0x10) == 0 )
            continue;
          v38 = v16;
        }
        if ( (v38 & *(_QWORD *)(0x140000010LL + 24 * i + 28648)) == *(_QWORD *)(0x140000010LL + 24 * i + 28648) )
        {
          v39 = __readmsr(*v35);
          for ( j = *(_QWORD *)(0x140000008LL + 24 * i + 28648); ; j += 24LL )
          {
            v14 = *(_QWORD *)j;
            if ( !*(_QWORD *)j )
              break;
            v41 = *(_DWORD *)(j + 8);
            if ( (v41 & 2) == 0 )
            {
              if ( !HIBYTE(v41) || (v42 = HIBYTE(v41), _bittest((const int *)&v42, *(unsigned __int8 *)(a1 + 141))) )
              {
                if ( (v14 & v39) != 0 )
                {
                  if ( (v41 & 8) != 0 )
                  {
                    v15 |= *(_QWORD *)(j + 16);
                  }
                  else if ( (v41 & 0x10) != 0 )
                  {
                    v16 |= *(_QWORD *)(j + 16);
                  }
                  if ( (v41 & 4) != 0 && *(_DWORD *)(a1 + 36) )
                  {
                    v44 = 0;
                    if ( (v41 & 8) != 0 )
                    {
                      LOBYTE(v44) = (KeFeatureBits & *(_QWORD *)(j + 16)) == *(_QWORD *)(j + 16);
                    }
                    else if ( (v41 & 0x10) != 0 && (KeFeatureBits2 & *(_QWORD *)(j + 16)) == *(_QWORD *)(j + 16) )
                    {
                      continue;
                    }
                    if ( !v44 )
                      KeBugCheckEx(0x5Du, 0xFFFFFFFAuLL, *v35, *(_QWORD *)j, HIDWORD(*(_QWORD *)j));
                  }
                }
                else
                {
                  if ( (v41 & 1) != 0 )
                  {
                    if ( !*(_DWORD *)(a1 + 36) )
                    {
                      KdInitSystem(0LL, KeLoaderBlock_0);
                      v14 = *(_QWORD *)j;
                    }
                    KeBugCheckEx(0x5Du, 0xFFFFFFFCuLL, *v35, v14, HIDWORD(v14));
                  }
                  if ( (v41 & 4) != 0 && *(_DWORD *)(a1 + 36) )
                  {
                    v43 = 0;
                    if ( (v41 & 8) != 0 )
                    {
                      LOBYTE(v43) = (KeFeatureBits & *(_QWORD *)(j + 16)) == *(_QWORD *)(j + 16);
                    }
                    else if ( (v41 & 0x10) != 0 && (KeFeatureBits2 & *(_QWORD *)(j + 16)) == *(_QWORD *)(j + 16) )
                    {
LABEL_103:
                      KeBugCheckEx(0x5Du, 0xFFFFFFFBuLL, *v35, *(_QWORD *)j, HIDWORD(*(_QWORD *)j));
                    }
                    if ( v43 )
                      goto LABEL_103;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v48 = a2;
  while ( *(_DWORD *)((char *)KiCpuTable + v47) != *(unsigned __int8 *)(a1 + 141)
       || *(_DWORD *)((char *)KiCpuTable + v47 + 4) != a2 )
  {
    v45 = (unsigned int)(v45 + 1);
    v46 = (unsigned int)v45;
    v47 = 20 * v45;
    if ( *((_DWORD *)&KiCpuTable[1] + 5 * v45) == 19 )
      goto LABEL_86;
  }
  *(_DWORD *)(a1 + 1740) = dword_1400274B0[5 * v46];
LABEL_86:
  v49 = *(_DWORD *)(a1 + 36);
  if ( v49 )
  {
    KeGetPrcb(0);
    v49 = *(_DWORD *)(a1 + 36);
  }
  v50 = 0LL;
  if ( *(_BYTE *)(a1 + 141) == 1 && ((*(_BYTE *)(a1 + 64) - 16) & 0xFD) == 0 )
    v50 = 0x800000000000LL;
  if ( v49 && (v50 & *(_QWORD *)(KeGetPrcb(0) + 35232)) != 0 )
  {
    BugCheckParameter4 = *(unsigned int *)(a1 + 36);
    Prcb = KeGetPrcb(0);
    KeBugCheckEx(0x5Du, 0x4D535546uLL, v50, *(_QWORD *)(Prcb + 35232), BugCheckParameter4);
  }
  *(_DWORD *)(a1 + 1736) = a2;
  *(_QWORD *)(a1 + 35232) |= v15 & ~v50;
  result = *(unsigned int *)(a1 + 36);
  if ( (_DWORD)result )
  {
    if ( v16 != KeFeatureBits2 )
      KeBugCheckEx(0x5Du, 0xFFFFFFF7uLL, v16, KeFeatureBits2, *(unsigned int *)(a1 + 36));
  }
  else
  {
    KeFeatureBits2 |= v16;
    return KiPublishProcessorFeatures(a1, v45, v48, v14);
  }
  return result;
}
