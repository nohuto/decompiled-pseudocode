/*
 * XREFs of sub_1404116B0 @ 0x1404116B0
 * Callers:
 *     sub_14040B4A4 @ 0x14040B4A4 (sub_14040B4A4.c)
 *     sub_14040C4E0 @ 0x14040C4E0 (sub_14040C4E0.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall sub_1404116B0(_QWORD *a1, __int64 a2, unsigned __int64 *a3, __int64 a4, __int64 a5)
{
  _OWORD *v5; // rbx
  __int64 v7; // rax
  __int128 v46; // rdx
  __int128 v82; // rdx
  __int128 v118; // rdx
  __int128 v154; // rdx
  __int128 v190; // rdx
  __int128 v226; // rdx
  __int128 v262; // rdx
  __int64 result; // rax
  unsigned __int64 *v297; // [rsp+58h] [rbp+18h]
  int v298; // [rsp+60h] [rbp+20h]

  v297 = a3;
  v298 = a4;
  v5 = (_OWORD *)a5;
  _RDI = (_QWORD *)a5;
  v7 = a4;
  do
  {
    *v5 = 0LL;
    v5[1] = 0LL;
    v5[2] = 0LL;
    v5[3] = 0LL;
    v5 += 4;
    --v7;
  }
  while ( v7 );
  do
  {
    _RSI = 0LL;
    _RBP = 0LL;
    _R10 = 0LL;
    _R11 = 0LL;
    _R12 = 0LL;
    _R13 = 0LL;
    _R14 = 0LL;
    _R15 = 0LL;
    do
    {
      __asm { adox    rsi, [rdi] }
      _RBX = (*a3 * (unsigned __int128)(unsigned __int64)*a1) >> 64;
      _RAX = *a3 * *a1;
      __asm
      {
        adcx    rsi, rax
        adox    rbp, rbx
      }
      _RBX = (*a3 * (unsigned __int128)MEMORY[8]) >> 64;
      _RAX = *a3 * MEMORY[8];
      __asm
      {
        adcx    rbp, rax
        adox    r10, rbx
      }
      _RBX = (*a3 * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = *a3 * MEMORY[0x10];
      __asm
      {
        adcx    r10, rax
        adox    r11, rbx
      }
      _RBX = (*a3 * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = *a3 * MEMORY[0x18];
      __asm
      {
        adcx    r11, rax
        adox    r12, rbx
      }
      _RBX = (*a3 * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = *a3 * MEMORY[0x20];
      __asm
      {
        adcx    r12, rax
        adox    r13, rbx
      }
      _RBX = (*a3 * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = *a3 * MEMORY[0x28];
      __asm
      {
        adcx    r13, rax
        adox    r14, rbx
      }
      _RBX = (*a3 * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = *a3 * MEMORY[0x30];
      __asm
      {
        adcx    r14, rax
        adox    r15, rbx
      }
      v46 = *a3;
      _RBX = (v46 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = *a3 * MEMORY[0x38];
      __asm { adcx    r15, rax }
      *_RDI = _RSI;
      _RSI = 0LL;
      __asm
      {
        adcx    rsi, rsi
        adox    rsi, rbx
      }
      __asm { adox    rbp, [rdi+8] }
      _RBX = (a3[1] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v46 + 1)) >> 64;
      _RAX = a3[1] * **((_QWORD **)&v46 + 1);
      __asm
      {
        adcx    rbp, rax
        adox    r10, rbx
      }
      _RBX = (a3[1] * (unsigned __int128)MEMORY[8]) >> 64;
      _RAX = a3[1] * MEMORY[8];
      __asm
      {
        adcx    r10, rax
        adox    r11, rbx
      }
      _RBX = (a3[1] * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = a3[1] * MEMORY[0x10];
      __asm
      {
        adcx    r11, rax
        adox    r12, rbx
      }
      _RBX = (a3[1] * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = a3[1] * MEMORY[0x18];
      __asm
      {
        adcx    r12, rax
        adox    r13, rbx
      }
      _RBX = (a3[1] * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = a3[1] * MEMORY[0x20];
      __asm
      {
        adcx    r13, rax
        adox    r14, rbx
      }
      _RBX = (a3[1] * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = a3[1] * MEMORY[0x28];
      __asm
      {
        adcx    r14, rax
        adox    r15, rbx
      }
      _RBX = (a3[1] * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = a3[1] * MEMORY[0x30];
      __asm
      {
        adcx    r15, rax
        adox    rsi, rbx
      }
      v82 = a3[1];
      _RBX = (v82 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = a3[1] * MEMORY[0x38];
      __asm { adcx    rsi, rax }
      _RDI[1] = _RBP;
      _RBP = 0LL;
      __asm
      {
        adcx    rbp, rbp
        adox    rbp, rbx
      }
      __asm { adox    r10, [rdi+10h] }
      _RBX = (a3[2] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v82 + 1)) >> 64;
      _RAX = a3[2] * **((_QWORD **)&v82 + 1);
      __asm
      {
        adcx    r10, rax
        adox    r11, rbx
      }
      _RBX = (a3[2] * (unsigned __int128)MEMORY[8]) >> 64;
      _RAX = a3[2] * MEMORY[8];
      __asm
      {
        adcx    r11, rax
        adox    r12, rbx
      }
      _RBX = (a3[2] * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = a3[2] * MEMORY[0x10];
      __asm
      {
        adcx    r12, rax
        adox    r13, rbx
      }
      _RBX = (a3[2] * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = a3[2] * MEMORY[0x18];
      __asm
      {
        adcx    r13, rax
        adox    r14, rbx
      }
      _RBX = (a3[2] * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = a3[2] * MEMORY[0x20];
      __asm
      {
        adcx    r14, rax
        adox    r15, rbx
      }
      _RBX = (a3[2] * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = a3[2] * MEMORY[0x28];
      __asm
      {
        adcx    r15, rax
        adox    rsi, rbx
      }
      _RBX = (a3[2] * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = a3[2] * MEMORY[0x30];
      __asm
      {
        adcx    rsi, rax
        adox    rbp, rbx
      }
      v118 = a3[2];
      _RBX = (v118 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = a3[2] * MEMORY[0x38];
      __asm { adcx    rbp, rax }
      _RDI[2] = _R10;
      _R10 = 0LL;
      __asm
      {
        adcx    r10, r10
        adox    r10, rbx
      }
      __asm { adox    r11, [rdi+18h] }
      _RBX = (a3[3] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v118 + 1)) >> 64;
      _RAX = a3[3] * **((_QWORD **)&v118 + 1);
      __asm
      {
        adcx    r11, rax
        adox    r12, rbx
      }
      _RBX = (a3[3] * (unsigned __int128)MEMORY[8]) >> 64;
      _RAX = a3[3] * MEMORY[8];
      __asm
      {
        adcx    r12, rax
        adox    r13, rbx
      }
      _RBX = (a3[3] * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = a3[3] * MEMORY[0x10];
      __asm
      {
        adcx    r13, rax
        adox    r14, rbx
      }
      _RBX = (a3[3] * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = a3[3] * MEMORY[0x18];
      __asm
      {
        adcx    r14, rax
        adox    r15, rbx
      }
      _RBX = (a3[3] * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = a3[3] * MEMORY[0x20];
      __asm
      {
        adcx    r15, rax
        adox    rsi, rbx
      }
      _RBX = (a3[3] * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = a3[3] * MEMORY[0x28];
      __asm
      {
        adcx    rsi, rax
        adox    rbp, rbx
      }
      _RBX = (a3[3] * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = a3[3] * MEMORY[0x30];
      __asm
      {
        adcx    rbp, rax
        adox    r10, rbx
      }
      v154 = a3[3];
      _RBX = (v154 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = a3[3] * MEMORY[0x38];
      __asm { adcx    r10, rax }
      _RDI[3] = _R11;
      _R11 = 0LL;
      __asm
      {
        adcx    r11, r11
        adox    r11, rbx
      }
      __asm { adox    r12, [rdi+20h] }
      _RBX = (a3[4] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v154 + 1)) >> 64;
      _RAX = a3[4] * **((_QWORD **)&v154 + 1);
      __asm
      {
        adcx    r12, rax
        adox    r13, rbx
      }
      _RBX = (a3[4] * (unsigned __int128)MEMORY[8]) >> 64;
      _RAX = a3[4] * MEMORY[8];
      __asm
      {
        adcx    r13, rax
        adox    r14, rbx
      }
      _RBX = (a3[4] * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = a3[4] * MEMORY[0x10];
      __asm
      {
        adcx    r14, rax
        adox    r15, rbx
      }
      _RBX = (a3[4] * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = a3[4] * MEMORY[0x18];
      __asm
      {
        adcx    r15, rax
        adox    rsi, rbx
      }
      _RBX = (a3[4] * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = a3[4] * MEMORY[0x20];
      __asm
      {
        adcx    rsi, rax
        adox    rbp, rbx
      }
      _RBX = (a3[4] * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = a3[4] * MEMORY[0x28];
      __asm
      {
        adcx    rbp, rax
        adox    r10, rbx
      }
      _RBX = (a3[4] * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = a3[4] * MEMORY[0x30];
      __asm
      {
        adcx    r10, rax
        adox    r11, rbx
      }
      v190 = a3[4];
      _RBX = (v190 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = a3[4] * MEMORY[0x38];
      __asm { adcx    r11, rax }
      _RDI[4] = _R12;
      _R12 = 0LL;
      __asm
      {
        adcx    r12, r12
        adox    r12, rbx
      }
      __asm { adox    r13, [rdi+28h] }
      _RBX = (a3[5] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v190 + 1)) >> 64;
      _RAX = a3[5] * **((_QWORD **)&v190 + 1);
      __asm
      {
        adcx    r13, rax
        adox    r14, rbx
      }
      _RBX = (a3[5] * (unsigned __int128)MEMORY[8]) >> 64;
      _RAX = a3[5] * MEMORY[8];
      __asm
      {
        adcx    r14, rax
        adox    r15, rbx
      }
      _RBX = (a3[5] * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = a3[5] * MEMORY[0x10];
      __asm
      {
        adcx    r15, rax
        adox    rsi, rbx
      }
      _RBX = (a3[5] * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = a3[5] * MEMORY[0x18];
      __asm
      {
        adcx    rsi, rax
        adox    rbp, rbx
      }
      _RBX = (a3[5] * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = a3[5] * MEMORY[0x20];
      __asm
      {
        adcx    rbp, rax
        adox    r10, rbx
      }
      _RBX = (a3[5] * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = a3[5] * MEMORY[0x28];
      __asm
      {
        adcx    r10, rax
        adox    r11, rbx
      }
      _RBX = (a3[5] * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = a3[5] * MEMORY[0x30];
      __asm
      {
        adcx    r11, rax
        adox    r12, rbx
      }
      v226 = a3[5];
      _RBX = (v226 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = a3[5] * MEMORY[0x38];
      __asm { adcx    r12, rax }
      _RDI[5] = _R13;
      _R13 = 0LL;
      __asm
      {
        adcx    r13, r13
        adox    r13, rbx
      }
      __asm { adox    r14, [rdi+30h] }
      _RBX = (a3[6] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v226 + 1)) >> 64;
      _RAX = a3[6] * **((_QWORD **)&v226 + 1);
      __asm
      {
        adcx    r14, rax
        adox    r15, rbx
      }
      _RBX = (a3[6] * (unsigned __int128)MEMORY[8]) >> 64;
      _RAX = a3[6] * MEMORY[8];
      __asm
      {
        adcx    r15, rax
        adox    rsi, rbx
      }
      _RBX = (a3[6] * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = a3[6] * MEMORY[0x10];
      __asm
      {
        adcx    rsi, rax
        adox    rbp, rbx
      }
      _RBX = (a3[6] * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = a3[6] * MEMORY[0x18];
      __asm
      {
        adcx    rbp, rax
        adox    r10, rbx
      }
      _RBX = (a3[6] * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = a3[6] * MEMORY[0x20];
      __asm
      {
        adcx    r10, rax
        adox    r11, rbx
      }
      _RBX = (a3[6] * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = a3[6] * MEMORY[0x28];
      __asm
      {
        adcx    r11, rax
        adox    r12, rbx
      }
      _RBX = (a3[6] * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = a3[6] * MEMORY[0x30];
      __asm
      {
        adcx    r12, rax
        adox    r13, rbx
      }
      v262 = a3[6];
      _RBX = (v262 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = a3[6] * MEMORY[0x38];
      __asm { adcx    r13, rax }
      _RDI[6] = _R14;
      _R14 = 0LL;
      __asm
      {
        adcx    r14, r14
        adox    r14, rbx
      }
      __asm { adox    r15, [rdi+38h] }
      _RBX = (a3[7] * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v262 + 1)) >> 64;
      _RAX = a3[7] * **((_QWORD **)&v262 + 1);
      __asm
      {
        adcx    r15, rax
        adox    rsi, rbx
      }
      _RBX = (a3[7] * (unsigned __int128)MEMORY[8]) >> 64;
      _RAX = a3[7] * MEMORY[8];
      __asm
      {
        adcx    rsi, rax
        adox    rbp, rbx
      }
      _RBX = (a3[7] * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = a3[7] * MEMORY[0x10];
      __asm
      {
        adcx    rbp, rax
        adox    r10, rbx
      }
      _RBX = (a3[7] * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = a3[7] * MEMORY[0x18];
      __asm
      {
        adcx    r10, rax
        adox    r11, rbx
      }
      _RBX = (a3[7] * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = a3[7] * MEMORY[0x20];
      __asm
      {
        adcx    r11, rax
        adox    r12, rbx
      }
      _RBX = (a3[7] * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = a3[7] * MEMORY[0x28];
      __asm
      {
        adcx    r12, rax
        adox    r13, rbx
      }
      _RBX = (a3[7] * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = a3[7] * MEMORY[0x30];
      __asm
      {
        adcx    r13, rax
        adox    r14, rbx
      }
      *(_OWORD *)(&a1 - 1) = a3[7];
      _RBX = (*(_OWORD *)(&a1 - 1) * MEMORY[0x38]) >> 64;
      _RAX = a3[7] * MEMORY[0x38];
      __asm { adcx    r14, rax }
      _RDI[7] = _R15;
      _R15 = 0LL;
      __asm
      {
        adcx    r15, r15
        adox    r15, rbx
      }
      a3 += 8;
      _RDI += 8;
      LODWORD(a4) = a4 - 1;
    }
    while ( (_DWORD)a4 );
    *_RDI = _RSI;
    _RDI[1] = _RBP;
    _RDI[2] = _R10;
    _RDI[3] = _R11;
    _RDI[4] = _R12;
    _RDI[5] = _R13;
    _RDI[6] = _R14;
    _RDI[7] = _R15;
    _RDI = (_QWORD *)(a5 + 64);
    a5 += 64LL;
    LODWORD(a4) = v298;
    a3 = v297;
    a1 += 8;
    result = --a2;
  }
  while ( a2 );
  return result;
}
