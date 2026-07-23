/*
 * XREFs of sub_140A868E0 @ 0x140A868E0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405FE678 @ 0x1405FE678 (sub_1405FE678.c)
 *     sub_1405FFA20 @ 0x1405FFA20 (sub_1405FFA20.c)
 *     sub_140A83D24 @ 0x140A83D24 (sub_140A83D24.c)
 *     sub_140A88738 @ 0x140A88738 (sub_140A88738.c)
 *     sub_140A88948 @ 0x140A88948 (sub_140A88948.c)
 *     sub_140A89224 @ 0x140A89224 (sub_140A89224.c)
 */

__int64 __fastcall sub_140A868E0(ULONG_PTR a1)
{
  __int64 result; // rax
  KIRQL v3; // al
  _LIST_ENTRY *Flink; // rbx
  char v5; // r14
  int v6; // esi
  unsigned __int64 v7; // r15
  struct _LIST_ENTRY *v8; // rcx
  struct _LIST_ENTRY *Blink; // rax
  __int64 v10; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v13; // eax
  __int64 v14; // r8
  bool v15; // zf

  sub_140A83D24();
  result = sub_140A88738(a1);
  if ( result )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&qword_140D575A0);
    Flink = stru_140D57590.Flink;
    v5 = 0;
    v6 = 0;
    v7 = v3;
    while ( &stru_140D57590 != Flink )
    {
      if ( (struct _LIST_ENTRY *)a1 == Flink[1].Flink )
      {
        v6 = _InterlockedDecrement((volatile signed __int32 *)&Flink[2].Flink + 1);
        if ( v6 < 0 )
        {
          sub_140A88948(
            byte_140C0D97C,
            "Driver has attempted to access an adapter (%p) that has already been released.",
            (const void *)0x18);
          sub_1405FFA20(0xE6u, 0x18uLL, a1, (ULONG_PTR)Flink, 0LL, byte_140C0D97C);
        }
        sub_1405FE678((__int64)Flink);
        if ( HIDWORD(Flink[11].Flink) != LODWORD(Flink[11].Blink) )
        {
          sub_140A88948(
            byte_140C0D980,
            "Cannot put adapter %p until all adapter channels are freed (%x left).",
            (const void *)8,
            a1);
          sub_1405FFA20(
            0xE6u,
            8uLL,
            a1,
            (unsigned int)(HIDWORD(Flink[11].Flink) - LODWORD(Flink[11].Blink)),
            (ULONG_PTR)Flink,
            byte_140C0D980);
        }
        if ( HIDWORD(Flink[10].Blink) != LODWORD(Flink[11].Flink) )
        {
          sub_140A88948(
            byte_140C0D984,
            "Cannot put adapter %p until all common buffers are freed (%x left).",
            (const void *)7,
            a1);
          sub_1405FFA20(
            0xE6u,
            7uLL,
            a1,
            (unsigned int)(HIDWORD(Flink[10].Blink) - LODWORD(Flink[11].Flink)),
            (ULONG_PTR)Flink,
            byte_140C0D984);
        }
        if ( LODWORD(Flink[10].Flink) )
        {
          sub_140A88948(
            byte_140C0D970,
            "Cannot put adapter %p until all map registers are freed (%x left).",
            (const void *)9,
            a1);
          sub_1405FFA20(0xE6u, 9uLL, a1, SLODWORD(Flink[10].Flink), (ULONG_PTR)Flink, byte_140C0D970);
        }
        if ( LODWORD(Flink[10].Blink) )
        {
          sub_140A88948(
            byte_140C0D974,
            "Cannot put adapter %p until all scatter gather lists are freed (%x left).",
            (const void *)0xA,
            a1);
          sub_1405FFA20(0xE6u, 0xAuLL, a1, SLODWORD(Flink[10].Blink), (ULONG_PTR)Flink, byte_140C0D974);
        }
        if ( Flink[1].Blink && !BYTE2(Flink[2].Flink) )
        {
          if ( !BYTE3(Flink[2].Flink) )
          {
            Flink = 0LL;
            break;
          }
          v5 = 1;
          if ( v6 > 0 )
            break;
        }
        v8 = Flink->Flink;
        Blink = Flink->Blink;
        if ( Flink->Flink->Blink != Flink || Blink->Flink != Flink )
          __fastfail(3u);
        Blink->Flink = v8;
        v8->Blink = Blink;
        break;
      }
      Flink = Flink->Flink;
    }
    KeReleaseSpinLockFromDpcLevel(&qword_140D575A0);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v14 = *((_QWORD *)CurrentPrcb + 4375);
          v15 = (v13 & *(_DWORD *)(v14 + 20)) == 0;
          v10 = (unsigned int)v13 & *(_DWORD *)(v14 + 20);
          *(_DWORD *)(v14 + 20) = v10;
          if ( v15 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
    if ( Flink && !v5 )
      sub_140A89224((__int64)Flink);
    result = sub_14042A5E0(a1, v10);
    if ( Flink && v5 && v6 <= 0 )
      return sub_140A89224((__int64)Flink);
  }
  return result;
}
