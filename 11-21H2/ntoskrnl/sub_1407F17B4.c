/*
 * XREFs of sub_1407F17B4 @ 0x1407F17B4
 * Callers:
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 * Callees:
 *     sub_140216E18 @ 0x140216E18 (sub_140216E18.c)
 *     sub_140216EB4 @ 0x140216EB4 (sub_140216EB4.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14027D408 @ 0x14027D408 (sub_14027D408.c)
 *     sub_1402821F4 @ 0x1402821F4 (sub_1402821F4.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1403095B0 @ 0x1403095B0 (sub_1403095B0.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14032A4B0 @ 0x14032A4B0 (sub_14032A4B0.c)
 *     sub_14036C3B4 @ 0x14036C3B4 (sub_14036C3B4.c)
 *     sub_14036C428 @ 0x14036C428 (sub_14036C428.c)
 *     sub_14036C440 @ 0x14036C440 (sub_14036C440.c)
 *     sub_14036C730 @ 0x14036C730 (sub_14036C730.c)
 *     sub_14036C8EC @ 0x14036C8EC (sub_14036C8EC.c)
 *     sub_14036C924 @ 0x14036C924 (sub_14036C924.c)
 *     RtlRandomEx @ 0x14036C940 (RtlRandomEx.c)
 *     sub_14036C968 @ 0x14036C968 (sub_14036C968.c)
 *     sub_14036C978 @ 0x14036C978 (sub_14036C978.c)
 *     sub_14036D8C8 @ 0x14036D8C8 (sub_14036D8C8.c)
 *     sub_1407F1A10 @ 0x1407F1A10 (sub_1407F1A10.c)
 *     sub_1407F1AF8 @ 0x1407F1AF8 (sub_1407F1AF8.c)
 *     sub_1407F1C84 @ 0x1407F1C84 (sub_1407F1C84.c)
 */

char __fastcall sub_1407F17B4(__int64 a1, __int64 a2, unsigned __int64 a3, char a4, unsigned int a5, __int64 a6)
{
  __int64 v7; // rsi
  unsigned __int64 v8; // rbp
  __int64 v9; // rdi
  __int16 *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rdx
  ULONG_PTR v13; // rbp
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rsi
  unsigned __int64 v18; // rbx
  int v19; // r15d
  __int64 v21; // [rsp+30h] [rbp-38h] BYREF
  __int64 v22; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int64 v23; // [rsp+80h] [rbp+18h] BYREF

  v23 = a3;
  v22 = 0LL;
  v7 = qword_140D3B248;
  v8 = a3;
  v9 = a6;
  v21 = qword_140D3B248;
  if ( a1 )
    v10 = **(__int16 ***)(a6 + 2520);
  else
    v10 = (__int16 *)&StartContext;
  if ( !(unsigned int)sub_14036C978((__int64)v10) )
    return 0;
  sub_14036C968(v9, *v10);
  *(_DWORD *)(v9 + 2876) = 1;
  if ( !(unsigned int)sub_14032A4B0((__int64)v10, 4uLL, 0) )
    return 0;
  *(_DWORD *)(v9 + 1664) = (unsigned __int16)RtlRandomEx(&dword_140C50648);
  *(_QWORD *)(v9 + 2352) = 0LL;
  *(_QWORD *)(v9 + 2368) = v9 + 2360;
  *(_QWORD *)(v9 + 2360) = v9 + 2360;
  if ( v8 != sub_14036C924() )
  {
    sub_14036D8C8(v9 + 1664, &v21, &v23, a4, 1);
    v8 = v23;
    v7 = v21;
  }
  *(_QWORD *)(v9 + 1776) = v7;
  *(_QWORD *)(v9 + 1784) = v8;
  if ( (a4 & 1) != 0 )
    *(_BYTE *)(v9 + 1848) |= 0x40u;
  if ( (int)sub_14036C8EC(v9, v11, v7) < 0 )
  {
LABEL_26:
    sub_14028CE10((__int64)v10, 4LL);
    return 0;
  }
  if ( !(unsigned int)sub_1402821F4((ULONG_PTR *)v10, v7, 0LL) )
  {
LABEL_25:
    sub_140216EB4(v9, v12, v7);
    goto LABEL_26;
  }
  v13 = sub_1403095B0((__int64)&qword_140C534C0, 1u);
  if ( !v13 )
  {
LABEL_24:
    sub_140216E18((__int64)v10, v7);
    goto LABEL_25;
  }
  if ( (int)sub_1407F1A10(v9, a5) < 0 )
  {
LABEL_23:
    sub_1402BB6D0((__int64)&qword_140C534C0, (_QWORD *)v13, 1u);
    goto LABEL_24;
  }
  if ( !(unsigned int)sub_1407F1C84(&v22) )
  {
    sub_14027D408(v9, 0);
    goto LABEL_23;
  }
  v14 = a5;
  *(_QWORD *)(v9 + 1608) = 4LL;
  v15 = sub_1407F1AF8(v9, v13, v14);
  v16 = v22;
  v17 = v15;
  if ( v22 )
  {
    *(_QWORD *)(v9 + 1368) = v22;
    _InterlockedOr((volatile signed __int32 *)(v9 + 1124), 0x10000u);
    v16 = v22;
  }
  sub_14036C730((_QWORD *)v9, v16);
  sub_14036C440(v9, (__int64)(v13 << 25) >> 16);
  v18 = sub_1402CBD10(0LL, v17, -1879048186) & 0xFFFFFFFFFFFFFEFFuLL;
  v19 = 0;
  if ( !sub_140317A80(((__int64)(v13 << 25) >> 16) + 3944) )
    goto LABEL_17;
  if ( (unsigned int)sub_140229550() )
  {
    v19 = 1;
    if ( !HIBYTE(word_140C51864) )
    {
LABEL_31:
      if ( (v18 & 1) != 0 )
        v18 |= 0x8000000000000000uLL;
    }
  }
  else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
  {
    goto LABEL_31;
  }
LABEL_17:
  *(_QWORD *)(((__int64)(v13 << 25) >> 16) + 0xF68) = v18;
  if ( v19 )
    sub_1402294F0(((__int64)(v13 << 25) >> 16) + 3944, v18);
  *(_QWORD *)(v9 + 40) = sub_14036C428(v17 << 12);
  sub_14036C3B4(v9);
  sub_1402BB6D0((__int64)&qword_140C534C0, (_QWORD *)v13, 1u);
  return 1;
}
