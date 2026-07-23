/*
 * XREFs of sub_14022E3B0 @ 0x14022E3B0
 * Callers:
 *     sub_1402F444C @ 0x1402F444C (sub_1402F444C.c)
 *     sub_14041F500 @ 0x14041F500 (sub_14041F500.c)
 * Callees:
 *     sub_14022E800 @ 0x14022E800 (sub_14022E800.c)
 *     sub_14054EA40 @ 0x14054EA40 (sub_14054EA40.c)
 *     sub_14056FC20 @ 0x14056FC20 (sub_14056FC20.c)
 */

__int64 __fastcall sub_14022E3B0(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  unsigned __int8 v5; // r14
  int v10; // eax
  int v11; // r8d
  int v12; // eax
  int v13; // r8d
  __int64 v14; // rcx
  __int16 v15; // ax
  __int64 result; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  volatile signed __int32 *CurrentThread; // rcx
  bool v23; // zf
  _QWORD *v24; // rcx
  _QWORD *v25; // rdx
  __int64 v26; // rcx
  __int64 v28; // r13

  v5 = 0;
  if ( (a4 & 0x100001) == 0x100001 )
  {
    v10 = *(_DWORD *)(a3 + 68);
    v11 = v10 & 0x210DD5;
    v12 = v10 & 0x250FD5;
    v13 = v11 | 0x200;
    if ( !a5 )
      v13 = v12;
    *(_DWORD *)(a1 + 376) = v13;
    v14 = *(_QWORD *)(a3 + 248);
    *(_QWORD *)(a1 + 360) = v14;
    *(_QWORD *)(a1 + 384) = *(_QWORD *)(a3 + 152);
    if ( a5 == 1 )
    {
      *(_WORD *)(a1 + 392) = 43;
      v15 = 51;
      if ( *(_WORD *)(a3 + 56) != 51 )
        v15 = 35;
      *(_WORD *)(a1 + 368) = v15;
      if ( v15 == 35 )
        v14 = (unsigned int)v14;
      else
        v14 = v14 << 16 >> 16;
    }
    else
    {
      *(_WORD *)(a1 + 368) = 16;
      *(_WORD *)(a1 + 392) = 24;
    }
    *(_QWORD *)(a1 + 360) = v14;
  }
  if ( (a4 & 0x100002) == 0x100002 )
  {
    *(_QWORD *)(a1 + 48) = *(_QWORD *)(a3 + 120);
    *(_QWORD *)(a1 + 56) = *(_QWORD *)(a3 + 128);
    *(_QWORD *)(a1 + 64) = *(_QWORD *)(a3 + 136);
    *(_QWORD *)(a1 + 72) = *(_QWORD *)(a3 + 184);
    *(_QWORD *)(a1 + 80) = *(_QWORD *)(a3 + 192);
    *(_QWORD *)(a1 + 88) = *(_QWORD *)(a3 + 200);
    *(_QWORD *)(a1 + 96) = *(_QWORD *)(a3 + 208);
    *(_QWORD *)(a1 + 344) = *(_QWORD *)(a3 + 160);
    *(_QWORD *)(a2 + 256) = *(_QWORD *)(a3 + 144);
    *(_QWORD *)(a2 + 272) = *(_QWORD *)(a3 + 168);
    *(_QWORD *)(a2 + 264) = *(_QWORD *)(a3 + 176);
    *(_QWORD *)(a2 + 280) = *(_QWORD *)(a3 + 216);
    *(_QWORD *)(a2 + 288) = *(_QWORD *)(a3 + 224);
    *(_QWORD *)(a2 + 296) = *(_QWORD *)(a3 + 232);
    *(_QWORD *)(a2 + 304) = *(_QWORD *)(a3 + 240);
  }
  if ( (a4 & 0x100040) == 0x100040 && a5 == 1 )
  {
    v24 = (_QWORD *)*((_QWORD *)KeGetCurrentThread() + 51);
    if ( !v24 )
      goto LABEL_34;
    v25 = (_QWORD *)*v24;
    if ( *v24 )
    {
      do
      {
        v24 = v25;
        v25 = (_QWORD *)*v25;
      }
      while ( v25 );
    }
    v26 = v24[5];
    if ( v26 )
      sub_14056FC20(v26, MEMORY[0xFFFFF780000003E0] & 0xFFFFFFFFFFFFFFFCuLL, *(int *)(a3 + 1248) + a3 + 720);
    else
LABEL_34:
      sub_14022E800(
        *(int *)(a3 + 1248) + a3 + 720,
        (MEMORY[0xFFFFF780000003E0] | MEMORY[0xFFFFF78000000708]) & 0xFFFFFFFFFFFFFFFCuLL);
  }
  if ( (a4 & 0x100080) == 0x100080 && !a5 )
  {
    _R12 = *(_QWORD **)(a1 + 216);
    v28 = *(int *)(a3 + 1256);
    _RCX = *(_QWORD *)(v28 + a3 + 1240);
    if ( _R12[1] != _RCX )
    {
      if ( (*(_BYTE *)(v28 + a3 + 1250) & 1) != 0 )
        __asm { wrssq   qword ptr [r12+8], rcx }
      else
        sub_14054EA40(3, (_DWORD)_R12, 0, 0, _RCX, 4);
    }
    if ( (*(_BYTE *)(v28 + a3 + 1250) & 2) != 0 )
    {
      _RAX = *_R12 + 8LL;
      __asm { wrssq   qword ptr [r12], rax }
    }
  }
  if ( (a4 & 0x100008) == 0x100008 )
  {
    *(_OWORD *)(a1 + 112) = *(_OWORD *)(a3 + 416);
    *(_OWORD *)(a1 + 128) = *(_OWORD *)(a3 + 432);
    *(_OWORD *)(a1 + 144) = *(_OWORD *)(a3 + 448);
    *(_OWORD *)(a1 + 160) = *(_OWORD *)(a3 + 464);
    *(_OWORD *)(a1 + 176) = *(_OWORD *)(a3 + 480);
    *(_OWORD *)(a1 + 192) = *(_OWORD *)(a3 + 496);
    *(_OWORD *)(a2 + 48) = *(_OWORD *)(a3 + 512);
    *(_OWORD *)(a2 + 64) = *(_OWORD *)(a3 + 528);
    *(_OWORD *)(a2 + 80) = *(_OWORD *)(a3 + 544);
    *(_OWORD *)(a2 + 96) = *(_OWORD *)(a3 + 560);
    *(_OWORD *)(a2 + 112) = *(_OWORD *)(a3 + 576);
    *(_OWORD *)(a2 + 128) = *(_OWORD *)(a3 + 592);
    *(_OWORD *)(a2 + 144) = *(_OWORD *)(a3 + 608);
    *(_OWORD *)(a2 + 160) = *(_OWORD *)(a3 + 624);
    *(_OWORD *)(a2 + 176) = *(_OWORD *)(a3 + 640);
    *(_OWORD *)(a2 + 192) = *(_OWORD *)(a3 + 656);
    *(_DWORD *)(a1 + 44) = dword_140D050F4 & *(_DWORD *)(a3 + 52);
    if ( a5 == 1 )
    {
      v5 = 1;
      *(_DWORD *)(a3 + 280) = _mm_getcsr();
      *(_WORD *)(a3 + 256) &= 0x1F3Fu;
    }
  }
  if ( (a4 & 0x100010) != 0x100010 )
    return v5;
  v17 = *(_QWORD *)(a3 + 72);
  if ( a5 )
  {
    *(_QWORD *)(a1 + 216) = v17 > 0x7FFFFFFEFFFFLL ? 0LL : v17;
    v18 = *(_QWORD *)(a3 + 80);
    *(_QWORD *)(a1 + 224) = v18 > 0x7FFFFFFEFFFFLL ? 0LL : v18;
    v19 = *(_QWORD *)(a3 + 88);
    *(_QWORD *)(a1 + 232) = v19 > 0x7FFFFFFEFFFFLL ? 0LL : v19;
    v20 = 0LL;
    if ( *(_QWORD *)(a3 + 96) <= 0x7FFFFFFEFFFFuLL )
      v20 = *(_QWORD *)(a3 + 96);
  }
  else
  {
    *(_QWORD *)(a1 + 216) = v17;
    *(_QWORD *)(a1 + 224) = *(_QWORD *)(a3 + 80);
    *(_QWORD *)(a1 + 232) = *(_QWORD *)(a3 + 88);
    v20 = *(_QWORD *)(a3 + 96);
  }
  *(_QWORD *)(a1 + 240) = v20;
  *(_QWORD *)(a1 + 248) = 0LL;
  v21 = *(_DWORD *)(a3 + 112) & 0xFFFF0355;
  *(_QWORD *)(a1 + 256) = v21;
  if ( !a5 )
    return v5;
  CurrentThread = (volatile signed __int32 *)KeGetCurrentThread();
  v23 = (v21 & 0x355) == 0;
  result = v5;
  if ( v23 )
    _interlockedbittestandreset(CurrentThread, 0x18u);
  else
    _interlockedbittestandset(CurrentThread, 0x18u);
  return result;
}
