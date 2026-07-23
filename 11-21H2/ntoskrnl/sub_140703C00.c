/*
 * XREFs of sub_140703C00 @ 0x140703C00
 * Callers:
 *     sub_1407035C0 @ 0x1407035C0 (sub_1407035C0.c)
 * Callees:
 *     sub_14024215C @ 0x14024215C (sub_14024215C.c)
 *     sub_140298B90 @ 0x140298B90 (sub_140298B90.c)
 *     sub_14056FC20 @ 0x14056FC20 (sub_14056FC20.c)
 */

int __fastcall sub_140703C00(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  int result; // eax
  __int64 v8; // rax
  char v9; // cl
  __int64 v10; // r9
  _QWORD *v11; // rcx
  _QWORD *v12; // rdx
  __int64 v13; // r8

  v3 = *(_DWORD *)(a3 + 48);
  if ( (v3 & 0x100001) == 0x100001 )
  {
    *(_QWORD *)(a3 + 248) = *(_QWORD *)(a1 + 360);
    *(_WORD *)(a3 + 56) = *(_WORD *)(a1 + 368);
    *(_WORD *)(a3 + 66) = *(_WORD *)(a1 + 392);
    *(_QWORD *)(a3 + 152) = *(_QWORD *)(a1 + 384);
    *(_DWORD *)(a3 + 68) = *(_DWORD *)(a1 + 376);
  }
  if ( (v3 & 0x100004) == 0x100004 )
  {
    *(_DWORD *)(a3 + 58) = 2818091;
    *(_DWORD *)(a3 + 62) = 2818131;
  }
  if ( (v3 & 0x100002) == 0x100002 )
  {
    *(_QWORD *)(a3 + 120) = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a3 + 128) = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a3 + 136) = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a3 + 184) = *(_QWORD *)(a1 + 72);
    *(_QWORD *)(a3 + 192) = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a3 + 200) = *(_QWORD *)(a1 + 88);
    *(_QWORD *)(a3 + 208) = *(_QWORD *)(a1 + 96);
    *(_QWORD *)(a3 + 144) = **(_QWORD **)(a2 + 152);
    *(_QWORD *)(a3 + 160) = **(_QWORD **)(a2 + 168);
    *(_QWORD *)(a3 + 168) = **(_QWORD **)(a2 + 176);
    *(_QWORD *)(a3 + 176) = **(_QWORD **)(a2 + 184);
    *(_QWORD *)(a3 + 216) = **(_QWORD **)(a2 + 224);
    *(_QWORD *)(a3 + 224) = **(_QWORD **)(a2 + 232);
    *(_QWORD *)(a3 + 232) = **(_QWORD **)(a2 + 240);
    *(_QWORD *)(a3 + 240) = **(_QWORD **)(a2 + 248);
  }
  if ( (v3 & 0x100040) == 0x100040 )
  {
    if ( (*(_BYTE *)(a1 + 368) & 1) != 0 )
    {
      v10 = *(int *)(a3 + 1248);
      v11 = (_QWORD *)*((_QWORD *)KeGetCurrentThread() + 51);
      if ( !v11 )
        goto LABEL_21;
      v12 = (_QWORD *)*v11;
      if ( *v11 )
      {
        do
        {
          v11 = v12;
          v12 = (_QWORD *)*v12;
        }
        while ( v12 );
      }
      v13 = v11[5];
      if ( v13 )
        sub_14056FC20(a3 + v10 + 720, MEMORY[0xFFFFF780000003D8] & 0xFFFFFFFFFFFFFFFCuLL, v13);
      else
LABEL_21:
        sub_14024215C(a3 + v10 + 720, (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & 0xFFFFFFFFFFFFFFFCuLL);
    }
    *(_DWORD *)(a3 + 52) = *(_DWORD *)(a1 + 44);
    *(_DWORD *)(a3 + 280) = *(_DWORD *)(a1 + 44);
  }
  if ( (v3 & 0x100008) == 0x100008 )
  {
    *(_OWORD *)(a3 + 416) = *(_OWORD *)(a1 + 112);
    *(_OWORD *)(a3 + 432) = *(_OWORD *)(a1 + 128);
    *(_OWORD *)(a3 + 448) = *(_OWORD *)(a1 + 144);
    *(_OWORD *)(a3 + 464) = *(_OWORD *)(a1 + 160);
    *(_OWORD *)(a3 + 480) = *(_OWORD *)(a1 + 176);
    *(_OWORD *)(a3 + 496) = *(_OWORD *)(a1 + 192);
    *(_OWORD *)(a3 + 512) = *(_OWORD *)*(_QWORD *)(a2 + 48);
    *(_OWORD *)(a3 + 528) = *(_OWORD *)*(_QWORD *)(a2 + 56);
    *(_OWORD *)(a3 + 544) = *(_OWORD *)*(_QWORD *)(a2 + 64);
    *(_OWORD *)(a3 + 560) = *(_OWORD *)*(_QWORD *)(a2 + 72);
    *(_OWORD *)(a3 + 576) = *(_OWORD *)*(_QWORD *)(a2 + 80);
    *(_OWORD *)(a3 + 592) = *(_OWORD *)*(_QWORD *)(a2 + 88);
    *(_OWORD *)(a3 + 608) = *(_OWORD *)*(_QWORD *)(a2 + 96);
    *(_OWORD *)(a3 + 624) = *(_OWORD *)*(_QWORD *)(a2 + 104);
    *(_OWORD *)(a3 + 640) = *(_OWORD *)*(_QWORD *)(a2 + 112);
    *(_OWORD *)(a3 + 656) = *(_OWORD *)*(_QWORD *)(a2 + 120);
    *(_DWORD *)(a3 + 52) = *(_DWORD *)(a1 + 44);
    *(_DWORD *)(a3 + 280) = *(_DWORD *)(a1 + 44);
  }
  result = v3 & 0x100010;
  if ( (v3 & 0x100010) == 0x100010 )
  {
    if ( (*(_DWORD *)(a1 + 256) & 0x355LL) != 0 )
    {
      *(_QWORD *)(a3 + 72) = *(_QWORD *)(a1 + 216);
      *(_QWORD *)(a3 + 80) = *(_QWORD *)(a1 + 224);
      *(_QWORD *)(a3 + 88) = *(_QWORD *)(a1 + 232);
      *(_QWORD *)(a3 + 96) = *(_QWORD *)(a1 + 240);
      *(_QWORD *)(a3 + 104) = *(_QWORD *)(a1 + 248);
      v8 = *(_QWORD *)(a1 + 256);
    }
    else
    {
      v8 = 0LL;
      *(_QWORD *)(a3 + 72) = 0LL;
      *(_QWORD *)(a3 + 80) = 0LL;
      *(_QWORD *)(a3 + 88) = 0LL;
      *(_QWORD *)(a3 + 96) = 0LL;
      *(_QWORD *)(a3 + 104) = 0LL;
    }
    *(_QWORD *)(a3 + 112) = v8;
    result = sub_140298B90(a3, a1);
  }
  if ( (v3 & 0x40000000) != 0 )
  {
    result = *(_DWORD *)(a3 + 48) & 0x67FFFFFF | 0x80000000;
    *(_DWORD *)(a3 + 48) = result;
    v9 = *(_BYTE *)(a1 + 43);
    if ( v9 == 1 )
    {
      result |= 0x8000000u;
      *(_DWORD *)(a3 + 48) = result;
    }
    else if ( v9 == 2 )
    {
      result |= 0x10000000u;
      *(_DWORD *)(a3 + 48) = result;
    }
  }
  return result;
}
