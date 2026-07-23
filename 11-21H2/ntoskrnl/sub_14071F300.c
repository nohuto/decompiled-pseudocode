/*
 * XREFs of sub_14071F300 @ 0x14071F300
 * Callers:
 *     sub_140657670 @ 0x140657670 (sub_140657670.c)
 *     sub_1406580D0 @ 0x1406580D0 (sub_1406580D0.c)
 *     sub_14065AAAC @ 0x14065AAAC (sub_14065AAAC.c)
 *     sub_14065B3DC @ 0x14065B3DC (sub_14065B3DC.c)
 *     sub_14065D114 @ 0x14065D114 (sub_14065D114.c)
 *     sub_14065D7C4 @ 0x14065D7C4 (sub_14065D7C4.c)
 *     sub_14065DE48 @ 0x14065DE48 (sub_14065DE48.c)
 *     sub_14065DF64 @ 0x14065DF64 (sub_14065DF64.c)
 *     sub_14065E690 @ 0x14065E690 (sub_14065E690.c)
 *     sub_14065E97C @ 0x14065E97C (sub_14065E97C.c)
 *     sub_140677DC0 @ 0x140677DC0 (sub_140677DC0.c)
 *     sub_14069A7B0 @ 0x14069A7B0 (sub_14069A7B0.c)
 *     sub_1406BF110 @ 0x1406BF110 (sub_1406BF110.c)
 *     sub_1406CA2B8 @ 0x1406CA2B8 (sub_1406CA2B8.c)
 *     sub_1406CE32C @ 0x1406CE32C (sub_1406CE32C.c)
 *     sub_1406D7440 @ 0x1406D7440 (sub_1406D7440.c)
 *     sub_140714E58 @ 0x140714E58 (sub_140714E58.c)
 *     sub_140715BA0 @ 0x140715BA0 (sub_140715BA0.c)
 *     sub_140715FA8 @ 0x140715FA8 (sub_140715FA8.c)
 *     sub_140716758 @ 0x140716758 (sub_140716758.c)
 *     sub_1407169FC @ 0x1407169FC (sub_1407169FC.c)
 *     sub_140716D50 @ 0x140716D50 (sub_140716D50.c)
 *     sub_140718244 @ 0x140718244 (sub_140718244.c)
 *     sub_1407187D4 @ 0x1407187D4 (sub_1407187D4.c)
 *     sub_140719278 @ 0x140719278 (sub_140719278.c)
 *     sub_14071BC94 @ 0x14071BC94 (sub_14071BC94.c)
 *     sub_140720260 @ 0x140720260 (sub_140720260.c)
 *     sub_140722534 @ 0x140722534 (sub_140722534.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 *     sub_14079B2C0 @ 0x14079B2C0 (sub_14079B2C0.c)
 *     sub_14079BF50 @ 0x14079BF50 (sub_14079BF50.c)
 *     sub_14079CE20 @ 0x14079CE20 (sub_14079CE20.c)
 *     sub_1407C4990 @ 0x1407C4990 (sub_1407C4990.c)
 *     sub_1407C64A0 @ 0x1407C64A0 (sub_1407C64A0.c)
 *     sub_1407FB158 @ 0x1407FB158 (sub_1407FB158.c)
 *     sub_140837E20 @ 0x140837E20 (sub_140837E20.c)
 *     sub_14083D474 @ 0x14083D474 (sub_14083D474.c)
 *     sub_14087D6D0 @ 0x14087D6D0 (sub_14087D6D0.c)
 *     sub_14090D9E8 @ 0x14090D9E8 (sub_14090D9E8.c)
 *     sub_140913E28 @ 0x140913E28 (sub_140913E28.c)
 *     sub_140914BEC @ 0x140914BEC (sub_140914BEC.c)
 *     sub_14091822C @ 0x14091822C (sub_14091822C.c)
 *     sub_14091EEC4 @ 0x14091EEC4 (sub_14091EEC4.c)
 *     sub_14091F9DC @ 0x14091F9DC (sub_14091F9DC.c)
 *     sub_14091FA94 @ 0x14091FA94 (sub_14091FA94.c)
 *     sub_140921078 @ 0x140921078 (sub_140921078.c)
 *     sub_1409211E4 @ 0x1409211E4 (sub_1409211E4.c)
 *     sub_140921510 @ 0x140921510 (sub_140921510.c)
 *     sub_140923D00 @ 0x140923D00 (sub_140923D00.c)
 *     sub_140923ED0 @ 0x140923ED0 (sub_140923ED0.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_14071F430 @ 0x14071F430 (sub_14071F430.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_140AB44C0 @ 0x140AB44C0 (sub_140AB44C0.c)
 */

__int64 __fastcall sub_14071F300(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, char a3)
{
  ULONG_PTR v3; // rdi
  int v4; // eax
  __int64 v7; // rax
  int v8; // ebp
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v3 = (unsigned int)BugCheckParameter4;
  v4 = *(_DWORD *)(BugCheckParameter3 + 160);
  v10 = 0xFFFFFFFFLL;
  if ( (v4 & 1) != 0 || (BugCheckParameter4 & 0x80000000) != 0LL )
    return 0LL;
  if ( !a3 )
    ExAcquirePushLockExclusiveEx(BugCheckParameter3 + 80, 0LL);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v7 = sub_1406BF400(BugCheckParameter3, (unsigned int)v3, &v10);
  else
    v7 = sub_1407C9820(BugCheckParameter3);
  if ( !v7 || v7 == 4 )
  {
    if ( !a3 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter3 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(BugCheckParameter3 + 80);
      sub_1402AFC00(BugCheckParameter3 + 80);
    }
    return 3221225626LL;
  }
  else
  {
    if ( !sub_140AB44C0(BugCheckParameter3, (unsigned int)v3) )
      KeBugCheckEx(0x51u, 1uLL, BugCheckParameter3, v3, 0x2A7uLL);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v10);
    else
      sub_1407C97C0(BugCheckParameter3, &v10);
    v8 = sub_14071F430(BugCheckParameter3);
    if ( !a3 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter3 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(BugCheckParameter3 + 80);
      sub_1402AFC00(BugCheckParameter3 + 80);
    }
    if ( v8 >= 0 )
    {
      *(_BYTE *)(BugCheckParameter3 + 141) = 1;
      return 0LL;
    }
    return (unsigned int)v8;
  }
}
