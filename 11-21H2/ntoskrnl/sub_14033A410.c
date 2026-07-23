/*
 * XREFs of sub_14033A410 @ 0x14033A410
 * Callers:
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z @ 0x14024D7F4 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z.c)
 *     sub_14026ECFC @ 0x14026ECFC (sub_14026ECFC.c)
 *     sub_140272A10 @ 0x140272A10 (sub_140272A10.c)
 *     sub_14027B820 @ 0x14027B820 (sub_14027B820.c)
 *     sub_14027FD04 @ 0x14027FD04 (sub_14027FD04.c)
 *     sub_14028E8E0 @ 0x14028E8E0 (sub_14028E8E0.c)
 *     sub_1402D8F30 @ 0x1402D8F30 (sub_1402D8F30.c)
 *     sub_1402DBA28 @ 0x1402DBA28 (sub_1402DBA28.c)
 *     sub_1402E5D90 @ 0x1402E5D90 (sub_1402E5D90.c)
 *     sub_1402E67E8 @ 0x1402E67E8 (sub_1402E67E8.c)
 *     sub_1402E9768 @ 0x1402E9768 (sub_1402E9768.c)
 *     DnsPrint_RpcZoneInfo @ 0x1402E97D4 (DnsPrint_RpcZoneInfo.c)
 *     sub_140312BB0 @ 0x140312BB0 (sub_140312BB0.c)
 *     sub_1403146E0 @ 0x1403146E0 (sub_1403146E0.c)
 *     sub_140315EE0 @ 0x140315EE0 (sub_140315EE0.c)
 *     sub_14032D1C0 @ 0x14032D1C0 (sub_14032D1C0.c)
 *     sub_140330730 @ 0x140330730 (sub_140330730.c)
 *     sub_1403336E0 @ 0x1403336E0 (sub_1403336E0.c)
 *     sub_140335870 @ 0x140335870 (sub_140335870.c)
 *     sub_140339D70 @ 0x140339D70 (sub_140339D70.c)
 *     sub_14033A030 @ 0x14033A030 (sub_14033A030.c)
 *     sub_140367190 @ 0x140367190 (sub_140367190.c)
 *     sub_140374BBC @ 0x140374BBC (sub_140374BBC.c)
 *     sub_14045BBD4 @ 0x14045BBD4 (sub_14045BBD4.c)
 *     sub_140582214 @ 0x140582214 (sub_140582214.c)
 *     sub_1405A2A48 @ 0x1405A2A48 (sub_1405A2A48.c)
 *     sub_1405A2F88 @ 0x1405A2F88 (sub_1405A2F88.c)
 *     sub_1405B88D8 @ 0x1405B88D8 (sub_1405B88D8.c)
 *     sub_140B190F0 @ 0x140B190F0 (sub_140B190F0.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_14033A410(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rcx
  unsigned __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rax

  v2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v3 = *(_QWORD *)v2;
  if ( v2 >= 0xFFFFF6FB7DBED000uLL
    && v2 <= 0xFFFFF6FB7DBED7F8uLL
    && (dword_140D06880 & 0xC00000) != 0
    && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
    && (v3 & 1) != 0
    && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
  {
    v5 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
    if ( v5 )
    {
      v6 = v3 | 0x20;
      v7 = *(_QWORD *)(v5 + 8 * ((v2 >> 3) & 0x1FF));
      if ( (v7 & 0x20) == 0 )
        v6 = v3;
      v3 = v6;
      if ( (v7 & 0x42) != 0 )
        v3 = v6 | 0x42;
    }
  }
  result = v3 >> 60;
  LOBYTE(result) = HIBYTE(v3) & 0xF | (16 * ((v3 >> 60) & 7));
  return result;
}
