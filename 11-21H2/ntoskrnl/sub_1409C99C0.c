/*
 * XREFs of sub_1409C99C0 @ 0x1409C99C0
 * Callers:
 *     sub_1406B5B9C @ 0x1406B5B9C (sub_1406B5B9C.c)
 *     sub_140753358 @ 0x140753358 (sub_140753358.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x14023A1C0 (PsGetCurrentThreadProcess.c)
 *     sub_1402F3558 @ 0x1402F3558 (sub_1402F3558.c)
 *     sub_1403CD84C @ 0x1403CD84C (sub_1403CD84C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407B66E0 @ 0x1407B66E0 (sub_1407B66E0.c)
 *     sub_1409CE6B8 @ 0x1409CE6B8 (sub_1409CE6B8.c)
 *     sub_1409CF1A0 @ 0x1409CF1A0 (sub_1409CF1A0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1409C99C0(
        __int64 *a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        unsigned __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned int a8,
        __int64 a9)
{
  __int64 CurrentThreadProcess; // rax
  int v14; // edi
  __int16 v15; // ax
  int v16; // edx
  int v17; // edx
  int v18; // eax
  __int64 v19; // rax
  int v20; // eax
  int v21; // eax
  bool v22; // al
  unsigned __int64 v23; // r8
  __int64 v24; // rcx
  unsigned __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  PVOID P; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v30; // [rsp+30h] [rbp-D8h]
  __int64 v31; // [rsp+38h] [rbp-D0h]
  _QWORD Src[132]; // [rsp+48h] [rbp-C0h] BYREF

  P = 0LL;
  v30 = a9;
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  v31 = *(_QWORD *)(CurrentThreadProcess + 1088);
  v14 = sub_1407B66E0(CurrentThreadProcess, &P);
  if ( v14 >= 0 )
  {
    memset(Src, 0, 0x418uLL);
    if ( (a8 & 8) != 0 )
    {
      Src[0] = 0x132B00000006LL;
      v15 = 139;
    }
    else
    {
      if ( (a8 & 0x20) != 0 )
      {
        HIDWORD(Src[0]) = 4911;
      }
      else
      {
        HIDWORD(Src[0]) = 4913;
        if ( (a8 & 0x40) == 0 )
          HIDWORD(Src[0]) = 4670;
      }
      LODWORD(Src[0]) = 3;
      v15 = 141;
    }
    v16 = *a2;
    LOWORD(Src[2]) = v15;
    v17 = v16 + 16;
    WORD1(Src[2]) = 8;
    v18 = *(unsigned __int8 *)(a6 + 1);
    LODWORD(Src[3]) = 4;
    Src[6] = a6;
    LODWORD(Src[7]) = 1;
    HIDWORD(Src[7]) = v17;
    HIDWORD(Src[3]) = 4 * v18 + 8;
    v19 = *a1;
    Src[10] = a2;
    Src[11] = 0x800000005LL;
    if ( v19 )
      Src[12] = *(_QWORD *)(v19 + 24);
    else
      Src[12] = *(_QWORD *)(a1[2] + 24);
    v20 = *a3 + 16;
    LODWORD(Src[15]) = 1;
    HIDWORD(Src[15]) = v17;
    Src[18] = a2;
    LODWORD(Src[19]) = 1;
    HIDWORD(Src[19]) = v20;
    Src[22] = a3;
    if ( a4 )
    {
      v21 = *a4;
      LODWORD(Src[23]) = 2;
      HIDWORD(Src[23]) = v21 + 16;
      Src[26] = a4;
    }
    Src[27] = 0x80000000BLL;
    v22 = sub_1402F3558(a5, 0);
    v25 = v24 ^ 0xFFFFFFFF80000000uLL;
    LODWORD(Src[31]) = 24;
    if ( !v22 )
      v25 = v23;
    Src[28] = v25 & 0xFFFFFFFFFFFFFFFCuLL;
    v26 = sub_1409CE6B8(a7);
    Src[33] = 4LL;
    HIDWORD(Src[31]) = v26;
    Src[34] = a7;
    Src[32] = a8;
    LODWORD(Src[35]) = 24;
    HIDWORD(Src[35]) = sub_1409CE6B8(v30);
    Src[38] = v27;
    Src[40] = v31;
    Src[46] = P;
    Src[36] = a8;
    v28 = *(unsigned __int16 *)P + 16;
    Src[37] = 4LL;
    HIDWORD(Src[43]) = v28;
    Src[39] = 0x80000000BLL;
    LODWORD(Src[43]) = 2;
    LODWORD(Src[1]) = 11;
    sub_1403CD84C(Src);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v14 < 0 )
    sub_1409CF1A0((unsigned int)v14);
}
