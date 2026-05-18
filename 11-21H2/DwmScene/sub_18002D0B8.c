/*
 * XREFs of sub_18002D0B8 @ 0x18002D0B8
 * Callers:
 *     sub_1800DEA94 @ 0x1800DEA94 (sub_1800DEA94.c)
 *     sub_1800F16A4 @ 0x1800F16A4 (sub_1800F16A4.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_18002CA94 @ 0x18002CA94 (sub_18002CA94.c)
 *     sub_18002CAA0 @ 0x18002CAA0 (sub_18002CAA0.c)
 *     sub_18002CAAC @ 0x18002CAAC (sub_18002CAAC.c)
 *     sub_18002D020 @ 0x18002D020 (sub_18002D020.c)
 *     sub_18002D060 @ 0x18002D060 (sub_18002D060.c)
 *     sub_18002EF40 @ 0x18002EF40 (sub_18002EF40.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall sub_18002D0B8(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdx
  _BYTE *v13; // rcx
  char v14; // di
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdi
  _QWORD v20[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v21[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v22; // [rsp+38h] [rbp-20h]
  _BYTE v23[8]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v24; // [rsp+48h] [rbp-10h]

  v8 = a3[1];
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = a3[1];
  }
  v20[0] = *a3;
  v20[1] = v8;
  sub_18002D060((_QWORD *)a1, v20);
  *(_QWORD *)a1 = &Spectre::Engine::RenderOutput::`vftable';
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  if ( a3[1] )
  {
    *(_QWORD *)(a1 + 80) = *a3;
    v9 = a3[1];
    *(_QWORD *)(a1 + 88) = v9;
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 12));
  }
  *(_OWORD *)(a1 + 96) = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 112) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_BYTE *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 164) = 0LL;
  *(_QWORD *)(a1 + 172) = 0LL;
  *(_QWORD *)(a1 + 180) = 0LL;
  *(_DWORD *)(a1 + 188) = 0;
  *(_DWORD *)(a1 + 192) = 1065353216;
  *(_DWORD *)(a1 + 196) = 1065353216;
  *(_DWORD *)(a1 + 200) = 3;
  v10 = sub_18001D684();
  v11 = v10;
  if ( v10 )
  {
    *(_OWORD *)v10 = 0LL;
    *(_DWORD *)(v10 + 8) = 1;
    *(_DWORD *)(v10 + 12) = 1;
    *(_QWORD *)v10 = &std::_Ref_count_obj2<Spectre::Engine::ImageProcessingManager>::`vftable';
    sub_18002CAAC();
  }
  else
  {
    v11 = 0LL;
  }
  *(_QWORD *)(a1 + 208) = v11 + 16;
  *(_QWORD *)(a1 + 216) = v11;
  *(_WORD *)(a1 + 236) = 256;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_DWORD *)(a1 + 296) = 2;
  Mtx_init_in_situ((_Mtx_t)(a1 + 304), 2);
  if ( *(_DWORD *)(a2 + 24) == 1 )
  {
    v12 = *a4;
    v24 = a4[1];
    *a4 = 0LL;
    a4[1] = 0LL;
    v13 = v23;
    v14 = 5;
  }
  else
  {
    v22 = 0LL;
    v13 = v21;
    v14 = 6;
    v12 = 0LL;
  }
  *(_QWORD *)(a1 + 384) = v12;
  *(_QWORD *)(a1 + 392) = *((_QWORD *)v13 + 1);
  *(_QWORD *)v13 = 0LL;
  *((_QWORD *)v13 + 1) = 0LL;
  if ( (v14 & 2) != 0 )
  {
    v14 &= ~2u;
    sub_180010910((__int64)v21);
  }
  if ( (v14 & 1) != 0 )
    sub_180010910((__int64)v23);
  *(_BYTE *)(a1 + 400) = 0;
  *(_QWORD *)(a1 + 408) = 1LL;
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_QWORD *)(a1 + 432) = 0LL;
  v15 = sub_18001D684();
  v16 = v15;
  if ( v15 )
  {
    *(_OWORD *)v15 = 0LL;
    *(_DWORD *)(v15 + 8) = 1;
    *(_DWORD *)(v15 + 12) = 1;
    *(_QWORD *)v15 = &std::_Ref_count_obj2<Spectre::Engine::GpuProfiler>::`vftable';
    sub_18002CA94();
  }
  else
  {
    v16 = 0LL;
  }
  *(_QWORD *)(a1 + 440) = v16 + 16;
  *(_QWORD *)(a1 + 448) = v16;
  v17 = sub_18001D684();
  v18 = v17;
  if ( v17 )
  {
    *(_OWORD *)v17 = 0LL;
    *(_DWORD *)(v17 + 8) = 1;
    *(_DWORD *)(v17 + 12) = 1;
    *(_QWORD *)v17 = &std::_Ref_count_obj2<Spectre::Engine::GpuProfilingGrapher>::`vftable';
    sub_18002CAA0();
  }
  else
  {
    v18 = 0LL;
  }
  *(_QWORD *)(a1 + 456) = v18 + 16;
  *(_QWORD *)(a1 + 464) = v18;
  sub_18002D020((__int64 *)(a1 + 472));
  *(_QWORD *)(a1 + 480) = 1LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_QWORD *)(a1 + 496) = 0LL;
  *(_QWORD *)(a1 + 272) = 0x8000000000000000uLL;
  *(_QWORD *)(a1 + 280) = 0x8000000000000000uLL;
  *(_QWORD *)(a1 + 288) = 0LL;
  sub_18002EF40(a1, 0LL, 21LL);
  sub_18002EF40(a1, 1LL, 21LL);
  sub_18002EF40(a1, 2LL, 16LL);
  sub_180010910((__int64)a3);
  sub_180010910((__int64)a4);
  return a1;
}
