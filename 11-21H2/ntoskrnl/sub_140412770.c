/*
 * XREFs of sub_140412770 @ 0x140412770
 * Callers:
 *     sub_14040C4E0 @ 0x14040C4E0 (sub_14040C4E0.c)
 *     sub_14040CAD0 @ 0x14040CAD0 (sub_14040CAD0.c)
 *     sub_14040CE04 @ 0x14040CE04 (sub_14040CE04.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140412770(__int64 a1, __m128i *a2, __m128i *a3)
{
  __m128i *v3; // r8
  __int64 v12; // rdi
  int v13; // r9d
  __int64 v14; // rdx
  __int128 v49; // rdx
  __int128 v83; // rdx
  __int128 v117; // rdx
  __int128 v151; // rdx
  __int128 v185; // rdx
  __int128 v219; // rdx
  __int128 v253; // rdx
  __m128i *v286; // rdi
  __int64 v287; // rcx
  int i; // r9d
  __int128 v320; // rdx
  __int128 v356; // rdx
  __int128 v392; // rdx
  __int128 v428; // rdx
  __int128 v464; // rdx
  __int128 v500; // rdx
  __int128 v536; // rdx
  __int128 v566; // rdx
  __int64 v570; // rbx
  __int64 v571; // rbx
  _BOOL8 v572; // rtt
  __int64 v573; // rax
  __int64 v574; // rax
  __int64 v575; // rtt
  __int64 v576; // rbx
  __int64 v577; // rbx
  __int64 v578; // rtt
  __int64 v579; // rax
  __int64 v580; // rax
  __int64 v581; // rtt
  __int64 v582; // rbx
  __int64 v583; // rbx
  __int64 v584; // rtt
  __int64 v585; // rax
  __int64 v586; // rax
  __int64 v587; // rtt
  __int64 v588; // rbx
  __int64 v589; // rbx
  __int64 v590; // rtt
  int v591; // edx
  bool v592; // cf
  int v593; // esi
  _QWORD *v594; // rcx
  __int64 *v595; // rdi
  int v596; // r9d
  const __m128i *v597; // r10
  __m128i *v598; // rbp
  unsigned __int64 v599; // rtt
  unsigned __int64 v600; // rbx
  unsigned __int64 v601; // rtt
  unsigned __int64 v602; // rax
  unsigned __int64 v603; // rtt
  unsigned __int64 v604; // rbx
  unsigned __int64 v605; // rtt
  unsigned __int64 v606; // rax
  unsigned __int64 v607; // rtt
  unsigned __int64 v608; // rbx
  unsigned __int64 v609; // rtt
  unsigned __int64 v610; // rax
  __int64 result; // rax
  unsigned __int64 v612; // rtt
  unsigned __int64 v613; // rbx
  unsigned __int64 v614; // rtt
  __m128i v615; // xmm0
  __m128i v616; // xmm1
  __int64 v617; // [rsp+48h] [rbp+8h]
  __m128i *v618; // [rsp+50h] [rbp+10h]
  int v620; // [rsp+60h] [rbp+20h]
  int v621; // [rsp+64h] [rbp+24h]

  v617 = a1;
  v618 = a2;
  v3 = a2;
  v620 = *(_DWORD *)(a1 + 4);
  v621 = 0;
  do
  {
    _RSI = v3->m128i_i64[0];
    _RBP = v3->m128i_i64[1];
    _R10 = v3[1].m128i_i64[0];
    _R11 = v3[1].m128i_i64[1];
    _R12 = v3[2].m128i_i64[0];
    _R13 = v3[2].m128i_i64[1];
    _R14 = v3[3].m128i_i64[0];
    _R15 = v3[3].m128i_i64[1];
    v12 = *(_QWORD *)(a1 + 32);
    v13 = *(_DWORD *)(a1 + 4);
    v14 = v12 * v3->m128i_i64[0];
    v3->m128i_i64[0] = v14;
    _RBX = ((unsigned __int64)v14 * (unsigned __int128)*(unsigned __int64 *)(a1 + 128)) >> 64;
    _RAX = v14 * *(_QWORD *)(a1 + 128);
    __asm
    {
      adcx    rsi, rax
      adox    rbp, rbx
    }
    _RBX = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[8]) >> 64;
    _RAX = v14 * MEMORY[8];
    __asm
    {
      adcx    rbp, rax
      adox    r10, rbx
    }
    _RBX = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v14 * MEMORY[0x10];
    __asm
    {
      adcx    r10, rax
      adox    r11, rbx
    }
    _RBX = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v14 * MEMORY[0x18];
    __asm
    {
      adcx    r11, rax
      adox    r12, rbx
    }
    _RBX = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v14 * MEMORY[0x20];
    __asm
    {
      adcx    r12, rax
      adox    r13, rbx
    }
    _RBX = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v14 * MEMORY[0x28];
    __asm
    {
      adcx    r13, rax
      adox    r14, rbx
    }
    _RBX = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v14 * MEMORY[0x30];
    __asm
    {
      adcx    r14, rax
      adox    r15, rbx
    }
    _RBX = ((unsigned __int64)v14 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v14 * MEMORY[0x38];
    __asm
    {
      adcx    r15, rax
      adcx    rsi, rsi
      adox    rsi, rbx
    }
    v3->m128i_i64[1] = v12 * _RBP;
    v49 = (unsigned __int64)(v12 * _RBP);
    _RBX = (v49 * (unsigned __int128)MEMORY[0]) >> 64;
    _RAX = v12 * _RBP * MEMORY[0];
    __asm
    {
      adcx    rbp, rax
      adox    r10, rbx
    }
    _RBX = ((unsigned __int64)v49 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v49 + 1) + 8LL)) >> 64;
    _RAX = v49 * *(_QWORD *)(*((_QWORD *)&v49 + 1) + 8LL);
    __asm
    {
      adcx    r10, rax
      adox    r11, rbx
    }
    _RBX = ((unsigned __int64)v49 * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v49 * MEMORY[0x10];
    __asm
    {
      adcx    r11, rax
      adox    r12, rbx
    }
    _RBX = ((unsigned __int64)v49 * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v49 * MEMORY[0x18];
    __asm
    {
      adcx    r12, rax
      adox    r13, rbx
    }
    _RBX = ((unsigned __int64)v49 * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v49 * MEMORY[0x20];
    __asm
    {
      adcx    r13, rax
      adox    r14, rbx
    }
    _RBX = ((unsigned __int64)v49 * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v49 * MEMORY[0x28];
    __asm
    {
      adcx    r14, rax
      adox    r15, rbx
    }
    _RBX = ((unsigned __int64)v49 * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v49 * MEMORY[0x30];
    __asm
    {
      adcx    r15, rax
      adox    rsi, rbx
    }
    _RBX = ((unsigned __int64)v49 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v49 * MEMORY[0x38];
    __asm
    {
      adcx    rsi, rax
      adcx    rbp, rbp
      adox    rbp, rbx
    }
    v3[1].m128i_i64[0] = v12 * _R10;
    v83 = (unsigned __int64)(v12 * _R10);
    _RBX = (v83 * (unsigned __int128)MEMORY[0]) >> 64;
    _RAX = v12 * _R10 * MEMORY[0];
    __asm
    {
      adcx    r10, rax
      adox    r11, rbx
    }
    _RBX = ((unsigned __int64)v83 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v83 + 1) + 8LL)) >> 64;
    _RAX = v83 * *(_QWORD *)(*((_QWORD *)&v83 + 1) + 8LL);
    __asm
    {
      adcx    r11, rax
      adox    r12, rbx
    }
    _RBX = ((unsigned __int64)v83 * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v83 * MEMORY[0x10];
    __asm
    {
      adcx    r12, rax
      adox    r13, rbx
    }
    _RBX = ((unsigned __int64)v83 * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v83 * MEMORY[0x18];
    __asm
    {
      adcx    r13, rax
      adox    r14, rbx
    }
    _RBX = ((unsigned __int64)v83 * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v83 * MEMORY[0x20];
    __asm
    {
      adcx    r14, rax
      adox    r15, rbx
    }
    _RBX = ((unsigned __int64)v83 * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v83 * MEMORY[0x28];
    __asm
    {
      adcx    r15, rax
      adox    rsi, rbx
    }
    _RBX = ((unsigned __int64)v83 * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v83 * MEMORY[0x30];
    __asm
    {
      adcx    rsi, rax
      adox    rbp, rbx
    }
    _RBX = ((unsigned __int64)v83 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v83 * MEMORY[0x38];
    __asm
    {
      adcx    rbp, rax
      adcx    r10, r10
      adox    r10, rbx
    }
    v3[1].m128i_i64[1] = v12 * _R11;
    v117 = (unsigned __int64)(v12 * _R11);
    _RBX = (v117 * (unsigned __int128)MEMORY[0]) >> 64;
    _RAX = v12 * _R11 * MEMORY[0];
    __asm
    {
      adcx    r11, rax
      adox    r12, rbx
    }
    _RBX = ((unsigned __int64)v117 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v117 + 1) + 8LL)) >> 64;
    _RAX = v117 * *(_QWORD *)(*((_QWORD *)&v117 + 1) + 8LL);
    __asm
    {
      adcx    r12, rax
      adox    r13, rbx
    }
    _RBX = ((unsigned __int64)v117 * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v117 * MEMORY[0x10];
    __asm
    {
      adcx    r13, rax
      adox    r14, rbx
    }
    _RBX = ((unsigned __int64)v117 * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v117 * MEMORY[0x18];
    __asm
    {
      adcx    r14, rax
      adox    r15, rbx
    }
    _RBX = ((unsigned __int64)v117 * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v117 * MEMORY[0x20];
    __asm
    {
      adcx    r15, rax
      adox    rsi, rbx
    }
    _RBX = ((unsigned __int64)v117 * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v117 * MEMORY[0x28];
    __asm
    {
      adcx    rsi, rax
      adox    rbp, rbx
    }
    _RBX = ((unsigned __int64)v117 * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v117 * MEMORY[0x30];
    __asm
    {
      adcx    rbp, rax
      adox    r10, rbx
    }
    _RBX = ((unsigned __int64)v117 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v117 * MEMORY[0x38];
    __asm
    {
      adcx    r10, rax
      adcx    r11, r11
      adox    r11, rbx
    }
    v3[2].m128i_i64[0] = v12 * _R12;
    v151 = (unsigned __int64)(v12 * _R12);
    _RBX = (v151 * (unsigned __int128)MEMORY[0]) >> 64;
    _RAX = v12 * _R12 * MEMORY[0];
    __asm
    {
      adcx    r12, rax
      adox    r13, rbx
    }
    _RBX = ((unsigned __int64)v151 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v151 + 1) + 8LL)) >> 64;
    _RAX = v151 * *(_QWORD *)(*((_QWORD *)&v151 + 1) + 8LL);
    __asm
    {
      adcx    r13, rax
      adox    r14, rbx
    }
    _RBX = ((unsigned __int64)v151 * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v151 * MEMORY[0x10];
    __asm
    {
      adcx    r14, rax
      adox    r15, rbx
    }
    _RBX = ((unsigned __int64)v151 * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v151 * MEMORY[0x18];
    __asm
    {
      adcx    r15, rax
      adox    rsi, rbx
    }
    _RBX = ((unsigned __int64)v151 * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v151 * MEMORY[0x20];
    __asm
    {
      adcx    rsi, rax
      adox    rbp, rbx
    }
    _RBX = ((unsigned __int64)v151 * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v151 * MEMORY[0x28];
    __asm
    {
      adcx    rbp, rax
      adox    r10, rbx
    }
    _RBX = ((unsigned __int64)v151 * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v151 * MEMORY[0x30];
    __asm
    {
      adcx    r10, rax
      adox    r11, rbx
    }
    _RBX = ((unsigned __int64)v151 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v151 * MEMORY[0x38];
    __asm
    {
      adcx    r11, rax
      adcx    r12, r12
      adox    r12, rbx
    }
    v3[2].m128i_i64[1] = v12 * _R13;
    v185 = (unsigned __int64)(v12 * _R13);
    _RBX = (v185 * (unsigned __int128)MEMORY[0]) >> 64;
    _RAX = v12 * _R13 * MEMORY[0];
    __asm
    {
      adcx    r13, rax
      adox    r14, rbx
    }
    _RBX = ((unsigned __int64)v185 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v185 + 1) + 8LL)) >> 64;
    _RAX = v185 * *(_QWORD *)(*((_QWORD *)&v185 + 1) + 8LL);
    __asm
    {
      adcx    r14, rax
      adox    r15, rbx
    }
    _RBX = ((unsigned __int64)v185 * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v185 * MEMORY[0x10];
    __asm
    {
      adcx    r15, rax
      adox    rsi, rbx
    }
    _RBX = ((unsigned __int64)v185 * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v185 * MEMORY[0x18];
    __asm
    {
      adcx    rsi, rax
      adox    rbp, rbx
    }
    _RBX = ((unsigned __int64)v185 * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v185 * MEMORY[0x20];
    __asm
    {
      adcx    rbp, rax
      adox    r10, rbx
    }
    _RBX = ((unsigned __int64)v185 * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v185 * MEMORY[0x28];
    __asm
    {
      adcx    r10, rax
      adox    r11, rbx
    }
    _RBX = ((unsigned __int64)v185 * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v185 * MEMORY[0x30];
    __asm
    {
      adcx    r11, rax
      adox    r12, rbx
    }
    _RBX = ((unsigned __int64)v185 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v185 * MEMORY[0x38];
    __asm
    {
      adcx    r12, rax
      adcx    r13, r13
      adox    r13, rbx
    }
    v3[3].m128i_i64[0] = v12 * _R14;
    v219 = (unsigned __int64)(v12 * _R14);
    _RBX = (v219 * (unsigned __int128)MEMORY[0]) >> 64;
    _RAX = v12 * _R14 * MEMORY[0];
    __asm
    {
      adcx    r14, rax
      adox    r15, rbx
    }
    _RBX = ((unsigned __int64)v219 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v219 + 1) + 8LL)) >> 64;
    _RAX = v219 * *(_QWORD *)(*((_QWORD *)&v219 + 1) + 8LL);
    __asm
    {
      adcx    r15, rax
      adox    rsi, rbx
    }
    _RBX = ((unsigned __int64)v219 * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v219 * MEMORY[0x10];
    __asm
    {
      adcx    rsi, rax
      adox    rbp, rbx
    }
    _RBX = ((unsigned __int64)v219 * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v219 * MEMORY[0x18];
    __asm
    {
      adcx    rbp, rax
      adox    r10, rbx
    }
    _RBX = ((unsigned __int64)v219 * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v219 * MEMORY[0x20];
    __asm
    {
      adcx    r10, rax
      adox    r11, rbx
    }
    _RBX = ((unsigned __int64)v219 * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v219 * MEMORY[0x28];
    __asm
    {
      adcx    r11, rax
      adox    r12, rbx
    }
    _RBX = ((unsigned __int64)v219 * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v219 * MEMORY[0x30];
    __asm
    {
      adcx    r12, rax
      adox    r13, rbx
    }
    _RBX = ((unsigned __int64)v219 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v219 * MEMORY[0x38];
    __asm
    {
      adcx    r13, rax
      adcx    r14, r14
      adox    r14, rbx
    }
    v3[3].m128i_i64[1] = v12 * _R15;
    v253 = (unsigned __int64)(v12 * _R15);
    _RBX = (v253 * (unsigned __int128)MEMORY[0]) >> 64;
    _RAX = v12 * _R15 * MEMORY[0];
    __asm
    {
      adcx    r15, rax
      adox    rsi, rbx
    }
    _RBX = ((unsigned __int64)v253 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v253 + 1) + 8LL)) >> 64;
    _RAX = v253 * *(_QWORD *)(*((_QWORD *)&v253 + 1) + 8LL);
    __asm
    {
      adcx    rsi, rax
      adox    rbp, rbx
    }
    _RBX = ((unsigned __int64)v253 * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v253 * MEMORY[0x10];
    __asm
    {
      adcx    rbp, rax
      adox    r10, rbx
    }
    _RBX = ((unsigned __int64)v253 * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v253 * MEMORY[0x18];
    __asm
    {
      adcx    r10, rax
      adox    r11, rbx
    }
    _RBX = ((unsigned __int64)v253 * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v253 * MEMORY[0x20];
    __asm
    {
      adcx    r11, rax
      adox    r12, rbx
    }
    _RBX = ((unsigned __int64)v253 * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v253 * MEMORY[0x28];
    __asm
    {
      adcx    r12, rax
      adox    r13, rbx
    }
    _RBX = ((unsigned __int64)v253 * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v253 * MEMORY[0x30];
    __asm
    {
      adcx    r13, rax
      adox    r14, rbx
    }
    _RBX = ((unsigned __int64)v253 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v253 * MEMORY[0x38];
    __asm
    {
      adcx    r14, rax
      adcx    r15, r15
      adox    r15, rbx
    }
    v286 = v3;
    v287 = 64LL;
    _R8 = v3 + 4;
    for ( i = v13 - 1; i; --i )
    {
      __asm { adox    rsi, [r8] }
      _RBX = (v286->m128i_u64[0] * (unsigned __int128)*(unsigned __int64 *)v287) >> 64;
      _RAX = v286->m128i_i64[0] * *(_QWORD *)v287;
      __asm
      {
        adcx    rsi, rax
        adox    rbp, rbx
      }
      _RBX = (v286->m128i_u64[0] * (unsigned __int128)MEMORY[8]) >> 64;
      _RAX = v286->m128i_i64[0] * MEMORY[8];
      __asm
      {
        adcx    rbp, rax
        adox    r10, rbx
      }
      _RBX = (v286->m128i_u64[0] * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = v286->m128i_i64[0] * MEMORY[0x10];
      __asm
      {
        adcx    r10, rax
        adox    r11, rbx
      }
      _RBX = (v286->m128i_u64[0] * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = v286->m128i_i64[0] * MEMORY[0x18];
      __asm
      {
        adcx    r11, rax
        adox    r12, rbx
      }
      _RBX = (v286->m128i_u64[0] * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = v286->m128i_i64[0] * MEMORY[0x20];
      __asm
      {
        adcx    r12, rax
        adox    r13, rbx
      }
      _RBX = (v286->m128i_u64[0] * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = v286->m128i_i64[0] * MEMORY[0x28];
      __asm
      {
        adcx    r13, rax
        adox    r14, rbx
      }
      _RBX = (v286->m128i_u64[0] * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = v286->m128i_i64[0] * MEMORY[0x30];
      __asm
      {
        adcx    r14, rax
        adox    r15, rbx
      }
      v320 = v286->m128i_u64[0];
      _RBX = (v320 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = v286->m128i_i64[0] * MEMORY[0x38];
      __asm { adcx    r15, rax }
      _R8->m128i_i64[0] = _RSI;
      _RSI = 0LL;
      __asm
      {
        adcx    rsi, rsi
        adox    rsi, rbx
      }
      __asm { adox    rbp, [r8+8] }
      _RBX = (v286->m128i_u64[1] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v320 + 1)) >> 64;
      _RAX = v286->m128i_i64[1] * **((_QWORD **)&v320 + 1);
      __asm
      {
        adcx    rbp, rax
        adox    r10, rbx
      }
      _RBX = (v286->m128i_u64[1] * (unsigned __int128)MEMORY[8]) >> 64;
      _RAX = v286->m128i_i64[1] * MEMORY[8];
      __asm
      {
        adcx    r10, rax
        adox    r11, rbx
      }
      _RBX = (v286->m128i_u64[1] * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = v286->m128i_i64[1] * MEMORY[0x10];
      __asm
      {
        adcx    r11, rax
        adox    r12, rbx
      }
      _RBX = (v286->m128i_u64[1] * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = v286->m128i_i64[1] * MEMORY[0x18];
      __asm
      {
        adcx    r12, rax
        adox    r13, rbx
      }
      _RBX = (v286->m128i_u64[1] * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = v286->m128i_i64[1] * MEMORY[0x20];
      __asm
      {
        adcx    r13, rax
        adox    r14, rbx
      }
      _RBX = (v286->m128i_u64[1] * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = v286->m128i_i64[1] * MEMORY[0x28];
      __asm
      {
        adcx    r14, rax
        adox    r15, rbx
      }
      _RBX = (v286->m128i_u64[1] * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = v286->m128i_i64[1] * MEMORY[0x30];
      __asm
      {
        adcx    r15, rax
        adox    rsi, rbx
      }
      v356 = v286->m128i_u64[1];
      _RBX = (v356 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = v286->m128i_i64[1] * MEMORY[0x38];
      __asm { adcx    rsi, rax }
      _R8->m128i_i64[1] = _RBP;
      _RBP = 0LL;
      __asm
      {
        adcx    rbp, rbp
        adox    rbp, rbx
      }
      __asm { adox    r10, [r8+10h] }
      _RBX = (v286[1].m128i_u64[0] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v356 + 1)) >> 64;
      _RAX = v286[1].m128i_i64[0] * **((_QWORD **)&v356 + 1);
      __asm
      {
        adcx    r10, rax
        adox    r11, rbx
      }
      _RBX = (v286[1].m128i_u64[0] * (unsigned __int128)MEMORY[8]) >> 64;
      _RAX = v286[1].m128i_i64[0] * MEMORY[8];
      __asm
      {
        adcx    r11, rax
        adox    r12, rbx
      }
      _RBX = (v286[1].m128i_u64[0] * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = v286[1].m128i_i64[0] * MEMORY[0x10];
      __asm
      {
        adcx    r12, rax
        adox    r13, rbx
      }
      _RBX = (v286[1].m128i_u64[0] * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = v286[1].m128i_i64[0] * MEMORY[0x18];
      __asm
      {
        adcx    r13, rax
        adox    r14, rbx
      }
      _RBX = (v286[1].m128i_u64[0] * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = v286[1].m128i_i64[0] * MEMORY[0x20];
      __asm
      {
        adcx    r14, rax
        adox    r15, rbx
      }
      _RBX = (v286[1].m128i_u64[0] * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = v286[1].m128i_i64[0] * MEMORY[0x28];
      __asm
      {
        adcx    r15, rax
        adox    rsi, rbx
      }
      _RBX = (v286[1].m128i_u64[0] * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = v286[1].m128i_i64[0] * MEMORY[0x30];
      __asm
      {
        adcx    rsi, rax
        adox    rbp, rbx
      }
      v392 = v286[1].m128i_u64[0];
      _RBX = (v392 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = v286[1].m128i_i64[0] * MEMORY[0x38];
      __asm { adcx    rbp, rax }
      _R8[1].m128i_i64[0] = _R10;
      _R10 = 0LL;
      __asm
      {
        adcx    r10, r10
        adox    r10, rbx
      }
      __asm { adox    r11, [r8+18h] }
      _RBX = (v286[1].m128i_u64[1] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v392 + 1)) >> 64;
      _RAX = v286[1].m128i_i64[1] * **((_QWORD **)&v392 + 1);
      __asm
      {
        adcx    r11, rax
        adox    r12, rbx
      }
      _RBX = (v286[1].m128i_u64[1] * (unsigned __int128)MEMORY[8]) >> 64;
      _RAX = v286[1].m128i_i64[1] * MEMORY[8];
      __asm
      {
        adcx    r12, rax
        adox    r13, rbx
      }
      _RBX = (v286[1].m128i_u64[1] * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = v286[1].m128i_i64[1] * MEMORY[0x10];
      __asm
      {
        adcx    r13, rax
        adox    r14, rbx
      }
      _RBX = (v286[1].m128i_u64[1] * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = v286[1].m128i_i64[1] * MEMORY[0x18];
      __asm
      {
        adcx    r14, rax
        adox    r15, rbx
      }
      _RBX = (v286[1].m128i_u64[1] * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = v286[1].m128i_i64[1] * MEMORY[0x20];
      __asm
      {
        adcx    r15, rax
        adox    rsi, rbx
      }
      _RBX = (v286[1].m128i_u64[1] * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = v286[1].m128i_i64[1] * MEMORY[0x28];
      __asm
      {
        adcx    rsi, rax
        adox    rbp, rbx
      }
      _RBX = (v286[1].m128i_u64[1] * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = v286[1].m128i_i64[1] * MEMORY[0x30];
      __asm
      {
        adcx    rbp, rax
        adox    r10, rbx
      }
      v428 = v286[1].m128i_u64[1];
      _RBX = (v428 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = v286[1].m128i_i64[1] * MEMORY[0x38];
      __asm { adcx    r10, rax }
      _R8[1].m128i_i64[1] = _R11;
      _R11 = 0LL;
      __asm
      {
        adcx    r11, r11
        adox    r11, rbx
      }
      __asm { adox    r12, [r8+20h] }
      _RBX = (v286[2].m128i_u64[0] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v428 + 1)) >> 64;
      _RAX = v286[2].m128i_i64[0] * **((_QWORD **)&v428 + 1);
      __asm
      {
        adcx    r12, rax
        adox    r13, rbx
      }
      _RBX = (v286[2].m128i_u64[0] * (unsigned __int128)MEMORY[8]) >> 64;
      _RAX = v286[2].m128i_i64[0] * MEMORY[8];
      __asm
      {
        adcx    r13, rax
        adox    r14, rbx
      }
      _RBX = (v286[2].m128i_u64[0] * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = v286[2].m128i_i64[0] * MEMORY[0x10];
      __asm
      {
        adcx    r14, rax
        adox    r15, rbx
      }
      _RBX = (v286[2].m128i_u64[0] * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = v286[2].m128i_i64[0] * MEMORY[0x18];
      __asm
      {
        adcx    r15, rax
        adox    rsi, rbx
      }
      _RBX = (v286[2].m128i_u64[0] * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = v286[2].m128i_i64[0] * MEMORY[0x20];
      __asm
      {
        adcx    rsi, rax
        adox    rbp, rbx
      }
      _RBX = (v286[2].m128i_u64[0] * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = v286[2].m128i_i64[0] * MEMORY[0x28];
      __asm
      {
        adcx    rbp, rax
        adox    r10, rbx
      }
      _RBX = (v286[2].m128i_u64[0] * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = v286[2].m128i_i64[0] * MEMORY[0x30];
      __asm
      {
        adcx    r10, rax
        adox    r11, rbx
      }
      v464 = v286[2].m128i_u64[0];
      _RBX = (v464 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = v286[2].m128i_i64[0] * MEMORY[0x38];
      __asm { adcx    r11, rax }
      _R8[2].m128i_i64[0] = _R12;
      _R12 = 0LL;
      __asm
      {
        adcx    r12, r12
        adox    r12, rbx
      }
      __asm { adox    r13, [r8+28h] }
      _RBX = (v286[2].m128i_u64[1] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v464 + 1)) >> 64;
      _RAX = v286[2].m128i_i64[1] * **((_QWORD **)&v464 + 1);
      __asm
      {
        adcx    r13, rax
        adox    r14, rbx
      }
      _RBX = (v286[2].m128i_u64[1] * (unsigned __int128)MEMORY[8]) >> 64;
      _RAX = v286[2].m128i_i64[1] * MEMORY[8];
      __asm
      {
        adcx    r14, rax
        adox    r15, rbx
      }
      _RBX = (v286[2].m128i_u64[1] * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = v286[2].m128i_i64[1] * MEMORY[0x10];
      __asm
      {
        adcx    r15, rax
        adox    rsi, rbx
      }
      _RBX = (v286[2].m128i_u64[1] * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = v286[2].m128i_i64[1] * MEMORY[0x18];
      __asm
      {
        adcx    rsi, rax
        adox    rbp, rbx
      }
      _RBX = (v286[2].m128i_u64[1] * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = v286[2].m128i_i64[1] * MEMORY[0x20];
      __asm
      {
        adcx    rbp, rax
        adox    r10, rbx
      }
      _RBX = (v286[2].m128i_u64[1] * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = v286[2].m128i_i64[1] * MEMORY[0x28];
      __asm
      {
        adcx    r10, rax
        adox    r11, rbx
      }
      _RBX = (v286[2].m128i_u64[1] * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = v286[2].m128i_i64[1] * MEMORY[0x30];
      __asm
      {
        adcx    r11, rax
        adox    r12, rbx
      }
      v500 = v286[2].m128i_u64[1];
      _RBX = (v500 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = v286[2].m128i_i64[1] * MEMORY[0x38];
      __asm { adcx    r12, rax }
      _R8[2].m128i_i64[1] = _R13;
      _R13 = 0LL;
      __asm
      {
        adcx    r13, r13
        adox    r13, rbx
      }
      __asm { adox    r14, [r8+30h] }
      _RBX = (v286[3].m128i_u64[0] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v500 + 1)) >> 64;
      _RAX = v286[3].m128i_i64[0] * **((_QWORD **)&v500 + 1);
      __asm
      {
        adcx    r14, rax
        adox    r15, rbx
      }
      _RBX = (v286[3].m128i_u64[0] * (unsigned __int128)MEMORY[8]) >> 64;
      _RAX = v286[3].m128i_i64[0] * MEMORY[8];
      __asm
      {
        adcx    r15, rax
        adox    rsi, rbx
      }
      _RBX = (v286[3].m128i_u64[0] * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = v286[3].m128i_i64[0] * MEMORY[0x10];
      __asm
      {
        adcx    rsi, rax
        adox    rbp, rbx
      }
      _RBX = (v286[3].m128i_u64[0] * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = v286[3].m128i_i64[0] * MEMORY[0x18];
      __asm
      {
        adcx    rbp, rax
        adox    r10, rbx
      }
      _RBX = (v286[3].m128i_u64[0] * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = v286[3].m128i_i64[0] * MEMORY[0x20];
      __asm
      {
        adcx    r10, rax
        adox    r11, rbx
      }
      _RBX = (v286[3].m128i_u64[0] * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = v286[3].m128i_i64[0] * MEMORY[0x28];
      __asm
      {
        adcx    r11, rax
        adox    r12, rbx
      }
      _RBX = (v286[3].m128i_u64[0] * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = v286[3].m128i_i64[0] * MEMORY[0x30];
      __asm
      {
        adcx    r12, rax
        adox    r13, rbx
      }
      v536 = v286[3].m128i_u64[0];
      _RBX = (v536 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = v286[3].m128i_i64[0] * MEMORY[0x38];
      __asm { adcx    r13, rax }
      _R8[3].m128i_i64[0] = _R14;
      _R14 = 0LL;
      __asm
      {
        adcx    r14, r14
        adox    r14, rbx
      }
      __asm { adox    r15, [r8+38h] }
      _RBX = (v286[3].m128i_u64[1] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v536 + 1)) >> 64;
      _RAX = v286[3].m128i_i64[1] * **((_QWORD **)&v536 + 1);
      __asm
      {
        adcx    r15, rax
        adox    rsi, rbx
      }
      _RBX = (v286[3].m128i_u64[1] * (unsigned __int128)MEMORY[8]) >> 64;
      _RAX = v286[3].m128i_i64[1] * MEMORY[8];
      __asm
      {
        adcx    rsi, rax
        adox    rbp, rbx
      }
      _RBX = (v286[3].m128i_u64[1] * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = v286[3].m128i_i64[1] * MEMORY[0x10];
      __asm
      {
        adcx    rbp, rax
        adox    r10, rbx
      }
      _RBX = (v286[3].m128i_u64[1] * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = v286[3].m128i_i64[1] * MEMORY[0x18];
      __asm
      {
        adcx    r10, rax
        adox    r11, rbx
      }
      _RBX = (v286[3].m128i_u64[1] * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = v286[3].m128i_i64[1] * MEMORY[0x20];
      __asm
      {
        adcx    r11, rax
        adox    r12, rbx
      }
      _RBX = (v286[3].m128i_u64[1] * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = v286[3].m128i_i64[1] * MEMORY[0x28];
      __asm
      {
        adcx    r12, rax
        adox    r13, rbx
      }
      _RBX = (v286[3].m128i_u64[1] * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = v286[3].m128i_i64[1] * MEMORY[0x30];
      __asm
      {
        adcx    r13, rax
        adox    r14, rbx
      }
      v566 = v286[3].m128i_u64[1];
      _RBX = (v566 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = v286[3].m128i_i64[1] * MEMORY[0x38];
      __asm { adcx    r14, rax }
      _R8[3].m128i_i64[1] = _R15;
      _R15 = 0LL;
      __asm
      {
        adcx    r15, r15
        adox    r15, rbx
      }
      v287 = *((_QWORD *)&v566 + 1) + 64LL;
      _R8 += 4;
    }
    v592 = __CFADD__(v621 != 0, _R8->m128i_i64[0]) | __CFADD__(_RSI, (v621 != 0) + _R8->m128i_i64[0]);
    _R8->m128i_i64[0] += _RSI + (v621 != 0);
    v570 = _R8->m128i_i64[1];
    v572 = v592;
    v592 = __CFADD__(v592, v570);
    v571 = v572 + v570;
    _R8->m128i_i64[1] = _RBP + v571;
    v573 = _R8[1].m128i_i64[0];
    v575 = v592 | (unsigned __int8)__CFADD__(_RBP, v571);
    v592 = __CFADD__(v575, v573);
    v574 = v575 + v573;
    _R8[1].m128i_i64[0] = _R10 + v574;
    v576 = _R8[1].m128i_i64[1];
    v578 = v592 | (unsigned __int8)__CFADD__(_R10, v574);
    v592 = __CFADD__(v578, v576);
    v577 = v578 + v576;
    _R8[1].m128i_i64[1] = _R11 + v577;
    v579 = _R8[2].m128i_i64[0];
    v581 = v592 | (unsigned __int8)__CFADD__(_R11, v577);
    v592 = __CFADD__(v581, v579);
    v580 = v581 + v579;
    _R8[2].m128i_i64[0] = _R12 + v580;
    v582 = _R8[2].m128i_i64[1];
    v584 = v592 | (unsigned __int8)__CFADD__(_R12, v580);
    v592 = __CFADD__(v584, v582);
    v583 = v584 + v582;
    _R8[2].m128i_i64[1] = _R13 + v583;
    v585 = _R8[3].m128i_i64[0];
    v587 = v592 | (unsigned __int8)__CFADD__(_R13, v583);
    v592 = __CFADD__(v587, v585);
    v586 = v587 + v585;
    _R8[3].m128i_i64[0] = _R14 + v586;
    v588 = _R8[3].m128i_i64[1];
    v590 = v592 | (unsigned __int8)__CFADD__(_R14, v586);
    v592 = __CFADD__(v590, v588);
    v589 = v590 + v588;
    _R8[3].m128i_i64[1] = _R15 + v589;
    v591 = v592 | __CFADD__(_R15, v589);
    v621 = v591;
    v3 = v618 + 4;
    v618 += 4;
    a1 = v617;
    v592 = v620-- == 0;
  }
  while ( v620 );
  v593 = *(_DWORD *)(v617 + 4);
  v594 = (_QWORD *)(v617 + 128);
  v595 = (__int64 *)a3;
  v596 = v593;
  v597 = v3;
  v598 = a3;
  do
  {
    v599 = v592 + *v594;
    v592 = v3->m128i_i64[0] < v599;
    *v595 = v3->m128i_i64[0] - v599;
    v600 = v3->m128i_u64[1];
    v601 = v592 + v594[1];
    v595[1] = v600 - v601;
    v602 = v3[1].m128i_u64[0];
    v603 = (v600 < v601) + v594[2];
    v595[2] = v602 - v603;
    v604 = v3[1].m128i_u64[1];
    v605 = (v602 < v603) + v594[3];
    v595[3] = v604 - v605;
    v606 = v3[2].m128i_u64[0];
    v607 = (v604 < v605) + v594[4];
    v595[4] = v606 - v607;
    v608 = v3[2].m128i_u64[1];
    v609 = (v606 < v607) + v594[5];
    v595[5] = v608 - v609;
    v610 = v3[3].m128i_u64[0];
    v612 = (v608 < v609) + v594[6];
    v592 = v610 < v612;
    result = v610 - v612;
    v595[6] = result;
    v613 = v3[3].m128i_u64[1];
    v614 = v592 + v594[7];
    v592 = v613 < v614;
    v595[7] = v613 - v614;
    v3 += 4;
    v594 += 8;
    v595 += 8;
    --v593;
  }
  while ( v593 );
  v615 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v591 - (unsigned int)v592), 0);
  v616 = _mm_xor_si128((__m128i)-1LL, v615);
  do
  {
    *v598 = _mm_or_si128(_mm_and_si128(_mm_load_si128(v597), v615), _mm_and_si128(_mm_load_si128(v598), v616));
    v598[1] = _mm_or_si128(_mm_and_si128(_mm_load_si128(v597 + 1), v615), _mm_and_si128(_mm_load_si128(v598 + 1), v616));
    v598[2] = _mm_or_si128(_mm_and_si128(_mm_load_si128(v597 + 2), v615), _mm_and_si128(_mm_load_si128(v598 + 2), v616));
    v598[3] = _mm_or_si128(_mm_and_si128(_mm_load_si128(v597 + 3), v615), _mm_and_si128(_mm_load_si128(v598 + 3), v616));
    v597 += 4;
    v598 += 4;
    --v596;
  }
  while ( v596 );
  return result;
}
