/*
 * XREFs of sub_140413410 @ 0x140413410
 * Callers:
 *     sub_14040C540 @ 0x14040C540 (sub_14040C540.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_140413410(unsigned __int64 *a1, unsigned __int64 *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *v5; // r8
  __int128 v16; // rdx
  unsigned __int64 v18; // rt2
  __int128 v81; // rdx
  __int128 v117; // rdx
  __int128 v153; // rdx
  __int128 v189; // rdx
  __int128 v225; // rdx
  __int128 v261; // rdx
  __int128 v297; // rdx
  __int128 v334; // rdx
  __int128 v370; // rdx
  __int128 v406; // rdx
  __int128 v442; // rdx
  __int128 v478; // rdx
  __int128 v514; // rdx
  __int128 v550; // rdx
  __int128 v586; // rdx
  __int128 v631; // rdx
  __int128 v667; // rdx
  __int128 v703; // rdx
  __int128 v739; // rdx
  __int128 v775; // rdx
  __int128 v811; // rdx
  __int128 v847; // rdx
  __int128 v883; // rdx
  __int128 v920; // rdx
  __int128 v956; // rdx
  __int128 v992; // rdx
  __int128 v1028; // rdx
  __int128 v1064; // rdx
  __int128 v1100; // rdx
  __int128 v1136; // rdx
  unsigned __int64 result; // rax

  _RDI = a4;
  v5 = a2;
  *(_OWORD *)a4 = 0LL;
  *(_OWORD *)(a4 + 16) = 0LL;
  *(_OWORD *)(a4 + 32) = 0LL;
  *(_OWORD *)(a4 + 48) = 0LL;
  *(_OWORD *)(a4 + 64) = 0LL;
  *(_OWORD *)(a4 + 80) = 0LL;
  *(_OWORD *)(a4 + 96) = 0LL;
  *(_OWORD *)(a4 + 112) = 0LL;
  _RSI = 0LL;
  _RBP = 0LL;
  _R10 = 0LL;
  _R11 = 0LL;
  _R12 = 0LL;
  _R13 = 0LL;
  _R14 = 0LL;
  _R15 = 0LL;
  __asm { adox    rsi, [rdi] }
  v18 = *a1;
  v16 = *a2;
  _RBX = (v16 * (unsigned __int128)v18) >> 64;
  _RAX = v16 * v18;
  __asm
  {
    adcx    rsi, rax
    adox    rbp, rbx
  }
  _RBX = ((unsigned __int64)v16 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v16 + 1) + 8LL)) >> 64;
  _RAX = v16 * *(_QWORD *)(*((_QWORD *)&v16 + 1) + 8LL);
  __asm
  {
    adcx    rbp, rax
    adox    r10, rbx
  }
  _RBX = ((unsigned __int64)v16 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v16 * MEMORY[0x10];
  __asm
  {
    adcx    r10, rax
    adox    r11, rbx
  }
  _RBX = ((unsigned __int64)v16 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v16 * MEMORY[0x18];
  __asm
  {
    adcx    r11, rax
    adox    r12, rbx
  }
  _RBX = ((unsigned __int64)v16 * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v16 * MEMORY[0x20];
  __asm
  {
    adcx    r12, rax
    adox    r13, rbx
  }
  _RBX = ((unsigned __int64)v16 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v16 * MEMORY[0x28];
  __asm
  {
    adcx    r13, rax
    adox    r14, rbx
  }
  _RBX = ((unsigned __int64)v16 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v16 * MEMORY[0x30];
  __asm
  {
    adcx    r14, rax
    adox    r15, rbx
  }
  _RBX = ((unsigned __int64)v16 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v16 * MEMORY[0x38];
  __asm { adcx    r15, rax }
  *(_QWORD *)a4 = _RSI;
  _RSI = 0LL;
  __asm
  {
    adcx    rsi, rsi
    adox    rsi, rbx
  }
  __asm { adox    rbp, [rdi+8] }
  _RBX = (v5[1] * (unsigned __int128)MEMORY[0]) >> 64;
  _RAX = v5[1] * MEMORY[0];
  __asm
  {
    adcx    rbp, rax
    adox    r10, rbx
  }
  _RBX = (v5[1] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v5[1] * MEMORY[8];
  __asm
  {
    adcx    r10, rax
    adox    r11, rbx
  }
  _RBX = (v5[1] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v5[1] * MEMORY[0x10];
  __asm
  {
    adcx    r11, rax
    adox    r12, rbx
  }
  _RBX = (v5[1] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v5[1] * MEMORY[0x18];
  __asm
  {
    adcx    r12, rax
    adox    r13, rbx
  }
  _RBX = (v5[1] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v5[1] * MEMORY[0x20];
  __asm
  {
    adcx    r13, rax
    adox    r14, rbx
  }
  _RBX = (v5[1] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v5[1] * MEMORY[0x28];
  __asm
  {
    adcx    r14, rax
    adox    r15, rbx
  }
  _RBX = (v5[1] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v5[1] * MEMORY[0x30];
  __asm
  {
    adcx    r15, rax
    adox    rsi, rbx
  }
  v81 = v5[1];
  _RBX = (v81 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v5[1] * MEMORY[0x38];
  __asm { adcx    rsi, rax }
  *(_QWORD *)(a4 + 8) = _RBP;
  _RBP = 0LL;
  __asm
  {
    adcx    rbp, rbp
    adox    rbp, rbx
  }
  __asm { adox    r10, [rdi+10h] }
  _RBX = (v5[2] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v81 + 1)) >> 64;
  _RAX = v5[2] * **((_QWORD **)&v81 + 1);
  __asm
  {
    adcx    r10, rax
    adox    r11, rbx
  }
  _RBX = (v5[2] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v5[2] * MEMORY[8];
  __asm
  {
    adcx    r11, rax
    adox    r12, rbx
  }
  _RBX = (v5[2] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v5[2] * MEMORY[0x10];
  __asm
  {
    adcx    r12, rax
    adox    r13, rbx
  }
  _RBX = (v5[2] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v5[2] * MEMORY[0x18];
  __asm
  {
    adcx    r13, rax
    adox    r14, rbx
  }
  _RBX = (v5[2] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v5[2] * MEMORY[0x20];
  __asm
  {
    adcx    r14, rax
    adox    r15, rbx
  }
  _RBX = (v5[2] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v5[2] * MEMORY[0x28];
  __asm
  {
    adcx    r15, rax
    adox    rsi, rbx
  }
  _RBX = (v5[2] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v5[2] * MEMORY[0x30];
  __asm
  {
    adcx    rsi, rax
    adox    rbp, rbx
  }
  v117 = v5[2];
  _RBX = (v117 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v5[2] * MEMORY[0x38];
  __asm { adcx    rbp, rax }
  *(_QWORD *)(a4 + 16) = _R10;
  _R10 = 0LL;
  __asm
  {
    adcx    r10, r10
    adox    r10, rbx
  }
  __asm { adox    r11, [rdi+18h] }
  _RBX = (v5[3] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v117 + 1)) >> 64;
  _RAX = v5[3] * **((_QWORD **)&v117 + 1);
  __asm
  {
    adcx    r11, rax
    adox    r12, rbx
  }
  _RBX = (v5[3] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v5[3] * MEMORY[8];
  __asm
  {
    adcx    r12, rax
    adox    r13, rbx
  }
  _RBX = (v5[3] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v5[3] * MEMORY[0x10];
  __asm
  {
    adcx    r13, rax
    adox    r14, rbx
  }
  _RBX = (v5[3] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v5[3] * MEMORY[0x18];
  __asm
  {
    adcx    r14, rax
    adox    r15, rbx
  }
  _RBX = (v5[3] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v5[3] * MEMORY[0x20];
  __asm
  {
    adcx    r15, rax
    adox    rsi, rbx
  }
  _RBX = (v5[3] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v5[3] * MEMORY[0x28];
  __asm
  {
    adcx    rsi, rax
    adox    rbp, rbx
  }
  _RBX = (v5[3] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v5[3] * MEMORY[0x30];
  __asm
  {
    adcx    rbp, rax
    adox    r10, rbx
  }
  v153 = v5[3];
  _RBX = (v153 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v5[3] * MEMORY[0x38];
  __asm { adcx    r10, rax }
  *(_QWORD *)(a4 + 24) = _R11;
  _R11 = 0LL;
  __asm
  {
    adcx    r11, r11
    adox    r11, rbx
  }
  __asm { adox    r12, [rdi+20h] }
  _RBX = (v5[4] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v153 + 1)) >> 64;
  _RAX = v5[4] * **((_QWORD **)&v153 + 1);
  __asm
  {
    adcx    r12, rax
    adox    r13, rbx
  }
  _RBX = (v5[4] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v5[4] * MEMORY[8];
  __asm
  {
    adcx    r13, rax
    adox    r14, rbx
  }
  _RBX = (v5[4] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v5[4] * MEMORY[0x10];
  __asm
  {
    adcx    r14, rax
    adox    r15, rbx
  }
  _RBX = (v5[4] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v5[4] * MEMORY[0x18];
  __asm
  {
    adcx    r15, rax
    adox    rsi, rbx
  }
  _RBX = (v5[4] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v5[4] * MEMORY[0x20];
  __asm
  {
    adcx    rsi, rax
    adox    rbp, rbx
  }
  _RBX = (v5[4] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v5[4] * MEMORY[0x28];
  __asm
  {
    adcx    rbp, rax
    adox    r10, rbx
  }
  _RBX = (v5[4] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v5[4] * MEMORY[0x30];
  __asm
  {
    adcx    r10, rax
    adox    r11, rbx
  }
  v189 = v5[4];
  _RBX = (v189 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v5[4] * MEMORY[0x38];
  __asm { adcx    r11, rax }
  *(_QWORD *)(a4 + 32) = _R12;
  _R12 = 0LL;
  __asm
  {
    adcx    r12, r12
    adox    r12, rbx
  }
  __asm { adox    r13, [rdi+28h] }
  _RBX = (v5[5] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v189 + 1)) >> 64;
  _RAX = v5[5] * **((_QWORD **)&v189 + 1);
  __asm
  {
    adcx    r13, rax
    adox    r14, rbx
  }
  _RBX = (v5[5] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v5[5] * MEMORY[8];
  __asm
  {
    adcx    r14, rax
    adox    r15, rbx
  }
  _RBX = (v5[5] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v5[5] * MEMORY[0x10];
  __asm
  {
    adcx    r15, rax
    adox    rsi, rbx
  }
  _RBX = (v5[5] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v5[5] * MEMORY[0x18];
  __asm
  {
    adcx    rsi, rax
    adox    rbp, rbx
  }
  _RBX = (v5[5] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v5[5] * MEMORY[0x20];
  __asm
  {
    adcx    rbp, rax
    adox    r10, rbx
  }
  _RBX = (v5[5] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v5[5] * MEMORY[0x28];
  __asm
  {
    adcx    r10, rax
    adox    r11, rbx
  }
  _RBX = (v5[5] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v5[5] * MEMORY[0x30];
  __asm
  {
    adcx    r11, rax
    adox    r12, rbx
  }
  v225 = v5[5];
  _RBX = (v225 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v5[5] * MEMORY[0x38];
  __asm { adcx    r12, rax }
  *(_QWORD *)(a4 + 40) = _R13;
  _R13 = 0LL;
  __asm
  {
    adcx    r13, r13
    adox    r13, rbx
  }
  __asm { adox    r14, [rdi+30h] }
  _RBX = (v5[6] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v225 + 1)) >> 64;
  _RAX = v5[6] * **((_QWORD **)&v225 + 1);
  __asm
  {
    adcx    r14, rax
    adox    r15, rbx
  }
  _RBX = (v5[6] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v5[6] * MEMORY[8];
  __asm
  {
    adcx    r15, rax
    adox    rsi, rbx
  }
  _RBX = (v5[6] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v5[6] * MEMORY[0x10];
  __asm
  {
    adcx    rsi, rax
    adox    rbp, rbx
  }
  _RBX = (v5[6] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v5[6] * MEMORY[0x18];
  __asm
  {
    adcx    rbp, rax
    adox    r10, rbx
  }
  _RBX = (v5[6] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v5[6] * MEMORY[0x20];
  __asm
  {
    adcx    r10, rax
    adox    r11, rbx
  }
  _RBX = (v5[6] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v5[6] * MEMORY[0x28];
  __asm
  {
    adcx    r11, rax
    adox    r12, rbx
  }
  _RBX = (v5[6] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v5[6] * MEMORY[0x30];
  __asm
  {
    adcx    r12, rax
    adox    r13, rbx
  }
  v261 = v5[6];
  _RBX = (v261 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v5[6] * MEMORY[0x38];
  __asm { adcx    r13, rax }
  *(_QWORD *)(a4 + 48) = _R14;
  _R14 = 0LL;
  __asm
  {
    adcx    r14, r14
    adox    r14, rbx
  }
  __asm { adox    r15, [rdi+38h] }
  _RBX = (v5[7] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v261 + 1)) >> 64;
  _RAX = v5[7] * **((_QWORD **)&v261 + 1);
  __asm
  {
    adcx    r15, rax
    adox    rsi, rbx
  }
  _RBX = (v5[7] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v5[7] * MEMORY[8];
  __asm
  {
    adcx    rsi, rax
    adox    rbp, rbx
  }
  _RBX = (v5[7] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v5[7] * MEMORY[0x10];
  __asm
  {
    adcx    rbp, rax
    adox    r10, rbx
  }
  _RBX = (v5[7] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v5[7] * MEMORY[0x18];
  __asm
  {
    adcx    r10, rax
    adox    r11, rbx
  }
  _RBX = (v5[7] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v5[7] * MEMORY[0x20];
  __asm
  {
    adcx    r11, rax
    adox    r12, rbx
  }
  _RBX = (v5[7] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v5[7] * MEMORY[0x28];
  __asm
  {
    adcx    r12, rax
    adox    r13, rbx
  }
  _RBX = (v5[7] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v5[7] * MEMORY[0x30];
  __asm
  {
    adcx    r13, rax
    adox    r14, rbx
  }
  v297 = v5[7];
  _RBX = (v297 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v5[7] * MEMORY[0x38];
  __asm { adcx    r14, rax }
  *(_QWORD *)(a4 + 56) = _R15;
  _R15 = 0LL;
  __asm
  {
    adcx    r15, r15
    adox    r15, rbx
  }
  v5 += 8;
  _RDI = a4 + 64;
  __asm { adox    rsi, [rdi] }
  _RBX = (*v5 * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v297 + 1)) >> 64;
  _RAX = *v5 * **((_QWORD **)&v297 + 1);
  __asm
  {
    adcx    rsi, rax
    adox    rbp, rbx
  }
  _RBX = (*v5 * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = *v5 * MEMORY[8];
  __asm
  {
    adcx    rbp, rax
    adox    r10, rbx
  }
  _RBX = (*v5 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = *v5 * MEMORY[0x10];
  __asm
  {
    adcx    r10, rax
    adox    r11, rbx
  }
  _RBX = (*v5 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = *v5 * MEMORY[0x18];
  __asm
  {
    adcx    r11, rax
    adox    r12, rbx
  }
  _RBX = (*v5 * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = *v5 * MEMORY[0x20];
  __asm
  {
    adcx    r12, rax
    adox    r13, rbx
  }
  _RBX = (*v5 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = *v5 * MEMORY[0x28];
  __asm
  {
    adcx    r13, rax
    adox    r14, rbx
  }
  _RBX = (*v5 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = *v5 * MEMORY[0x30];
  __asm
  {
    adcx    r14, rax
    adox    r15, rbx
  }
  v334 = *v5;
  _RBX = (v334 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = *v5 * MEMORY[0x38];
  __asm { adcx    r15, rax }
  *(_QWORD *)(a4 + 64) = _RSI;
  _RSI = 0LL;
  __asm
  {
    adcx    rsi, rsi
    adox    rsi, rbx
  }
  __asm { adox    rbp, [rdi+8] }
  _RBX = (v5[1] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v334 + 1)) >> 64;
  _RAX = v5[1] * **((_QWORD **)&v334 + 1);
  __asm
  {
    adcx    rbp, rax
    adox    r10, rbx
  }
  _RBX = (v5[1] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v5[1] * MEMORY[8];
  __asm
  {
    adcx    r10, rax
    adox    r11, rbx
  }
  _RBX = (v5[1] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v5[1] * MEMORY[0x10];
  __asm
  {
    adcx    r11, rax
    adox    r12, rbx
  }
  _RBX = (v5[1] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v5[1] * MEMORY[0x18];
  __asm
  {
    adcx    r12, rax
    adox    r13, rbx
  }
  _RBX = (v5[1] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v5[1] * MEMORY[0x20];
  __asm
  {
    adcx    r13, rax
    adox    r14, rbx
  }
  _RBX = (v5[1] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v5[1] * MEMORY[0x28];
  __asm
  {
    adcx    r14, rax
    adox    r15, rbx
  }
  _RBX = (v5[1] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v5[1] * MEMORY[0x30];
  __asm
  {
    adcx    r15, rax
    adox    rsi, rbx
  }
  v370 = v5[1];
  _RBX = (v370 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v5[1] * MEMORY[0x38];
  __asm { adcx    rsi, rax }
  *(_QWORD *)(a4 + 72) = _RBP;
  _RBP = 0LL;
  __asm
  {
    adcx    rbp, rbp
    adox    rbp, rbx
  }
  __asm { adox    r10, [rdi+10h] }
  _RBX = (v5[2] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v370 + 1)) >> 64;
  _RAX = v5[2] * **((_QWORD **)&v370 + 1);
  __asm
  {
    adcx    r10, rax
    adox    r11, rbx
  }
  _RBX = (v5[2] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v5[2] * MEMORY[8];
  __asm
  {
    adcx    r11, rax
    adox    r12, rbx
  }
  _RBX = (v5[2] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v5[2] * MEMORY[0x10];
  __asm
  {
    adcx    r12, rax
    adox    r13, rbx
  }
  _RBX = (v5[2] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v5[2] * MEMORY[0x18];
  __asm
  {
    adcx    r13, rax
    adox    r14, rbx
  }
  _RBX = (v5[2] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v5[2] * MEMORY[0x20];
  __asm
  {
    adcx    r14, rax
    adox    r15, rbx
  }
  _RBX = (v5[2] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v5[2] * MEMORY[0x28];
  __asm
  {
    adcx    r15, rax
    adox    rsi, rbx
  }
  _RBX = (v5[2] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v5[2] * MEMORY[0x30];
  __asm
  {
    adcx    rsi, rax
    adox    rbp, rbx
  }
  v406 = v5[2];
  _RBX = (v406 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v5[2] * MEMORY[0x38];
  __asm { adcx    rbp, rax }
  *(_QWORD *)(a4 + 80) = _R10;
  _R10 = 0LL;
  __asm
  {
    adcx    r10, r10
    adox    r10, rbx
  }
  __asm { adox    r11, [rdi+18h] }
  _RBX = (v5[3] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v406 + 1)) >> 64;
  _RAX = v5[3] * **((_QWORD **)&v406 + 1);
  __asm
  {
    adcx    r11, rax
    adox    r12, rbx
  }
  _RBX = (v5[3] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v5[3] * MEMORY[8];
  __asm
  {
    adcx    r12, rax
    adox    r13, rbx
  }
  _RBX = (v5[3] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v5[3] * MEMORY[0x10];
  __asm
  {
    adcx    r13, rax
    adox    r14, rbx
  }
  _RBX = (v5[3] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v5[3] * MEMORY[0x18];
  __asm
  {
    adcx    r14, rax
    adox    r15, rbx
  }
  _RBX = (v5[3] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v5[3] * MEMORY[0x20];
  __asm
  {
    adcx    r15, rax
    adox    rsi, rbx
  }
  _RBX = (v5[3] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v5[3] * MEMORY[0x28];
  __asm
  {
    adcx    rsi, rax
    adox    rbp, rbx
  }
  _RBX = (v5[3] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v5[3] * MEMORY[0x30];
  __asm
  {
    adcx    rbp, rax
    adox    r10, rbx
  }
  v442 = v5[3];
  _RBX = (v442 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v5[3] * MEMORY[0x38];
  __asm { adcx    r10, rax }
  *(_QWORD *)(a4 + 88) = _R11;
  _R11 = 0LL;
  __asm
  {
    adcx    r11, r11
    adox    r11, rbx
  }
  __asm { adox    r12, [rdi+20h] }
  _RBX = (v5[4] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v442 + 1)) >> 64;
  _RAX = v5[4] * **((_QWORD **)&v442 + 1);
  __asm
  {
    adcx    r12, rax
    adox    r13, rbx
  }
  _RBX = (v5[4] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v5[4] * MEMORY[8];
  __asm
  {
    adcx    r13, rax
    adox    r14, rbx
  }
  _RBX = (v5[4] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v5[4] * MEMORY[0x10];
  __asm
  {
    adcx    r14, rax
    adox    r15, rbx
  }
  _RBX = (v5[4] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v5[4] * MEMORY[0x18];
  __asm
  {
    adcx    r15, rax
    adox    rsi, rbx
  }
  _RBX = (v5[4] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v5[4] * MEMORY[0x20];
  __asm
  {
    adcx    rsi, rax
    adox    rbp, rbx
  }
  _RBX = (v5[4] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v5[4] * MEMORY[0x28];
  __asm
  {
    adcx    rbp, rax
    adox    r10, rbx
  }
  _RBX = (v5[4] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v5[4] * MEMORY[0x30];
  __asm
  {
    adcx    r10, rax
    adox    r11, rbx
  }
  v478 = v5[4];
  _RBX = (v478 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v5[4] * MEMORY[0x38];
  __asm { adcx    r11, rax }
  *(_QWORD *)(a4 + 96) = _R12;
  _R12 = 0LL;
  __asm
  {
    adcx    r12, r12
    adox    r12, rbx
  }
  __asm { adox    r13, [rdi+28h] }
  _RBX = (v5[5] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v478 + 1)) >> 64;
  _RAX = v5[5] * **((_QWORD **)&v478 + 1);
  __asm
  {
    adcx    r13, rax
    adox    r14, rbx
  }
  _RBX = (v5[5] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v5[5] * MEMORY[8];
  __asm
  {
    adcx    r14, rax
    adox    r15, rbx
  }
  _RBX = (v5[5] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v5[5] * MEMORY[0x10];
  __asm
  {
    adcx    r15, rax
    adox    rsi, rbx
  }
  _RBX = (v5[5] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v5[5] * MEMORY[0x18];
  __asm
  {
    adcx    rsi, rax
    adox    rbp, rbx
  }
  _RBX = (v5[5] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v5[5] * MEMORY[0x20];
  __asm
  {
    adcx    rbp, rax
    adox    r10, rbx
  }
  _RBX = (v5[5] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v5[5] * MEMORY[0x28];
  __asm
  {
    adcx    r10, rax
    adox    r11, rbx
  }
  _RBX = (v5[5] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v5[5] * MEMORY[0x30];
  __asm
  {
    adcx    r11, rax
    adox    r12, rbx
  }
  v514 = v5[5];
  _RBX = (v514 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v5[5] * MEMORY[0x38];
  __asm { adcx    r12, rax }
  *(_QWORD *)(a4 + 104) = _R13;
  _R13 = 0LL;
  __asm
  {
    adcx    r13, r13
    adox    r13, rbx
  }
  __asm { adox    r14, [rdi+30h] }
  _RBX = (v5[6] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v514 + 1)) >> 64;
  _RAX = v5[6] * **((_QWORD **)&v514 + 1);
  __asm
  {
    adcx    r14, rax
    adox    r15, rbx
  }
  _RBX = (v5[6] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v5[6] * MEMORY[8];
  __asm
  {
    adcx    r15, rax
    adox    rsi, rbx
  }
  _RBX = (v5[6] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v5[6] * MEMORY[0x10];
  __asm
  {
    adcx    rsi, rax
    adox    rbp, rbx
  }
  _RBX = (v5[6] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v5[6] * MEMORY[0x18];
  __asm
  {
    adcx    rbp, rax
    adox    r10, rbx
  }
  _RBX = (v5[6] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v5[6] * MEMORY[0x20];
  __asm
  {
    adcx    r10, rax
    adox    r11, rbx
  }
  _RBX = (v5[6] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v5[6] * MEMORY[0x28];
  __asm
  {
    adcx    r11, rax
    adox    r12, rbx
  }
  _RBX = (v5[6] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v5[6] * MEMORY[0x30];
  __asm
  {
    adcx    r12, rax
    adox    r13, rbx
  }
  v550 = v5[6];
  _RBX = (v550 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v5[6] * MEMORY[0x38];
  __asm { adcx    r13, rax }
  *(_QWORD *)(a4 + 112) = _R14;
  _R14 = 0LL;
  __asm
  {
    adcx    r14, r14
    adox    r14, rbx
  }
  __asm { adox    r15, [rdi+38h] }
  _RBX = (v5[7] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v550 + 1)) >> 64;
  _RAX = v5[7] * **((_QWORD **)&v550 + 1);
  __asm
  {
    adcx    r15, rax
    adox    rsi, rbx
  }
  _RBX = (v5[7] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v5[7] * MEMORY[8];
  __asm
  {
    adcx    rsi, rax
    adox    rbp, rbx
  }
  _RBX = (v5[7] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v5[7] * MEMORY[0x10];
  __asm
  {
    adcx    rbp, rax
    adox    r10, rbx
  }
  _RBX = (v5[7] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v5[7] * MEMORY[0x18];
  __asm
  {
    adcx    r10, rax
    adox    r11, rbx
  }
  _RBX = (v5[7] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v5[7] * MEMORY[0x20];
  __asm
  {
    adcx    r11, rax
    adox    r12, rbx
  }
  _RBX = (v5[7] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v5[7] * MEMORY[0x28];
  __asm
  {
    adcx    r12, rax
    adox    r13, rbx
  }
  _RBX = (v5[7] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v5[7] * MEMORY[0x30];
  __asm
  {
    adcx    r13, rax
    adox    r14, rbx
  }
  v586 = v5[7];
  _RBX = (v586 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v5[7] * MEMORY[0x38];
  __asm { adcx    r14, rax }
  *(_QWORD *)(a4 + 120) = _R15;
  _R15 = 0LL;
  __asm
  {
    adcx    r15, r15
    adox    r15, rbx
  }
  *(_QWORD *)(a4 + 128) = _RSI;
  *(_QWORD *)(a4 + 136) = _RBP;
  *(_QWORD *)(a4 + 144) = _R10;
  *(_QWORD *)(a4 + 152) = _R11;
  *(_QWORD *)(a4 + 160) = _R12;
  *(_QWORD *)(a4 + 168) = _R13;
  *(_QWORD *)(a4 + 176) = _R14;
  *(_QWORD *)(a4 + 184) = _R15;
  _RDI = a4 + 64;
  v5 -= 8;
  _RSI = 0LL;
  _RBP = 0LL;
  _R10 = 0LL;
  _R11 = 0LL;
  _R12 = 0LL;
  _R13 = 0LL;
  _R14 = 0LL;
  _R15 = 0LL;
  __asm { adox    rsi, [rdi] }
  _RBX = (*v5 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v586 + 1) + 64LL)) >> 64;
  _RAX = *v5 * *(_QWORD *)(*((_QWORD *)&v586 + 1) + 64LL);
  __asm
  {
    adcx    rsi, rax
    adox    rbp, rbx
  }
  _RBX = (*v5 * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = *v5 * MEMORY[8];
  __asm
  {
    adcx    rbp, rax
    adox    r10, rbx
  }
  _RBX = (*v5 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = *v5 * MEMORY[0x10];
  __asm
  {
    adcx    r10, rax
    adox    r11, rbx
  }
  _RBX = (*v5 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = *v5 * MEMORY[0x18];
  __asm
  {
    adcx    r11, rax
    adox    r12, rbx
  }
  _RBX = (*v5 * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = *v5 * MEMORY[0x20];
  __asm
  {
    adcx    r12, rax
    adox    r13, rbx
  }
  _RBX = (*v5 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = *v5 * MEMORY[0x28];
  __asm
  {
    adcx    r13, rax
    adox    r14, rbx
  }
  _RBX = (*v5 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = *v5 * MEMORY[0x30];
  __asm
  {
    adcx    r14, rax
    adox    r15, rbx
  }
  v631 = *v5;
  _RBX = (v631 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = *v5 * MEMORY[0x38];
  __asm { adcx    r15, rax }
  *(_QWORD *)(a4 + 64) = _RSI;
  _RSI = 0LL;
  __asm
  {
    adcx    rsi, rsi
    adox    rsi, rbx
  }
  __asm { adox    rbp, [rdi+8] }
  _RBX = (v5[1] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v631 + 1)) >> 64;
  _RAX = v5[1] * **((_QWORD **)&v631 + 1);
  __asm
  {
    adcx    rbp, rax
    adox    r10, rbx
  }
  _RBX = (v5[1] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v5[1] * MEMORY[8];
  __asm
  {
    adcx    r10, rax
    adox    r11, rbx
  }
  _RBX = (v5[1] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v5[1] * MEMORY[0x10];
  __asm
  {
    adcx    r11, rax
    adox    r12, rbx
  }
  _RBX = (v5[1] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v5[1] * MEMORY[0x18];
  __asm
  {
    adcx    r12, rax
    adox    r13, rbx
  }
  _RBX = (v5[1] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v5[1] * MEMORY[0x20];
  __asm
  {
    adcx    r13, rax
    adox    r14, rbx
  }
  _RBX = (v5[1] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v5[1] * MEMORY[0x28];
  __asm
  {
    adcx    r14, rax
    adox    r15, rbx
  }
  _RBX = (v5[1] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v5[1] * MEMORY[0x30];
  __asm
  {
    adcx    r15, rax
    adox    rsi, rbx
  }
  v667 = v5[1];
  _RBX = (v667 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v5[1] * MEMORY[0x38];
  __asm { adcx    rsi, rax }
  *(_QWORD *)(a4 + 72) = _RBP;
  _RBP = 0LL;
  __asm
  {
    adcx    rbp, rbp
    adox    rbp, rbx
  }
  __asm { adox    r10, [rdi+10h] }
  _RBX = (v5[2] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v667 + 1)) >> 64;
  _RAX = v5[2] * **((_QWORD **)&v667 + 1);
  __asm
  {
    adcx    r10, rax
    adox    r11, rbx
  }
  _RBX = (v5[2] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v5[2] * MEMORY[8];
  __asm
  {
    adcx    r11, rax
    adox    r12, rbx
  }
  _RBX = (v5[2] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v5[2] * MEMORY[0x10];
  __asm
  {
    adcx    r12, rax
    adox    r13, rbx
  }
  _RBX = (v5[2] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v5[2] * MEMORY[0x18];
  __asm
  {
    adcx    r13, rax
    adox    r14, rbx
  }
  _RBX = (v5[2] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v5[2] * MEMORY[0x20];
  __asm
  {
    adcx    r14, rax
    adox    r15, rbx
  }
  _RBX = (v5[2] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v5[2] * MEMORY[0x28];
  __asm
  {
    adcx    r15, rax
    adox    rsi, rbx
  }
  _RBX = (v5[2] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v5[2] * MEMORY[0x30];
  __asm
  {
    adcx    rsi, rax
    adox    rbp, rbx
  }
  v703 = v5[2];
  _RBX = (v703 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v5[2] * MEMORY[0x38];
  __asm { adcx    rbp, rax }
  *(_QWORD *)(a4 + 80) = _R10;
  _R10 = 0LL;
  __asm
  {
    adcx    r10, r10
    adox    r10, rbx
  }
  __asm { adox    r11, [rdi+18h] }
  _RBX = (v5[3] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v703 + 1)) >> 64;
  _RAX = v5[3] * **((_QWORD **)&v703 + 1);
  __asm
  {
    adcx    r11, rax
    adox    r12, rbx
  }
  _RBX = (v5[3] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v5[3] * MEMORY[8];
  __asm
  {
    adcx    r12, rax
    adox    r13, rbx
  }
  _RBX = (v5[3] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v5[3] * MEMORY[0x10];
  __asm
  {
    adcx    r13, rax
    adox    r14, rbx
  }
  _RBX = (v5[3] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v5[3] * MEMORY[0x18];
  __asm
  {
    adcx    r14, rax
    adox    r15, rbx
  }
  _RBX = (v5[3] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v5[3] * MEMORY[0x20];
  __asm
  {
    adcx    r15, rax
    adox    rsi, rbx
  }
  _RBX = (v5[3] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v5[3] * MEMORY[0x28];
  __asm
  {
    adcx    rsi, rax
    adox    rbp, rbx
  }
  _RBX = (v5[3] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v5[3] * MEMORY[0x30];
  __asm
  {
    adcx    rbp, rax
    adox    r10, rbx
  }
  v739 = v5[3];
  _RBX = (v739 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v5[3] * MEMORY[0x38];
  __asm { adcx    r10, rax }
  *(_QWORD *)(a4 + 88) = _R11;
  _R11 = 0LL;
  __asm
  {
    adcx    r11, r11
    adox    r11, rbx
  }
  __asm { adox    r12, [rdi+20h] }
  _RBX = (v5[4] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v739 + 1)) >> 64;
  _RAX = v5[4] * **((_QWORD **)&v739 + 1);
  __asm
  {
    adcx    r12, rax
    adox    r13, rbx
  }
  _RBX = (v5[4] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v5[4] * MEMORY[8];
  __asm
  {
    adcx    r13, rax
    adox    r14, rbx
  }
  _RBX = (v5[4] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v5[4] * MEMORY[0x10];
  __asm
  {
    adcx    r14, rax
    adox    r15, rbx
  }
  _RBX = (v5[4] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v5[4] * MEMORY[0x18];
  __asm
  {
    adcx    r15, rax
    adox    rsi, rbx
  }
  _RBX = (v5[4] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v5[4] * MEMORY[0x20];
  __asm
  {
    adcx    rsi, rax
    adox    rbp, rbx
  }
  _RBX = (v5[4] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v5[4] * MEMORY[0x28];
  __asm
  {
    adcx    rbp, rax
    adox    r10, rbx
  }
  _RBX = (v5[4] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v5[4] * MEMORY[0x30];
  __asm
  {
    adcx    r10, rax
    adox    r11, rbx
  }
  v775 = v5[4];
  _RBX = (v775 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v5[4] * MEMORY[0x38];
  __asm { adcx    r11, rax }
  *(_QWORD *)(a4 + 96) = _R12;
  _R12 = 0LL;
  __asm
  {
    adcx    r12, r12
    adox    r12, rbx
  }
  __asm { adox    r13, [rdi+28h] }
  _RBX = (v5[5] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v775 + 1)) >> 64;
  _RAX = v5[5] * **((_QWORD **)&v775 + 1);
  __asm
  {
    adcx    r13, rax
    adox    r14, rbx
  }
  _RBX = (v5[5] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v5[5] * MEMORY[8];
  __asm
  {
    adcx    r14, rax
    adox    r15, rbx
  }
  _RBX = (v5[5] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v5[5] * MEMORY[0x10];
  __asm
  {
    adcx    r15, rax
    adox    rsi, rbx
  }
  _RBX = (v5[5] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v5[5] * MEMORY[0x18];
  __asm
  {
    adcx    rsi, rax
    adox    rbp, rbx
  }
  _RBX = (v5[5] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v5[5] * MEMORY[0x20];
  __asm
  {
    adcx    rbp, rax
    adox    r10, rbx
  }
  _RBX = (v5[5] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v5[5] * MEMORY[0x28];
  __asm
  {
    adcx    r10, rax
    adox    r11, rbx
  }
  _RBX = (v5[5] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v5[5] * MEMORY[0x30];
  __asm
  {
    adcx    r11, rax
    adox    r12, rbx
  }
  v811 = v5[5];
  _RBX = (v811 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v5[5] * MEMORY[0x38];
  __asm { adcx    r12, rax }
  *(_QWORD *)(a4 + 104) = _R13;
  _R13 = 0LL;
  __asm
  {
    adcx    r13, r13
    adox    r13, rbx
  }
  __asm { adox    r14, [rdi+30h] }
  _RBX = (v5[6] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v811 + 1)) >> 64;
  _RAX = v5[6] * **((_QWORD **)&v811 + 1);
  __asm
  {
    adcx    r14, rax
    adox    r15, rbx
  }
  _RBX = (v5[6] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v5[6] * MEMORY[8];
  __asm
  {
    adcx    r15, rax
    adox    rsi, rbx
  }
  _RBX = (v5[6] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v5[6] * MEMORY[0x10];
  __asm
  {
    adcx    rsi, rax
    adox    rbp, rbx
  }
  _RBX = (v5[6] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v5[6] * MEMORY[0x18];
  __asm
  {
    adcx    rbp, rax
    adox    r10, rbx
  }
  _RBX = (v5[6] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v5[6] * MEMORY[0x20];
  __asm
  {
    adcx    r10, rax
    adox    r11, rbx
  }
  _RBX = (v5[6] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v5[6] * MEMORY[0x28];
  __asm
  {
    adcx    r11, rax
    adox    r12, rbx
  }
  _RBX = (v5[6] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v5[6] * MEMORY[0x30];
  __asm
  {
    adcx    r12, rax
    adox    r13, rbx
  }
  v847 = v5[6];
  _RBX = (v847 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v5[6] * MEMORY[0x38];
  __asm { adcx    r13, rax }
  *(_QWORD *)(a4 + 112) = _R14;
  _R14 = 0LL;
  __asm
  {
    adcx    r14, r14
    adox    r14, rbx
  }
  __asm { adox    r15, [rdi+38h] }
  _RBX = (v5[7] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v847 + 1)) >> 64;
  _RAX = v5[7] * **((_QWORD **)&v847 + 1);
  __asm
  {
    adcx    r15, rax
    adox    rsi, rbx
  }
  _RBX = (v5[7] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v5[7] * MEMORY[8];
  __asm
  {
    adcx    rsi, rax
    adox    rbp, rbx
  }
  _RBX = (v5[7] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v5[7] * MEMORY[0x10];
  __asm
  {
    adcx    rbp, rax
    adox    r10, rbx
  }
  _RBX = (v5[7] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v5[7] * MEMORY[0x18];
  __asm
  {
    adcx    r10, rax
    adox    r11, rbx
  }
  _RBX = (v5[7] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v5[7] * MEMORY[0x20];
  __asm
  {
    adcx    r11, rax
    adox    r12, rbx
  }
  _RBX = (v5[7] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v5[7] * MEMORY[0x28];
  __asm
  {
    adcx    r12, rax
    adox    r13, rbx
  }
  _RBX = (v5[7] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v5[7] * MEMORY[0x30];
  __asm
  {
    adcx    r13, rax
    adox    r14, rbx
  }
  v883 = v5[7];
  _RBX = (v883 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v5[7] * MEMORY[0x38];
  __asm { adcx    r14, rax }
  *(_QWORD *)(a4 + 120) = _R15;
  _R15 = 0LL;
  __asm
  {
    adcx    r15, r15
    adox    r15, rbx
  }
  v5 += 8;
  _RDI = a4 + 128;
  __asm { adox    rsi, [rdi] }
  _RBX = (*v5 * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v883 + 1)) >> 64;
  _RAX = *v5 * **((_QWORD **)&v883 + 1);
  __asm
  {
    adcx    rsi, rax
    adox    rbp, rbx
  }
  _RBX = (*v5 * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = *v5 * MEMORY[8];
  __asm
  {
    adcx    rbp, rax
    adox    r10, rbx
  }
  _RBX = (*v5 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = *v5 * MEMORY[0x10];
  __asm
  {
    adcx    r10, rax
    adox    r11, rbx
  }
  _RBX = (*v5 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = *v5 * MEMORY[0x18];
  __asm
  {
    adcx    r11, rax
    adox    r12, rbx
  }
  _RBX = (*v5 * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = *v5 * MEMORY[0x20];
  __asm
  {
    adcx    r12, rax
    adox    r13, rbx
  }
  _RBX = (*v5 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = *v5 * MEMORY[0x28];
  __asm
  {
    adcx    r13, rax
    adox    r14, rbx
  }
  _RBX = (*v5 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = *v5 * MEMORY[0x30];
  __asm
  {
    adcx    r14, rax
    adox    r15, rbx
  }
  v920 = *v5;
  _RBX = (v920 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = *v5 * MEMORY[0x38];
  __asm { adcx    r15, rax }
  *(_QWORD *)(a4 + 128) = _RSI;
  _RSI = 0LL;
  __asm
  {
    adcx    rsi, rsi
    adox    rsi, rbx
  }
  __asm { adox    rbp, [rdi+8] }
  _RBX = (v5[1] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v920 + 1)) >> 64;
  _RAX = v5[1] * **((_QWORD **)&v920 + 1);
  __asm
  {
    adcx    rbp, rax
    adox    r10, rbx
  }
  _RBX = (v5[1] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v5[1] * MEMORY[8];
  __asm
  {
    adcx    r10, rax
    adox    r11, rbx
  }
  _RBX = (v5[1] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v5[1] * MEMORY[0x10];
  __asm
  {
    adcx    r11, rax
    adox    r12, rbx
  }
  _RBX = (v5[1] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v5[1] * MEMORY[0x18];
  __asm
  {
    adcx    r12, rax
    adox    r13, rbx
  }
  _RBX = (v5[1] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v5[1] * MEMORY[0x20];
  __asm
  {
    adcx    r13, rax
    adox    r14, rbx
  }
  _RBX = (v5[1] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v5[1] * MEMORY[0x28];
  __asm
  {
    adcx    r14, rax
    adox    r15, rbx
  }
  _RBX = (v5[1] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v5[1] * MEMORY[0x30];
  __asm
  {
    adcx    r15, rax
    adox    rsi, rbx
  }
  v956 = v5[1];
  _RBX = (v956 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v5[1] * MEMORY[0x38];
  __asm { adcx    rsi, rax }
  *(_QWORD *)(a4 + 136) = _RBP;
  _RBP = 0LL;
  __asm
  {
    adcx    rbp, rbp
    adox    rbp, rbx
  }
  __asm { adox    r10, [rdi+10h] }
  _RBX = (v5[2] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v956 + 1)) >> 64;
  _RAX = v5[2] * **((_QWORD **)&v956 + 1);
  __asm
  {
    adcx    r10, rax
    adox    r11, rbx
  }
  _RBX = (v5[2] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v5[2] * MEMORY[8];
  __asm
  {
    adcx    r11, rax
    adox    r12, rbx
  }
  _RBX = (v5[2] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v5[2] * MEMORY[0x10];
  __asm
  {
    adcx    r12, rax
    adox    r13, rbx
  }
  _RBX = (v5[2] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v5[2] * MEMORY[0x18];
  __asm
  {
    adcx    r13, rax
    adox    r14, rbx
  }
  _RBX = (v5[2] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v5[2] * MEMORY[0x20];
  __asm
  {
    adcx    r14, rax
    adox    r15, rbx
  }
  _RBX = (v5[2] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v5[2] * MEMORY[0x28];
  __asm
  {
    adcx    r15, rax
    adox    rsi, rbx
  }
  _RBX = (v5[2] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v5[2] * MEMORY[0x30];
  __asm
  {
    adcx    rsi, rax
    adox    rbp, rbx
  }
  v992 = v5[2];
  _RBX = (v992 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v5[2] * MEMORY[0x38];
  __asm { adcx    rbp, rax }
  *(_QWORD *)(a4 + 144) = _R10;
  _R10 = 0LL;
  __asm
  {
    adcx    r10, r10
    adox    r10, rbx
  }
  __asm { adox    r11, [rdi+18h] }
  _RBX = (v5[3] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v992 + 1)) >> 64;
  _RAX = v5[3] * **((_QWORD **)&v992 + 1);
  __asm
  {
    adcx    r11, rax
    adox    r12, rbx
  }
  _RBX = (v5[3] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v5[3] * MEMORY[8];
  __asm
  {
    adcx    r12, rax
    adox    r13, rbx
  }
  _RBX = (v5[3] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v5[3] * MEMORY[0x10];
  __asm
  {
    adcx    r13, rax
    adox    r14, rbx
  }
  _RBX = (v5[3] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v5[3] * MEMORY[0x18];
  __asm
  {
    adcx    r14, rax
    adox    r15, rbx
  }
  _RBX = (v5[3] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v5[3] * MEMORY[0x20];
  __asm
  {
    adcx    r15, rax
    adox    rsi, rbx
  }
  _RBX = (v5[3] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v5[3] * MEMORY[0x28];
  __asm
  {
    adcx    rsi, rax
    adox    rbp, rbx
  }
  _RBX = (v5[3] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v5[3] * MEMORY[0x30];
  __asm
  {
    adcx    rbp, rax
    adox    r10, rbx
  }
  v1028 = v5[3];
  _RBX = (v1028 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v5[3] * MEMORY[0x38];
  __asm { adcx    r10, rax }
  *(_QWORD *)(a4 + 152) = _R11;
  _R11 = 0LL;
  __asm
  {
    adcx    r11, r11
    adox    r11, rbx
  }
  __asm { adox    r12, [rdi+20h] }
  _RBX = (v5[4] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v1028 + 1)) >> 64;
  _RAX = v5[4] * **((_QWORD **)&v1028 + 1);
  __asm
  {
    adcx    r12, rax
    adox    r13, rbx
  }
  _RBX = (v5[4] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v5[4] * MEMORY[8];
  __asm
  {
    adcx    r13, rax
    adox    r14, rbx
  }
  _RBX = (v5[4] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v5[4] * MEMORY[0x10];
  __asm
  {
    adcx    r14, rax
    adox    r15, rbx
  }
  _RBX = (v5[4] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v5[4] * MEMORY[0x18];
  __asm
  {
    adcx    r15, rax
    adox    rsi, rbx
  }
  _RBX = (v5[4] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v5[4] * MEMORY[0x20];
  __asm
  {
    adcx    rsi, rax
    adox    rbp, rbx
  }
  _RBX = (v5[4] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v5[4] * MEMORY[0x28];
  __asm
  {
    adcx    rbp, rax
    adox    r10, rbx
  }
  _RBX = (v5[4] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v5[4] * MEMORY[0x30];
  __asm
  {
    adcx    r10, rax
    adox    r11, rbx
  }
  v1064 = v5[4];
  _RBX = (v1064 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v5[4] * MEMORY[0x38];
  __asm { adcx    r11, rax }
  *(_QWORD *)(a4 + 160) = _R12;
  _R12 = 0LL;
  __asm
  {
    adcx    r12, r12
    adox    r12, rbx
  }
  __asm { adox    r13, [rdi+28h] }
  _RBX = (v5[5] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v1064 + 1)) >> 64;
  _RAX = v5[5] * **((_QWORD **)&v1064 + 1);
  __asm
  {
    adcx    r13, rax
    adox    r14, rbx
  }
  _RBX = (v5[5] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v5[5] * MEMORY[8];
  __asm
  {
    adcx    r14, rax
    adox    r15, rbx
  }
  _RBX = (v5[5] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v5[5] * MEMORY[0x10];
  __asm
  {
    adcx    r15, rax
    adox    rsi, rbx
  }
  _RBX = (v5[5] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v5[5] * MEMORY[0x18];
  __asm
  {
    adcx    rsi, rax
    adox    rbp, rbx
  }
  _RBX = (v5[5] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v5[5] * MEMORY[0x20];
  __asm
  {
    adcx    rbp, rax
    adox    r10, rbx
  }
  _RBX = (v5[5] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v5[5] * MEMORY[0x28];
  __asm
  {
    adcx    r10, rax
    adox    r11, rbx
  }
  _RBX = (v5[5] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v5[5] * MEMORY[0x30];
  __asm
  {
    adcx    r11, rax
    adox    r12, rbx
  }
  v1100 = v5[5];
  _RBX = (v1100 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v5[5] * MEMORY[0x38];
  __asm { adcx    r12, rax }
  *(_QWORD *)(a4 + 168) = _R13;
  _R13 = 0LL;
  __asm
  {
    adcx    r13, r13
    adox    r13, rbx
  }
  __asm { adox    r14, [rdi+30h] }
  _RBX = (v5[6] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v1100 + 1)) >> 64;
  _RAX = v5[6] * **((_QWORD **)&v1100 + 1);
  __asm
  {
    adcx    r14, rax
    adox    r15, rbx
  }
  _RBX = (v5[6] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v5[6] * MEMORY[8];
  __asm
  {
    adcx    r15, rax
    adox    rsi, rbx
  }
  _RBX = (v5[6] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v5[6] * MEMORY[0x10];
  __asm
  {
    adcx    rsi, rax
    adox    rbp, rbx
  }
  _RBX = (v5[6] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v5[6] * MEMORY[0x18];
  __asm
  {
    adcx    rbp, rax
    adox    r10, rbx
  }
  _RBX = (v5[6] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v5[6] * MEMORY[0x20];
  __asm
  {
    adcx    r10, rax
    adox    r11, rbx
  }
  _RBX = (v5[6] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v5[6] * MEMORY[0x28];
  __asm
  {
    adcx    r11, rax
    adox    r12, rbx
  }
  _RBX = (v5[6] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v5[6] * MEMORY[0x30];
  __asm
  {
    adcx    r12, rax
    adox    r13, rbx
  }
  v1136 = v5[6];
  _RBX = (v1136 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v5[6] * MEMORY[0x38];
  __asm { adcx    r13, rax }
  *(_QWORD *)(a4 + 176) = _R14;
  _R14 = 0LL;
  __asm
  {
    adcx    r14, r14
    adox    r14, rbx
  }
  __asm { adox    r15, [rdi+38h] }
  _RBX = (v5[7] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v1136 + 1)) >> 64;
  _RAX = v5[7] * **((_QWORD **)&v1136 + 1);
  __asm
  {
    adcx    r15, rax
    adox    rsi, rbx
  }
  _RBX = (v5[7] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = v5[7] * MEMORY[8];
  __asm
  {
    adcx    rsi, rax
    adox    rbp, rbx
  }
  _RBX = (v5[7] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v5[7] * MEMORY[0x10];
  __asm
  {
    adcx    rbp, rax
    adox    r10, rbx
  }
  _RBX = (v5[7] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v5[7] * MEMORY[0x18];
  __asm
  {
    adcx    r10, rax
    adox    r11, rbx
  }
  _RBX = (v5[7] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v5[7] * MEMORY[0x20];
  __asm
  {
    adcx    r11, rax
    adox    r12, rbx
  }
  _RBX = (v5[7] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v5[7] * MEMORY[0x28];
  __asm
  {
    adcx    r12, rax
    adox    r13, rbx
  }
  _RBX = (v5[7] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v5[7] * MEMORY[0x30];
  __asm
  {
    adcx    r13, rax
    adox    r14, rbx
  }
  _RBX = (v5[7] * (unsigned __int128)MEMORY[0x38]) >> 64;
  result = v5[7] * MEMORY[0x38];
  __asm { adcx    r14, rax }
  *(_QWORD *)(a4 + 184) = _R15;
  _R15 = 0LL;
  __asm
  {
    adcx    r15, r15
    adox    r15, rbx
  }
  *(_QWORD *)(a4 + 192) = _RSI;
  *(_QWORD *)(a4 + 200) = _RBP;
  *(_QWORD *)(a4 + 208) = _R10;
  *(_QWORD *)(a4 + 216) = _R11;
  *(_QWORD *)(a4 + 224) = _R12;
  *(_QWORD *)(a4 + 232) = _R13;
  *(_QWORD *)(a4 + 240) = _R14;
  *(_QWORD *)(a4 + 248) = _R15;
  return result;
}
