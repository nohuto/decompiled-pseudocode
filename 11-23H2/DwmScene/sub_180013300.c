/*
 * XREFs of sub_180013300 @ 0x180013300
 * Callers:
 *     sub_1800124EC @ 0x1800124EC (sub_1800124EC.c)
 *     sub_180012AA0 @ 0x180012AA0 (sub_180012AA0.c)
 *     sub_180024D28 @ 0x180024D28 (sub_180024D28.c)
 *     sub_180025A78 @ 0x180025A78 (sub_180025A78.c)
 *     sub_180025C20 @ 0x180025C20 (sub_180025C20.c)
 *     sub_1800283EC @ 0x1800283EC (sub_1800283EC.c)
 *     sub_18003180C @ 0x18003180C (sub_18003180C.c)
 *     sub_180031D44 @ 0x180031D44 (sub_180031D44.c)
 *     sub_180031FD4 @ 0x180031FD4 (sub_180031FD4.c)
 *     sub_18003439C @ 0x18003439C (sub_18003439C.c)
 *     sub_180035D2C @ 0x180035D2C (sub_180035D2C.c)
 *     sub_18003B3E4 @ 0x18003B3E4 (sub_18003B3E4.c)
 *     sub_18003B7C4 @ 0x18003B7C4 (sub_18003B7C4.c)
 *     sub_18004EF88 @ 0x18004EF88 (sub_18004EF88.c)
 *     sub_180054950 @ 0x180054950 (sub_180054950.c)
 *     sub_180054B70 @ 0x180054B70 (sub_180054B70.c)
 *     sub_180055EA0 @ 0x180055EA0 (sub_180055EA0.c)
 *     sub_18005BFC0 @ 0x18005BFC0 (sub_18005BFC0.c)
 *     sub_18006296C @ 0x18006296C (sub_18006296C.c)
 *     sub_180062A60 @ 0x180062A60 (sub_180062A60.c)
 *     sub_18006F6C0 @ 0x18006F6C0 (sub_18006F6C0.c)
 *     sub_180071FB8 @ 0x180071FB8 (sub_180071FB8.c)
 *     sub_180072560 @ 0x180072560 (sub_180072560.c)
 *     sub_18007E000 @ 0x18007E000 (sub_18007E000.c)
 *     sub_180080CB0 @ 0x180080CB0 (sub_180080CB0.c)
 *     sub_180081120 @ 0x180081120 (sub_180081120.c)
 *     sub_1800883E0 @ 0x1800883E0 (sub_1800883E0.c)
 *     sub_180088C80 @ 0x180088C80 (sub_180088C80.c)
 *     sub_18008B0A8 @ 0x18008B0A8 (sub_18008B0A8.c)
 *     sub_18008C230 @ 0x18008C230 (sub_18008C230.c)
 *     sub_18008F990 @ 0x18008F990 (sub_18008F990.c)
 *     sub_180097628 @ 0x180097628 (sub_180097628.c)
 *     sub_1800977A8 @ 0x1800977A8 (sub_1800977A8.c)
 *     sub_180097DAC @ 0x180097DAC (sub_180097DAC.c)
 *     sub_18009BF90 @ 0x18009BF90 (sub_18009BF90.c)
 *     sub_1800A45C4 @ 0x1800A45C4 (sub_1800A45C4.c)
 *     sub_1800E0830 @ 0x1800E0830 (sub_1800E0830.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_18001203C @ 0x18001203C (sub_18001203C.c)
 */

__int64 __fastcall sub_180013300(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    sub_18001203C((__int64)v2, *(_QWORD *)(a1 + 8));
    result = sub_1800100E8(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
