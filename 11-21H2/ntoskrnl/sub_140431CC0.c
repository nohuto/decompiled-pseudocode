/*
 * XREFs of sub_140431CC0 @ 0x140431CC0
 * Callers:
 *     sub_140AB5AC0 @ 0x140AB5AC0 (sub_140AB5AC0.c)
 * Callees:
 *     sub_14041F920 @ 0x14041F920 (sub_14041F920.c)
 *     sub_140431CC0 @ 0x140431CC0 (sub_140431CC0.c)
 *     sub_140434DC0 @ 0x140434DC0 (sub_140434DC0.c)
 *     sub_140434E40 @ 0x140434E40 (sub_140434E40.c)
 *     sub_1404357C0 @ 0x1404357C0 (sub_1404357C0.c)
 */

void __noreturn sub_140431CC0()
{
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int64 v4; // rcx
  unsigned __int16 KdVersionBlock_high; // ax
  __int16 KdVersionBlock; // dx
  __int16 v7; // ax
  __int64 v8; // rdx
  void *v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r8
  unsigned __int16 v14; // [rsp+2Ch] [rbp-54h]
  void *retaddr; // [rsp+168h] [rbp+E8h]
  __int16 v16; // [rsp+170h] [rbp+F0h]
  __int16 v17; // [rsp+178h] [rbp+F8h]

  if ( (v16 & 1) != 0 )
  {
    if ( (byte_140E01840 & 1) == 0 )
      __asm { swapgs }
    _mm_lfence();
    if ( *(_QWORD *)&KeGetPcr()[103].HalReserved[8] )
    {
      __asm { rdsspq  rdx }
      if ( _RDX == *(_QWORD *)&KeGetPcr()[103].HalReserved[6] + 8LL )
      {
        __asm
        {
          rstorssp qword ptr [rcx]
          saveprevssp
        }
      }
    }
    CurrentThread = KeGetCurrentThread();
    v4 = *(_QWORD *)(*((_QWORD *)CurrentThread + 68) + 2528LL);
    __writegsqword(0x858u, v4);
    __writegsword(0x852u, KeGetPcr()[5].HalReserved[14]);
    LOWORD(v4) = KeGetPcr()[5].KdVersionBlock;
    __writegsword(0x854u, v4);
    KdVersionBlock_high = HIWORD(KeGetPcr()[5].KdVersionBlock);
    if ( WORD2(KeGetPcr()[5].KdVersionBlock) != KdVersionBlock_high )
    {
      __writegsword(0x864u, KdVersionBlock_high);
      v4 = 72LL;
      __writemsr(0x48u, KdVersionBlock_high);
    }
    KdVersionBlock = (__int16)KeGetPcr()[5].KdVersionBlock;
    if ( (KdVersionBlock & 8) != 0 )
    {
      v4 = 73LL;
      __writemsr(0x49u, 1uLL);
      KdVersionBlock = (__int16)KeGetPcr()[5].KdVersionBlock;
    }
    if ( (KdVersionBlock & 2) != 0 )
      JUMPOUT(0x140431F2DLL);
    if ( (KdVersionBlock & 0x200) != 0 )
      sub_1404357C0(v4);
    _mm_lfence();
    __writegsbyte(0x856u, 0);
    if ( (*((_BYTE *)CurrentThread + 3) & 3) != 0 )
      sub_14041F920(v4);
  }
  else
  {
    __asm { rdsspq  rdx }
    _mm_lfence();
    if ( ((__int64)KeGetPcr()[5].KdVersionBlock & 1) != 0 )
      __writemsr(0x48u, WORD2(KeGetPcr()[5].KdVersionBlock));
    else
      _mm_lfence();
  }
  v14 = _mm_getcsr();
  _mm_setcsr((unsigned int)KeGetPcr()[1].TssBase);
  if ( (_BYTE)dword_140D069F0 && (v16 & 1) != 0 )
    __asm { stac }
  if ( (v17 & 0x200) != 0 )
    _enable();
  v7 = ~((v14 >> 7) & 0x3F) & v14;
  v8 = 2LL;
  v9 = retaddr;
  v10 = 0LL;
  if ( v16 == 35 )
    goto LABEL_32;
  v11 = 3221225616LL;
  if ( (v7 & 1) != 0
    || (v11 = 3221225614LL, (v7 & 4) != 0)
    || (v11 = 3221225616LL, (v7 & 2) != 0)
    || (v11 = 3221225617LL, (v7 & 8) != 0)
    || (v11 = 3221225619LL, (v7 & 0x10) != 0)
    || (v11 = 3221225615LL, (v7 & 0x20) != 0) )
  {
    while ( 1 )
    {
      LOBYTE(v7) = sub_140434E40(v11, v8, v9, v10);
LABEL_32:
      v11 = 3221226165LL;
      if ( (v7 & 1) == 0 && (v7 & 4) == 0 && (v7 & 2) == 0 )
      {
        v11 = 3221226164LL;
        if ( (v7 & 8) == 0 && (v7 & 0x10) == 0 && (v7 & 0x20) == 0 )
          break;
      }
    }
  }
  v12 = __readcr4();
  v13 = __readcr0();
  sub_140434DC0(127LL, 9LL, v13, v12);
}
