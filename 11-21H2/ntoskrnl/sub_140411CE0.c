/*
 * XREFs of sub_140411CE0 @ 0x140411CE0
 * Callers:
 *     sub_14040B5F0 @ 0x14040B5F0 (sub_14040B5F0.c)
 *     sub_14040CAD0 @ 0x14040CAD0 (sub_14040CAD0.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall sub_140411CE0(unsigned __int64 *a1, int a2, __int64 *a3)
{
  int v3; // r9d
  __int64 *v4; // rbx
  __int128 v14; // rdx
  unsigned __int64 v16; // rt2
  __int128 v61; // rdx
  __int128 v98; // rdx
  unsigned __int64 v104; // rt2
  _QWORD *v134; // rcx OVERLAPPED
  int v139; // r9d
  __int64 v140; // rdi
  __int128 v172; // rdx
  __int128 v208; // rdx
  __int128 v244; // rdx
  __int128 v280; // rdx
  __int128 v316; // rdx
  __int128 v352; // rdx
  __int128 v388; // rdx
  unsigned __int64 *v421; // rcx
  int v422; // r9d
  __int64 *v423; // r8
  __int128 v429; // rdx
  __int128 v440; // rdx
  __int128 v449; // rdx
  __int128 v458; // rdx
  __int128 v467; // rdx
  __int128 v476; // rdx
  __int128 v485; // rdx
  __int128 v494; // rdx
  __int64 result; // rax
  unsigned __int64 *v500; // [rsp+48h] [rbp+8h]
  int v501; // [rsp+50h] [rbp+10h]
  int v502; // [rsp+54h] [rbp+14h]
  __int64 *v503; // [rsp+58h] [rbp+18h]
  __int64 *v504; // [rsp+60h] [rbp+20h]

  v500 = a1;
  v501 = a2;
  v503 = a3;
  v502 = a2;
  v504 = a3;
  v3 = a2;
  v4 = a3;
  do
  {
    *v4 = 0LL;
    v4[1] = 0LL;
    v4[2] = 0LL;
    v4[3] = 0LL;
    v4[4] = 0LL;
    v4[5] = 0LL;
    v4[6] = 0LL;
    v4[7] = 0LL;
    v4 += 8;
    --a2;
  }
  while ( a2 );
  while ( 1 )
  {
    _RBP = a3[1];
    _R10 = a3[2];
    _R11 = a3[3];
    _R12 = a3[4];
    _R13 = a3[5];
    _R14 = a3[6];
    _R15 = a3[7];
    _RSI = 0LL;
    v16 = a1[1];
    v14 = *a1;
    _RBX = (v14 * (unsigned __int128)v16) >> 64;
    _RAX = v14 * v16;
    __asm
    {
      adcx    rbp, rax
      adox    r10, rbx
    }
    _RBX = ((unsigned __int64)v14 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v14 + 1) + 16LL)) >> 64;
    _RAX = v14 * *(_QWORD *)(*((_QWORD *)&v14 + 1) + 16LL);
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
    v61 = MEMORY[8];
    _RBX = (MEMORY[8] * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = MEMORY[8] * MEMORY[0x30];
    __asm
    {
      adcx    r15, rax
      adox    rsi, rbx
    }
    *(_QWORD *)&v61 = MEMORY[0x38];
    _RBP = 0LL;
    _R10 = 0LL;
    a3[3] = _R11;
    _RBX = ((unsigned __int64)v61 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v61 + 1) + 8LL)) >> 64;
    _RAX = v61 * *(_QWORD *)(*((_QWORD *)&v61 + 1) + 8LL);
    __asm
    {
      adcx    rsi, rax
      adox    rbp, rbx
    }
    _RBX = ((unsigned __int64)v61 * (unsigned __int128)MEMORY[0x10]) >> 64;
    _RAX = v61 * MEMORY[0x10];
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
    v98 = MEMORY[0x20];
    _RBX = (MEMORY[0x20] * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = MEMORY[0x20] * MEMORY[0x30];
    __asm
    {
      adcx    r10, rax
      adox    r11, rbx
    }
    *(_QWORD *)&v98 = MEMORY[0x28];
    a3[5] = _R13;
    v104 = *(_QWORD *)(*((_QWORD *)&v98 + 1) + 48LL);
    v98 = (unsigned __int64)v98;
    _RBX = ((unsigned __int64)v98 * (unsigned __int128)v104) >> 64;
    _RAX = v98 * v104;
    __asm
    {
      adcx    r11, rax
      adcx    r12, rbx
    }
    *(_QWORD *)&v98 = MEMORY[0x18];
    a3[6] = _R14;
    _RBX = ((unsigned __int64)v98 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v98 + 1) + 32LL)) >> 64;
    _RAX = v98 * *(_QWORD *)(*((_QWORD *)&v98 + 1) + 32LL);
    __asm
    {
      adcx    r15, rax
      adox    rsi, rbx
    }
    _RBX = ((unsigned __int64)v98 * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v98 * MEMORY[0x28];
    __asm
    {
      adcx    rsi, rax
      adox    rbp, rbx
    }
    _RBX = ((unsigned __int64)v98 * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v98 * MEMORY[0x30];
    __asm
    {
      adcx    rbp, rax
      adox    r10, rbx
    }
    v98 = (unsigned __int64)v98;
    _RBX = ((unsigned __int64)v98 * (unsigned __int128)MEMORY[0x38]) >> 64;
    _RAX = v98 * MEMORY[0x38];
    __asm
    {
      adcx    r10, rax
      adox    r11, rbx
    }
    *(_QWORD *)&v98 = MEMORY[0x38];
    _R13 = 0LL;
    _R14 = 0LL;
    a3[7] = _R15;
    _RBX = ((unsigned __int64)v98 * (unsigned __int128)*(unsigned __int64 *)(*((_QWORD *)&v98 + 1) + 32LL)) >> 64;
    _RAX = v98 * *(_QWORD *)(*((_QWORD *)&v98 + 1) + 32LL);
    __asm
    {
      adcx    r11, rax
      adox    r12, rbx
    }
    _RBX = ((unsigned __int64)v98 * (unsigned __int128)MEMORY[0x28]) >> 64;
    _RAX = v98 * MEMORY[0x28];
    __asm
    {
      adcx    r12, rax
      adox    r13, rbx
    }
    *(_OWORD *)(&v134 - 1) = (unsigned __int64)v98;
    _RBX = ((unsigned __int64)v98 * (unsigned __int128)MEMORY[0x30]) >> 64;
    _RAX = v98 * MEMORY[0x30];
    __asm
    {
      adcx    r13, rax
      adcx    r14, rbx
    }
    _R15 = 0LL;
    v139 = v3 - 1;
    if ( !v139 )
      break;
    v140 = 64LL;
    _R8 = a3 + 8;
    do
    {
      __asm { adox    rsi, [r8] }
      _RBX = (*(unsigned __int64 *)v140 * (unsigned __int128)(unsigned __int64)*v134) >> 64;
      _RAX = *(_QWORD *)v140 * *v134;
      __asm
      {
        adcx    rsi, rax
        adox    rbp, rbx
      }
      _RBX = (*(unsigned __int64 *)v140 * (unsigned __int128)MEMORY[8]) >> 64;
      _RAX = *(_QWORD *)v140 * MEMORY[8];
      __asm
      {
        adcx    rbp, rax
        adox    r10, rbx
      }
      _RBX = (*(unsigned __int64 *)v140 * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = *(_QWORD *)v140 * MEMORY[0x10];
      __asm
      {
        adcx    r10, rax
        adox    r11, rbx
      }
      _RBX = (*(unsigned __int64 *)v140 * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = *(_QWORD *)v140 * MEMORY[0x18];
      __asm
      {
        adcx    r11, rax
        adox    r12, rbx
      }
      _RBX = (*(unsigned __int64 *)v140 * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = *(_QWORD *)v140 * MEMORY[0x20];
      __asm
      {
        adcx    r12, rax
        adox    r13, rbx
      }
      _RBX = (*(unsigned __int64 *)v140 * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = *(_QWORD *)v140 * MEMORY[0x28];
      __asm
      {
        adcx    r13, rax
        adox    r14, rbx
      }
      _RBX = (*(unsigned __int64 *)v140 * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = *(_QWORD *)v140 * MEMORY[0x30];
      __asm
      {
        adcx    r14, rax
        adox    r15, rbx
      }
      v172 = *(unsigned __int64 *)v140;
      _RBX = (v172 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = *(_QWORD *)v140 * MEMORY[0x38];
      __asm { adcx    r15, rax }
      *_R8 = _RSI;
      _RSI = 0LL;
      __asm
      {
        adcx    rsi, rsi
        adox    rsi, rbx
      }
      __asm { adox    rbp, [r8+8] }
      _RBX = (*(unsigned __int64 *)(v140 + 8) * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v172 + 1)) >> 64;
      _RAX = *(_QWORD *)(v140 + 8) * **((_QWORD **)&v172 + 1);
      __asm
      {
        adcx    rbp, rax
        adox    r10, rbx
      }
      _RBX = (*(unsigned __int64 *)(v140 + 8) * (unsigned __int128)MEMORY[8]) >> 64;
      _RAX = *(_QWORD *)(v140 + 8) * MEMORY[8];
      __asm
      {
        adcx    r10, rax
        adox    r11, rbx
      }
      _RBX = (*(unsigned __int64 *)(v140 + 8) * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = *(_QWORD *)(v140 + 8) * MEMORY[0x10];
      __asm
      {
        adcx    r11, rax
        adox    r12, rbx
      }
      _RBX = (*(unsigned __int64 *)(v140 + 8) * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = *(_QWORD *)(v140 + 8) * MEMORY[0x18];
      __asm
      {
        adcx    r12, rax
        adox    r13, rbx
      }
      _RBX = (*(unsigned __int64 *)(v140 + 8) * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = *(_QWORD *)(v140 + 8) * MEMORY[0x20];
      __asm
      {
        adcx    r13, rax
        adox    r14, rbx
      }
      _RBX = (*(unsigned __int64 *)(v140 + 8) * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = *(_QWORD *)(v140 + 8) * MEMORY[0x28];
      __asm
      {
        adcx    r14, rax
        adox    r15, rbx
      }
      _RBX = (*(unsigned __int64 *)(v140 + 8) * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = *(_QWORD *)(v140 + 8) * MEMORY[0x30];
      __asm
      {
        adcx    r15, rax
        adox    rsi, rbx
      }
      v208 = *(unsigned __int64 *)(v140 + 8);
      _RBX = (v208 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = *(_QWORD *)(v140 + 8) * MEMORY[0x38];
      __asm { adcx    rsi, rax }
      _R8[1] = _RBP;
      _RBP = 0LL;
      __asm
      {
        adcx    rbp, rbp
        adox    rbp, rbx
      }
      __asm { adox    r10, [r8+10h] }
      _RBX = (*(unsigned __int64 *)(v140 + 16) * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v208 + 1)) >> 64;
      _RAX = *(_QWORD *)(v140 + 16) * **((_QWORD **)&v208 + 1);
      __asm
      {
        adcx    r10, rax
        adox    r11, rbx
      }
      _RBX = (*(unsigned __int64 *)(v140 + 16) * (unsigned __int128)MEMORY[8]) >> 64;
      _RAX = *(_QWORD *)(v140 + 16) * MEMORY[8];
      __asm
      {
        adcx    r11, rax
        adox    r12, rbx
      }
      _RBX = (*(unsigned __int64 *)(v140 + 16) * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = *(_QWORD *)(v140 + 16) * MEMORY[0x10];
      __asm
      {
        adcx    r12, rax
        adox    r13, rbx
      }
      _RBX = (*(unsigned __int64 *)(v140 + 16) * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = *(_QWORD *)(v140 + 16) * MEMORY[0x18];
      __asm
      {
        adcx    r13, rax
        adox    r14, rbx
      }
      _RBX = (*(unsigned __int64 *)(v140 + 16) * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = *(_QWORD *)(v140 + 16) * MEMORY[0x20];
      __asm
      {
        adcx    r14, rax
        adox    r15, rbx
      }
      _RBX = (*(unsigned __int64 *)(v140 + 16) * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = *(_QWORD *)(v140 + 16) * MEMORY[0x28];
      __asm
      {
        adcx    r15, rax
        adox    rsi, rbx
      }
      _RBX = (*(unsigned __int64 *)(v140 + 16) * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = *(_QWORD *)(v140 + 16) * MEMORY[0x30];
      __asm
      {
        adcx    rsi, rax
        adox    rbp, rbx
      }
      v244 = *(unsigned __int64 *)(v140 + 16);
      _RBX = (v244 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = *(_QWORD *)(v140 + 16) * MEMORY[0x38];
      __asm { adcx    rbp, rax }
      _R8[2] = _R10;
      _R10 = 0LL;
      __asm
      {
        adcx    r10, r10
        adox    r10, rbx
      }
      __asm { adox    r11, [r8+18h] }
      _RBX = (*(unsigned __int64 *)(v140 + 24) * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v244 + 1)) >> 64;
      _RAX = *(_QWORD *)(v140 + 24) * **((_QWORD **)&v244 + 1);
      __asm
      {
        adcx    r11, rax
        adox    r12, rbx
      }
      _RBX = (*(unsigned __int64 *)(v140 + 24) * (unsigned __int128)MEMORY[8]) >> 64;
      _RAX = *(_QWORD *)(v140 + 24) * MEMORY[8];
      __asm
      {
        adcx    r12, rax
        adox    r13, rbx
      }
      _RBX = (*(unsigned __int64 *)(v140 + 24) * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = *(_QWORD *)(v140 + 24) * MEMORY[0x10];
      __asm
      {
        adcx    r13, rax
        adox    r14, rbx
      }
      _RBX = (*(unsigned __int64 *)(v140 + 24) * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = *(_QWORD *)(v140 + 24) * MEMORY[0x18];
      __asm
      {
        adcx    r14, rax
        adox    r15, rbx
      }
      _RBX = (*(unsigned __int64 *)(v140 + 24) * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = *(_QWORD *)(v140 + 24) * MEMORY[0x20];
      __asm
      {
        adcx    r15, rax
        adox    rsi, rbx
      }
      _RBX = (*(unsigned __int64 *)(v140 + 24) * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = *(_QWORD *)(v140 + 24) * MEMORY[0x28];
      __asm
      {
        adcx    rsi, rax
        adox    rbp, rbx
      }
      _RBX = (*(unsigned __int64 *)(v140 + 24) * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = *(_QWORD *)(v140 + 24) * MEMORY[0x30];
      __asm
      {
        adcx    rbp, rax
        adox    r10, rbx
      }
      v280 = *(unsigned __int64 *)(v140 + 24);
      _RBX = (v280 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = *(_QWORD *)(v140 + 24) * MEMORY[0x38];
      __asm { adcx    r10, rax }
      _R8[3] = _R11;
      _R11 = 0LL;
      __asm
      {
        adcx    r11, r11
        adox    r11, rbx
      }
      __asm { adox    r12, [r8+20h] }
      _RBX = (*(unsigned __int64 *)(v140 + 32) * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v280 + 1)) >> 64;
      _RAX = *(_QWORD *)(v140 + 32) * **((_QWORD **)&v280 + 1);
      __asm
      {
        adcx    r12, rax
        adox    r13, rbx
      }
      _RBX = (*(unsigned __int64 *)(v140 + 32) * (unsigned __int128)MEMORY[8]) >> 64;
      _RAX = *(_QWORD *)(v140 + 32) * MEMORY[8];
      __asm
      {
        adcx    r13, rax
        adox    r14, rbx
      }
      _RBX = (*(unsigned __int64 *)(v140 + 32) * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = *(_QWORD *)(v140 + 32) * MEMORY[0x10];
      __asm
      {
        adcx    r14, rax
        adox    r15, rbx
      }
      _RBX = (*(unsigned __int64 *)(v140 + 32) * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = *(_QWORD *)(v140 + 32) * MEMORY[0x18];
      __asm
      {
        adcx    r15, rax
        adox    rsi, rbx
      }
      _RBX = (*(unsigned __int64 *)(v140 + 32) * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = *(_QWORD *)(v140 + 32) * MEMORY[0x20];
      __asm
      {
        adcx    rsi, rax
        adox    rbp, rbx
      }
      _RBX = (*(unsigned __int64 *)(v140 + 32) * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = *(_QWORD *)(v140 + 32) * MEMORY[0x28];
      __asm
      {
        adcx    rbp, rax
        adox    r10, rbx
      }
      _RBX = (*(unsigned __int64 *)(v140 + 32) * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = *(_QWORD *)(v140 + 32) * MEMORY[0x30];
      __asm
      {
        adcx    r10, rax
        adox    r11, rbx
      }
      v316 = *(unsigned __int64 *)(v140 + 32);
      _RBX = (v316 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = *(_QWORD *)(v140 + 32) * MEMORY[0x38];
      __asm { adcx    r11, rax }
      _R8[4] = _R12;
      _R12 = 0LL;
      __asm
      {
        adcx    r12, r12
        adox    r12, rbx
      }
      __asm { adox    r13, [r8+28h] }
      _RBX = (*(unsigned __int64 *)(v140 + 40) * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v316 + 1)) >> 64;
      _RAX = *(_QWORD *)(v140 + 40) * **((_QWORD **)&v316 + 1);
      __asm
      {
        adcx    r13, rax
        adox    r14, rbx
      }
      _RBX = (*(unsigned __int64 *)(v140 + 40) * (unsigned __int128)MEMORY[8]) >> 64;
      _RAX = *(_QWORD *)(v140 + 40) * MEMORY[8];
      __asm
      {
        adcx    r14, rax
        adox    r15, rbx
      }
      _RBX = (*(unsigned __int64 *)(v140 + 40) * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = *(_QWORD *)(v140 + 40) * MEMORY[0x10];
      __asm
      {
        adcx    r15, rax
        adox    rsi, rbx
      }
      _RBX = (*(unsigned __int64 *)(v140 + 40) * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = *(_QWORD *)(v140 + 40) * MEMORY[0x18];
      __asm
      {
        adcx    rsi, rax
        adox    rbp, rbx
      }
      _RBX = (*(unsigned __int64 *)(v140 + 40) * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = *(_QWORD *)(v140 + 40) * MEMORY[0x20];
      __asm
      {
        adcx    rbp, rax
        adox    r10, rbx
      }
      _RBX = (*(unsigned __int64 *)(v140 + 40) * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = *(_QWORD *)(v140 + 40) * MEMORY[0x28];
      __asm
      {
        adcx    r10, rax
        adox    r11, rbx
      }
      _RBX = (*(unsigned __int64 *)(v140 + 40) * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = *(_QWORD *)(v140 + 40) * MEMORY[0x30];
      __asm
      {
        adcx    r11, rax
        adox    r12, rbx
      }
      v352 = *(unsigned __int64 *)(v140 + 40);
      _RBX = (v352 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = *(_QWORD *)(v140 + 40) * MEMORY[0x38];
      __asm { adcx    r12, rax }
      _R8[5] = _R13;
      _R13 = 0LL;
      __asm
      {
        adcx    r13, r13
        adox    r13, rbx
      }
      __asm { adox    r14, [r8+30h] }
      _RBX = (*(unsigned __int64 *)(v140 + 48) * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v352 + 1)) >> 64;
      _RAX = *(_QWORD *)(v140 + 48) * **((_QWORD **)&v352 + 1);
      __asm
      {
        adcx    r14, rax
        adox    r15, rbx
      }
      _RBX = (*(unsigned __int64 *)(v140 + 48) * (unsigned __int128)MEMORY[8]) >> 64;
      _RAX = *(_QWORD *)(v140 + 48) * MEMORY[8];
      __asm
      {
        adcx    r15, rax
        adox    rsi, rbx
      }
      _RBX = (*(unsigned __int64 *)(v140 + 48) * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = *(_QWORD *)(v140 + 48) * MEMORY[0x10];
      __asm
      {
        adcx    rsi, rax
        adox    rbp, rbx
      }
      _RBX = (*(unsigned __int64 *)(v140 + 48) * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = *(_QWORD *)(v140 + 48) * MEMORY[0x18];
      __asm
      {
        adcx    rbp, rax
        adox    r10, rbx
      }
      _RBX = (*(unsigned __int64 *)(v140 + 48) * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = *(_QWORD *)(v140 + 48) * MEMORY[0x20];
      __asm
      {
        adcx    r10, rax
        adox    r11, rbx
      }
      _RBX = (*(unsigned __int64 *)(v140 + 48) * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = *(_QWORD *)(v140 + 48) * MEMORY[0x28];
      __asm
      {
        adcx    r11, rax
        adox    r12, rbx
      }
      _RBX = (*(unsigned __int64 *)(v140 + 48) * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = *(_QWORD *)(v140 + 48) * MEMORY[0x30];
      __asm
      {
        adcx    r12, rax
        adox    r13, rbx
      }
      v388 = *(unsigned __int64 *)(v140 + 48);
      _RBX = (v388 * (unsigned __int128)MEMORY[0x38]) >> 64;
      _RAX = *(_QWORD *)(v140 + 48) * MEMORY[0x38];
      __asm { adcx    r13, rax }
      _R8[6] = _R14;
      _R14 = 0LL;
      __asm
      {
        adcx    r14, r14
        adox    r14, rbx
      }
      __asm { adox    r15, [r8+38h] }
      _RBX = (*(unsigned __int64 *)(v140 + 56) * (unsigned __int128)(unsigned __int64)**((_QWORD **)&v388 + 1)) >> 64;
      _RAX = *(_QWORD *)(v140 + 56) * **((_QWORD **)&v388 + 1);
      __asm
      {
        adcx    r15, rax
        adox    rsi, rbx
      }
      _RBX = (*(unsigned __int64 *)(v140 + 56) * (unsigned __int128)MEMORY[8]) >> 64;
      _RAX = *(_QWORD *)(v140 + 56) * MEMORY[8];
      __asm
      {
        adcx    rsi, rax
        adox    rbp, rbx
      }
      _RBX = (*(unsigned __int64 *)(v140 + 56) * (unsigned __int128)MEMORY[0x10]) >> 64;
      _RAX = *(_QWORD *)(v140 + 56) * MEMORY[0x10];
      __asm
      {
        adcx    rbp, rax
        adox    r10, rbx
      }
      _RBX = (*(unsigned __int64 *)(v140 + 56) * (unsigned __int128)MEMORY[0x18]) >> 64;
      _RAX = *(_QWORD *)(v140 + 56) * MEMORY[0x18];
      __asm
      {
        adcx    r10, rax
        adox    r11, rbx
      }
      _RBX = (*(unsigned __int64 *)(v140 + 56) * (unsigned __int128)MEMORY[0x20]) >> 64;
      _RAX = *(_QWORD *)(v140 + 56) * MEMORY[0x20];
      __asm
      {
        adcx    r11, rax
        adox    r12, rbx
      }
      _RBX = (*(unsigned __int64 *)(v140 + 56) * (unsigned __int128)MEMORY[0x28]) >> 64;
      _RAX = *(_QWORD *)(v140 + 56) * MEMORY[0x28];
      __asm
      {
        adcx    r12, rax
        adox    r13, rbx
      }
      _RBX = (*(unsigned __int64 *)(v140 + 56) * (unsigned __int128)MEMORY[0x30]) >> 64;
      _RAX = *(_QWORD *)(v140 + 56) * MEMORY[0x30];
      __asm
      {
        adcx    r13, rax
        adox    r14, rbx
      }
      *(_OWORD *)(&v134 - 1) = *(unsigned __int64 *)(v140 + 56);
      _RBX = (*(_OWORD *)(&v134 - 1) * MEMORY[0x38]) >> 64;
      _RAX = *(_QWORD *)(v140 + 56) * MEMORY[0x38];
      __asm { adcx    r14, rax }
      _R8[7] = _R15;
      _R15 = 0LL;
      __asm
      {
        adcx    r15, r15
        adox    r15, rbx
      }
      _R8 += 8;
      v140 += 64LL;
      --v139;
    }
    while ( v139 );
    *_R8 = _RSI;
    _R8[1] = _RBP;
    _R8[2] = _R10;
    _R8[3] = _R11;
    _R8[4] = _R12;
    _R8[5] = _R13;
    _R8[6] = _R14;
    _R8[7] = _R15;
    a1 = v134 + 8;
    a3 = v504 + 16;
    v504 += 16;
    v3 = --v502;
  }
  a3[8] = _RSI;
  a3[9] = _RBP;
  a3[10] = _R10;
  a3[11] = _R11;
  a3[12] = _R12;
  a3[13] = _R13;
  a3[14] = _R14;
  a3[15] = 0LL;
  v421 = v500;
  v422 = v501;
  v423 = v503;
  _RSI = 0LL;
  _RDI = 0LL;
  do
  {
    _R10 = *v423;
    _R11 = v423[1];
    v429 = *v421;
    _RBX = (unsigned __int128)(v429 * v429) >> 64;
    _RAX = v429 * v429;
    __asm
    {
      adcx    rax, rsi
      adcx    rbx, rdi
      adcx    rax, r10
      adox    rax, r10
      adcx    rbx, r11
      adox    rbx, r11
    }
    *v423 = _RAX;
    v423[1] = _RBX;
    _R10 = v423[2];
    _R11 = v423[3];
    v440 = *(unsigned __int64 *)(*((_QWORD *)&v429 + 1) + 8LL);
    _RBX = (unsigned __int128)(v440 * v440) >> 64;
    _RAX = v440 * v440;
    __asm
    {
      adcx    rax, r10
      adox    rax, r10
      adcx    rbx, r11
      adox    rbx, r11
    }
    v423[2] = _RAX;
    v423[3] = _RBX;
    _R10 = v423[4];
    _R11 = v423[5];
    v449 = *(unsigned __int64 *)(*((_QWORD *)&v440 + 1) + 16LL);
    _RBX = (unsigned __int128)(v449 * v449) >> 64;
    _RAX = v449 * v449;
    __asm
    {
      adcx    rax, r10
      adox    rax, r10
      adcx    rbx, r11
      adox    rbx, r11
    }
    v423[4] = _RAX;
    v423[5] = _RBX;
    _R10 = v423[6];
    _R11 = v423[7];
    v458 = *(unsigned __int64 *)(*((_QWORD *)&v449 + 1) + 24LL);
    _RBX = (unsigned __int128)(v458 * v458) >> 64;
    _RAX = v458 * v458;
    __asm
    {
      adcx    rax, r10
      adox    rax, r10
      adcx    rbx, r11
      adox    rbx, r11
    }
    v423[6] = _RAX;
    v423[7] = _RBX;
    _R10 = v423[8];
    _R11 = v423[9];
    v467 = *(unsigned __int64 *)(*((_QWORD *)&v458 + 1) + 32LL);
    _RBX = (unsigned __int128)(v467 * v467) >> 64;
    _RAX = v467 * v467;
    __asm
    {
      adcx    rax, r10
      adox    rax, r10
      adcx    rbx, r11
      adox    rbx, r11
    }
    v423[8] = _RAX;
    v423[9] = _RBX;
    _R10 = v423[10];
    _R11 = v423[11];
    v476 = *(unsigned __int64 *)(*((_QWORD *)&v467 + 1) + 40LL);
    _RBX = (unsigned __int128)(v476 * v476) >> 64;
    _RAX = v476 * v476;
    __asm
    {
      adcx    rax, r10
      adox    rax, r10
      adcx    rbx, r11
      adox    rbx, r11
    }
    v423[10] = _RAX;
    v423[11] = _RBX;
    _R10 = v423[12];
    _R11 = v423[13];
    v485 = *(unsigned __int64 *)(*((_QWORD *)&v476 + 1) + 48LL);
    _RBX = (unsigned __int128)(v485 * v485) >> 64;
    _RAX = v485 * v485;
    __asm
    {
      adcx    rax, r10
      adox    rax, r10
      adcx    rbx, r11
      adox    rbx, r11
    }
    v423[12] = _RAX;
    v423[13] = _RBX;
    _R10 = v423[14];
    _R11 = v423[15];
    v494 = *(unsigned __int64 *)(*((_QWORD *)&v485 + 1) + 56LL);
    _RBX = (unsigned __int128)(v494 * v494) >> 64;
    _RAX = v494 * v494;
    __asm
    {
      adcx    rax, r10
      adox    rax, r10
      adcx    rbx, r11
      adox    rbx, r11
    }
    v423[14] = result;
    v423[15] = _RBX;
    _RSI = 0LL;
    __asm { adox    esi, edi }
    v421 = (unsigned __int64 *)(*((_QWORD *)&v494 + 1) + 64LL);
    v423 += 16;
    --v422;
  }
  while ( v422 );
  return result;
}
