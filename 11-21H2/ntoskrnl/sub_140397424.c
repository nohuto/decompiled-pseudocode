/*
 * XREFs of sub_140397424 @ 0x140397424
 * Callers:
 *     sub_14039A210 @ 0x14039A210 (sub_14039A210.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_14029394C @ 0x14029394C (sub_14029394C.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeQueryInterruptTimePrecise @ 0x140303490 (KeQueryInterruptTimePrecise.c)
 *     sub_1403978A4 @ 0x1403978A4 (sub_1403978A4.c)
 *     sub_1403978C0 @ 0x1403978C0 (sub_1403978C0.c)
 *     sub_1403978E4 @ 0x1403978E4 (sub_1403978E4.c)
 *     sub_14039A88C @ 0x14039A88C (sub_14039A88C.c)
 *     sub_14039AD24 @ 0x14039AD24 (sub_14039AD24.c)
 *     sub_14039AD4C @ 0x14039AD4C (sub_14039AD4C.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1406EBB94 @ 0x1406EBB94 (sub_1406EBB94.c)
 *     sub_140750EC4 @ 0x140750EC4 (sub_140750EC4.c)
 *     sub_14081BA34 @ 0x14081BA34 (sub_14081BA34.c)
 */

__int64 __fastcall sub_140397424(__int64 a1, int a2)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // r14
  unsigned int v6; // eax
  __int64 v7; // rax
  int v8; // r13d
  int v9; // ecx
  __int64 v10; // rax
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rdx
  int v16; // edx
  int v17; // ecx
  __int128 v18; // xmm0
  char v19; // al
  char v20; // al
  int v21; // r10d
  __int64 v22; // r11
  __int64 v23; // r8
  KIRQL v24; // al
  unsigned __int64 v25; // rbx
  __int64 result; // rax
  __int64 v27; // rsi
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v29; // r9
  bool v30; // zf
  int v31; // [rsp+20h] [rbp-99h]
  _BYTE v32[12]; // [rsp+24h] [rbp-95h] BYREF
  __int64 v33; // [rsp+30h] [rbp-89h] BYREF
  __int64 v34; // [rsp+38h] [rbp-81h]
  unsigned __int64 v35; // [rsp+40h] [rbp-79h]
  LARGE_INTEGER v36; // [rsp+48h] [rbp-71h] BYREF
  __int64 v37; // [rsp+50h] [rbp-69h]
  unsigned __int64 v38; // [rsp+58h] [rbp-61h]
  unsigned __int64 v39; // [rsp+60h] [rbp-59h]
  unsigned __int64 v40; // [rsp+68h] [rbp-51h]
  __int64 v41; // [rsp+70h] [rbp-49h]
  __int128 v42; // [rsp+78h] [rbp-41h] BYREF
  __int128 v43; // [rsp+88h] [rbp-31h] BYREF
  __int128 v44; // [rsp+98h] [rbp-21h]
  _OWORD v45[6]; // [rsp+A8h] [rbp-11h] BYREF
  int v46; // [rsp+120h] [rbp+67h]
  int v47; // [rsp+128h] [rbp+6Fh] BYREF
  int v48; // [rsp+130h] [rbp+77h]
  int v49; // [rsp+138h] [rbp+7Fh]

  *(_QWORD *)&v42 = 0LL;
  DWORD2(v42) = 0;
  v36.QuadPart = 0LL;
  memset(v45, 0, 32);
  LOBYTE(v35) = 0;
  v43 = 0LL;
  v44 = 0LL;
  sub_14039AD4C(&v43);
  v4 = KeQueryInterruptTimePrecise(&v36);
  v5 = (v4 - qword_140C54148) / 0xAuLL;
  sub_140750EC4(v45);
  if ( v5 )
  {
    v6 = sub_1403978E4((unsigned int)dword_140C54140, HIDWORD(v45[0]));
    v46 = sub_1403978C0(v6, v5);
  }
  else
  {
    v46 = 0;
  }
  v7 = sub_14081BA34(&v42, &unk_140C21E40);
  v8 = HIDWORD(xmmword_140C229F4);
  if ( HIDWORD(xmmword_140C229F4) )
    LODWORD(v7) = (unsigned int)(100 * xmmword_140C22A04) / HIDWORD(xmmword_140C229F4);
  else
    LOBYTE(v7) = 0;
  v9 = 0;
  if ( (xmmword_140C229F4 & 0x40000000) == 0 )
    v9 = xmmword_140C22A04;
  v48 = v7;
  v37 = *((_QWORD *)&v43 + 1) - qword_140C54150;
  v49 = v9;
  v31 = DWORD2(v44) - dword_140C54160;
  v10 = sub_1403978A4(qword_140C541D8, v44, v5);
  v11 = v5 + qword_140C54158 - v43;
  v41 = v10;
  v12 = _InterlockedExchangeAdd64(&qword_140C54280, 0LL);
  if ( v12 )
    v12 = (v12 - qword_140C54148) / 0xA;
  v34 = qword_140C54190;
  v34 -= sub_14029394C(qword_140C54180, qword_140D069F8, 0xF4240uLL);
  v13 = qword_140C541A0;
  v40 = v5 - qword_140C54190;
  if ( qword_140C54198 )
  {
    if ( qword_140C54148 <= (unsigned __int64)qword_140C54198 )
      v27 = v4 - qword_140C54198;
    else
      v27 = v4 - qword_140C54148;
    v13 = v27 + qword_140C541A0;
  }
  v14 = v13 / 0xA;
  v38 = sub_14029394C(qword_140C541B0, qword_140D069F8, 0xF4240uLL);
  v39 = sub_14029394C(qword_140C541C0, qword_140D069F8, 0xF4240uLL);
  sub_14039A88C(0LL);
  *(_DWORD *)&v32[8] = 0;
  v33 = 0LL;
  *(_QWORD *)v32 = (unsigned __int8)byte_140C54208;
  sub_14039AD24((unsigned int)dword_140C542C0, &v32[4], &v33);
  *(_QWORD *)&v32[4] -= qword_140C541E0;
  v33 -= qword_140C541E8;
  if ( qword_140C54168 )
  {
    v15 = 100 * qword_140C54170 % (unsigned __int64)qword_140C54168;
    v35 = 100 * qword_140C54170 / (unsigned __int64)qword_140C54168;
  }
  v47 = 0;
  sub_1406EBB94(&v47, v15);
  v16 = v47 - dword_140C54240;
  v17 = v49;
  v18 = v42;
  *(_DWORD *)a1 = v46;
  *(_QWORD *)(a1 + 40) = v37;
  *(_DWORD *)(a1 + 56) = v31;
  *(_QWORD *)(a1 + 72) = v34;
  *(_QWORD *)(a1 + 96) = v38;
  *(_QWORD *)(a1 + 104) = v39;
  *(_QWORD *)(a1 + 80) = v40;
  *(_QWORD *)(a1 + 128) = v41;
  *(_BYTE *)(a1 + 160) = v35;
  v19 = 2 * v48;
  *(_DWORD *)(a1 + 28) = v17;
  *(_OWORD *)(a1 + 8) = v18;
  *(_DWORD *)(a1 + 24) = v8;
  LOBYTE(v17) = v19 ^ v32[0] & 1;
  *(_QWORD *)(a1 + 32) = v5;
  v20 = *(_BYTE *)(a1 + 125);
  *(_BYTE *)(a1 + 124) = v17;
  *(_QWORD *)(a1 + 48) = v11;
  *(_QWORD *)(a1 + 64) = v12;
  *(_QWORD *)(a1 + 88) = v14;
  *(_DWORD *)(a1 + 116) = v21;
  *(_DWORD *)(a1 + 120) = a2;
  *(_QWORD *)(a1 + 136) = v22;
  *(_QWORD *)(a1 + 144) = v23;
  v47 = v16;
  *(_BYTE *)(a1 + 125) ^= (byte_140C54209 ^ v20) & 1;
  LOBYTE(v17) = *(_BYTE *)(a1 + 125) ^ (byte_140C54209 ^ *(_BYTE *)(a1 + 125)) & 2;
  *(_BYTE *)(a1 + 125) = v17;
  *(_BYTE *)(a1 + 125) = v17 ^ (byte_140C54209 ^ v17) & 4;
  *(_DWORD *)(a1 + 164) = dword_140C541F0;
  *(_DWORD *)(a1 + 168) = dword_140C541F4;
  *(_BYTE *)(a1 + 172) = byte_140C541F8;
  *(_DWORD *)(a1 + 176) = dword_140C541FC;
  *(_DWORD *)(a1 + 180) = dword_140C54200;
  *(_DWORD *)(a1 + 184) = dword_140C54204;
  *(_DWORD *)(a1 + 188) = dword_140C5420C;
  *(_DWORD *)(a1 + 192) = dword_140C54210;
  *(_BYTE *)(a1 + 196) = byte_140C54214;
  *(_DWORD *)(a1 + 200) = HIDWORD(v45[0]);
  *(_DWORD *)(a1 + 204) = DWORD2(v45[0]);
  *(_BYTE *)(a1 + 212) = byte_140C5421C;
  *(_BYTE *)(a1 + 213) = byte_140C5421D;
  *(_DWORD *)(a1 + 216) = dword_140C54220;
  *(_DWORD *)(a1 + 220) = dword_140C54224;
  *(_DWORD *)(a1 + 228) = v16;
  *(_QWORD *)(a1 + 232) = qword_140C541C8;
  *(_QWORD *)(a1 + 240) = qword_140C541D0;
  *(_DWORD *)(a1 + 224) = dword_140C54244;
  v24 = KeAcquireSpinLockRaiseToDpc(&qword_140C22378);
  *(_QWORD *)(a1 + 256) = qword_140C22368;
  *(_QWORD *)(a1 + 248) = qword_140C22370;
  *(_QWORD *)(a1 + 264) = qword_140C22360;
  v25 = v24;
  KeReleaseSpinLockFromDpcLevel(&qword_140C22378);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v25 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v29 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v25 + 1));
        v30 = ((unsigned int)result & *(_DWORD *)(v29 + 20)) == 0;
        *(_DWORD *)(v29 + 20) &= result;
        if ( v30 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v25);
  return result;
}
