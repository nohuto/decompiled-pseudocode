/*
 * XREFs of sub_140430F00 @ 0x140430F00
 * Callers:
 *     sub_140AB59C0 @ 0x140AB59C0 (sub_140AB59C0.c)
 * Callees:
 *     sub_14024EDB0 @ 0x14024EDB0 (sub_14024EDB0.c)
 *     sub_1402F2540 @ 0x1402F2540 (sub_1402F2540.c)
 *     sub_1403B4940 @ 0x1403B4940 (sub_1403B4940.c)
 *     sub_14041F8A0 @ 0x14041F8A0 (sub_14041F8A0.c)
 *     sub_14041F920 @ 0x14041F920 (sub_14041F920.c)
 *     sub_140424CA0 @ 0x140424CA0 (sub_140424CA0.c)
 *     sub_140431540 @ 0x140431540 (sub_140431540.c)
 *     sub_140569E70 @ 0x140569E70 (sub_140569E70.c)
 *     sub_140571820 @ 0x140571820 (sub_140571820.c)
 */

void __fastcall sub_140430F00(__int64 a1, __int64 _RDX, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 v6; // r10
  __int64 v7; // r11
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int128 v11; // xmm3
  unsigned __int32 v13; // eax
  unsigned __int64 v14; // rdx
  int v15; // eax
  int v16; // r8d
  unsigned int v17; // eax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int128 v23; // xmm4
  __int128 v24; // xmm5
  __int64 v26; // r10
  unsigned __int8 CurrentIrql; // al
  __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rcx
  int v31; // r8d
  int v32; // r9d
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 (__fastcall **v38)(); // rcx
  __int64 (__fastcall *v39)(); // rax
  bool v40; // zf
  union _KIDTENTRY64 *IdtBase; // rax
  int v42; // edx
  int v43; // ecx
  __m128i v44; // [rsp+0h] [rbp-90h] BYREF
  ULONG_PTR BugCheckParameter4[5]; // [rsp+10h] [rbp-80h] BYREF
  unsigned __int8 v46; // [rsp+38h] [rbp-58h]
  unsigned __int8 v47; // [rsp+39h] [rbp-57h]
  char v48; // [rsp+3Bh] [rbp-55h]
  unsigned int v49; // [rsp+3Ch] [rbp-54h]
  __int64 v50; // [rsp+40h] [rbp-50h]
  __int64 v51; // [rsp+48h] [rbp-48h]
  __int64 v52; // [rsp+50h] [rbp-40h]
  __int64 v53; // [rsp+58h] [rbp-38h]
  __int64 v54; // [rsp+60h] [rbp-30h]
  __int64 v55; // [rsp+68h] [rbp-28h]
  __int64 v56; // [rsp+70h] [rbp-20h]
  unsigned __int64 v57; // [rsp+78h] [rbp-18h]
  _OWORD v58[6]; // [rsp+80h] [rbp-10h] BYREF
  unsigned __int64 v59; // [rsp+E0h] [rbp+50h]
  __int64 v60; // [rsp+E8h] [rbp+58h]
  __int16 v61; // [rsp+110h] [rbp+80h]
  unsigned int v62; // [rsp+150h] [rbp+C0h]
  __int64 (__fastcall *retaddr)(); // [rsp+178h] [rbp+E8h]
  unsigned __int16 v64; // [rsp+180h] [rbp+F0h]
  unsigned int v65; // [rsp+188h] [rbp+F8h]
  unsigned __int64 v66; // [rsp+190h] [rbp+100h]
  unsigned __int16 v67; // [rsp+198h] [rbp+108h]

  v48 = 0;
  v50 = v5;
  v51 = a1;
  v52 = _RDX;
  v53 = a3;
  v54 = a4;
  v55 = v6;
  v56 = v7;
  if ( (v64 & 1) == 0 )
  {
    __asm { rdsspq  rdx }
    v60 = _RDX;
    v57 = __readmsr(0xC0000101);
    v13 = __segmentlimit(0x50u);
    if ( v40 )
    {
      v16 = (v13 & 0x3FF) << 6;
      v15 = v13 >> 14;
    }
    else
    {
      if ( (qword_140D068D8 & 0x400000000LL) == 0 )
      {
        __sgdt(v58);
        v14 = *(_QWORD *)(*(_QWORD *)((char *)v58 + 2) - 8000LL);
LABEL_8:
        v17 = v14;
        v18 = HIDWORD(v14);
        __writemsr(0xC0000101, __PAIR64__(v18, v17));
        v19 = __readcr2();
        v59 = v19;
        sub_140424CA0(3221225729LL, v18);
        goto LABEL_16;
      }
      __asm { rdtscp }
      v15 = 1;
      v16 = 805306432;
    }
    v14 = qword_140D088C0[dword_140D105E0[v16 | v15]] - 384;
    goto LABEL_8;
  }
  if ( (byte_140E01840 & 1) == 0 )
    __asm { swapgs }
  _mm_lfence();
  _RCX = *(_QWORD *)&KeGetPcr()[103].HalReserved[8];
  if ( _RCX )
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
  sub_140424CA0(_RCX, _RDX);
  v40 = (*(_BYTE *)(v26 + 3) & 3) == 0;
  v61 = 0;
  if ( !v40 )
    *(double *)&v8 = sub_14041F920(v21);
LABEL_16:
  v49 = _mm_getcsr();
  _mm_setcsr((unsigned int)KeGetPcr()[1].TssBase);
  v58[0] = v8;
  v58[1] = v9;
  v58[2] = v10;
  v58[3] = v11;
  v58[4] = v23;
  v58[5] = v24;
  if ( BYTE2(KeGetPcr()[89].CurrentPrcb) )
    sub_1403B4940(v21, v20, v22);
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
  v47 = CurrentIrql;
  _enable();
  sub_14024EDB0((ULONG_PTR)BugCheckParameter4, 0);
  __incgsbyte(0x8027u);
  if ( (v64 & 1) == 0 )
  {
    v29 = *(_QWORD *)((char *)KeGetPcr()->NtTib.StackBase + 52);
    if ( v66 <= v29 )
    {
      v28 = 24576LL;
      if ( (byte_140E01840 & 1) != 0 )
        v28 = 464LL;
      if ( v66 > v29 - v28 )
        goto LABEL_34;
    }
    if ( (byte_140E01840 & 1) != 0 )
    {
      v30 = *(_QWORD *)(*(_QWORD *)((char *)KeGetPcr()->NtTib.StackBase + 52) + 8LL);
      if ( v66 <= v30 && v66 > v30 - 24544 )
      {
LABEL_34:
        v67 |= 4u;
        _InterlockedIncrement64(&qword_140C2A7C0);
      }
    }
    if ( *(_BYTE *)retaddr == 0xF4 && *(_WORD *)((char *)retaddr - 1) == 0xF4FB )
    {
      v65 &= ~0x200u;
      retaddr = (__int64 (__fastcall *)())((char *)retaddr - 1);
      _InterlockedIncrement64(&qword_140C2A730);
    }
  }
  sub_140431540(BugCheckParameter4, v28, &v44);
  if ( (v44.m128i_i8[0] & 1) != 0 )
  {
    if ( (v44.m128i_i8[0] & 0x10) != 0 )
      v33 = v66 & 0xFFFFFFFFFFFFFFF0uLL;
    else
      v33 = *((_QWORD *)KeGetCurrentThread() + 5);
    *(__m128i *)(v33 - 416) = _mm_load_si128(&v44);
    v48 = 1;
  }
  __writegsbyte(0x8027u, HIBYTE(KeGetPcr()[87].Unused0[2]) - 1);
  _disable();
  if ( dword_140D06B08 )
    sub_140569E70(v47);
  else
    __writecr8(v47);
  _disable();
  if ( (v64 & 1) != 0 )
  {
    if ( (_BYTE)dword_140D069F0 )
      __asm { stac }
    CurrentThread = KeGetCurrentThread();
    if ( (*(_DWORD *)CurrentThread & 0x10000) != 0 && (*((_BYTE *)CurrentThread + 2) & 1) != 0 )
    {
      sub_140571820();
      CurrentThread = KeGetCurrentThread();
    }
    _mm_setcsr(v49);
    if ( v61 )
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
    v32 = v54;
    v31 = v53;
    if ( !v48 )
    {
LABEL_66:
      __writegsbyte(0x856u, v46);
      if ( HIWORD(KeGetPcr()[5].KdVersionBlock) )
        __writemsr(0x48u, v62);
      goto LABEL_68;
    }
    v34 = *((_QWORD *)KeGetCurrentThread() + 5);
  }
  else
  {
    if ( !v48 )
      goto LABEL_72;
    v34 = v66 & 0xFFFFFFFFFFFFFFF0uLL;
  }
  v38 = (__int64 (__fastcall **)())(v34 - 40);
  *v38 = retaddr;
  v38[1] = (__int64 (__fastcall *)())v64;
  v38[2] = (__int64 (__fastcall *)())v65;
  v38[3] = (__int64 (__fastcall *)())v66;
  v38[4] = (__int64 (__fastcall *)())v67;
  if ( (v64 & 1) == 0 )
  {
    retaddr = sub_140431640;
LABEL_72:
    _mm_setcsr(v49);
    __writegsbyte(0x856u, v46);
    if ( HIWORD(KeGetPcr()[5].KdVersionBlock) )
      __writemsr(0x48u, v62);
    __writemsr(0xC0000101, v57);
    __writecr2(v59);
    v32 = v54;
    v31 = v53;
    v42 = v52;
    v43 = v51;
    if ( (byte_140E01840 & 1) == 0 )
      goto LABEL_71;
LABEL_69:
    sub_140AB6CC0(v43, v42, v31, v32, a5);
    return;
  }
  v39 = sub_140431640;
  v40 = (byte_140E01840 & 1) == 0;
  if ( (byte_140E01840 & 1) != 0 )
  {
    IdtBase = KeGetPcr()->IdtBase;
    *((_QWORD *)IdtBase + 2237) = *(_QWORD *)&KeGetPcr()[108].PcrAlign1[18] & 0x7FFFFFFFFFFFFFFFLL;
    *((_QWORD *)IdtBase + 2236) = KeGetPcr();
    IdtBase = (union _KIDTENTRY64 *)((char *)IdtBase + 16856);
    *(_QWORD *)IdtBase = *v38;
    *((_QWORD *)IdtBase + 1) = v38[1];
    *((_QWORD *)IdtBase + 2) = v38[2];
    *((_QWORD *)IdtBase + 3) = v38[3];
    *((_QWORD *)IdtBase + 4) = v38;
    v39 = sub_140AB5A40;
  }
  retaddr = v39;
  if ( v40 )
    goto LABEL_66;
LABEL_68:
  v42 = v52;
  v43 = v51;
  if ( (byte_140E01840 & 1) != 0 )
    goto LABEL_69;
  __asm { swapgs }
  _mm_lfence();
LABEL_71:
  sub_140420630();
}
