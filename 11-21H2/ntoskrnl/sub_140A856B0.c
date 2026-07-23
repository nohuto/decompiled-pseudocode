/*
 * XREFs of sub_140A856B0 @ 0x140A856B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140203D88 @ 0x140203D88 (sub_140203D88.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A83888 @ 0x140A83888 (sub_140A83888.c)
 *     sub_140A83B84 @ 0x140A83B84 (sub_140A83B84.c)
 *     sub_140A880B0 @ 0x140A880B0 (sub_140A880B0.c)
 *     sub_140A88430 @ 0x140A88430 (sub_140A88430.c)
 *     sub_140A88738 @ 0x140A88738 (sub_140A88738.c)
 */

__int64 __fastcall sub_140A856B0(__int64 a1, unsigned int a2)
{
  __int64 v4; // rsi
  __int64 result; // rax
  unsigned __int64 v6; // rdi
  __int64 i; // rbx
  __int64 v8; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v10; // r9
  bool v11; // zf
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // r8

  sub_140A88738(a1);
  v4 = sub_140A88430(a1);
  result = sub_14042A5E0(a1, a2);
  if ( v4 && a2 - 2 <= 1 )
  {
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 144));
    for ( i = *(_QWORD *)(v4 + 128); ; i = *(_QWORD *)(v8 + 72) )
    {
      v8 = i - 72;
      if ( v4 + 128 == v8 + 72 )
        break;
      if ( *(_DWORD *)(v8 + 52) == 1 )
      {
        sub_140A83888(v4);
        if ( a2 == 3 )
        {
          *(_DWORD *)(v8 + 52) = 3;
        }
        else
        {
          v12 = *(_QWORD *)(v8 + 72);
          v13 = *(_QWORD **)(v8 + 80);
          if ( *(_QWORD *)(v12 + 8) != v8 + 72 || *v13 != v8 + 72 )
            __fastfail(3u);
          *v13 = v12;
          *(_QWORD *)(v12 + 8) = v13;
          sub_140A83B84(v4, *(_DWORD *)(v8 + 48));
          if ( *(_QWORD *)(v8 + 96) )
            sub_140A880B0(v4);
          sub_140203D88((__int64)&unk_140D58A80, (_SLIST_ENTRY *)v8, v14);
        }
        break;
      }
    }
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v4 + 144));
    result = (unsigned int)dword_140D06B08;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v6 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v10 = *((_QWORD *)CurrentPrcb + 4375);
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v11 = ((unsigned int)result & *(_DWORD *)(v10 + 20)) == 0;
          *(_DWORD *)(v10 + 20) &= result;
          if ( v11 )
            result = sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v6);
  }
  return result;
}
