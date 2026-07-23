/*
 * XREFs of sub_14033DBC0 @ 0x14033DBC0
 * Callers:
 *     sub_1402292C0 @ 0x1402292C0 (sub_1402292C0.c)
 *     sub_14023A12C @ 0x14023A12C (sub_14023A12C.c)
 *     sub_140241138 @ 0x140241138 (sub_140241138.c)
 *     sub_14025D6C0 @ 0x14025D6C0 (sub_14025D6C0.c)
 *     sub_14027B820 @ 0x14027B820 (sub_14027B820.c)
 *     sub_14028ECFC @ 0x14028ECFC (sub_14028ECFC.c)
 *     sub_140291FC0 @ 0x140291FC0 (sub_140291FC0.c)
 *     sub_1402E96B0 @ 0x1402E96B0 (sub_1402E96B0.c)
 *     DnsPrint_RpcZoneInfo @ 0x1402E97D4 (DnsPrint_RpcZoneInfo.c)
 *     sub_1402EA95C @ 0x1402EA95C (sub_1402EA95C.c)
 *     sub_1403336E0 @ 0x1403336E0 (sub_1403336E0.c)
 *     sub_14033A5B0 @ 0x14033A5B0 (sub_14033A5B0.c)
 *     sub_14033D860 @ 0x14033D860 (sub_14033D860.c)
 *     sub_14033E970 @ 0x14033E970 (sub_14033E970.c)
 *     sub_14033EF50 @ 0x14033EF50 (sub_14033EF50.c)
 *     sub_140367190 @ 0x140367190 (sub_140367190.c)
 *     sub_14036B408 @ 0x14036B408 (sub_14036B408.c)
 *     NaptrDnsRecordConvert_0 @ 0x14036CF60 (NaptrDnsRecordConvert_0.c)
 *     sub_1403C2120 @ 0x1403C2120 (sub_1403C2120.c)
 *     MmProtectMdlSystemAddress @ 0x140585D50 (MmProtectMdlSystemAddress.c)
 *     sub_1405A47A0 @ 0x1405A47A0 (sub_1405A47A0.c)
 *     sub_1405A7708 @ 0x1405A7708 (sub_1405A7708.c)
 *     sub_1405A89EC @ 0x1405A89EC (sub_1405A89EC.c)
 *     sub_1405AA07C @ 0x1405AA07C (sub_1405AA07C.c)
 *     sub_1405ABD20 @ 0x1405ABD20 (sub_1405ABD20.c)
 *     sub_1405B88D8 @ 0x1405B88D8 (sub_1405B88D8.c)
 *     sub_140AF3B50 @ 0x140AF3B50 (sub_140AF3B50.c)
 *     sub_140B05B1C @ 0x140B05B1C (sub_140B05B1C.c)
 *     sub_140B31048 @ 0x140B31048 (sub_140B31048.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 */

char __fastcall sub_14033DBC0(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // r8

  v2 = *(_QWORD *)a1;
  if ( a1 >= 0xFFFFF6FB7DBED000uLL
    && a1 <= 0xFFFFF6FB7DBED7F8uLL
    && (dword_140D06880 & 0xC00000) != 0
    && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
    && (v2 & 1) != 0
    && ((v2 & 0x20) == 0 || (v2 & 0x42) == 0) )
  {
    v6 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
    if ( v6 )
    {
      v7 = *(_QWORD *)(v6 + 8 * ((a1 >> 3) & 0x1FF));
      v8 = v2 | 0x20;
      if ( (v7 & 0x20) == 0 )
        v8 = *(_QWORD *)a1;
      v2 = v8;
      if ( (v7 & 0x42) != 0 )
        v2 = v8 | 0x42;
    }
  }
  v4 = a2 ^ (a2 ^ v2) & 0x7F00000000000000LL;
  LODWORD(CurrentThread) = sub_140317A80(a1);
  if ( !(_DWORD)CurrentThread )
    goto LABEL_3;
  if ( !(unsigned int)sub_140229550() )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (*(_DWORD *)(*((_QWORD *)CurrentThread + 23) + 2172LL) & 0x1000) != 0 && (v4 & 1) != 0 )
    {
      LOBYTE(CurrentThread) = 0;
      v4 |= 0x8000000000000000uLL;
    }
LABEL_3:
    *(_QWORD *)a1 = v4;
    return (char)CurrentThread;
  }
  if ( !HIBYTE(word_140C51864) && (v4 & 1) != 0 )
    v4 |= 0x8000000000000000uLL;
  *(_QWORD *)a1 = v4;
  LOBYTE(CurrentThread) = sub_1402294F0(a1, v4);
  return (char)CurrentThread;
}
