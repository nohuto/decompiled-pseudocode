/*
 * XREFs of sub_1404158D0 @ 0x1404158D0
 * Callers:
 *     sub_14040C540 @ 0x14040C540 (sub_14040C540.c)
 *     sub_14040CB20 @ 0x14040CB20 (sub_14040CB20.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1404158D0(_QWORD *a1, __m128i *a2, __m128i *a3)
{
  __m128i *v3; // r8
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int128 v48; // rdx
  __int128 v82; // rdx
  __int128 v116; // rdx
  __int128 v150; // rdx
  __int128 v184; // rdx
  __int128 v218; // rdx
  __int128 v252; // rdx
  __m128i *v285; // rdi
  __int128 v317; // rdx
  __int128 v353; // rdx
  __int128 v389; // rdx
  __int128 v425; // rdx
  __int128 v461; // rdx
  __int128 v497; // rdx
  __int128 v533; // rdx
  __int64 v574; // rbx
  __int64 v575; // rbx
  _BOOL8 v576; // rtt
  __int64 v577; // rax
  __int64 v578; // rax
  __int64 v579; // rtt
  __int64 v580; // rbx
  __int64 v581; // rbx
  __int64 v582; // rtt
  __int64 v583; // rax
  __int64 v584; // rax
  __int64 v585; // rtt
  __int64 v586; // rbx
  __int64 v587; // rbx
  __int64 v588; // rtt
  __int64 v589; // rax
  __int64 v590; // rax
  __int64 v591; // rtt
  __int64 v592; // rbx
  __int64 v593; // rbx
  __int64 v594; // rtt
  int v595; // edx
  bool v596; // cf
  unsigned __int64 v597; // rtt
  unsigned __int64 v598; // rbx
  unsigned __int64 v599; // rtt
  unsigned __int64 v600; // rax
  unsigned __int64 v601; // rtt
  unsigned __int64 v602; // rbx
  unsigned __int64 v603; // rtt
  unsigned __int64 v604; // rax
  unsigned __int64 v605; // rtt
  unsigned __int64 v606; // rbx
  unsigned __int64 v607; // rtt
  unsigned __int64 v608; // rax
  unsigned __int64 v609; // rtt
  unsigned __int64 v610; // rbx
  unsigned __int64 v611; // rtt
  unsigned __int64 v612; // rax
  unsigned __int64 v613; // rtt
  unsigned __int64 v614; // rbx
  unsigned __int64 v615; // rtt
  unsigned __int64 v616; // rax
  unsigned __int64 v617; // rtt
  unsigned __int64 v618; // rbx
  unsigned __int64 v619; // rtt
  unsigned __int64 v620; // rax
  unsigned __int64 v621; // rtt
  unsigned __int64 v622; // rbx
  unsigned __int64 v623; // rtt
  unsigned __int64 v624; // rax
  __int64 result; // rax
  unsigned __int64 v626; // rtt
  unsigned __int64 v627; // rbx
  unsigned __int64 v628; // rtt
  __m128i v629; // xmm0
  __m128i v630; // xmm1
  _QWORD *v631; // [rsp+48h] [rbp+8h]
  __m128i *v632; // [rsp+50h] [rbp+10h]
  int v634; // [rsp+60h] [rbp+20h]
  int v635; // [rsp+64h] [rbp+24h]

  v631 = a1;
  v632 = a2;
  v3 = a2;
  v634 = *((_DWORD *)a1 + 1);
  v635 = 0;
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
    v12 = a1[4];
    v13 = v12 * v3->m128i_i64[0];
    v3->m128i_i64[0] = v13;
    _RBX = ((unsigned __int64)v13 * (unsigned __int128)(unsigned __int64)a1[16]) >> 64;
    _RAX = v13 * a1[16];
    __asm
    {
      adcx    rsi, rax
      adox    rbp, rbx
    }
    _RBX = ((unsigned __int64)v13 * (unsigned __int128)MEMORY[8]) >> 64;
    _RAX = v13 * MEMORY[8];
    __asm
    {
      adcx    rbp, rax
      adox    r10, rbx
    }
    _RBX = ((unsigned __int64)v13 * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v13 * MEMORY[0x10];
    __asm
    {
      adcx    r10, rax
      adox    r11, rbx
    }
    _RBX = ((unsigned __int64)v13 * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v13 * MEMORY[0x18];
    __asm
    {
      adcx    r11, rax
      adox    r12, rbx
    }
    _RBX = ((unsigned __int64)v13 * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v13 * MEMORY[0x20];
    __asm
    {
      adcx    r12, rax
      adox    r13, rbx
    }
    _RBX = ((unsigned __int64)v13 * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v13 * MEMORY[0x28];
    __asm
    {
      adcx    r13, rax
      adox    r14, rbx
    }
    _RBX = ((unsigned __int64)v13 * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v13 * MEMORY[0x30];
    __asm
    {
      adcx    r14, rax
      adox    r15, rbx
    }
    _RBX = ((unsigned __int64)v13 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v13 * MEMORY[0x38];
    __asm
    {
      adcx    r15, rax
      adcx    rsi, rsi
      adox    rsi, rbx
    }
    v3->m128i_i64[1] = v12 * _RBP;
    v48 = (unsigned __int64)(v12 * _RBP);
    _RBX = (v48 * (unsigned __int128)MEMORY[0]) >> 64;
    _RAX = v12 * _RBP * MEMORY[0];
    __asm
    {
      adcx    rbp, rax
      adox    r10, rbx
    }
    _RBX = ((unsigned __int64)v48 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v48 + 1) + 8LL)) >> 64;
    _RAX = v48 * *(_QWORD *)(*((_QWORD *)&v48 + 1) + 8LL);
    __asm
    {
      adcx    r10, rax
      adox    r11, rbx
    }
    _RBX = ((unsigned __int64)v48 * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v48 * MEMORY[0x10];
    __asm
    {
      adcx    r11, rax
      adox    r12, rbx
    }
    _RBX = ((unsigned __int64)v48 * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v48 * MEMORY[0x18];
    __asm
    {
      adcx    r12, rax
      adox    r13, rbx
    }
    _RBX = ((unsigned __int64)v48 * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v48 * MEMORY[0x20];
    __asm
    {
      adcx    r13, rax
      adox    r14, rbx
    }
    _RBX = ((unsigned __int64)v48 * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v48 * MEMORY[0x28];
    __asm
    {
      adcx    r14, rax
      adox    r15, rbx
    }
    _RBX = ((unsigned __int64)v48 * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v48 * MEMORY[0x30];
    __asm
    {
      adcx    r15, rax
      adox    rsi, rbx
    }
    _RBX = ((unsigned __int64)v48 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v48 * MEMORY[0x38];
    __asm
    {
      adcx    rsi, rax
      adcx    rbp, rbp
      adox    rbp, rbx
    }
    v3[1].m128i_i64[0] = v12 * _R10;
    v82 = (unsigned __int64)(v12 * _R10);
    _RBX = (v82 * (unsigned __int128)MEMORY[0]) >> 64;
    _RAX = v12 * _R10 * MEMORY[0];
    __asm
    {
      adcx    r10, rax
      adox    r11, rbx
    }
    _RBX = ((unsigned __int64)v82 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v82 + 1) + 8LL)) >> 64;
    _RAX = v82 * *(_QWORD *)(*((_QWORD *)&v82 + 1) + 8LL);
    __asm
    {
      adcx    r11, rax
      adox    r12, rbx
    }
    _RBX = ((unsigned __int64)v82 * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v82 * MEMORY[0x10];
    __asm
    {
      adcx    r12, rax
      adox    r13, rbx
    }
    _RBX = ((unsigned __int64)v82 * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v82 * MEMORY[0x18];
    __asm
    {
      adcx    r13, rax
      adox    r14, rbx
    }
    _RBX = ((unsigned __int64)v82 * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v82 * MEMORY[0x20];
    __asm
    {
      adcx    r14, rax
      adox    r15, rbx
    }
    _RBX = ((unsigned __int64)v82 * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v82 * MEMORY[0x28];
    __asm
    {
      adcx    r15, rax
      adox    rsi, rbx
    }
    _RBX = ((unsigned __int64)v82 * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v82 * MEMORY[0x30];
    __asm
    {
      adcx    rsi, rax
      adox    rbp, rbx
    }
    _RBX = ((unsigned __int64)v82 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v82 * MEMORY[0x38];
    __asm
    {
      adcx    rbp, rax
      adcx    r10, r10
      adox    r10, rbx
    }
    v3[1].m128i_i64[1] = v12 * _R11;
    v116 = (unsigned __int64)(v12 * _R11);
    _RBX = (v116 * (unsigned __int128)MEMORY[0]) >> 64;
    _RAX = v12 * _R11 * MEMORY[0];
    __asm
    {
      adcx    r11, rax
      adox    r12, rbx
    }
    _RBX = ((unsigned __int64)v116 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v116 + 1) + 8LL)) >> 64;
    _RAX = v116 * *(_QWORD *)(*((_QWORD *)&v116 + 1) + 8LL);
    __asm
    {
      adcx    r12, rax
      adox    r13, rbx
    }
    _RBX = ((unsigned __int64)v116 * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v116 * MEMORY[0x10];
    __asm
    {
      adcx    r13, rax
      adox    r14, rbx
    }
    _RBX = ((unsigned __int64)v116 * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v116 * MEMORY[0x18];
    __asm
    {
      adcx    r14, rax
      adox    r15, rbx
    }
    _RBX = ((unsigned __int64)v116 * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v116 * MEMORY[0x20];
    __asm
    {
      adcx    r15, rax
      adox    rsi, rbx
    }
    _RBX = ((unsigned __int64)v116 * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v116 * MEMORY[0x28];
    __asm
    {
      adcx    rsi, rax
      adox    rbp, rbx
    }
    _RBX = ((unsigned __int64)v116 * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v116 * MEMORY[0x30];
    __asm
    {
      adcx    rbp, rax
      adox    r10, rbx
    }
    _RBX = ((unsigned __int64)v116 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v116 * MEMORY[0x38];
    __asm
    {
      adcx    r10, rax
      adcx    r11, r11
      adox    r11, rbx
    }
    v3[2].m128i_i64[0] = v12 * _R12;
    v150 = (unsigned __int64)(v12 * _R12);
    _RBX = (v150 * (unsigned __int128)MEMORY[0]) >> 64;
    _RAX = v12 * _R12 * MEMORY[0];
    __asm
    {
      adcx    r12, rax
      adox    r13, rbx
    }
    _RBX = ((unsigned __int64)v150 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v150 + 1) + 8LL)) >> 64;
    _RAX = v150 * *(_QWORD *)(*((_QWORD *)&v150 + 1) + 8LL);
    __asm
    {
      adcx    r13, rax
      adox    r14, rbx
    }
    _RBX = ((unsigned __int64)v150 * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v150 * MEMORY[0x10];
    __asm
    {
      adcx    r14, rax
      adox    r15, rbx
    }
    _RBX = ((unsigned __int64)v150 * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v150 * MEMORY[0x18];
    __asm
    {
      adcx    r15, rax
      adox    rsi, rbx
    }
    _RBX = ((unsigned __int64)v150 * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v150 * MEMORY[0x20];
    __asm
    {
      adcx    rsi, rax
      adox    rbp, rbx
    }
    _RBX = ((unsigned __int64)v150 * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v150 * MEMORY[0x28];
    __asm
    {
      adcx    rbp, rax
      adox    r10, rbx
    }
    _RBX = ((unsigned __int64)v150 * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v150 * MEMORY[0x30];
    __asm
    {
      adcx    r10, rax
      adox    r11, rbx
    }
    _RBX = ((unsigned __int64)v150 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v150 * MEMORY[0x38];
    __asm
    {
      adcx    r11, rax
      adcx    r12, r12
      adox    r12, rbx
    }
    v3[2].m128i_i64[1] = v12 * _R13;
    v184 = (unsigned __int64)(v12 * _R13);
    _RBX = (v184 * (unsigned __int128)MEMORY[0]) >> 64;
    _RAX = v12 * _R13 * MEMORY[0];
    __asm
    {
      adcx    r13, rax
      adox    r14, rbx
    }
    _RBX = ((unsigned __int64)v184 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v184 + 1) + 8LL)) >> 64;
    _RAX = v184 * *(_QWORD *)(*((_QWORD *)&v184 + 1) + 8LL);
    __asm
    {
      adcx    r14, rax
      adox    r15, rbx
    }
    _RBX = ((unsigned __int64)v184 * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v184 * MEMORY[0x10];
    __asm
    {
      adcx    r15, rax
      adox    rsi, rbx
    }
    _RBX = ((unsigned __int64)v184 * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v184 * MEMORY[0x18];
    __asm
    {
      adcx    rsi, rax
      adox    rbp, rbx
    }
    _RBX = ((unsigned __int64)v184 * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v184 * MEMORY[0x20];
    __asm
    {
      adcx    rbp, rax
      adox    r10, rbx
    }
    _RBX = ((unsigned __int64)v184 * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v184 * MEMORY[0x28];
    __asm
    {
      adcx    r10, rax
      adox    r11, rbx
    }
    _RBX = ((unsigned __int64)v184 * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v184 * MEMORY[0x30];
    __asm
    {
      adcx    r11, rax
      adox    r12, rbx
    }
    _RBX = ((unsigned __int64)v184 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v184 * MEMORY[0x38];
    __asm
    {
      adcx    r12, rax
      adcx    r13, r13
      adox    r13, rbx
    }
    v3[3].m128i_i64[0] = v12 * _R14;
    v218 = (unsigned __int64)(v12 * _R14);
    _RBX = (v218 * (unsigned __int128)MEMORY[0]) >> 64;
    _RAX = v12 * _R14 * MEMORY[0];
    __asm
    {
      adcx    r14, rax
      adox    r15, rbx
    }
    _RBX = ((unsigned __int64)v218 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v218 + 1) + 8LL)) >> 64;
    _RAX = v218 * *(_QWORD *)(*((_QWORD *)&v218 + 1) + 8LL);
    __asm
    {
      adcx    r15, rax
      adox    rsi, rbx
    }
    _RBX = ((unsigned __int64)v218 * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v218 * MEMORY[0x10];
    __asm
    {
      adcx    rsi, rax
      adox    rbp, rbx
    }
    _RBX = ((unsigned __int64)v218 * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v218 * MEMORY[0x18];
    __asm
    {
      adcx    rbp, rax
      adox    r10, rbx
    }
    _RBX = ((unsigned __int64)v218 * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v218 * MEMORY[0x20];
    __asm
    {
      adcx    r10, rax
      adox    r11, rbx
    }
    _RBX = ((unsigned __int64)v218 * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v218 * MEMORY[0x28];
    __asm
    {
      adcx    r11, rax
      adox    r12, rbx
    }
    _RBX = ((unsigned __int64)v218 * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v218 * MEMORY[0x30];
    __asm
    {
      adcx    r12, rax
      adox    r13, rbx
    }
    _RBX = ((unsigned __int64)v218 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v218 * MEMORY[0x38];
    __asm
    {
      adcx    r13, rax
      adcx    r14, r14
      adox    r14, rbx
    }
    v3[3].m128i_i64[1] = v12 * _R15;
    v252 = (unsigned __int64)(v12 * _R15);
    _RBX = (v252 * (unsigned __int128)MEMORY[0]) >> 64;
    _RAX = v12 * _R15 * MEMORY[0];
    __asm
    {
      adcx    r15, rax
      adox    rsi, rbx
    }
    _RBX = ((unsigned __int64)v252 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v252 + 1) + 8LL)) >> 64;
    _RAX = v252 * *(_QWORD *)(*((_QWORD *)&v252 + 1) + 8LL);
    __asm
    {
      adcx    rsi, rax
      adox    rbp, rbx
    }
    _RBX = ((unsigned __int64)v252 * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v252 * MEMORY[0x10];
    __asm
    {
      adcx    rbp, rax
      adox    r10, rbx
    }
    _RBX = ((unsigned __int64)v252 * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v252 * MEMORY[0x18];
    __asm
    {
      adcx    r10, rax
      adox    r11, rbx
    }
    _RBX = ((unsigned __int64)v252 * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v252 * MEMORY[0x20];
    __asm
    {
      adcx    r11, rax
      adox    r12, rbx
    }
    _RBX = ((unsigned __int64)v252 * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v252 * MEMORY[0x28];
    __asm
    {
      adcx    r12, rax
      adox    r13, rbx
    }
    _RBX = ((unsigned __int64)v252 * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v252 * MEMORY[0x30];
    __asm
    {
      adcx    r13, rax
      adox    r14, rbx
    }
    _RBX = ((unsigned __int64)v252 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v252 * MEMORY[0x38];
    __asm
    {
      adcx    r14, rax
      adcx    r15, r15
      adox    r15, rbx
    }
    v285 = v3;
    _R8 = v3 + 4;
    __asm { adox    rsi, [r8] }
    _RBX = (v285->m128i_u64[0] * (unsigned __int128)MEMORY[0x40]) >> 64;
    _RAX = v285->m128i_i64[0] * MEMORY[0x40];
    __asm
    {
      adcx    rsi, rax
      adox    rbp, rbx
    }
    _RBX = (v285->m128i_u64[0] * (unsigned __int128)MEMORY[8]) >> 64;
    _RAX = v285->m128i_i64[0] * MEMORY[8];
    __asm
    {
      adcx    rbp, rax
      adox    r10, rbx
    }
    _RBX = (v285->m128i_u64[0] * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v285->m128i_i64[0] * MEMORY[0x10];
    __asm
    {
      adcx    r10, rax
      adox    r11, rbx
    }
    _RBX = (v285->m128i_u64[0] * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v285->m128i_i64[0] * MEMORY[0x18];
    __asm
    {
      adcx    r11, rax
      adox    r12, rbx
    }
    _RBX = (v285->m128i_u64[0] * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v285->m128i_i64[0] * MEMORY[0x20];
    __asm
    {
      adcx    r12, rax
      adox    r13, rbx
    }
    _RBX = (v285->m128i_u64[0] * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v285->m128i_i64[0] * MEMORY[0x28];
    __asm
    {
      adcx    r13, rax
      adox    r14, rbx
    }
    _RBX = (v285->m128i_u64[0] * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v285->m128i_i64[0] * MEMORY[0x30];
    __asm
    {
      adcx    r14, rax
      adox    r15, rbx
    }
    v317 = v285->m128i_u64[0];
    _RBX = (v317 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v285->m128i_i64[0] * MEMORY[0x38];
    __asm { adcx    r15, rax }
    _R8->m128i_i64[0] = _RSI;
    _RSI = 0LL;
    __asm
    {
      adcx    rsi, rsi
      adox    rsi, rbx
    }
    __asm { adox    rbp, [r8+8] }
    _RBX = (v285->m128i_u64[1] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v317 + 1)) >> 64;
    _RAX = v285->m128i_i64[1] * **((_QWORD **)&v317 + 1);
    __asm
    {
      adcx    rbp, rax
      adox    r10, rbx
    }
    _RBX = (v285->m128i_u64[1] * (unsigned __int128)MEMORY[8]) >> 64;
    _RAX = v285->m128i_i64[1] * MEMORY[8];
    __asm
    {
      adcx    r10, rax
      adox    r11, rbx
    }
    _RBX = (v285->m128i_u64[1] * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v285->m128i_i64[1] * MEMORY[0x10];
    __asm
    {
      adcx    r11, rax
      adox    r12, rbx
    }
    _RBX = (v285->m128i_u64[1] * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v285->m128i_i64[1] * MEMORY[0x18];
    __asm
    {
      adcx    r12, rax
      adox    r13, rbx
    }
    _RBX = (v285->m128i_u64[1] * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v285->m128i_i64[1] * MEMORY[0x20];
    __asm
    {
      adcx    r13, rax
      adox    r14, rbx
    }
    _RBX = (v285->m128i_u64[1] * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v285->m128i_i64[1] * MEMORY[0x28];
    __asm
    {
      adcx    r14, rax
      adox    r15, rbx
    }
    _RBX = (v285->m128i_u64[1] * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v285->m128i_i64[1] * MEMORY[0x30];
    __asm
    {
      adcx    r15, rax
      adox    rsi, rbx
    }
    v353 = v285->m128i_u64[1];
    _RBX = (v353 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v285->m128i_i64[1] * MEMORY[0x38];
    __asm { adcx    rsi, rax }
    _R8->m128i_i64[1] = _RBP;
    _RBP = 0LL;
    __asm
    {
      adcx    rbp, rbp
      adox    rbp, rbx
    }
    __asm { adox    r10, [r8+10h] }
    _RBX = (v285[1].m128i_u64[0] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v353 + 1)) >> 64;
    _RAX = v285[1].m128i_i64[0] * **((_QWORD **)&v353 + 1);
    __asm
    {
      adcx    r10, rax
      adox    r11, rbx
    }
    _RBX = (v285[1].m128i_u64[0] * (unsigned __int128)MEMORY[8]) >> 64;
    _RAX = v285[1].m128i_i64[0] * MEMORY[8];
    __asm
    {
      adcx    r11, rax
      adox    r12, rbx
    }
    _RBX = (v285[1].m128i_u64[0] * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v285[1].m128i_i64[0] * MEMORY[0x10];
    __asm
    {
      adcx    r12, rax
      adox    r13, rbx
    }
    _RBX = (v285[1].m128i_u64[0] * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v285[1].m128i_i64[0] * MEMORY[0x18];
    __asm
    {
      adcx    r13, rax
      adox    r14, rbx
    }
    _RBX = (v285[1].m128i_u64[0] * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v285[1].m128i_i64[0] * MEMORY[0x20];
    __asm
    {
      adcx    r14, rax
      adox    r15, rbx
    }
    _RBX = (v285[1].m128i_u64[0] * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v285[1].m128i_i64[0] * MEMORY[0x28];
    __asm
    {
      adcx    r15, rax
      adox    rsi, rbx
    }
    _RBX = (v285[1].m128i_u64[0] * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v285[1].m128i_i64[0] * MEMORY[0x30];
    __asm
    {
      adcx    rsi, rax
      adox    rbp, rbx
    }
    v389 = v285[1].m128i_u64[0];
    _RBX = (v389 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v285[1].m128i_i64[0] * MEMORY[0x38];
    __asm { adcx    rbp, rax }
    _R8[1].m128i_i64[0] = _R10;
    _R10 = 0LL;
    __asm
    {
      adcx    r10, r10
      adox    r10, rbx
    }
    __asm { adox    r11, [r8+18h] }
    _RBX = (v285[1].m128i_u64[1] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v389 + 1)) >> 64;
    _RAX = v285[1].m128i_i64[1] * **((_QWORD **)&v389 + 1);
    __asm
    {
      adcx    r11, rax
      adox    r12, rbx
    }
    _RBX = (v285[1].m128i_u64[1] * (unsigned __int128)MEMORY[8]) >> 64;
    _RAX = v285[1].m128i_i64[1] * MEMORY[8];
    __asm
    {
      adcx    r12, rax
      adox    r13, rbx
    }
    _RBX = (v285[1].m128i_u64[1] * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v285[1].m128i_i64[1] * MEMORY[0x10];
    __asm
    {
      adcx    r13, rax
      adox    r14, rbx
    }
    _RBX = (v285[1].m128i_u64[1] * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v285[1].m128i_i64[1] * MEMORY[0x18];
    __asm
    {
      adcx    r14, rax
      adox    r15, rbx
    }
    _RBX = (v285[1].m128i_u64[1] * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v285[1].m128i_i64[1] * MEMORY[0x20];
    __asm
    {
      adcx    r15, rax
      adox    rsi, rbx
    }
    _RBX = (v285[1].m128i_u64[1] * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v285[1].m128i_i64[1] * MEMORY[0x28];
    __asm
    {
      adcx    rsi, rax
      adox    rbp, rbx
    }
    _RBX = (v285[1].m128i_u64[1] * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v285[1].m128i_i64[1] * MEMORY[0x30];
    __asm
    {
      adcx    rbp, rax
      adox    r10, rbx
    }
    v425 = v285[1].m128i_u64[1];
    _RBX = (v425 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v285[1].m128i_i64[1] * MEMORY[0x38];
    __asm { adcx    r10, rax }
    _R8[1].m128i_i64[1] = _R11;
    _R11 = 0LL;
    __asm
    {
      adcx    r11, r11
      adox    r11, rbx
    }
    __asm { adox    r12, [r8+20h] }
    _RBX = (v285[2].m128i_u64[0] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v425 + 1)) >> 64;
    _RAX = v285[2].m128i_i64[0] * **((_QWORD **)&v425 + 1);
    __asm
    {
      adcx    r12, rax
      adox    r13, rbx
    }
    _RBX = (v285[2].m128i_u64[0] * (unsigned __int128)MEMORY[8]) >> 64;
    _RAX = v285[2].m128i_i64[0] * MEMORY[8];
    __asm
    {
      adcx    r13, rax
      adox    r14, rbx
    }
    _RBX = (v285[2].m128i_u64[0] * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v285[2].m128i_i64[0] * MEMORY[0x10];
    __asm
    {
      adcx    r14, rax
      adox    r15, rbx
    }
    _RBX = (v285[2].m128i_u64[0] * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v285[2].m128i_i64[0] * MEMORY[0x18];
    __asm
    {
      adcx    r15, rax
      adox    rsi, rbx
    }
    _RBX = (v285[2].m128i_u64[0] * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v285[2].m128i_i64[0] * MEMORY[0x20];
    __asm
    {
      adcx    rsi, rax
      adox    rbp, rbx
    }
    _RBX = (v285[2].m128i_u64[0] * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v285[2].m128i_i64[0] * MEMORY[0x28];
    __asm
    {
      adcx    rbp, rax
      adox    r10, rbx
    }
    _RBX = (v285[2].m128i_u64[0] * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v285[2].m128i_i64[0] * MEMORY[0x30];
    __asm
    {
      adcx    r10, rax
      adox    r11, rbx
    }
    v461 = v285[2].m128i_u64[0];
    _RBX = (v461 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v285[2].m128i_i64[0] * MEMORY[0x38];
    __asm { adcx    r11, rax }
    _R8[2].m128i_i64[0] = _R12;
    _R12 = 0LL;
    __asm
    {
      adcx    r12, r12
      adox    r12, rbx
    }
    __asm { adox    r13, [r8+28h] }
    _RBX = (v285[2].m128i_u64[1] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v461 + 1)) >> 64;
    _RAX = v285[2].m128i_i64[1] * **((_QWORD **)&v461 + 1);
    __asm
    {
      adcx    r13, rax
      adox    r14, rbx
    }
    _RBX = (v285[2].m128i_u64[1] * (unsigned __int128)MEMORY[8]) >> 64;
    _RAX = v285[2].m128i_i64[1] * MEMORY[8];
    __asm
    {
      adcx    r14, rax
      adox    r15, rbx
    }
    _RBX = (v285[2].m128i_u64[1] * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v285[2].m128i_i64[1] * MEMORY[0x10];
    __asm
    {
      adcx    r15, rax
      adox    rsi, rbx
    }
    _RBX = (v285[2].m128i_u64[1] * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v285[2].m128i_i64[1] * MEMORY[0x18];
    __asm
    {
      adcx    rsi, rax
      adox    rbp, rbx
    }
    _RBX = (v285[2].m128i_u64[1] * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v285[2].m128i_i64[1] * MEMORY[0x20];
    __asm
    {
      adcx    rbp, rax
      adox    r10, rbx
    }
    _RBX = (v285[2].m128i_u64[1] * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v285[2].m128i_i64[1] * MEMORY[0x28];
    __asm
    {
      adcx    r10, rax
      adox    r11, rbx
    }
    _RBX = (v285[2].m128i_u64[1] * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v285[2].m128i_i64[1] * MEMORY[0x30];
    __asm
    {
      adcx    r11, rax
      adox    r12, rbx
    }
    v497 = v285[2].m128i_u64[1];
    _RBX = (v497 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v285[2].m128i_i64[1] * MEMORY[0x38];
    __asm { adcx    r12, rax }
    _R8[2].m128i_i64[1] = _R13;
    _R13 = 0LL;
    __asm
    {
      adcx    r13, r13
      adox    r13, rbx
    }
    __asm { adox    r14, [r8+30h] }
    _RBX = (v285[3].m128i_u64[0] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v497 + 1)) >> 64;
    _RAX = v285[3].m128i_i64[0] * **((_QWORD **)&v497 + 1);
    __asm
    {
      adcx    r14, rax
      adox    r15, rbx
    }
    _RBX = (v285[3].m128i_u64[0] * (unsigned __int128)MEMORY[8]) >> 64;
    _RAX = v285[3].m128i_i64[0] * MEMORY[8];
    __asm
    {
      adcx    r15, rax
      adox    rsi, rbx
    }
    _RBX = (v285[3].m128i_u64[0] * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v285[3].m128i_i64[0] * MEMORY[0x10];
    __asm
    {
      adcx    rsi, rax
      adox    rbp, rbx
    }
    _RBX = (v285[3].m128i_u64[0] * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v285[3].m128i_i64[0] * MEMORY[0x18];
    __asm
    {
      adcx    rbp, rax
      adox    r10, rbx
    }
    _RBX = (v285[3].m128i_u64[0] * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v285[3].m128i_i64[0] * MEMORY[0x20];
    __asm
    {
      adcx    r10, rax
      adox    r11, rbx
    }
    _RBX = (v285[3].m128i_u64[0] * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v285[3].m128i_i64[0] * MEMORY[0x28];
    __asm
    {
      adcx    r11, rax
      adox    r12, rbx
    }
    _RBX = (v285[3].m128i_u64[0] * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v285[3].m128i_i64[0] * MEMORY[0x30];
    __asm
    {
      adcx    r12, rax
      adox    r13, rbx
    }
    v533 = v285[3].m128i_u64[0];
    _RBX = (v533 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v285[3].m128i_i64[0] * MEMORY[0x38];
    __asm { adcx    r13, rax }
    _R8[3].m128i_i64[0] = _R14;
    _R14 = 0LL;
    __asm
    {
      adcx    r14, r14
      adox    r14, rbx
    }
    __asm { adox    r15, [r8+38h] }
    _RBX = (v285[3].m128i_u64[1] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v533 + 1)) >> 64;
    _RAX = v285[3].m128i_i64[1] * **((_QWORD **)&v533 + 1);
    __asm
    {
      adcx    r15, rax
      adox    rsi, rbx
    }
    _RBX = (v285[3].m128i_u64[1] * (unsigned __int128)MEMORY[8]) >> 64;
    _RAX = v285[3].m128i_i64[1] * MEMORY[8];
    __asm
    {
      adcx    rsi, rax
      adox    rbp, rbx
    }
    _RBX = (v285[3].m128i_u64[1] * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v285[3].m128i_i64[1] * MEMORY[0x10];
    __asm
    {
      adcx    rbp, rax
      adox    r10, rbx
    }
    _RBX = (v285[3].m128i_u64[1] * (unsigned __int128)MEMORY[0x18]) >> 64;
    _RAX = v285[3].m128i_i64[1] * MEMORY[0x18];
    __asm
    {
      adcx    r10, rax
      adox    r11, rbx
    }
    _RBX = (v285[3].m128i_u64[1] * (unsigned __int128)MEMORY[0x20]) >> 64;
    _RAX = v285[3].m128i_i64[1] * MEMORY[0x20];
    __asm
    {
      adcx    r11, rax
      adox    r12, rbx
    }
    _RBX = (v285[3].m128i_u64[1] * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v285[3].m128i_i64[1] * MEMORY[0x28];
    __asm
    {
      adcx    r12, rax
      adox    r13, rbx
    }
    _RBX = (v285[3].m128i_u64[1] * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v285[3].m128i_i64[1] * MEMORY[0x30];
    __asm
    {
      adcx    r13, rax
      adox    r14, rbx
    }
    _RBX = (v285[3].m128i_u64[1] * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v285[3].m128i_i64[1] * MEMORY[0x38];
    __asm { adcx    r14, rax }
    _R8[3].m128i_i64[1] = _R15;
    _R15 = 0LL;
    __asm
    {
      adcx    r15, r15
      adox    r15, rbx
    }
    _R8 += 4;
    v596 = __CFADD__(v635 != 0, _R8->m128i_i64[0]) | __CFADD__(_RSI, (v635 != 0) + _R8->m128i_i64[0]);
    _R8->m128i_i64[0] += _RSI + (v635 != 0);
    v574 = _R8->m128i_i64[1];
    v576 = v596;
    v596 = __CFADD__(v596, v574);
    v575 = v576 + v574;
    _R8->m128i_i64[1] = _RBP + v575;
    v577 = _R8[1].m128i_i64[0];
    v579 = v596 | (unsigned __int8)__CFADD__(_RBP, v575);
    v596 = __CFADD__(v579, v577);
    v578 = v579 + v577;
    _R8[1].m128i_i64[0] = _R10 + v578;
    v580 = _R8[1].m128i_i64[1];
    v582 = v596 | (unsigned __int8)__CFADD__(_R10, v578);
    v596 = __CFADD__(v582, v580);
    v581 = v582 + v580;
    _R8[1].m128i_i64[1] = _R11 + v581;
    v583 = _R8[2].m128i_i64[0];
    v585 = v596 | (unsigned __int8)__CFADD__(_R11, v581);
    v596 = __CFADD__(v585, v583);
    v584 = v585 + v583;
    _R8[2].m128i_i64[0] = _R12 + v584;
    v586 = _R8[2].m128i_i64[1];
    v588 = v596 | (unsigned __int8)__CFADD__(_R12, v584);
    v596 = __CFADD__(v588, v586);
    v587 = v588 + v586;
    _R8[2].m128i_i64[1] = _R13 + v587;
    v589 = _R8[3].m128i_i64[0];
    v591 = v596 | (unsigned __int8)__CFADD__(_R13, v587);
    v596 = __CFADD__(v591, v589);
    v590 = v591 + v589;
    _R8[3].m128i_i64[0] = _R14 + v590;
    v592 = _R8[3].m128i_i64[1];
    v594 = v596 | (unsigned __int8)__CFADD__(_R14, v590);
    v596 = __CFADD__(v594, v592);
    v593 = v594 + v592;
    _R8[3].m128i_i64[1] = _R15 + v593;
    v595 = v596 | __CFADD__(_R15, v593);
    v635 = v595;
    v3 = v632 + 4;
    v632 += 4;
    a1 = v631;
    v596 = v634-- == 0;
  }
  while ( v634 );
  v597 = v596 + v631[16];
  v596 = v3->m128i_i64[0] < v597;
  a3->m128i_i64[0] = v3->m128i_i64[0] - v597;
  v598 = v3->m128i_u64[1];
  v599 = v596 + v631[17];
  a3->m128i_i64[1] = v598 - v599;
  v600 = v3[1].m128i_u64[0];
  v601 = (v598 < v599) + v631[18];
  a3[1].m128i_i64[0] = v600 - v601;
  v602 = v3[1].m128i_u64[1];
  v603 = (v600 < v601) + v631[19];
  a3[1].m128i_i64[1] = v602 - v603;
  v604 = v3[2].m128i_u64[0];
  v605 = (v602 < v603) + v631[20];
  a3[2].m128i_i64[0] = v604 - v605;
  v606 = v3[2].m128i_u64[1];
  v607 = (v604 < v605) + v631[21];
  a3[2].m128i_i64[1] = v606 - v607;
  v608 = v3[3].m128i_u64[0];
  v609 = (v606 < v607) + v631[22];
  a3[3].m128i_i64[0] = v608 - v609;
  v610 = v3[3].m128i_u64[1];
  v611 = (v608 < v609) + v631[23];
  a3[3].m128i_i64[1] = v610 - v611;
  v612 = v3[4].m128i_u64[0];
  v613 = (v610 < v611) + v631[24];
  a3[4].m128i_i64[0] = v612 - v613;
  v614 = v3[4].m128i_u64[1];
  v615 = (v612 < v613) + v631[25];
  a3[4].m128i_i64[1] = v614 - v615;
  v616 = v3[5].m128i_u64[0];
  v617 = (v614 < v615) + v631[26];
  a3[5].m128i_i64[0] = v616 - v617;
  v618 = v3[5].m128i_u64[1];
  v619 = (v616 < v617) + v631[27];
  a3[5].m128i_i64[1] = v618 - v619;
  v620 = v3[6].m128i_u64[0];
  v621 = (v618 < v619) + v631[28];
  a3[6].m128i_i64[0] = v620 - v621;
  v622 = v3[6].m128i_u64[1];
  v623 = (v620 < v621) + v631[29];
  a3[6].m128i_i64[1] = v622 - v623;
  v624 = v3[7].m128i_u64[0];
  v626 = (v622 < v623) + v631[30];
  v596 = v624 < v626;
  result = v624 - v626;
  a3[7].m128i_i64[0] = result;
  v627 = v3[7].m128i_u64[1];
  v628 = v596 + v631[31];
  a3[7].m128i_i64[1] = v627 - v628;
  v629 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v595 - (unsigned int)(v627 < v628)), 0);
  v630 = _mm_xor_si128((__m128i)-1LL, v629);
  *a3 = _mm_or_si128(_mm_and_si128(_mm_load_si128(v3), v629), _mm_and_si128(_mm_load_si128(a3), v630));
  a3[1] = _mm_or_si128(_mm_and_si128(_mm_load_si128(v3 + 1), v629), _mm_and_si128(_mm_load_si128(a3 + 1), v630));
  a3[2] = _mm_or_si128(_mm_and_si128(_mm_load_si128(v3 + 2), v629), _mm_and_si128(_mm_load_si128(a3 + 2), v630));
  a3[3] = _mm_or_si128(_mm_and_si128(_mm_load_si128(v3 + 3), v629), _mm_and_si128(_mm_load_si128(a3 + 3), v630));
  a3[4] = _mm_or_si128(_mm_and_si128(_mm_load_si128(v3 + 4), v629), _mm_and_si128(_mm_load_si128(a3 + 4), v630));
  a3[5] = _mm_or_si128(_mm_and_si128(_mm_load_si128(v3 + 5), v629), _mm_and_si128(_mm_load_si128(a3 + 5), v630));
  a3[6] = _mm_or_si128(_mm_and_si128(_mm_load_si128(v3 + 6), v629), _mm_and_si128(_mm_load_si128(a3 + 6), v630));
  a3[7] = _mm_or_si128(_mm_and_si128(_mm_load_si128(v3 + 7), v629), _mm_and_si128(_mm_load_si128(a3 + 7), v630));
  return result;
}
