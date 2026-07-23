/*
 * XREFs of sub_140414A50 @ 0x140414A50
 * Callers:
 *     sub_14040CB20 @ 0x14040CB20 (sub_14040CB20.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140414A50(unsigned __int64 *a1, __int64 a2, __int64 *a3)
{
  __int128 v13; // rdx
  unsigned __int64 v15; // rt2
  __int128 v60; // rdx
  __int128 v97; // rdx
  unsigned __int64 v103; // rt2
  __int128 v168; // rdx
  __int128 v204; // rdx
  __int128 v240; // rdx
  __int128 v276; // rdx
  __int128 v312; // rdx
  __int128 v348; // rdx
  __int128 v384; // rdx
  __int128 v420; // rdx
  __int128 v435; // rdx
  unsigned __int64 v437; // rt2
  __int128 v482; // rdx
  __int128 v519; // rdx
  unsigned __int64 v525; // rt2
  __int128 v561; // rdx
  __int128 v570; // rdx
  __int128 v579; // rdx
  __int128 v588; // rdx
  __int128 v597; // rdx
  __int128 v606; // rdx
  __int128 v615; // rdx
  __int128 v624; // rdx
  __int128 v633; // rdx
  __int128 v642; // rdx
  __int128 v651; // rdx
  __int128 v660; // rdx
  __int128 v669; // rdx
  __int128 v678; // rdx
  __int128 v687; // rdx
  __int128 v696; // rdx
  __int64 result; // rax

  *(_OWORD *)a3 = 0LL;
  *((_OWORD *)a3 + 1) = 0LL;
  *((_OWORD *)a3 + 2) = 0LL;
  *((_OWORD *)a3 + 3) = 0LL;
  *((_OWORD *)a3 + 4) = 0LL;
  *((_OWORD *)a3 + 5) = 0LL;
  *((_OWORD *)a3 + 6) = 0LL;
  *((_OWORD *)a3 + 7) = 0LL;
  _RBP = a3[1];
  _R10 = a3[2];
  _R11 = a3[3];
  _R12 = a3[4];
  _R13 = a3[5];
  _R14 = a3[6];
  _R15 = a3[7];
  _RSI = 0LL;
  v15 = a1[1];
  v13 = *a1;
  _RBX = (v13 * (unsigned __int128)v15) >> 64;
  _RAX = v13 * v15;
  __asm
  {
    adcx    rbp, rax
    adox    r10, rbx
  }
  _RBX = ((unsigned __int64)v13 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v13 + 1) + 16LL)) >> 64;
  _RAX = v13 * *(_QWORD *)(*((_QWORD *)&v13 + 1) + 16LL);
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
  __asm { adcx    r15, rax }
  a3[1] = _RBP;
  __asm
  {
    adcx    rsi, rsi
    adox    rsi, rbx
  }
  a3[2] = _R10;
  _RBX = (MEMORY[8] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = MEMORY[8] * MEMORY[0x10];
  __asm
  {
    adcx    r11, rax
    adox    r12, rbx
  }
  _RBX = (MEMORY[8] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = MEMORY[8] * MEMORY[0x18];
  __asm
  {
    adcx    r12, rax
    adox    r13, rbx
  }
  _RBX = (MEMORY[8] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = MEMORY[8] * MEMORY[0x20];
  __asm
  {
    adcx    r13, rax
    adox    r14, rbx
  }
  _RBX = (MEMORY[8] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = MEMORY[8] * MEMORY[0x28];
  __asm
  {
    adcx    r14, rax
    adox    r15, rbx
  }
  v60 = MEMORY[8];
  _RBX = (MEMORY[8] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = MEMORY[8] * MEMORY[0x30];
  __asm
  {
    adcx    r15, rax
    adox    rsi, rbx
  }
  *(_QWORD *)&v60 = MEMORY[0x38];
  _RBP = 0LL;
  _R10 = 0LL;
  a3[3] = _R11;
  _RBX = ((unsigned __int64)v60 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v60 + 1) + 8LL)) >> 64;
  _RAX = v60 * *(_QWORD *)(*((_QWORD *)&v60 + 1) + 8LL);
  __asm
  {
    adcx    rsi, rax
    adox    rbp, rbx
  }
  _RBX = ((unsigned __int64)v60 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v60 * MEMORY[0x10];
  __asm { adcx    rbp, rax }
  a3[4] = _R12;
  __asm { adcx    r10, rbx }
  _RBX = (MEMORY[0x10] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = MEMORY[0x10] * MEMORY[0x18];
  __asm
  {
    adcx    r13, rax
    adox    r14, rbx
  }
  _RBX = (MEMORY[0x10] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = MEMORY[0x10] * MEMORY[0x20];
  __asm
  {
    adcx    r14, rax
    adox    r15, rbx
  }
  _RBX = (MEMORY[0x10] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = MEMORY[0x10] * MEMORY[0x28];
  __asm
  {
    adcx    r15, rax
    adox    rsi, rbx
  }
  _RBX = (MEMORY[0x10] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = MEMORY[0x10] * MEMORY[0x30];
  __asm
  {
    adcx    rsi, rax
    adox    rbp, rbx
  }
  _R11 = 0LL;
  _R12 = 0LL;
  _RBX = (MEMORY[0x20] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = MEMORY[0x20] * MEMORY[0x28];
  __asm
  {
    adcx    rbp, rax
    adox    r10, rbx
  }
  v97 = MEMORY[0x20];
  _RBX = (MEMORY[0x20] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = MEMORY[0x20] * MEMORY[0x30];
  __asm
  {
    adcx    r10, rax
    adox    r11, rbx
  }
  *(_QWORD *)&v97 = MEMORY[0x28];
  a3[5] = _R13;
  v103 = *(_QWORD *)(*((_QWORD *)&v97 + 1) + 48LL);
  v97 = (unsigned __int64)v97;
  _RBX = ((unsigned __int64)v97 * (unsigned __int128)v103) >> 64;
  _RAX = v97 * v103;
  __asm
  {
    adcx    r11, rax
    adcx    r12, rbx
  }
  *(_QWORD *)&v97 = MEMORY[0x18];
  a3[6] = _R14;
  _RBX = ((unsigned __int64)v97 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v97 + 1) + 32LL)) >> 64;
  _RAX = v97 * *(_QWORD *)(*((_QWORD *)&v97 + 1) + 32LL);
  __asm
  {
    adcx    r15, rax
    adox    rsi, rbx
  }
  _RBX = ((unsigned __int64)v97 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v97 * MEMORY[0x28];
  __asm
  {
    adcx    rsi, rax
    adox    rbp, rbx
  }
  _RBX = ((unsigned __int64)v97 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v97 * MEMORY[0x30];
  __asm
  {
    adcx    rbp, rax
    adox    r10, rbx
  }
  v97 = (unsigned __int64)v97;
  _RBX = ((unsigned __int64)v97 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v97 * MEMORY[0x38];
  __asm
  {
    adcx    r10, rax
    adox    r11, rbx
  }
  *(_QWORD *)&v97 = MEMORY[0x38];
  _R13 = 0LL;
  _R14 = 0LL;
  a3[7] = _R15;
  _RBX = ((unsigned __int64)v97 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v97 + 1) + 32LL)) >> 64;
  _RAX = v97 * *(_QWORD *)(*((_QWORD *)&v97 + 1) + 32LL);
  __asm
  {
    adcx    r11, rax
    adox    r12, rbx
  }
  _RBX = ((unsigned __int64)v97 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v97 * MEMORY[0x28];
  __asm
  {
    adcx    r12, rax
    adox    r13, rbx
  }
  _RBX = ((unsigned __int64)v97 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v97 * MEMORY[0x30];
  __asm
  {
    adcx    r13, rax
    adcx    r14, rbx
  }
  _R15 = 0LL;
  _R8 = a3 + 8;
  __asm { adox    rsi, [r8] }
  _RBX = (MEMORY[0x40] * (unsigned __int128)MEMORY[0]) >> 64;
  _RAX = MEMORY[0x40] * MEMORY[0];
  __asm
  {
    adcx    rsi, rax
    adox    rbp, rbx
  }
  _RBX = (MEMORY[0x40] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = MEMORY[0x40] * MEMORY[8];
  __asm
  {
    adcx    rbp, rax
    adox    r10, rbx
  }
  _RBX = (MEMORY[0x40] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = MEMORY[0x40] * MEMORY[0x10];
  __asm
  {
    adcx    r10, rax
    adox    r11, rbx
  }
  _RBX = (MEMORY[0x40] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = MEMORY[0x40] * MEMORY[0x18];
  __asm
  {
    adcx    r11, rax
    adox    r12, rbx
  }
  _RBX = (MEMORY[0x40] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = MEMORY[0x40] * MEMORY[0x20];
  __asm
  {
    adcx    r12, rax
    adox    r13, rbx
  }
  _RBX = (MEMORY[0x40] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = MEMORY[0x40] * MEMORY[0x28];
  __asm
  {
    adcx    r13, rax
    adox    r14, rbx
  }
  _RBX = (MEMORY[0x40] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = MEMORY[0x40] * MEMORY[0x30];
  __asm
  {
    adcx    r14, rax
    adox    r15, rbx
  }
  v168 = MEMORY[0x40];
  _RBX = (MEMORY[0x40] * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = MEMORY[0x40] * MEMORY[0x38];
  __asm { adcx    r15, rax }
  *_R8 = _RSI;
  _RSI = 0LL;
  __asm
  {
    adcx    rsi, rsi
    adox    rsi, rbx
  }
  __asm { adox    rbp, [r8+8] }
  _RBX = (MEMORY[0x48] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v168 + 1)) >> 64;
  _RAX = MEMORY[0x48] * **((_QWORD **)&v168 + 1);
  __asm
  {
    adcx    rbp, rax
    adox    r10, rbx
  }
  _RBX = (MEMORY[0x48] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = MEMORY[0x48] * MEMORY[8];
  __asm
  {
    adcx    r10, rax
    adox    r11, rbx
  }
  _RBX = (MEMORY[0x48] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = MEMORY[0x48] * MEMORY[0x10];
  __asm
  {
    adcx    r11, rax
    adox    r12, rbx
  }
  _RBX = (MEMORY[0x48] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = MEMORY[0x48] * MEMORY[0x18];
  __asm
  {
    adcx    r12, rax
    adox    r13, rbx
  }
  _RBX = (MEMORY[0x48] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = MEMORY[0x48] * MEMORY[0x20];
  __asm
  {
    adcx    r13, rax
    adox    r14, rbx
  }
  _RBX = (MEMORY[0x48] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = MEMORY[0x48] * MEMORY[0x28];
  __asm
  {
    adcx    r14, rax
    adox    r15, rbx
  }
  _RBX = (MEMORY[0x48] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = MEMORY[0x48] * MEMORY[0x30];
  __asm
  {
    adcx    r15, rax
    adox    rsi, rbx
  }
  v204 = MEMORY[0x48];
  _RBX = (MEMORY[0x48] * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = MEMORY[0x48] * MEMORY[0x38];
  __asm { adcx    rsi, rax }
  _R8[1] = _RBP;
  _RBP = 0LL;
  __asm
  {
    adcx    rbp, rbp
    adox    rbp, rbx
  }
  __asm { adox    r10, [r8+10h] }
  _RBX = (MEMORY[0x50] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v204 + 1)) >> 64;
  _RAX = MEMORY[0x50] * **((_QWORD **)&v204 + 1);
  __asm
  {
    adcx    r10, rax
    adox    r11, rbx
  }
  _RBX = (MEMORY[0x50] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = MEMORY[0x50] * MEMORY[8];
  __asm
  {
    adcx    r11, rax
    adox    r12, rbx
  }
  _RBX = (MEMORY[0x50] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = MEMORY[0x50] * MEMORY[0x10];
  __asm
  {
    adcx    r12, rax
    adox    r13, rbx
  }
  _RBX = (MEMORY[0x50] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = MEMORY[0x50] * MEMORY[0x18];
  __asm
  {
    adcx    r13, rax
    adox    r14, rbx
  }
  _RBX = (MEMORY[0x50] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = MEMORY[0x50] * MEMORY[0x20];
  __asm
  {
    adcx    r14, rax
    adox    r15, rbx
  }
  _RBX = (MEMORY[0x50] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = MEMORY[0x50] * MEMORY[0x28];
  __asm
  {
    adcx    r15, rax
    adox    rsi, rbx
  }
  _RBX = (MEMORY[0x50] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = MEMORY[0x50] * MEMORY[0x30];
  __asm
  {
    adcx    rsi, rax
    adox    rbp, rbx
  }
  v240 = MEMORY[0x50];
  _RBX = (MEMORY[0x50] * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = MEMORY[0x50] * MEMORY[0x38];
  __asm { adcx    rbp, rax }
  _R8[2] = _R10;
  _R10 = 0LL;
  __asm
  {
    adcx    r10, r10
    adox    r10, rbx
  }
  __asm { adox    r11, [r8+18h] }
  _RBX = (MEMORY[0x58] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v240 + 1)) >> 64;
  _RAX = MEMORY[0x58] * **((_QWORD **)&v240 + 1);
  __asm
  {
    adcx    r11, rax
    adox    r12, rbx
  }
  _RBX = (MEMORY[0x58] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = MEMORY[0x58] * MEMORY[8];
  __asm
  {
    adcx    r12, rax
    adox    r13, rbx
  }
  _RBX = (MEMORY[0x58] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = MEMORY[0x58] * MEMORY[0x10];
  __asm
  {
    adcx    r13, rax
    adox    r14, rbx
  }
  _RBX = (MEMORY[0x58] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = MEMORY[0x58] * MEMORY[0x18];
  __asm
  {
    adcx    r14, rax
    adox    r15, rbx
  }
  _RBX = (MEMORY[0x58] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = MEMORY[0x58] * MEMORY[0x20];
  __asm
  {
    adcx    r15, rax
    adox    rsi, rbx
  }
  _RBX = (MEMORY[0x58] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = MEMORY[0x58] * MEMORY[0x28];
  __asm
  {
    adcx    rsi, rax
    adox    rbp, rbx
  }
  _RBX = (MEMORY[0x58] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = MEMORY[0x58] * MEMORY[0x30];
  __asm
  {
    adcx    rbp, rax
    adox    r10, rbx
  }
  v276 = MEMORY[0x58];
  _RBX = (MEMORY[0x58] * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = MEMORY[0x58] * MEMORY[0x38];
  __asm { adcx    r10, rax }
  _R8[3] = _R11;
  _R11 = 0LL;
  __asm
  {
    adcx    r11, r11
    adox    r11, rbx
  }
  __asm { adox    r12, [r8+20h] }
  _RBX = (MEMORY[0x60] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v276 + 1)) >> 64;
  _RAX = MEMORY[0x60] * **((_QWORD **)&v276 + 1);
  __asm
  {
    adcx    r12, rax
    adox    r13, rbx
  }
  _RBX = (MEMORY[0x60] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = MEMORY[0x60] * MEMORY[8];
  __asm
  {
    adcx    r13, rax
    adox    r14, rbx
  }
  _RBX = (MEMORY[0x60] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = MEMORY[0x60] * MEMORY[0x10];
  __asm
  {
    adcx    r14, rax
    adox    r15, rbx
  }
  _RBX = (MEMORY[0x60] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = MEMORY[0x60] * MEMORY[0x18];
  __asm
  {
    adcx    r15, rax
    adox    rsi, rbx
  }
  _RBX = (MEMORY[0x60] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = MEMORY[0x60] * MEMORY[0x20];
  __asm
  {
    adcx    rsi, rax
    adox    rbp, rbx
  }
  _RBX = (MEMORY[0x60] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = MEMORY[0x60] * MEMORY[0x28];
  __asm
  {
    adcx    rbp, rax
    adox    r10, rbx
  }
  _RBX = (MEMORY[0x60] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = MEMORY[0x60] * MEMORY[0x30];
  __asm
  {
    adcx    r10, rax
    adox    r11, rbx
  }
  v312 = MEMORY[0x60];
  _RBX = (MEMORY[0x60] * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = MEMORY[0x60] * MEMORY[0x38];
  __asm { adcx    r11, rax }
  _R8[4] = _R12;
  _R12 = 0LL;
  __asm
  {
    adcx    r12, r12
    adox    r12, rbx
  }
  __asm { adox    r13, [r8+28h] }
  _RBX = (MEMORY[0x68] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v312 + 1)) >> 64;
  _RAX = MEMORY[0x68] * **((_QWORD **)&v312 + 1);
  __asm
  {
    adcx    r13, rax
    adox    r14, rbx
  }
  _RBX = (MEMORY[0x68] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = MEMORY[0x68] * MEMORY[8];
  __asm
  {
    adcx    r14, rax
    adox    r15, rbx
  }
  _RBX = (MEMORY[0x68] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = MEMORY[0x68] * MEMORY[0x10];
  __asm
  {
    adcx    r15, rax
    adox    rsi, rbx
  }
  _RBX = (MEMORY[0x68] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = MEMORY[0x68] * MEMORY[0x18];
  __asm
  {
    adcx    rsi, rax
    adox    rbp, rbx
  }
  _RBX = (MEMORY[0x68] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = MEMORY[0x68] * MEMORY[0x20];
  __asm
  {
    adcx    rbp, rax
    adox    r10, rbx
  }
  _RBX = (MEMORY[0x68] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = MEMORY[0x68] * MEMORY[0x28];
  __asm
  {
    adcx    r10, rax
    adox    r11, rbx
  }
  _RBX = (MEMORY[0x68] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = MEMORY[0x68] * MEMORY[0x30];
  __asm
  {
    adcx    r11, rax
    adox    r12, rbx
  }
  v348 = MEMORY[0x68];
  _RBX = (MEMORY[0x68] * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = MEMORY[0x68] * MEMORY[0x38];
  __asm { adcx    r12, rax }
  _R8[5] = _R13;
  _R13 = 0LL;
  __asm
  {
    adcx    r13, r13
    adox    r13, rbx
  }
  __asm { adox    r14, [r8+30h] }
  _RBX = (MEMORY[0x70] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v348 + 1)) >> 64;
  _RAX = MEMORY[0x70] * **((_QWORD **)&v348 + 1);
  __asm
  {
    adcx    r14, rax
    adox    r15, rbx
  }
  _RBX = (MEMORY[0x70] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = MEMORY[0x70] * MEMORY[8];
  __asm
  {
    adcx    r15, rax
    adox    rsi, rbx
  }
  _RBX = (MEMORY[0x70] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = MEMORY[0x70] * MEMORY[0x10];
  __asm
  {
    adcx    rsi, rax
    adox    rbp, rbx
  }
  _RBX = (MEMORY[0x70] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = MEMORY[0x70] * MEMORY[0x18];
  __asm
  {
    adcx    rbp, rax
    adox    r10, rbx
  }
  _RBX = (MEMORY[0x70] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = MEMORY[0x70] * MEMORY[0x20];
  __asm
  {
    adcx    r10, rax
    adox    r11, rbx
  }
  _RBX = (MEMORY[0x70] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = MEMORY[0x70] * MEMORY[0x28];
  __asm
  {
    adcx    r11, rax
    adox    r12, rbx
  }
  _RBX = (MEMORY[0x70] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = MEMORY[0x70] * MEMORY[0x30];
  __asm
  {
    adcx    r12, rax
    adox    r13, rbx
  }
  v384 = MEMORY[0x70];
  _RBX = (MEMORY[0x70] * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = MEMORY[0x70] * MEMORY[0x38];
  __asm { adcx    r13, rax }
  _R8[6] = _R14;
  _R14 = 0LL;
  __asm
  {
    adcx    r14, r14
    adox    r14, rbx
  }
  __asm { adox    r15, [r8+38h] }
  _RBX = (MEMORY[0x78] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v384 + 1)) >> 64;
  _RAX = MEMORY[0x78] * **((_QWORD **)&v384 + 1);
  __asm
  {
    adcx    r15, rax
    adox    rsi, rbx
  }
  _RBX = (MEMORY[0x78] * (unsigned __int128)MEMORY[8]) >> 64;
  _RAX = MEMORY[0x78] * MEMORY[8];
  __asm
  {
    adcx    rsi, rax
    adox    rbp, rbx
  }
  _RBX = (MEMORY[0x78] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = MEMORY[0x78] * MEMORY[0x10];
  __asm
  {
    adcx    rbp, rax
    adox    r10, rbx
  }
  _RBX = (MEMORY[0x78] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = MEMORY[0x78] * MEMORY[0x18];
  __asm
  {
    adcx    r10, rax
    adox    r11, rbx
  }
  _RBX = (MEMORY[0x78] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = MEMORY[0x78] * MEMORY[0x20];
  __asm
  {
    adcx    r11, rax
    adox    r12, rbx
  }
  _RBX = (MEMORY[0x78] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = MEMORY[0x78] * MEMORY[0x28];
  __asm
  {
    adcx    r12, rax
    adox    r13, rbx
  }
  _RBX = (MEMORY[0x78] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = MEMORY[0x78] * MEMORY[0x30];
  __asm
  {
    adcx    r13, rax
    adox    r14, rbx
  }
  v420 = MEMORY[0x78];
  _RBX = (MEMORY[0x78] * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = MEMORY[0x78] * MEMORY[0x38];
  __asm { adcx    r14, rax }
  _R8[7] = _R15;
  _R15 = 0LL;
  __asm
  {
    adcx    r15, r15
    adox    r15, rbx
  }
  _R8 += 8;
  *_R8 = _RSI;
  _R8[1] = _RBP;
  _R8[2] = _R10;
  _R8[3] = _R11;
  _R8[4] = _R12;
  _R8[5] = _R13;
  _R8[6] = _R14;
  _R8[7] = _R15;
  *((_QWORD *)&v420 + 1) += 64LL;
  _RBP = _R8[1];
  _R10 = _R8[2];
  _R11 = _R8[3];
  _R12 = _R8[4];
  _R13 = _R8[5];
  _R14 = _R8[6];
  _R15 = _R8[7];
  _RSI = 0LL;
  v437 = *(_QWORD *)(*((_QWORD *)&v420 + 1) + 8LL);
  v435 = (unsigned __int64)**((_QWORD **)&v420 + 1);
  _RBX = (v435 * (unsigned __int128)v437) >> 64;
  _RAX = v435 * v437;
  __asm
  {
    adcx    rbp, rax
    adox    r10, rbx
  }
  _RBX = ((unsigned __int64)v435 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v435 + 1) + 16LL)) >> 64;
  _RAX = v435 * *(_QWORD *)(*((_QWORD *)&v435 + 1) + 16LL);
  __asm
  {
    adcx    r10, rax
    adox    r11, rbx
  }
  _RBX = ((unsigned __int64)v435 * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = v435 * MEMORY[0x18];
  __asm
  {
    adcx    r11, rax
    adox    r12, rbx
  }
  _RBX = ((unsigned __int64)v435 * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = v435 * MEMORY[0x20];
  __asm
  {
    adcx    r12, rax
    adox    r13, rbx
  }
  _RBX = ((unsigned __int64)v435 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v435 * MEMORY[0x28];
  __asm
  {
    adcx    r13, rax
    adox    r14, rbx
  }
  _RBX = ((unsigned __int64)v435 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v435 * MEMORY[0x30];
  __asm
  {
    adcx    r14, rax
    adox    r15, rbx
  }
  _RBX = ((unsigned __int64)v435 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v435 * MEMORY[0x38];
  __asm { adcx    r15, rax }
  _R8[1] = _RBP;
  __asm
  {
    adcx    rsi, rsi
    adox    rsi, rbx
  }
  _R8[2] = _R10;
  _RBX = (MEMORY[8] * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = MEMORY[8] * MEMORY[0x10];
  __asm
  {
    adcx    r11, rax
    adox    r12, rbx
  }
  _RBX = (MEMORY[8] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = MEMORY[8] * MEMORY[0x18];
  __asm
  {
    adcx    r12, rax
    adox    r13, rbx
  }
  _RBX = (MEMORY[8] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = MEMORY[8] * MEMORY[0x20];
  __asm
  {
    adcx    r13, rax
    adox    r14, rbx
  }
  _RBX = (MEMORY[8] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = MEMORY[8] * MEMORY[0x28];
  __asm
  {
    adcx    r14, rax
    adox    r15, rbx
  }
  v482 = MEMORY[8];
  _RBX = (MEMORY[8] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = MEMORY[8] * MEMORY[0x30];
  __asm
  {
    adcx    r15, rax
    adox    rsi, rbx
  }
  *(_QWORD *)&v482 = MEMORY[0x38];
  _RBP = 0LL;
  _R10 = 0LL;
  _R8[3] = _R11;
  _RBX = ((unsigned __int64)v482 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v482 + 1) + 8LL)) >> 64;
  _RAX = v482 * *(_QWORD *)(*((_QWORD *)&v482 + 1) + 8LL);
  __asm
  {
    adcx    rsi, rax
    adox    rbp, rbx
  }
  _RBX = ((unsigned __int64)v482 * (unsigned __int128)MEMORY[0x10]) >> 64;
  _RAX = v482 * MEMORY[0x10];
  __asm { adcx    rbp, rax }
  _R8[4] = _R12;
  __asm { adcx    r10, rbx }
  _RBX = (MEMORY[0x10] * (unsigned __int128)MEMORY[0x18]) >> 64;
  _RAX = MEMORY[0x10] * MEMORY[0x18];
  __asm
  {
    adcx    r13, rax
    adox    r14, rbx
  }
  _RBX = (MEMORY[0x10] * (unsigned __int128)MEMORY[0x20]) >> 64;
  _RAX = MEMORY[0x10] * MEMORY[0x20];
  __asm
  {
    adcx    r14, rax
    adox    r15, rbx
  }
  _RBX = (MEMORY[0x10] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = MEMORY[0x10] * MEMORY[0x28];
  __asm
  {
    adcx    r15, rax
    adox    rsi, rbx
  }
  _RBX = (MEMORY[0x10] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = MEMORY[0x10] * MEMORY[0x30];
  __asm
  {
    adcx    rsi, rax
    adox    rbp, rbx
  }
  _R11 = 0LL;
  _R12 = 0LL;
  _RBX = (MEMORY[0x20] * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = MEMORY[0x20] * MEMORY[0x28];
  __asm
  {
    adcx    rbp, rax
    adox    r10, rbx
  }
  v519 = MEMORY[0x20];
  _RBX = (MEMORY[0x20] * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = MEMORY[0x20] * MEMORY[0x30];
  __asm
  {
    adcx    r10, rax
    adox    r11, rbx
  }
  *(_QWORD *)&v519 = MEMORY[0x28];
  _R8[5] = _R13;
  v525 = *(_QWORD *)(*((_QWORD *)&v519 + 1) + 48LL);
  v519 = (unsigned __int64)v519;
  _RBX = ((unsigned __int64)v519 * (unsigned __int128)v525) >> 64;
  _RAX = v519 * v525;
  __asm
  {
    adcx    r11, rax
    adcx    r12, rbx
  }
  *(_QWORD *)&v519 = MEMORY[0x18];
  _R8[6] = _R14;
  _RBX = ((unsigned __int64)v519 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v519 + 1) + 32LL)) >> 64;
  _RAX = v519 * *(_QWORD *)(*((_QWORD *)&v519 + 1) + 32LL);
  __asm
  {
    adcx    r15, rax
    adox    rsi, rbx
  }
  _RBX = ((unsigned __int64)v519 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v519 * MEMORY[0x28];
  __asm
  {
    adcx    rsi, rax
    adox    rbp, rbx
  }
  _RBX = ((unsigned __int64)v519 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v519 * MEMORY[0x30];
  __asm
  {
    adcx    rbp, rax
    adox    r10, rbx
  }
  v519 = (unsigned __int64)v519;
  _RBX = ((unsigned __int64)v519 * (unsigned __int128)MEMORY[0x38]) >> 64;
  _RAX = v519 * MEMORY[0x38];
  __asm
  {
    adcx    r10, rax
    adox    r11, rbx
  }
  *(_QWORD *)&v519 = MEMORY[0x38];
  _R13 = 0LL;
  _R14 = 0LL;
  _R8[7] = _R15;
  _RBX = ((unsigned __int64)v519 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v519 + 1) + 32LL)) >> 64;
  _RAX = v519 * *(_QWORD *)(*((_QWORD *)&v519 + 1) + 32LL);
  __asm
  {
    adcx    r11, rax
    adox    r12, rbx
  }
  _RBX = ((unsigned __int64)v519 * (unsigned __int128)MEMORY[0x28]) >> 64;
  _RAX = v519 * MEMORY[0x28];
  __asm
  {
    adcx    r12, rax
    adox    r13, rbx
  }
  _RBX = ((unsigned __int64)v519 * (unsigned __int128)MEMORY[0x30]) >> 64;
  _RAX = v519 * MEMORY[0x30];
  __asm
  {
    adcx    r13, rax
    adcx    r14, rbx
  }
  _R8[8] = _RSI;
  _R8[9] = _RBP;
  _R8[10] = _R10;
  _R8[11] = _R11;
  _R8[12] = _R12;
  _R8[13] = _R13;
  _R8[14] = _R14;
  _R8[15] = 0LL;
  _R10 = *a3;
  _R11 = a3[1];
  v561 = MEMORY[0];
  _RBX = (MEMORY[0] * (unsigned __int128)MEMORY[0]) >> 64;
  _RAX = MEMORY[0] * MEMORY[0];
  __asm
  {
    adcx    rax, r10
    adox    rax, r10
    adcx    rbx, r11
    adox    rbx, r11
  }
  *a3 = _RAX;
  a3[1] = _RBX;
  _R10 = a3[2];
  _R11 = a3[3];
  v570 = *(unsigned __int64 *)(*((_QWORD *)&v561 + 1) + 8LL);
  _RBX = (unsigned __int128)(v570 * v570) >> 64;
  _RAX = v570 * v570;
  __asm
  {
    adcx    rax, r10
    adox    rax, r10
    adcx    rbx, r11
    adox    rbx, r11
  }
  a3[2] = _RAX;
  a3[3] = _RBX;
  _R10 = a3[4];
  _R11 = a3[5];
  v579 = *(unsigned __int64 *)(*((_QWORD *)&v570 + 1) + 16LL);
  _RBX = (unsigned __int128)(v579 * v579) >> 64;
  _RAX = v579 * v579;
  __asm
  {
    adcx    rax, r10
    adox    rax, r10
    adcx    rbx, r11
    adox    rbx, r11
  }
  a3[4] = _RAX;
  a3[5] = _RBX;
  _R10 = a3[6];
  _R11 = a3[7];
  v588 = *(unsigned __int64 *)(*((_QWORD *)&v579 + 1) + 24LL);
  _RBX = (unsigned __int128)(v588 * v588) >> 64;
  _RAX = v588 * v588;
  __asm
  {
    adcx    rax, r10
    adox    rax, r10
    adcx    rbx, r11
    adox    rbx, r11
  }
  a3[6] = _RAX;
  a3[7] = _RBX;
  _R10 = a3[8];
  _R11 = a3[9];
  v597 = *(unsigned __int64 *)(*((_QWORD *)&v588 + 1) + 32LL);
  _RBX = (unsigned __int128)(v597 * v597) >> 64;
  _RAX = v597 * v597;
  __asm
  {
    adcx    rax, r10
    adox    rax, r10
    adcx    rbx, r11
    adox    rbx, r11
  }
  a3[8] = _RAX;
  a3[9] = _RBX;
  _R10 = a3[10];
  _R11 = a3[11];
  v606 = *(unsigned __int64 *)(*((_QWORD *)&v597 + 1) + 40LL);
  _RBX = (unsigned __int128)(v606 * v606) >> 64;
  _RAX = v606 * v606;
  __asm
  {
    adcx    rax, r10
    adox    rax, r10
    adcx    rbx, r11
    adox    rbx, r11
  }
  a3[10] = _RAX;
  a3[11] = _RBX;
  _R10 = a3[12];
  _R11 = a3[13];
  v615 = *(unsigned __int64 *)(*((_QWORD *)&v606 + 1) + 48LL);
  _RBX = (unsigned __int128)(v615 * v615) >> 64;
  _RAX = v615 * v615;
  __asm
  {
    adcx    rax, r10
    adox    rax, r10
    adcx    rbx, r11
    adox    rbx, r11
  }
  a3[12] = _RAX;
  a3[13] = _RBX;
  _R10 = a3[14];
  _R11 = a3[15];
  v624 = *(unsigned __int64 *)(*((_QWORD *)&v615 + 1) + 56LL);
  _RBX = (unsigned __int128)(v624 * v624) >> 64;
  _RAX = v624 * v624;
  __asm
  {
    adcx    rax, r10
    adox    rax, r10
    adcx    rbx, r11
    adox    rbx, r11
  }
  a3[14] = _RAX;
  a3[15] = _RBX;
  _R10 = a3[16];
  _R11 = a3[17];
  v633 = *(unsigned __int64 *)(*((_QWORD *)&v624 + 1) + 64LL);
  _RBX = (unsigned __int128)(v633 * v633) >> 64;
  _RAX = v633 * v633;
  __asm
  {
    adcx    rax, r10
    adox    rax, r10
    adcx    rbx, r11
    adox    rbx, r11
  }
  a3[16] = _RAX;
  a3[17] = _RBX;
  _R10 = a3[18];
  _R11 = a3[19];
  v642 = *(unsigned __int64 *)(*((_QWORD *)&v633 + 1) + 72LL);
  _RBX = (unsigned __int128)(v642 * v642) >> 64;
  _RAX = v642 * v642;
  __asm
  {
    adcx    rax, r10
    adox    rax, r10
    adcx    rbx, r11
    adox    rbx, r11
  }
  a3[18] = _RAX;
  a3[19] = _RBX;
  _R10 = a3[20];
  _R11 = a3[21];
  v651 = *(unsigned __int64 *)(*((_QWORD *)&v642 + 1) + 80LL);
  _RBX = (unsigned __int128)(v651 * v651) >> 64;
  _RAX = v651 * v651;
  __asm
  {
    adcx    rax, r10
    adox    rax, r10
    adcx    rbx, r11
    adox    rbx, r11
  }
  a3[20] = _RAX;
  a3[21] = _RBX;
  _R10 = a3[22];
  _R11 = a3[23];
  v660 = *(unsigned __int64 *)(*((_QWORD *)&v651 + 1) + 88LL);
  _RBX = (unsigned __int128)(v660 * v660) >> 64;
  _RAX = v660 * v660;
  __asm
  {
    adcx    rax, r10
    adox    rax, r10
    adcx    rbx, r11
    adox    rbx, r11
  }
  a3[22] = _RAX;
  a3[23] = _RBX;
  _R10 = a3[24];
  _R11 = a3[25];
  v669 = *(unsigned __int64 *)(*((_QWORD *)&v660 + 1) + 96LL);
  _RBX = (unsigned __int128)(v669 * v669) >> 64;
  _RAX = v669 * v669;
  __asm
  {
    adcx    rax, r10
    adox    rax, r10
    adcx    rbx, r11
    adox    rbx, r11
  }
  a3[24] = _RAX;
  a3[25] = _RBX;
  _R10 = a3[26];
  _R11 = a3[27];
  v678 = *(unsigned __int64 *)(*((_QWORD *)&v669 + 1) + 104LL);
  _RBX = (unsigned __int128)(v678 * v678) >> 64;
  _RAX = v678 * v678;
  __asm
  {
    adcx    rax, r10
    adox    rax, r10
    adcx    rbx, r11
    adox    rbx, r11
  }
  a3[26] = _RAX;
  a3[27] = _RBX;
  _R10 = a3[28];
  _R11 = a3[29];
  v687 = *(unsigned __int64 *)(*((_QWORD *)&v678 + 1) + 112LL);
  _RBX = (unsigned __int128)(v687 * v687) >> 64;
  _RAX = v687 * v687;
  __asm
  {
    adcx    rax, r10
    adox    rax, r10
    adcx    rbx, r11
    adox    rbx, r11
  }
  a3[28] = _RAX;
  a3[29] = _RBX;
  _R10 = a3[30];
  _R11 = a3[31];
  v696 = *(unsigned __int64 *)(*((_QWORD *)&v687 + 1) + 120LL);
  _RBX = (unsigned __int128)(v696 * v696) >> 64;
  _RAX = v696 * v696;
  __asm
  {
    adcx    rax, r10
    adox    rax, r10
    adcx    rbx, r11
    adox    rbx, r11
  }
  a3[30] = result;
  a3[31] = _RBX;
  return result;
}
