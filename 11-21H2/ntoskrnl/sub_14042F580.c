/*
 * XREFs of sub_14042F580 @ 0x14042F580
 * Callers:
 *     sub_140AB56C0 @ 0x140AB56C0 (sub_140AB56C0.c)
 * Callees:
 *     sub_14041F920 @ 0x14041F920 (sub_14041F920.c)
 *     sub_14042F580 @ 0x14042F580 (sub_14042F580.c)
 *     sub_140434DC0 @ 0x140434DC0 (sub_140434DC0.c)
 *     sub_140434E40 @ 0x140434E40 (sub_140434E40.c)
 *     sub_1404357C0 @ 0x1404357C0 (sub_1404357C0.c)
 */

void __fastcall __noreturn sub_14042F580(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int16 KdVersionBlock_high; // ax
  __int16 KdVersionBlock; // dx
  __int64 v7; // rax
  __int64 v8; // r9
  unsigned __int64 v9; // r8
  _UNKNOWN *retaddr; // [rsp+160h] [rbp+E0h]
  __int64 v11; // [rsp+168h] [rbp+E8h]
  char v12; // [rsp+170h] [rbp+F0h]
  __int16 v13; // [rsp+178h] [rbp+F8h]

  if ( (v12 & 1) != 0 )
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
    a1 = *(_QWORD *)(*((_QWORD *)CurrentThread + 68) + 2528LL);
    __writegsqword(0x858u, a1);
    __writegsword(0x852u, KeGetPcr()[5].HalReserved[14]);
    LOWORD(a1) = KeGetPcr()[5].KdVersionBlock;
    __writegsword(0x854u, a1);
    KdVersionBlock_high = HIWORD(KeGetPcr()[5].KdVersionBlock);
    if ( WORD2(KeGetPcr()[5].KdVersionBlock) != KdVersionBlock_high )
    {
      __writegsword(0x864u, KdVersionBlock_high);
      a1 = 72LL;
      __writemsr(0x48u, KdVersionBlock_high);
    }
    KdVersionBlock = (__int16)KeGetPcr()[5].KdVersionBlock;
    if ( (KdVersionBlock & 8) != 0 )
    {
      a1 = 73LL;
      __writemsr(0x49u, 1uLL);
      KdVersionBlock = (__int16)KeGetPcr()[5].KdVersionBlock;
    }
    if ( (KdVersionBlock & 2) != 0 )
      JUMPOUT(0x14042F7E9LL);
    if ( (KdVersionBlock & 0x200) != 0 )
      sub_1404357C0(a1);
    _mm_lfence();
    __writegsbyte(0x856u, 0);
    if ( (*((_BYTE *)CurrentThread + 3) & 3) != 0 )
      sub_14041F920(a1);
  }
  else
  {
    __asm { rdsspq  rdx }
    _mm_lfence();
    if ( ((__int64)KeGetPcr()[5].KdVersionBlock & 1) != 0 )
    {
      a1 = 72LL;
      __writemsr(0x48u, WORD2(KeGetPcr()[5].KdVersionBlock));
    }
    else
    {
      _mm_lfence();
    }
  }
  _mm_getcsr();
  _mm_setcsr((unsigned int)KeGetPcr()[1].TssBase);
  if ( (_BYTE)dword_140D069F0 && (v12 & 1) != 0 )
    __asm { stac }
  LOBYTE(v7) = (_BYTE)retaddr;
  if ( ((unsigned __int8)retaddr & 4) != 0 )
    a1 = _InterlockedExchange64(MK_FP(__GS__, 36328LL), 0LL);
  if ( (v13 & 0x200) != 0 )
    _enable();
  if ( (v7 & 4) != 0 )
    sub_140434E40(268435462LL, 3LL, v11, a1);
  if ( (v12 & 1) != 0 )
    sub_140434E40(268435463LL, 2LL, v11, (unsigned __int16)retaddr | 3u);
  v8 = (unsigned int)retaddr;
  v9 = __readcr0();
  sub_140434DC0(127LL, 11LL, v9, v8);
}
