/*
 * XREFs of sub_140295D00 @ 0x140295D00
 * Callers:
 *     sub_140295210 @ 0x140295210 (sub_140295210.c)
 *     RtlUnwindEx @ 0x1402957A0 (RtlUnwindEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140295D00(__int64 a1, __int64 a2)
{
  int v3; // r10d
  int v4; // r9d
  int v5; // edx
  __int64 result; // rax
  _OWORD *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx

  if ( a2 == a1 )
  {
    result = *(_DWORD *)(a2 + 48) & 0x1000CF;
    *(_DWORD *)(a1 + 48) = result;
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 48);
    v4 = 0;
    *(_DWORD *)(a1 + 48) = 0;
    v5 = *(_DWORD *)(a2 + 48);
    if ( (v5 & 0x100080) == 0x100080 && (v3 & 0x100080) == 0x100080 )
    {
      v8 = *(int *)(a1 + 1256);
      *(_DWORD *)(a1 + 48) = 1048704;
      v9 = *(int *)(a2 + 1256);
      *(_OWORD *)(v8 + a1 + 1232) = *(_OWORD *)(v9 + a2 + 1232);
      *(_QWORD *)(v8 + a1 + 1248) = *(_QWORD *)(v9 + a2 + 1248);
      v5 = *(_DWORD *)(a2 + 48);
      v4 = *(_DWORD *)(a1 + 48);
    }
    *(_DWORD *)(a1 + 48) = v4 | v5 & 0x10000F;
    *(_QWORD *)(a1 + 248) = *(_QWORD *)(a2 + 248);
    *(_QWORD *)(a1 + 144) = *(_QWORD *)(a2 + 144);
    *(_QWORD *)(a1 + 152) = *(_QWORD *)(a2 + 152);
    *(_QWORD *)(a1 + 160) = *(_QWORD *)(a2 + 160);
    *(_QWORD *)(a1 + 168) = *(_QWORD *)(a2 + 168);
    *(_QWORD *)(a1 + 176) = *(_QWORD *)(a2 + 176);
    *(_QWORD *)(a1 + 216) = *(_QWORD *)(a2 + 216);
    *(_QWORD *)(a1 + 224) = *(_QWORD *)(a2 + 224);
    *(_QWORD *)(a1 + 232) = *(_QWORD *)(a2 + 232);
    *(_QWORD *)(a1 + 240) = *(_QWORD *)(a2 + 240);
    *(_OWORD *)(a1 + 512) = *(_OWORD *)(a2 + 512);
    *(_OWORD *)(a1 + 528) = *(_OWORD *)(a2 + 528);
    *(_OWORD *)(a1 + 544) = *(_OWORD *)(a2 + 544);
    *(_OWORD *)(a1 + 560) = *(_OWORD *)(a2 + 560);
    *(_OWORD *)(a1 + 576) = *(_OWORD *)(a2 + 576);
    *(_OWORD *)(a1 + 592) = *(_OWORD *)(a2 + 592);
    *(_OWORD *)(a1 + 608) = *(_OWORD *)(a2 + 608);
    *(_OWORD *)(a1 + 624) = *(_OWORD *)(a2 + 624);
    *(_OWORD *)(a1 + 640) = *(_OWORD *)(a2 + 640);
    *(_OWORD *)(a1 + 656) = *(_OWORD *)(a2 + 656);
    *(_WORD *)(a1 + 56) = *(_WORD *)(a2 + 56);
    *(_WORD *)(a1 + 66) = *(_WORD *)(a2 + 66);
    *(_DWORD *)(a1 + 52) = *(_DWORD *)(a2 + 52);
    *(_DWORD *)(a1 + 68) = *(_DWORD *)(a2 + 68);
    result = a2 + 256;
    v7 = (_OWORD *)(a1 + 256);
    *v7 = *(_OWORD *)(a2 + 256);
    v7[1] = *(_OWORD *)(a2 + 272);
    v7[2] = *(_OWORD *)(a2 + 288);
    v7[3] = *(_OWORD *)(a2 + 304);
    v7[4] = *(_OWORD *)(a2 + 320);
    v7[5] = *(_OWORD *)(a2 + 336);
    v7[6] = *(_OWORD *)(a2 + 352);
    v7[7] = *(_OWORD *)(a2 + 368);
    v7[8] = *(_OWORD *)(a2 + 384);
    v7[9] = *(_OWORD *)(a2 + 400);
  }
  return result;
}
