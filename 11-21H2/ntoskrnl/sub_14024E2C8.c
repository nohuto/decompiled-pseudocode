/*
 * XREFs of sub_14024E2C8 @ 0x14024E2C8
 * Callers:
 *     sub_1406D1E90 @ 0x1406D1E90 (sub_1406D1E90.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405D1EE8 @ 0x1405D1EE8 (sub_1405D1EE8.c)
 *     sub_140750EC4 @ 0x140750EC4 (sub_140750EC4.c)
 *     sub_140807218 @ 0x140807218 (sub_140807218.c)
 *     sub_140863B7C @ 0x140863B7C (sub_140863B7C.c)
 */

__int64 __fastcall sub_14024E2C8(char a1)
{
  __int64 v2; // rdx
  __int64 result; // rax
  int v4; // ebx
  int v5; // ebp
  int v6; // edi
  int v7; // r14d
  unsigned __int64 v8; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r9
  int v12; // eax
  bool v13; // zf
  _DWORD v14[14]; // [rsp+20h] [rbp-38h] BYREF

  memset(v14, 0, 32);
  sub_140750EC4(v14);
  result = (unsigned int)dword_140C0C650;
  v4 = 0;
  v5 = dword_140D00BC4;
  v6 = 0;
  v7 = dword_140D01430;
  if ( dword_140C0C650 == 1 )
  {
    v6 = 1;
LABEL_19:
    v4 = 1;
    goto LABEL_6;
  }
  if ( dword_140C0C650 == 2 )
  {
    if ( dword_140C23310 )
    {
      if ( BYTE1(v14[0]) )
      {
        if ( v14[2] )
        {
          v2 = (unsigned int)(v14[2] + 100 * v14[3] - 1) % v14[2];
          result = (unsigned int)(v14[2] + 100 * v14[3] - 1) / v14[2];
          if ( (unsigned int)result <= dword_140C23310 )
          {
            v6 = 2;
            goto LABEL_19;
          }
        }
      }
    }
  }
  if ( byte_140C23314 && dword_140C23310 && dword_140D048D4 == 1 )
  {
    v6 = 8;
    goto LABEL_19;
  }
  if ( byte_140C1F5B0 )
  {
    v6 = 16;
    goto LABEL_19;
  }
LABEL_6:
  if ( a1 || v4 != dword_140D00BC4 || v6 != dword_140D01430 )
  {
    sub_140807218(v14, v2);
    v8 = KeAcquireSpinLockRaiseToDpc(&qword_140C22F88);
    dword_140D00BC4 = v4;
    dword_140D01430 = v6;
    if ( byte_140C22480 && (v4 != v5 || v6 != v7) )
      ++dword_140C224A8;
    KeReleaseSpinLockFromDpcLevel(&qword_140C22F88);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v11 = *((_QWORD *)CurrentPrcb + 4375);
          v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
          v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
          *(_DWORD *)(v11 + 20) &= v12;
          if ( v13 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v8);
    if ( v4 != v5 )
      sub_140863B7C();
    return sub_1405D1EE8();
  }
  return result;
}
