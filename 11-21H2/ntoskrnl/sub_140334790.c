/*
 * XREFs of sub_140334790 @ 0x140334790
 * Callers:
 *     sub_140227490 @ 0x140227490 (sub_140227490.c)
 *     sub_140239C2C @ 0x140239C2C (sub_140239C2C.c)
 *     sub_14023C8A4 @ 0x14023C8A4 (sub_14023C8A4.c)
 *     sub_14023EB78 @ 0x14023EB78 (sub_14023EB78.c)
 *     sub_140243208 @ 0x140243208 (sub_140243208.c)
 *     sub_1402450AC @ 0x1402450AC (sub_1402450AC.c)
 *     sub_14025592C @ 0x14025592C (sub_14025592C.c)
 *     sub_14025AD28 @ 0x14025AD28 (sub_14025AD28.c)
 *     MmCopyMemory @ 0x14026BBB0 (MmCopyMemory.c)
 *     sub_14026C808 @ 0x14026C808 (sub_14026C808.c)
 *     sub_14026F180 @ 0x14026F180 (sub_14026F180.c)
 *     sub_140270A00 @ 0x140270A00 (sub_140270A00.c)
 *     sub_1402710C4 @ 0x1402710C4 (sub_1402710C4.c)
 *     sub_1402715A0 @ 0x1402715A0 (sub_1402715A0.c)
 *     sub_140272A10 @ 0x140272A10 (sub_140272A10.c)
 *     sub_140273390 @ 0x140273390 (sub_140273390.c)
 *     sub_14027F360 @ 0x14027F360 (sub_14027F360.c)
 *     sub_14027FEF8 @ 0x14027FEF8 (sub_14027FEF8.c)
 *     sub_14029E440 @ 0x14029E440 (sub_14029E440.c)
 *     sub_1402BBEE0 @ 0x1402BBEE0 (sub_1402BBEE0.c)
 *     sub_1402BE8E0 @ 0x1402BE8E0 (sub_1402BE8E0.c)
 *     sub_1402E4474 @ 0x1402E4474 (sub_1402E4474.c)
 *     DnsPrint_RpcZoneInfo @ 0x1402E97D4 (DnsPrint_RpcZoneInfo.c)
 *     sub_140312BB0 @ 0x140312BB0 (sub_140312BB0.c)
 *     sub_140319160 @ 0x140319160 (sub_140319160.c)
 *     sub_14031EAA0 @ 0x14031EAA0 (sub_14031EAA0.c)
 *     sub_14031FD60 @ 0x14031FD60 (sub_14031FD60.c)
 *     sub_140325B30 @ 0x140325B30 (sub_140325B30.c)
 *     sub_1403265B0 @ 0x1403265B0 (sub_1403265B0.c)
 *     sub_140327C60 @ 0x140327C60 (sub_140327C60.c)
 *     sub_140328690 @ 0x140328690 (sub_140328690.c)
 *     sub_140329730 @ 0x140329730 (sub_140329730.c)
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 *     sub_140339520 @ 0x140339520 (sub_140339520.c)
 *     sub_140339CA0 @ 0x140339CA0 (sub_140339CA0.c)
 *     sub_14033A920 @ 0x14033A920 (sub_14033A920.c)
 *     sub_14033E5D0 @ 0x14033E5D0 (sub_14033E5D0.c)
 *     sub_140389084 @ 0x140389084 (sub_140389084.c)
 *     sub_1403927C4 @ 0x1403927C4 (sub_1403927C4.c)
 *     sub_1403D0BD4 @ 0x1403D0BD4 (sub_1403D0BD4.c)
 *     sub_140582D7C @ 0x140582D7C (sub_140582D7C.c)
 *     sub_14058B40C @ 0x14058B40C (sub_14058B40C.c)
 *     sub_14058BA98 @ 0x14058BA98 (sub_14058BA98.c)
 *     sub_14059D028 @ 0x14059D028 (sub_14059D028.c)
 *     sub_14059DB28 @ 0x14059DB28 (sub_14059DB28.c)
 *     sub_14059E3E8 @ 0x14059E3E8 (sub_14059E3E8.c)
 *     sub_14059E660 @ 0x14059E660 (sub_14059E660.c)
 *     sub_14059E7F0 @ 0x14059E7F0 (sub_14059E7F0.c)
 *     sub_1405A0774 @ 0x1405A0774 (sub_1405A0774.c)
 *     sub_1405A2F88 @ 0x1405A2F88 (sub_1405A2F88.c)
 *     sub_1405A3E3C @ 0x1405A3E3C (sub_1405A3E3C.c)
 *     sub_1405A7464 @ 0x1405A7464 (sub_1405A7464.c)
 *     sub_1405C3C6C @ 0x1405C3C6C (sub_1405C3C6C.c)
 *     sub_1405C4A48 @ 0x1405C4A48 (sub_1405C4A48.c)
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1403377E0 @ 0x1403377E0 (sub_1403377E0.c)
 *     sub_140338500 @ 0x140338500 (sub_140338500.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140334790(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v8; // r9
  bool v9; // zf
  int v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = 0;
  v5 = (unsigned __int8)a2;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
      sub_1402F32E0(&v10, a2, a3, a4);
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  *(_BYTE *)(a1 + 34) &= ~0x20u;
  if ( (unsigned int)sub_1403377E0(a1) )
    sub_140338500(a1, 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4));
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (_BYTE)v5 != 17 )
  {
    result = (unsigned int)dword_140D06B08;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v5 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v8 = *((_QWORD *)CurrentPrcb + 4375);
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
          v9 = ((unsigned int)result & *(_DWORD *)(v8 + 20)) == 0;
          *(_DWORD *)(v8 + 20) &= result;
          if ( v9 )
            result = sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v5);
  }
  return result;
}
