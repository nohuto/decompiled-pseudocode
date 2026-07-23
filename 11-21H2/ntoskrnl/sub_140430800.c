/*
 * XREFs of sub_140430800 @ 0x140430800
 * Callers:
 *     sub_140AB58C0 @ 0x140AB58C0 (sub_140AB58C0.c)
 * Callees:
 *     sub_14041F920 @ 0x14041F920 (sub_14041F920.c)
 *     sub_140430800 @ 0x140430800 (sub_140430800.c)
 *     sub_140434DC0 @ 0x140434DC0 (sub_140434DC0.c)
 *     sub_140434E40 @ 0x140434E40 (sub_140434E40.c)
 *     sub_1404357C0 @ 0x1404357C0 (sub_1404357C0.c)
 */

void __fastcall __noreturn sub_140430800()
{
  char v0; // fps
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int64 v5; // rcx
  unsigned __int16 KdVersionBlock_high; // ax
  __int16 KdVersionBlock; // dx
  char v11; // al
  __int64 v12; // rcx
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r8
  char v15; // [rsp+160h] [rbp+E0h]
  void *retaddr; // [rsp+168h] [rbp+E8h]
  char v17; // [rsp+170h] [rbp+F0h]
  __int16 v18; // [rsp+178h] [rbp+F8h]

  if ( (v17 & 1) != 0 )
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
    v5 = *(_QWORD *)(*((_QWORD *)CurrentThread + 68) + 2528LL);
    __writegsqword(0x858u, v5);
    __writegsword(0x852u, KeGetPcr()[5].HalReserved[14]);
    LOWORD(v5) = KeGetPcr()[5].KdVersionBlock;
    __writegsword(0x854u, v5);
    KdVersionBlock_high = HIWORD(KeGetPcr()[5].KdVersionBlock);
    if ( WORD2(KeGetPcr()[5].KdVersionBlock) != KdVersionBlock_high )
    {
      __writegsword(0x864u, KdVersionBlock_high);
      v5 = 72LL;
      __writemsr(0x48u, KdVersionBlock_high);
    }
    KdVersionBlock = (__int16)KeGetPcr()[5].KdVersionBlock;
    if ( (KdVersionBlock & 8) != 0 )
    {
      v5 = 73LL;
      __writemsr(0x49u, 1uLL);
      KdVersionBlock = (__int16)KeGetPcr()[5].KdVersionBlock;
    }
    if ( (KdVersionBlock & 2) != 0 )
      JUMPOUT(0x140430A6DLL);
    if ( (KdVersionBlock & 0x200) != 0 )
      sub_1404357C0(v5);
    _mm_lfence();
    __writegsbyte(0x856u, 0);
    if ( (*((_BYTE *)CurrentThread + 3) & 3) != 0 )
      sub_14041F920(v5);
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
  if ( (_BYTE)dword_140D069F0 && (v17 & 1) != 0 )
    __asm { stac }
  if ( (v18 & 0x200) != 0 )
    _enable();
  if ( (v17 & 1) != 0 )
  {
    v11 = ~(v15 & 0x3F) & v0;
    v12 = 3221225616LL;
    if ( (v11 & 1) != 0 )
    {
      if ( (v11 & 0x40) != 0 )
        v12 = 3221225618LL;
LABEL_33:
      sub_140434E40(v12, 1LL, retaddr, 0LL);
      goto LABEL_34;
    }
    v12 = 3221225614LL;
    if ( (v11 & 4) != 0 )
      goto LABEL_33;
    v12 = 3221225616LL;
    if ( (v11 & 2) != 0 )
      goto LABEL_33;
    v12 = 3221225617LL;
    if ( (v11 & 8) != 0 )
      goto LABEL_33;
    v12 = 3221225619LL;
    if ( (v11 & 0x10) != 0 )
      goto LABEL_33;
    v12 = 3221225615LL;
    if ( (v11 & 0x20) != 0 )
      goto LABEL_33;
  }
LABEL_34:
  v13 = __readcr4();
  v14 = __readcr0();
  sub_140434DC0(127LL, 16LL, v14, v13);
}
