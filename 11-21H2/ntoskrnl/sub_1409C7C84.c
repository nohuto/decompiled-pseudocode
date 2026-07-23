/*
 * XREFs of sub_1409C7C84 @ 0x1409C7C84
 * Callers:
 *     sub_1407A0088 @ 0x1407A0088 (sub_1407A0088.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_140347920 @ 0x140347920 (sub_140347920.c)
 *     sub_1403CD84C @ 0x1403CD84C (sub_1403CD84C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407B66E0 @ 0x1407B66E0 (sub_1407B66E0.c)
 *     sub_1409CF1A0 @ 0x1409CF1A0 (sub_1409CF1A0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1409C7C84(__int64 a1, unsigned int a2)
{
  __int64 v3; // rsi
  int v4; // eax
  _QWORD *v5; // rbx
  __int64 *v6; // rcx
  __int64 v7; // rdx
  PVOID P[2]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD Src[132]; // [rsp+38h] [rbp-D0h] BYREF

  P[0] = 0LL;
  v3 = a2;
  memset(Src, 0, 0x418uLL);
  v4 = sub_1407B66E0(a1, P);
  if ( v4 < 0 )
  {
    sub_1409CF1A0((unsigned int)v4);
  }
  else
  {
    v5 = (_QWORD *)sub_140347920(a1, 0x746C6644u);
    LODWORD(Src[2]) = 524422;
    Src[0] = 0x125100000005LL;
    v6 = (__int64 *)v5[19];
    Src[10] = &qword_140001B08;
    Src[12] = v5[3];
    v7 = *v6;
    Src[20] = *(_QWORD *)(a1 + 1088);
    LODWORD(Src[3]) = 4;
    LODWORD(v6) = *(unsigned __int8 *)(v7 + 1);
    Src[6] = v7;
    Src[7] = 0x2000000001LL;
    Src[11] = 0x800000005LL;
    HIDWORD(Src[3]) = 4 * (_DWORD)v6 + 8;
    Src[26] = P[0];
    Src[15] = 0x40000000ALL;
    HIDWORD(Src[23]) = *(unsigned __int16 *)P[0] + 16;
    Src[16] = v3;
    Src[19] = 0x80000000BLL;
    LODWORD(Src[23]) = 2;
    LODWORD(Src[1]) = 6;
    sub_1403CD84C(Src);
    ObfDereferenceObject(v5);
  }
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0);
}
