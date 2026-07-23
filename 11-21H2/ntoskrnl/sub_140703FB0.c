/*
 * XREFs of sub_140703FB0 @ 0x140703FB0
 * Callers:
 *     sub_1407035C0 @ 0x1407035C0 (sub_1407035C0.c)
 * Callees:
 *     sub_14022E800 @ 0x14022E800 (sub_14022E800.c)
 *     sub_14056FC20 @ 0x14056FC20 (sub_14056FC20.c)
 */

__int64 __fastcall sub_140703FB0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  int v4; // ebx
  int v9; // eax
  int v10; // r9d
  int v11; // eax
  int v12; // r9d
  __int64 v13; // rcx
  __int16 v14; // ax
  __int64 result; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  volatile signed __int32 *CurrentThread; // rcx
  __int64 v21; // r8
  _QWORD *v22; // rcx
  _QWORD *v23; // rdx
  __int64 v24; // rcx

  v4 = *(_DWORD *)(a3 + 48);
  if ( (v4 & 0x100001) == 0x100001 )
  {
    v9 = *(_DWORD *)(a3 + 68);
    v10 = v9 & 0x210DD5;
    v11 = v9 & 0x250FD5;
    v12 = v10 | 0x200;
    if ( !a4 )
      v12 = v11;
    *(_DWORD *)(a1 + 376) = v12;
    v13 = *(_QWORD *)(a3 + 248);
    *(_QWORD *)(a1 + 360) = v13;
    *(_QWORD *)(a1 + 384) = *(_QWORD *)(a3 + 152);
    if ( a4 == 1 )
    {
      *(_WORD *)(a1 + 392) = 43;
      v14 = 51;
      if ( *(_WORD *)(a3 + 56) != 51 )
        v14 = 35;
      *(_WORD *)(a1 + 368) = v14;
      if ( v14 == 35 )
        v13 = (unsigned int)v13;
      else
        v13 = v13 << 16 >> 16;
    }
    else
    {
      *(_WORD *)(a1 + 392) = 0;
      *(_WORD *)(a1 + 368) = 16;
    }
    *(_QWORD *)(a1 + 360) = v13;
  }
  if ( (v4 & 0x100002) == 0x100002 )
  {
    *(_QWORD *)(a1 + 48) = *(_QWORD *)(a3 + 120);
    *(_QWORD *)(a1 + 56) = *(_QWORD *)(a3 + 128);
    *(_QWORD *)(a1 + 64) = *(_QWORD *)(a3 + 136);
    *(_QWORD *)(a1 + 72) = *(_QWORD *)(a3 + 184);
    *(_QWORD *)(a1 + 80) = *(_QWORD *)(a3 + 192);
    *(_QWORD *)(a1 + 88) = *(_QWORD *)(a3 + 200);
    *(_QWORD *)(a1 + 96) = *(_QWORD *)(a3 + 208);
    **(_QWORD **)(a2 + 152) = *(_QWORD *)(a3 + 144);
    **(_QWORD **)(a2 + 168) = *(_QWORD *)(a3 + 160);
    **(_QWORD **)(a2 + 176) = *(_QWORD *)(a3 + 168);
    **(_QWORD **)(a2 + 184) = *(_QWORD *)(a3 + 176);
    **(_QWORD **)(a2 + 224) = *(_QWORD *)(a3 + 216);
    **(_QWORD **)(a2 + 232) = *(_QWORD *)(a3 + 224);
    **(_QWORD **)(a2 + 240) = *(_QWORD *)(a3 + 232);
    **(_QWORD **)(a2 + 248) = *(_QWORD *)(a3 + 240);
  }
  if ( (v4 & 0x100040) == 0x100040 && a4 == 1 )
  {
    v21 = *(int *)(a3 + 1248) + a3 + 720;
    v22 = (_QWORD *)*((_QWORD *)KeGetCurrentThread() + 51);
    if ( !v22 )
      goto LABEL_31;
    v23 = (_QWORD *)*v22;
    if ( *v22 )
    {
      do
      {
        v22 = v23;
        v23 = (_QWORD *)*v23;
      }
      while ( v23 );
    }
    v24 = v22[5];
    if ( v24 )
      sub_14056FC20(v24, MEMORY[0xFFFFF780000003E0] & 0xFFFFFFFFFFFFFFFCuLL, v21);
    else
LABEL_31:
      sub_14022E800(v21, (MEMORY[0xFFFFF780000003E0] | MEMORY[0xFFFFF78000000708]) & 0xFFFFFFFFFFFFFFFCuLL);
  }
  result = v4 & 0x100008;
  if ( (_DWORD)result == 1048584 )
  {
    *(_OWORD *)(a1 + 112) = *(_OWORD *)(a3 + 416);
    *(_OWORD *)(a1 + 128) = *(_OWORD *)(a3 + 432);
    *(_OWORD *)(a1 + 144) = *(_OWORD *)(a3 + 448);
    *(_OWORD *)(a1 + 160) = *(_OWORD *)(a3 + 464);
    *(_OWORD *)(a1 + 176) = *(_OWORD *)(a3 + 480);
    *(_OWORD *)(a1 + 192) = *(_OWORD *)(a3 + 496);
    *(_OWORD *)*(_QWORD *)(a2 + 48) = *(_OWORD *)(a3 + 512);
    *(_OWORD *)*(_QWORD *)(a2 + 56) = *(_OWORD *)(a3 + 528);
    *(_OWORD *)*(_QWORD *)(a2 + 64) = *(_OWORD *)(a3 + 544);
    *(_OWORD *)*(_QWORD *)(a2 + 72) = *(_OWORD *)(a3 + 560);
    *(_OWORD *)*(_QWORD *)(a2 + 80) = *(_OWORD *)(a3 + 576);
    *(_OWORD *)*(_QWORD *)(a2 + 88) = *(_OWORD *)(a3 + 592);
    *(_OWORD *)*(_QWORD *)(a2 + 96) = *(_OWORD *)(a3 + 608);
    *(_OWORD *)*(_QWORD *)(a2 + 104) = *(_OWORD *)(a3 + 624);
    *(_OWORD *)*(_QWORD *)(a2 + 112) = *(_OWORD *)(a3 + 640);
    *(_OWORD *)*(_QWORD *)(a2 + 120) = *(_OWORD *)(a3 + 656);
    *(_DWORD *)(a1 + 44) = dword_140D050F4 & *(_DWORD *)(a3 + 52);
    *(_DWORD *)(a3 + 280) = _mm_getcsr();
    result = 7999LL;
    *(_WORD *)(a3 + 256) &= 0x1F3Fu;
  }
  if ( (v4 & 0x100010) == 0x100010 )
  {
    v16 = *(_QWORD *)(a3 + 72);
    if ( a4 )
    {
      if ( v16 > 0x7FFFFFFEFFFFLL )
        *(_QWORD *)(a1 + 216) = 0LL;
      else
        *(_QWORD *)(a1 + 216) = v16;
      v17 = *(_QWORD *)(a3 + 80);
      if ( v17 > 0x7FFFFFFEFFFFLL )
        *(_QWORD *)(a1 + 224) = 0LL;
      else
        *(_QWORD *)(a1 + 224) = v17;
      v18 = *(_QWORD *)(a3 + 88);
      if ( v18 > 0x7FFFFFFEFFFFLL )
        *(_QWORD *)(a1 + 232) = 0LL;
      else
        *(_QWORD *)(a1 + 232) = v18;
      v19 = 0LL;
      if ( *(_QWORD *)(a3 + 96) <= 0x7FFFFFFEFFFFuLL )
        v19 = *(_QWORD *)(a3 + 96);
    }
    else
    {
      *(_QWORD *)(a1 + 216) = v16;
      *(_QWORD *)(a1 + 224) = *(_QWORD *)(a3 + 80);
      *(_QWORD *)(a1 + 232) = *(_QWORD *)(a3 + 88);
      v19 = *(_QWORD *)(a3 + 96);
    }
    *(_QWORD *)(a1 + 240) = v19;
    *(_QWORD *)(a1 + 248) = 0LL;
    result = *(_DWORD *)(a3 + 112) & 0xFFFF0355;
    *(_QWORD *)(a1 + 256) = result;
    if ( a4 )
    {
      CurrentThread = (volatile signed __int32 *)KeGetCurrentThread();
      if ( (result & 0x355) != 0 )
        _interlockedbittestandset(CurrentThread, 0x18u);
      else
        _interlockedbittestandreset(CurrentThread, 0x18u);
    }
  }
  return result;
}
