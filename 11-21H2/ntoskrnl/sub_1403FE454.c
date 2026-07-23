/*
 * XREFs of sub_1403FE454 @ 0x1403FE454
 * Callers:
 *     sub_1403FCD10 @ 0x1403FCD10 (sub_1403FCD10.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403FE454(__int64 *a1, __int64 *a2, unsigned __int64 a3, __int64 _R9)
{
  unsigned __int64 v48; // r10
  __int64 v50; // rbx
  __int64 v103; // r8
  int *v151; // rbx
  __int64 result; // rax
  __m256 v352; // [rsp+28h] [rbp+0h] BYREF

  _RBP = (unsigned __int64)&v352 & 0xFFFFFFFFFFFFFFE0uLL;
  _RAX = *a1;
  _XMM0 = 0LL;
  __asm
  {
    vmovdqu ymm14, cs:ymmword_140014200
    vmovups xmmword ptr [rbp+860h+var_860], xmm0
    vmovdqu ymm8, ymmword ptr [rax]
  }
  _RAX = a1[1];
  __asm
  {
    vmovups xmmword ptr [rbp+860h+var_860+10h], xmm0
    vmovdqu ymm0, ymmword ptr [rax]
  }
  _RAX = a1[2];
  __asm
  {
    vpunpckldq ymm5, ymm8, ymm0
    vpunpckhdq ymm8, ymm8, ymm0
    vmovdqu ymm6, ymmword ptr [rax]
  }
  _RAX = a1[3];
  __asm { vmovdqu ymm3, ymmword ptr [rax] }
  _RAX = a1[4];
  __asm
  {
    vpunpckldq ymm0, ymm6, ymm3
    vpunpckhdq ymm3, ymm6, ymm3
    vpunpcklqdq ymm10, ymm8, ymm3
    vmovdqu ymm7, ymmword ptr [rax]
  }
  _RAX = a1[5];
  __asm
  {
    vpunpcklqdq ymm9, ymm5, ymm0
    vpunpckhqdq ymm5, ymm5, ymm0
    vpunpckhqdq ymm8, ymm8, ymm3
    vmovdqu ymm1, ymmword ptr [rax]
  }
  _RAX = a1[6];
  __asm
  {
    vpunpckldq ymm6, ymm7, ymm1
    vpunpckhdq ymm7, ymm7, ymm1
    vmovdqu ymm4, ymmword ptr [rax]
  }
  _RAX = a1[7];
  __asm
  {
    vmovdqu ymm2, ymmword ptr [rax]
    vpunpckldq ymm1, ymm4, ymm2
    vpunpckhdq ymm4, ymm4, ymm2
    vpunpckhqdq ymm2, ymm6, ymm1
    vpunpcklqdq ymm0, ymm6, ymm1
    vpunpcklqdq ymm1, ymm7, ymm4
    vpunpckhqdq ymm3, ymm7, ymm4
    vperm2i128 ymm11, ymm10, ymm1, 20h ; ' '
    vmovdqu ymmword ptr [r9+120h], ymm11
    vperm2i128 ymm12, ymm8, ymm3, 20h ; ' '
    vmovdqu ymmword ptr [r9+100h], ymm12
    vperm2i128 ymm6, ymm9, ymm0, 20h ; ' '
    vmovdqu ymmword ptr [r9+160h], ymm6
    vperm2i128 ymm7, ymm5, ymm2, 20h ; ' '
    vmovdqu ymmword ptr [r9+140h], ymm7
    vperm2i128 ymm10, ymm10, ymm1, 31h ; '1'
    vmovdqu ymmword ptr [r9+0A0h], ymm10
    vperm2i128 ymm3, ymm8, ymm3, 31h ; '1'
    vmovdqu ymmword ptr [r9+80h], ymm3
    vperm2i128 ymm9, ymm9, ymm0, 31h ; '1'
    vmovdqu ymmword ptr [r9+0E0h], ymm9
    vperm2i128 ymm13, ymm5, ymm2, 31h ; '1'
    vmovdqu ymmword ptr [r9+0C0h], ymm13
    vmovdqu ymmword ptr [r9], ymm12
    vmovdqu ymmword ptr [r9+20h], ymm11
    vmovdqu ymmword ptr [r9+40h], ymm7
    vmovdqu ymmword ptr [r9+60h], ymm6
  }
  if ( a3 >= 0x40 )
  {
    _R11 = _R9 + 224;
    v48 = a3 >> 6;
    do
    {
      _R8 = _R9 + 448;
      v50 = 2LL;
      do
      {
        _RAX = *a2;
        __asm { vmovdqu ymm0, ymmword ptr [rax] }
        *a2 += 32LL;
        _RAX = a2[1];
        __asm
        {
          vpshufb ymm9, ymm0, ymm14
          vmovdqu ymm0, ymmword ptr [rax]
        }
        a2[1] = _RAX + 32;
        _RAX = a2[2];
        __asm
        {
          vpshufb ymm7, ymm0, ymm14
          vpunpckldq ymm4, ymm9, ymm7
          vpunpckhdq ymm7, ymm9, ymm7
          vmovdqu ymm0, ymmword ptr [rax]
        }
        a2[2] = _RAX + 32;
        _RAX = a2[3];
        __asm
        {
          vpshufb ymm6, ymm0, ymm14
          vmovdqu ymm0, ymmword ptr [rax]
        }
        a2[3] = _RAX + 32;
        _RAX = a2[4];
        __asm
        {
          vpshufb ymm3, ymm0, ymm14
          vmovdqu ymm0, ymmword ptr [rax]
          vpshufb ymm8, ymm0, ymm14
        }
        a2[4] = _RAX + 32;
        _RAX = a2[5];
        __asm
        {
          vmovdqu ymm0, ymmword ptr [rax]
          vpshufb ymm2, ymm0, ymm14
        }
        a2[5] = _RAX + 32;
        _RAX = a2[6];
        __asm
        {
          vpunpckhdq ymm9, ymm8, ymm2
          vmovdqu ymm0, ymmword ptr [rax]
          vpshufb ymm5, ymm0, ymm14
        }
        a2[6] = _RAX + 32;
        _RAX = a2[7];
        __asm
        {
          vmovdqu ymm0, ymmword ptr [rax]
          vpshufb ymm1, ymm0, ymm14
          vpunpckldq ymm0, ymm6, ymm3
          vpunpckhqdq ymm10, ymm4, ymm0
          vpunpcklqdq ymm11, ymm4, ymm0
          vpunpckhdq ymm3, ymm6, ymm3
          vpunpckldq ymm6, ymm8, ymm2
          vpunpckldq ymm2, ymm5, ymm1
          vpunpckhdq ymm1, ymm5, ymm1
          vpunpcklqdq ymm8, ymm7, ymm3
          vpunpcklqdq ymm5, ymm6, ymm2
          vpunpckhqdq ymm4, ymm6, ymm2
          vpunpckhqdq ymm2, ymm9, ymm1
          vpunpckhqdq ymm7, ymm7, ymm3
          vpunpcklqdq ymm3, ymm9, ymm1
        }
        a2[7] = _RAX + 32;
        __asm
        {
          vperm2i128 ymm0, ymm11, ymm5, 20h ; ' '
          vmovdqu ymmword ptr [r8-40h], ymm0
          vperm2i128 ymm1, ymm10, ymm4, 20h ; ' '
          vmovdqu ymmword ptr [r8-20h], ymm1
          vperm2i128 ymm0, ymm8, ymm3, 20h ; ' '
          vmovdqu ymmword ptr [r8], ymm0
        }
        _R8 += 256LL;
        __asm
        {
          vperm2i128 ymm1, ymm7, ymm2, 20h ; ' '
          vmovdqu ymmword ptr [r8-0E0h], ymm1
          vperm2i128 ymm0, ymm11, ymm5, 31h ; '1'
          vperm2i128 ymm1, ymm10, ymm4, 31h ; '1'
          vmovdqu ymmword ptr [r8-0C0h], ymm0
          vmovdqu ymmword ptr [r8-0A0h], ymm1
          vperm2i128 ymm0, ymm8, ymm3, 31h ; '1'
          vperm2i128 ymm1, ymm7, ymm2, 31h ; '1'
          vmovdqu ymmword ptr [r8-80h], ymm0
          vmovdqu ymmword ptr [r8-60h], ymm1
        }
        --v50;
      }
      while ( v50 );
      __asm
      {
        vmovdqu ymm8, ymmword ptr [r9+360h]
        vmovdqu ymm9, ymmword ptr [r9+340h]
        vmovdqu ymm10, ymmword ptr [r9+180h]
      }
      _RAX = _R9 + 672;
      v103 = (unsigned int)(unsigned __int8)v50 + 24;
      do
      {
        __asm
        {
          vmovdqu ymm7, ymmword ptr [rax-100h]
          vpsrld  ymm5, ymm9, 0Ah
          vpslld  ymm0, ymm7, 19h
          vpsrld  ymm4, ymm7, 3
          vpsrld  ymm1, ymm7, 7
          vpxor   ymm1, ymm0, ymm1
          vpsrld  ymm0, ymm9, 11h
          vpslld  ymm2, ymm7, 0Eh
          vpxor   ymm2, ymm1, ymm2
          vpslld  ymm1, ymm9, 0Fh
          vpxor   ymm1, ymm0, ymm1
          vpsrld  ymm3, ymm7, 12h
          vpxor   ymm3, ymm2, ymm3
          vpxor   ymm6, ymm3, ymm4
          vpsrld  ymm4, ymm9, 13h
          vpslld  ymm2, ymm9, 0Dh
          vpxor   ymm2, ymm1, ymm2
          vpxor   ymm3, ymm2, ymm4
          vpxor   ymm0, ymm3, ymm5
          vpaddd  ymm1, ymm0, ymm10
          vpaddd  ymm2, ymm1, ymmword ptr [rax]
          vmovdqu ymm10, ymmword ptr [rax-0E0h]
        }
        _RAX += 64LL;
        __asm
        {
          vpaddd  ymm9, ymm2, ymm6
          vpslld  ymm0, ymm10, 19h
          vpsrld  ymm4, ymm10, 3
          vpsrld  ymm5, ymm8, 0Ah
          vpsrld  ymm1, ymm10, 7
          vpxor   ymm1, ymm0, ymm1
          vpsrld  ymm0, ymm8, 11h
          vpslld  ymm2, ymm10, 0Eh
          vpxor   ymm2, ymm1, ymm2
          vpslld  ymm1, ymm8, 0Fh
          vpxor   ymm1, ymm0, ymm1
          vpsrld  ymm3, ymm10, 12h
          vpxor   ymm3, ymm2, ymm3
          vpxor   ymm6, ymm3, ymm4
          vpslld  ymm2, ymm8, 0Dh
          vpxor   ymm2, ymm1, ymm2
          vpsrld  ymm4, ymm8, 13h
          vpxor   ymm3, ymm2, ymm4
          vpxor   ymm0, ymm3, ymm5
          vpaddd  ymm1, ymm0, ymm7
          vpaddd  ymm2, ymm1, ymmword ptr [rax-20h]
          vpaddd  ymm8, ymm2, ymm6
          vmovdqu ymmword ptr [rax+0C0h], ymm8
          vmovdqu ymmword ptr [rax+0A0h], ymm9
        }
        --v103;
      }
      while ( v103 );
      __asm
      {
        vmovdqu ymm9, ymmword ptr [r11]
        vmovdqu ymm12, ymmword ptr [r9+160h]
        vmovdqu ymm13, ymmword ptr [r9+140h]
        vmovdqu ymm15, ymmword ptr [r9+120h]
        vmovdqu ymm14, ymmword ptr [r9+100h]
        vmovdqu [rbp+860h+var_860], ymm9
      }
      v151 = (int *)&xmmword_140014000 + 2;
      _R8 = _R9 + 224;
      do
      {
        _EAX = *(v151 - 2);
        __asm
        {
          vmovdqu ymm8, ymmword ptr [r8-40h]
          vmovdqu ymm10, ymmword ptr [r8-20h]
          vpslld  ymm4, ymm9, 7
          vpsrld  ymm5, ymm9, 19h
          vmovd   xmm7, eax
          vpshufd xmm7, xmm7, 0
          vinsertf128 ymm7, ymm7, xmm7, 1
          vpxor   ymm0, ymm10, ymm8
          vpand   ymm1, ymm0, ymm9
          vpxor   ymm6, ymm1, ymm8
          vpslld  ymm0, ymm9, 1Ah
          vpsrld  ymm1, ymm9, 6
          vpxor   ymm1, ymm0, ymm1
          vpslld  ymm2, ymm9, 15h
          vpxor   ymm2, ymm1, ymm2
          vpsrld  ymm3, ymm9, 0Bh
          vpxor   ymm3, ymm2, ymm3
          vpxor   ymm0, ymm3, ymm4
          vpxor   ymm1, ymm0, ymm5
          vpaddd  ymm2, ymm1, ymmword ptr [r8+0A0h]
          vpaddd  ymm3, ymm2, ymmword ptr [r8-60h]
          vpaddd  ymm0, ymm3, ymm6
          vpaddd  ymm7, ymm0, ymm7
          vpaddd  ymm11, ymm7, ymm14
          vpor    ymm0, ymm13, ymm12
          vpand   ymm1, ymm0, ymm15
          vpand   ymm2, ymm13, ymm12
          vpor    ymm6, ymm1, ymm2
          vpslld  ymm0, ymm12, 1Eh
          vpslld  ymm4, ymm12, 0Ah
          vpsrld  ymm5, ymm12, 16h
          vpsrld  ymm1, ymm12, 2
          vpxor   ymm1, ymm0, ymm1
          vpslld  ymm2, ymm12, 13h
          vpxor   ymm2, ymm1, ymm2
          vpsrld  ymm3, ymm12, 0Dh
          vpxor   ymm3, ymm2, ymm3
          vpxor   ymm0, ymm3, ymm4
          vpxor   ymm1, ymm0, ymm5
          vpaddd  ymm2, ymm1, ymm7
          vpaddd  ymm14, ymm2, ymm6
          vpxor   ymm0, ymm9, ymm10
          vpand   ymm1, ymm0, ymm11
          vpxor   ymm6, ymm1, ymm10
          vpslld  ymm0, ymm11, 1Ah
          vpslld  ymm4, ymm11, 7
          vpsrld  ymm5, ymm11, 19h
          vpsrld  ymm1, ymm11, 6
          vpxor   ymm1, ymm0, ymm1
          vpslld  ymm2, ymm11, 15h
          vpxor   ymm2, ymm1, ymm2
          vpsrld  ymm3, ymm11, 0Bh
          vpxor   ymm3, ymm2, ymm3
          vpxor   ymm0, ymm3, ymm4
          vpxor   ymm1, ymm0, ymm5
          vpaddd  ymm2, ymm1, ymmword ptr [r8+0C0h]
          vpaddd  ymm3, ymm2, ymm8
          vpaddd  ymm0, ymm3, ymm6
          vpand   ymm2, ymm14, ymm12
          vmovdqu ymmword ptr [r8+20h], ymm11
        }
        _EAX = *(v151 - 1);
        __asm
        {
          vmovd   xmm7, eax
          vpshufd xmm7, xmm7, 0
          vinsertf128 ymm7, ymm7, xmm7, 1
          vpaddd  ymm7, ymm0, ymm7
          vpor    ymm0, ymm14, ymm12
          vpand   ymm1, ymm0, ymm13
          vpor    ymm6, ymm1, ymm2
          vpslld  ymm0, ymm14, 1Eh
          vpsrld  ymm1, ymm14, 2
          vpxor   ymm1, ymm0, ymm1
          vpslld  ymm2, ymm14, 13h
          vpxor   ymm2, ymm1, ymm2
          vpsrld  ymm3, ymm14, 0Dh
          vpxor   ymm3, ymm2, ymm3
          vpaddd  ymm9, ymm7, ymm15
          vpslld  ymm4, ymm14, 0Ah
          vpxor   ymm0, ymm3, ymm4
          vmovdqu ymmword ptr [r8+40h], ymm9
          vpsrld  ymm5, ymm14, 16h
        }
        _EAX = *v151;
        _R8 += 128LL;
        __asm
        {
          vpxor   ymm1, ymm0, ymm5
          vpxor   ymm0, ymm11, [rbp+860h+var_860]
          vpaddd  ymm2, ymm1, ymm7
          vpaddd  ymm15, ymm2, ymm6
          vpand   ymm1, ymm0, ymm9
          vpxor   ymm6, ymm1, [rbp+860h+var_860]
          vpslld  ymm0, ymm9, 1Ah
          vpslld  ymm4, ymm9, 7
          vpsrld  ymm5, ymm9, 19h
          vmovd   xmm7, eax
          vpshufd xmm7, xmm7, 0
          vinsertf128 ymm7, ymm7, xmm7, 1
          vpsrld  ymm1, ymm9, 6
          vpxor   ymm1, ymm0, ymm1
          vpslld  ymm2, ymm9, 15h
          vpxor   ymm2, ymm1, ymm2
          vpsrld  ymm3, ymm9, 0Bh
          vpxor   ymm3, ymm2, ymm3
          vpxor   ymm0, ymm3, ymm4
          vpxor   ymm1, ymm0, ymm5
          vpaddd  ymm2, ymm1, ymmword ptr [r8+60h]
          vpaddd  ymm3, ymm2, ymm10
          vpaddd  ymm0, ymm3, ymm6
          vpaddd  ymm7, ymm0, ymm7
          vpaddd  ymm8, ymm7, ymm13
          vpor    ymm0, ymm15, ymm14
          vpand   ymm1, ymm0, ymm12
          vpand   ymm2, ymm15, ymm14
          vpor    ymm6, ymm1, ymm2
          vpslld  ymm0, ymm15, 1Eh
          vpslld  ymm4, ymm15, 0Ah
          vpsrld  ymm5, ymm15, 16h
          vmovdqu ymmword ptr [r8-20h], ymm8
        }
        _EAX = v151[1];
        __asm
        {
          vpsrld  ymm1, ymm15, 2
          vpxor   ymm1, ymm0, ymm1
          vpslld  ymm2, ymm15, 13h
          vpxor   ymm2, ymm1, ymm2
          vpsrld  ymm3, ymm15, 0Dh
          vpxor   ymm3, ymm2, ymm3
          vpxor   ymm0, ymm3, ymm4
          vpxor   ymm1, ymm0, ymm5
          vpaddd  ymm2, ymm1, ymm7
          vpaddd  ymm13, ymm2, ymm6
          vpxor   ymm0, ymm9, ymm11
          vpand   ymm1, ymm0, ymm8
          vpxor   ymm6, ymm1, ymm11
          vpslld  ymm0, ymm8, 1Ah
          vpslld  ymm4, ymm8, 7
          vpsrld  ymm5, ymm8, 19h
          vmovd   xmm7, eax
          vpshufd xmm7, xmm7, 0
          vpsrld  ymm1, ymm8, 6
          vpxor   ymm1, ymm0, ymm1
          vpslld  ymm2, ymm8, 15h
          vpxor   ymm2, ymm1, ymm2
          vpsrld  ymm3, ymm8, 0Bh
          vpxor   ymm3, ymm2, ymm3
          vpxor   ymm0, ymm3, ymm4
          vpxor   ymm1, ymm0, ymm5
          vpaddd  ymm2, ymm1, ymmword ptr [r8+80h]
          vpaddd  ymm3, ymm2, [rbp+860h+var_860]
          vpaddd  ymm0, ymm3, ymm6
          vpand   ymm2, ymm15, ymm13
          vinsertf128 ymm7, ymm7, xmm7, 1
          vpaddd  ymm7, ymm0, ymm7
          vpor    ymm0, ymm15, ymm13
          vpand   ymm1, ymm0, ymm14
          vpaddd  ymm9, ymm7, ymm12
          vpor    ymm6, ymm1, ymm2
          vmovdqu [rbp+860h+var_860], ymm7
          vpslld  ymm2, ymm13, 13h
          vpsrld  ymm1, ymm13, 2
          vmovdqu [rbp+860h+var_860], ymm9
          vmovdqu ymmword ptr [r8], ymm9
          vpsrld  ymm5, ymm13, 16h
          vpslld  ymm4, ymm13, 0Ah
          vpsrld  ymm3, ymm13, 0Dh
          vpslld  ymm0, ymm13, 1Eh
          vpxor   ymm1, ymm0, ymm1
          vpxor   ymm2, ymm1, ymm2
          vpxor   ymm3, ymm2, ymm3
          vpxor   ymm0, ymm3, ymm4
          vpxor   ymm1, ymm0, ymm5
        }
        v151 += 4;
        __asm
        {
          vpaddd  ymm2, ymm1, ymm7
          vpaddd  ymm12, ymm2, ymm6
        }
      }
      while ( (__int64)v151 < (__int64)((int *)&xmmword_140014100 + 2) );
      __asm
      {
        vpaddd  ymm6, ymm12, ymmword ptr [r9+60h]
        vmovdqu ymmword ptr [r9+160h], ymm6
        vpaddd  ymm7, ymm13, ymmword ptr [r9+40h]
        vmovdqu ymmword ptr [r9+60h], ymm6
        vmovdqu ymmword ptr [r9+140h], ymm7
        vpaddd  ymm11, ymm15, ymmword ptr [r9+20h]
        vmovdqu ymmword ptr [r9+40h], ymm7
        vmovdqu ymmword ptr [r9+120h], ymm11
        vpaddd  ymm12, ymm14, ymmword ptr [r9]
        vmovdqu ymm14, cs:ymmword_140014200
        vmovdqu ymmword ptr [r9+20h], ymm11
        vmovdqu ymmword ptr [r9+100h], ymm12
        vmovdqu ymmword ptr [r9], ymm12
        vmovdqu ymm0, ymmword ptr [r9+0E0h]
        vpaddd  ymm9, ymm0, ymmword ptr [r9+8E0h]
        vmovdqu ymmword ptr [r9+0E0h], ymm9
        vmovdqu ymm0, ymmword ptr [r9+8C0h]
        vpaddd  ymm13, ymm0, ymmword ptr [r9+0C0h]
        vmovdqu ymmword ptr [r9+0C0h], ymm13
        vmovdqu ymm0, ymmword ptr [r9+8A0h]
        vpaddd  ymm10, ymm0, ymmword ptr [r9+0A0h]
        vmovdqu ymm0, ymmword ptr [r9+80h]
        vmovdqu ymmword ptr [r9+0A0h], ymm10
        vpaddd  ymm3, ymm0, ymmword ptr [r9+880h]
        vmovdqu ymmword ptr [r9+80h], ymm3
      }
      --v48;
    }
    while ( v48 );
  }
  _RAX = *a1;
  __asm
  {
    vpunpckldq ymm4, ymm6, ymm7
    vpunpckldq ymm1, ymm10, ymm3
    vpunpckhdq ymm6, ymm6, ymm7
    vpunpckldq ymm0, ymm11, ymm12
    vpunpckhdq ymm7, ymm9, ymm13
    vpunpckldq ymm5, ymm9, ymm13
    vpunpcklqdq ymm9, ymm4, ymm0
    vpunpckhdq ymm3, ymm10, ymm3
    vpunpckhqdq ymm10, ymm4, ymm0
    vpunpcklqdq ymm0, ymm5, ymm1
    vpunpckhdq ymm2, ymm11, ymm12
    vpunpcklqdq ymm11, ymm6, ymm2
    vpunpckhqdq ymm12, ymm6, ymm2
    vpunpckhqdq ymm2, ymm5, ymm1
    vpunpcklqdq ymm1, ymm7, ymm3
    vpunpckhqdq ymm6, ymm7, ymm3
    vperm2i128 ymm8, ymm9, ymm0, 20h ; ' '
    vmovdqu ymmword ptr [rax], ymm8
  }
  _RAX = a1[1];
  __asm
  {
    vperm2i128 ymm7, ymm10, ymm2, 20h ; ' '
    vperm2i128 ymm5, ymm11, ymm1, 20h ; ' '
    vperm2i128 ymm3, ymm9, ymm0, 31h ; '1'
    vmovdqu ymmword ptr [rax], ymm7
  }
  _RAX = a1[2];
  __asm
  {
    vperm2i128 ymm4, ymm12, ymm6, 20h ; ' '
    vperm2i128 ymm2, ymm10, ymm2, 31h ; '1'
    vperm2i128 ymm1, ymm11, ymm1, 31h ; '1'
    vmovdqu ymmword ptr [rax], ymm5
  }
  _RAX = a1[3];
  __asm
  {
    vperm2i128 ymm0, ymm12, ymm6, 31h ; '1'
    vmovdqu ymmword ptr [rax], ymm4
  }
  _RAX = a1[4];
  __asm { vmovdqu ymmword ptr [rax], ymm3 }
  _RAX = a1[5];
  __asm { vmovdqu ymmword ptr [rax], ymm2 }
  _RAX = a1[6];
  __asm { vmovdqu ymmword ptr [rax], ymm1 }
  result = a1[7];
  __asm
  {
    vmovdqu ymmword ptr [rax], ymm0
    vzeroupper
  }
  return result;
}
