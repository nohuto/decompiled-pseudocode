/*
 * XREFs of sub_14059388C @ 0x14059388C
 * Callers:
 *     sub_14055225C @ 0x14055225C (sub_14055225C.c)
 * Callees:
 *     RtlGetNtProductType @ 0x140245CC0 (RtlGetNtProductType.c)
 *     ExVerifySuite @ 0x1403CCF10 (ExVerifySuite.c)
 */

__int64 __fastcall sub_14059388C(_OWORD *a1)
{
  int v2; // ebx
  __int64 result; // rax
  __int128 v4; // [rsp+20h] [rbp-50h]
  __int128 v5; // [rsp+30h] [rbp-40h]
  __int128 v6; // [rsp+40h] [rbp-30h]
  __int128 v7; // [rsp+50h] [rbp-20h]
  __int128 v8; // [rsp+60h] [rbp-10h]
  _NT_PRODUCT_TYPE NtProductType; // [rsp+80h] [rbp+10h] BYREF

  NtProductType = 0;
  v2 = dword_140C1ACA8;
  *(_QWORD *)&v4 = 0x5000000001LL;
  DWORD2(v4) = dword_140D069F4;
  RtlGetNtProductType(&NtProductType);
  if ( NtProductType != NtProductWinNt
    || ExVerifySuite(EmbeddedNT)
    || ExVerifySuite(EmbeddedRestricted)
    || ExVerifySuite(SecurityAppliance) )
  {
    v2 |= 0x80000000;
  }
  LODWORD(v5) = dword_140C29FC0;
  HIDWORD(v4) = v2;
  DWORD1(v5) = ((unsigned int)dword_140D06880 >> 1) & 1;
  *((_QWORD *)&v5 + 1) = qword_140C534B0;
  *(_QWORD *)&v6 = qword_140C4F048;
  *((_QWORD *)&v6 + 1) = qword_140C534B8;
  *(_QWORD *)&v7 = qword_140C534A8;
  *((_QWORD *)&v7 + 1) = qword_140C592E8;
  *(_QWORD *)&v8 = qword_140C58E00;
  result = qword_140C58E08;
  *a1 = v4;
  *((_QWORD *)&v8 + 1) = result;
  a1[1] = v5;
  a1[2] = v6;
  a1[3] = v7;
  a1[4] = v8;
  return result;
}
