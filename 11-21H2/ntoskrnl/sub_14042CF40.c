/*
 * XREFs of sub_14042CF40 @ 0x14042CF40
 * Callers:
 *     sub_140AB5240 @ 0x140AB5240 (sub_140AB5240.c)
 * Callees:
 *     sub_14024EDB0 @ 0x14024EDB0 (sub_14024EDB0.c)
 *     sub_1402F2540 @ 0x1402F2540 (sub_1402F2540.c)
 *     sub_1403B4940 @ 0x1403B4940 (sub_1403B4940.c)
 *     sub_14041F8A0 @ 0x14041F8A0 (sub_14041F8A0.c)
 *     sub_14041F920 @ 0x14041F920 (sub_14041F920.c)
 *     sub_140424CA0 @ 0x140424CA0 (sub_140424CA0.c)
 *     sub_14042D380 @ 0x14042D380 (sub_14042D380.c)
 *     sub_140434DC0 @ 0x140434DC0 (sub_140434DC0.c)
 *     sub_140569E70 @ 0x140569E70 (sub_140569E70.c)
 *     sub_140571820 @ 0x140571820 (sub_140571820.c)
 */

__int64 __fastcall sub_14042CF40(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rax
  __int64 v9; // r10
  __int64 v10; // r11
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int128 v14; // xmm3
  bool v16; // zf
  unsigned __int32 v17; // eax
  unsigned __int64 v18; // rdx
  int v19; // eax
  int v20; // r8d
  unsigned int v21; // eax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int128 v27; // xmm4
  __int128 v28; // xmm5
  __int64 v31; // r10
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v33; // cf
  struct _KTHREAD *CurrentThread; // rcx
  int v38; // r9d
  int v39; // r8d
  int v40; // edx
  int v41; // ecx
  ULONG_PTR BugCheckParameter4[5]; // [rsp+0h] [rbp-80h] BYREF
  unsigned __int8 v44; // [rsp+28h] [rbp-58h]
  unsigned __int8 v45; // [rsp+29h] [rbp-57h]
  char v46; // [rsp+2Bh] [rbp-55h]
  unsigned int v47; // [rsp+2Ch] [rbp-54h]
  __int64 v48; // [rsp+30h] [rbp-50h]
  __int64 v49; // [rsp+38h] [rbp-48h]
  __int64 v50; // [rsp+40h] [rbp-40h]
  __int64 v51; // [rsp+48h] [rbp-38h]
  __int64 v52; // [rsp+50h] [rbp-30h]
  __int64 v53; // [rsp+58h] [rbp-28h]
  __int64 v54; // [rsp+60h] [rbp-20h]
  unsigned __int64 v55; // [rsp+68h] [rbp-18h]
  _OWORD v56[6]; // [rsp+70h] [rbp-10h] BYREF
  unsigned __int64 v57; // [rsp+D0h] [rbp+50h]
  __int64 v58; // [rsp+D8h] [rbp+58h]
  __int16 v59; // [rsp+100h] [rbp+80h]
  unsigned int v60; // [rsp+140h] [rbp+C0h]
  __int64 (__fastcall *retaddr)(); // [rsp+168h] [rbp+E8h]
  char v62; // [rsp+170h] [rbp+F0h]

  v46 = 0;
  v48 = v8;
  v49 = a1;
  v50 = a2;
  v51 = a3;
  v52 = a4;
  v53 = v9;
  v54 = v10;
  if ( (v62 & 1) == 0 )
  {
    __asm { rdsspq  rdx }
    v58 = _RDX;
    v55 = __readmsr(0xC0000101);
    v17 = __segmentlimit(0x50u);
    if ( v16 )
    {
      v20 = (v17 & 0x3FF) << 6;
      v19 = v17 >> 14;
    }
    else
    {
      if ( (qword_140D068D8 & 0x400000000LL) == 0 )
      {
        __sgdt(v56);
        v18 = *(_QWORD *)(*(_QWORD *)((char *)v56 + 2) - 8000LL);
LABEL_8:
        v21 = v18;
        v22 = HIDWORD(v18);
        __writemsr(0xC0000101, __PAIR64__(v22, v21));
        v23 = __readcr2();
        v57 = v23;
        sub_140424CA0(3221225729LL, v22);
        goto LABEL_16;
      }
      __asm { rdtscp }
      v19 = 1;
      v20 = 805306432;
    }
    v18 = qword_140D088C0[dword_140D105E0[v20 | v19]] - 384;
    goto LABEL_8;
  }
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
  ((void (*)(void))sub_140424CA0)();
  v16 = (*(_BYTE *)(v31 + 3) & 3) == 0;
  v59 = 0;
  if ( !v16 )
    *(double *)&v11 = sub_14041F920();
LABEL_16:
  v47 = _mm_getcsr();
  _mm_setcsr((unsigned int)KeGetPcr()[1].TssBase);
  v56[0] = v11;
  v56[1] = v12;
  v56[2] = v13;
  v56[3] = v14;
  v56[4] = v27;
  v56[5] = v28;
  if ( BYTE2(KeGetPcr()[89].CurrentPrcb) )
    sub_1403B4940(v25, v24, v26);
  if ( &loc_140429887 < (_UNKNOWN *)retaddr && &loc_1404298A0 >= (_UNKNOWN *)retaddr )
    sub_1402F2540((__int64)BugCheckParameter4);
  __incgsdword(0x82C0u);
  if ( (_BYTE)dword_140D069F0 )
    __asm { clac }
  if ( dword_140D06B08 )
  {
    CurrentIrql = sub_140569E70(15LL);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
  }
  v45 = CurrentIrql;
  sub_14024EDB0((ULONG_PTR)BugCheckParameter4, 1);
  v33 = _bittestandset16(MK_FP(__GS__, 32806LL), 0);
  if ( v33
    || (v62 & 1) == 0
    && (unsigned __int64)sub_14042CF40 <= (unsigned __int64)retaddr
    && &loc_14042D35B > (_UNKNOWN *)retaddr
    || (unsigned __int64)sub_140AB5240 <= (unsigned __int64)retaddr && &locret_140AB52B5 > (_UNKNOWN *)retaddr )
  {
    sub_140434DC0(273LL, 0LL, 0LL, 0LL);
  }
  sub_14042D380();
  __writegsbyte(0x8026u, 0);
  if ( dword_140D06B08 )
    sub_140569E70(v45);
  else
    __writecr8(v45);
  if ( (v62 & 1) != 0 )
  {
    if ( (_BYTE)dword_140D069F0 )
      __asm { stac }
    CurrentThread = KeGetCurrentThread();
    if ( (*(_DWORD *)CurrentThread & 0x10000) != 0 && (*((_BYTE *)CurrentThread + 2) & 1) != 0 )
    {
      sub_140571820();
      CurrentThread = KeGetCurrentThread();
    }
    _mm_setcsr(v47);
    if ( v59 )
      sub_14041F8A0(CurrentThread);
    if ( _bittest((const signed __int32 *)KeGetCurrentThread() + 29, 0x16u) )
    {
      __asm { rdsspq  rcx }
      if ( _RCX == *(_QWORD *)&KeGetPcr()[103].HalReserved[8] + 8LL )
      {
        _RCX = *(_QWORD *)&KeGetPcr()[103].HalReserved[6];
        __asm
        {
          rstorssp qword ptr [rcx]
          saveprevssp
        }
      }
    }
    v38 = v52;
    v39 = v51;
    __writegsbyte(0x856u, v44);
    if ( HIWORD(KeGetPcr()[5].KdVersionBlock) )
      __writemsr(0x48u, v60);
    v40 = v50;
    v41 = v49;
    if ( (byte_140E01840 & 1) == 0 )
    {
      if ( ((__int64)KeGetPcr()[5].KdVersionBlock & 0x100) != 0 )
        __asm { verw    [rsp+arg_18] }
      __asm
      {
        swapgs
        iretq
      }
    }
  }
  else
  {
    _mm_setcsr(v47);
    __writegsbyte(0x856u, v44);
    if ( HIWORD(KeGetPcr()[5].KdVersionBlock) )
      __writemsr(0x48u, v60);
    __writemsr(0xC0000101, v55);
    __writecr2(v57);
    v38 = v52;
    v39 = v51;
    v40 = v50;
    v41 = v49;
    if ( (byte_140E01840 & 1) == 0 )
      __asm { iretq }
  }
  return sub_140AB6C40(v41, v40, v39, v38, a5, a6, a7, a8);
}
