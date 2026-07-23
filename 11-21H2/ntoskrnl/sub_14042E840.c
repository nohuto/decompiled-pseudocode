/*
 * XREFs of sub_14042E840 @ 0x14042E840
 * Callers:
 *     sub_140AB54C0 @ 0x140AB54C0 (sub_140AB54C0.c)
 * Callees:
 *     sub_14041F920 @ 0x14041F920 (sub_14041F920.c)
 *     sub_14042E840 @ 0x14042E840 (sub_14042E840.c)
 *     sub_140434DC0 @ 0x140434DC0 (sub_140434DC0.c)
 *     sub_140434E40 @ 0x140434E40 (sub_140434E40.c)
 *     sub_1404357C0 @ 0x1404357C0 (sub_1404357C0.c)
 */

void __noreturn sub_14042E840()
{
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int64 v4; // rcx
  unsigned __int16 KdVersionBlock_high; // ax
  __int16 KdVersionBlock; // dx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r8
  void *retaddr; // [rsp+168h] [rbp+E8h]
  char v11; // [rsp+170h] [rbp+F0h]
  __int16 v12; // [rsp+178h] [rbp+F8h]

  if ( (v11 & 1) != 0 )
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
      JUMPOUT(0x14042EAADLL);
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
  _mm_getcsr();
  _mm_setcsr((unsigned int)KeGetPcr()[1].TssBase);
  if ( (_BYTE)dword_140D069F0 && (v11 & 1) != 0 )
    __asm { stac }
  if ( (qword_140D068D8 & 0x80000000000000LL) != 0 )
  {
    v7 = __readmsr(0x1C5u);
    __writemsr(0x1C5u, 0LL);
  }
  else
  {
    v7 = 0LL;
  }
  if ( (v12 & 0x200) != 0 )
    _enable();
  if ( (v11 & 1) != 0 )
  {
    if ( v7 )
      sub_140434E40(268435472LL, 1LL, retaddr, v7);
  }
  v8 = __readcr4();
  v9 = __readcr0();
  sub_140434DC0(127LL, 7LL, v9, v8);
}
