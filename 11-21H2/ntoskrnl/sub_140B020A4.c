/*
 * XREFs of sub_140B020A4 @ 0x140B020A4
 * Callers:
 *     sub_14084C160 @ 0x14084C160 (sub_14084C160.c)
 * Callees:
 *     ExNotifyCallback @ 0x140232770 (ExNotifyCallback.c)
 *     sub_1403CFCF0 @ 0x1403CFCF0 (sub_1403CFCF0.c)
 *     sub_1403DB94C @ 0x1403DB94C (sub_1403DB94C.c)
 *     sub_1403DE6E0 @ 0x1403DE6E0 (sub_1403DE6E0.c)
 *     sub_140416F1C @ 0x140416F1C (sub_140416F1C.c)
 *     sub_1404173C8 @ 0x1404173C8 (sub_1404173C8.c)
 *     KeBugCheck @ 0x14041F3B0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405FDAE4 @ 0x1405FDAE4 (sub_1405FDAE4.c)
 *     sub_140602EB8 @ 0x140602EB8 (sub_140602EB8.c)
 *     sub_140604224 @ 0x140604224 (sub_140604224.c)
 *     sub_14082D3F8 @ 0x14082D3F8 (sub_14082D3F8.c)
 *     sub_14085A828 @ 0x14085A828 (sub_14085A828.c)
 *     sub_14086423C @ 0x14086423C (sub_14086423C.c)
 *     sub_140A81780 @ 0x140A81780 (sub_140A81780.c)
 *     sub_140AFC9DC @ 0x140AFC9DC (sub_140AFC9DC.c)
 *     sub_140AFE184 @ 0x140AFE184 (sub_140AFE184.c)
 *     sub_140B02300 @ 0x140B02300 (sub_140B02300.c)
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 *     sub_140B03800 @ 0x140B03800 (sub_140B03800.c)
 *     sub_140B063D4 @ 0x140B063D4 (sub_140B063D4.c)
 *     sub_140B07AB0 @ 0x140B07AB0 (sub_140B07AB0.c)
 *     sub_140B0B630 @ 0x140B0B630 (sub_140B0B630.c)
 *     sub_140B1C0FC @ 0x140B1C0FC (sub_140B1C0FC.c)
 *     sub_140B1E5EC @ 0x140B1E5EC (sub_140B1E5EC.c)
 *     sub_140B21F30 @ 0x140B21F30 (sub_140B21F30.c)
 *     sub_140B2359C @ 0x140B2359C (sub_140B2359C.c)
 *     sub_140B255E4 @ 0x140B255E4 (sub_140B255E4.c)
 *     sub_140B263A0 @ 0x140B263A0 (sub_140B263A0.c)
 *     sub_140B27884 @ 0x140B27884 (sub_140B27884.c)
 *     sub_140B30EE0 @ 0x140B30EE0 (sub_140B30EE0.c)
 *     sub_140B4B918 @ 0x140B4B918 (sub_140B4B918.c)
 *     sub_140B5446C @ 0x140B5446C (sub_140B5446C.c)
 */

__int64 __fastcall sub_140B020A4(__int64 a1, char a2)
{
  NTSTATUS v4; // eax
  __int64 v5; // rcx
  int v6; // eax
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 result; // rax

  sub_1403DE6E0();
  v4 = sub_14085A828();
  if ( v4 < 0 )
    KeBugCheckEx(0x32u, v4, 7uLL, 0LL, 0LL);
  LOBYTE(v5) = dword_140D011A8 != 0;
  v6 = ExpInitializeStateSeparationPhase1(v5);
  if ( (int)(v6 + 0x80000000) >= 0 && v6 != -1073741637 )
    KeBugCheckEx(0x32u, 0LL, 0LL, 0LL, 0LL);
  sub_140B2359C();
  v7 = sub_140B0B630(1LL, a1);
  if ( v7 < 0 )
    KeBugCheckEx(0x32u, v7, 8uLL, 1uLL, 0LL);
  TmInitSystemPhase2_0();
  sub_1403CFCF0(0LL, 100LL);
  if ( (_DWORD)InitSafeBootMode )
  {
    LOBYTE(v8) = a2;
    sub_140B4B918(v8);
  }
  sub_140B255E4(2LL);
  sub_140B1E5EC(2LL);
  sub_140B07AB0(2LL, a1);
  if ( (unsigned int)sub_140416F1C() )
    sub_140AFC9DC(2);
  sub_140AFE184(2);
  sub_140B063D4();
  if ( !(unsigned __int8)sub_140B026CC(3LL, a1, v9) )
    KeBugCheck(0xA0u);
  sub_140B27884(2uLL);
  sub_140B03800(3LL);
  sub_140B5446C();
  sub_1403DB94C();
  sub_14082D3F8();
  if ( !(unsigned __int8)sub_140B02300(2LL, a1) )
    goto LABEL_28;
  sub_140B30EE0();
  if ( !(unsigned __int8)sub_140B21F30() )
    KeBugCheck(0x6Cu);
  sub_140B1C0FC(2LL);
  if ( !(unsigned __int8)sub_140B02300(3LL, a1) )
LABEL_28:
    KeBugCheck(0x6Bu);
  sub_1404173C8();
  sub_140B263A0();
  LODWORD(dword_140C4E560) = dword_140C4E560 + 1;
  ExNotifyCallback(qword_140C158C8, 0LL, 0LL);
  if ( dword_140C1B2A0 )
  {
    sub_140602EB8();
    sub_140A81780(5);
  }
  if ( dword_140C1AA78 )
    sub_1405FDAE4();
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 2) == 0 && !(_DWORD)InitSafeBootMode )
    sub_140604224();
  sub_14086423C(0LL);
  result = sub_140B03800(4LL);
  if ( !(_BYTE)result )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 2uLL, 0LL);
  return result;
}
