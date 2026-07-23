/*
 * XREFs of sub_140B0DBD4 @ 0x140B0DBD4
 * Callers:
 *     sub_140B05E40 @ 0x140B05E40 (sub_140B05E40.c)
 * Callees:
 *     sub_140250C50 @ 0x140250C50 (sub_140250C50.c)
 *     RtlSetAllBits @ 0x140262CA0 (RtlSetAllBits.c)
 *     sub_140603974 @ 0x140603974 (sub_140603974.c)
 *     sub_140604884 @ 0x140604884 (sub_140604884.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     sub_14082CCC0 @ 0x14082CCC0 (sub_14082CCC0.c)
 *     sub_140A7BE44 @ 0x140A7BE44 (sub_140A7BE44.c)
 *     sub_140A7C1B8 @ 0x140A7C1B8 (sub_140A7C1B8.c)
 *     sub_140A7C400 @ 0x140A7C400 (sub_140A7C400.c)
 *     sub_140A82480 @ 0x140A82480 (sub_140A82480.c)
 *     sub_140A83574 @ 0x140A83574 (sub_140A83574.c)
 *     sub_140B0DDAC @ 0x140B0DDAC (sub_140B0DDAC.c)
 *     sub_140B0DE04 @ 0x140B0DE04 (sub_140B0DE04.c)
 *     sub_140B536A4 @ 0x140B536A4 (sub_140B536A4.c)
 *     sub_140B53724 @ 0x140B53724 (sub_140B53724.c)
 *     sub_140B53B88 @ 0x140B53B88 (sub_140B53B88.c)
 *     sub_140B53D38 @ 0x140B53D38 (sub_140B53D38.c)
 */

BOOLEAN __fastcall sub_140B0DBD4(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r8
  __int64 v4; // r8
  __int64 v5; // r8
  BOOLEAN result; // al
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rdx

  dword_140C1ACB8 = sub_140A7BE44();
  if ( (_QWORD)xmmword_140C1B2B0 )
    sub_140603974();
  qword_140D57560 = 0LL;
  qword_140C1A8B8 = (__int64)&qword_140C1A8B0;
  qword_140C1A8B0 = (__int64)&qword_140C1A8B0;
  dword_140C0D9F0 = (unsigned int)dword_140C0C854 >> 2;
  stru_140D57790.Buffer = (PULONG)&unk_140D58A68;
  stru_140D57790.SizeOfBitMap = 64;
  RtlSetAllBits(&stru_140D57790);
  stru_140D57780.SizeOfBitMap = 64;
  stru_140D57780.Buffer = (PULONG)&unk_140D58A60;
  RtlSetAllBits(&stru_140D57780);
  stru_140D577A0.SizeOfBitMap = 544;
  stru_140D577A0.Buffer = (PULONG)&unk_140D59300;
  RtlSetAllBits(&stru_140D577A0);
  sub_140250C50(
    (__int64)&unk_140CF9340,
    0LL,
    (void (__stdcall *)(PVOID, ULONG))sub_1402DB870,
    512,
    48,
    1413572182,
    16,
    dword_140C1AD3C);
  _InterlockedExchange(&dword_140C1B258, 1);
  if ( !dword_140C1ACBC )
  {
    if ( (int)sub_140A7C400(qword_140C1B220, 0LL, 64, 1, (PRTL_AVL_FREE_ROUTINE)sub_140373120) < 0 )
    {
      _InterlockedExchange(&dword_140C1B260, 1);
    }
    else
    {
      dword_140C1B248 = 0;
      _InterlockedExchange(&dword_140C1B200, 1);
    }
  }
  if ( (_QWORD)xmmword_140C1B2B0 )
    sub_140A83574();
  sub_140B0DE04(a1, &off_140D4F470, v2, &stru_140D57790);
  sub_140B0DE04(a1, &off_140D4E690, v3, &stru_140D57780);
  sub_140B0DE04(a1, &off_140D4E190, v4, 0LL);
  sub_140B0DE04(a1, &off_140D50040, v5, &stru_140D577A0);
  if ( !(_QWORD)xmmword_140C1B2B0 )
    return sub_140B0DDAC(a1 + 16);
  sub_14082CCC0(0x5Du, 0, 1);
  if ( (_DWORD)dword_140D68150 )
    sub_140B53B88();
  if ( dword_140D68154 )
    sub_140B53D38();
  sub_140A82480(dword_140C29FC0, dword_140C1AA70, dword_140C1ACA4, 0);
  dword_140C1AD14 = 1;
  sub_140B53724(a1);
  v8 = *(_QWORD *)(a1 + 16);
  v9 = *(_QWORD *)(v8 + 48) + *(unsigned int *)(v8 + 64);
  qword_140C1ACC8 = *(_QWORD *)(v8 + 48);
  qword_140C1AD28 = v9;
  if ( dword_140C1ACA4 )
    sub_140A7C1B8(v8, v7, 1u);
  v10 = *(_QWORD *)v8;
  sub_140604884();
  result = sub_140B536A4(a1);
  while ( v10 != a1 + 16 )
  {
    result = RtlEqualUnicodeString((PCUNICODE_STRING)(v10 + 88), &stru_140D4E150, 1u);
    if ( !result )
      result = sub_140A7C1B8(v10, v11, 0);
    v10 = *(_QWORD *)v10;
  }
  return result;
}
