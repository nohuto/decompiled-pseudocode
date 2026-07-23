/*
 * XREFs of sub_140A8CC6C @ 0x140A8CC6C
 * Callers:
 *     sub_140A802F0 @ 0x140A802F0 (sub_140A802F0.c)
 *     sub_140A80ACC @ 0x140A80ACC (sub_140A80ACC.c)
 *     sub_140A80B3C @ 0x140A80B3C (sub_140A80B3C.c)
 * Callees:
 *     sub_1402ABBD0 @ 0x1402ABBD0 (sub_1402ABBD0.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1405FF5A0 @ 0x1405FF5A0 (sub_1405FF5A0.c)
 *     sub_140A8B840 @ 0x140A8B840 (sub_140A8B840.c)
 *     sub_140A8C89C @ 0x140A8C89C (sub_140A8C89C.c)
 *     sub_140A8D4A4 @ 0x140A8D4A4 (sub_140A8D4A4.c)
 *     sub_140A98064 @ 0x140A98064 (sub_140A98064.c)
 */

__int64 __fastcall sub_140A8CC6C(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  ULONG_PTR v7; // rdx
  unsigned int v8; // ebx
  unsigned __int8 CurrentIrql; // al
  __int64 v10; // rax

  if ( *(_BYTE *)(a2 + 64) != 1 && (dword_140C29FC0 & 0x100) != 0 && !*(_QWORD *)(a2 + 8) )
  {
    if ( (*(_DWORD *)(a2 + 16) & 0x10) != 0 )
      v7 = *(_QWORD *)(a2 + 24);
    else
      v7 = *(_QWORD *)(a2 + 112);
    sub_140A8D4A4(a2, v7);
  }
  if ( a3 )
  {
    if ( !sub_1402ABBD0() && (qword_140D01450 & 0x400000) == 0 )
    {
      *(_BYTE *)(a3 + 157) = KeAcquireSpinLockRaiseToDpc(&qword_140D57560);
      *(_OWORD *)&xmmword_140D57548 = 0LL;
      *(_QWORD *)&BugCheckCode = 196LL;
      BugCheckParameter1 = 192LL;
      qword_140D57540 = a2;
      sub_1405FF5A0();
    }
    *(_QWORD *)(a3 + 48) = sub_140A8C89C(
                             *(struct _DRIVER_OBJECT **)(a1 + 8),
                             *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) - 72LL));
    CurrentIrql = KeGetCurrentIrql();
    *(_BYTE *)(a3 + 156) = CurrentIrql;
    *(_DWORD *)(a3 + 188) = *((_DWORD *)KeGetCurrentThread() + 121);
    if ( *(char *)(a2 + 67) == *(char *)(a2 + 66) + 1 )
    {
      v10 = *(_QWORD *)(a2 + 80);
      if ( v10 )
      {
        if ( !*(_BYTE *)(a2 + 64) && *(_DWORD *)(v10 + 4) )
          *(_DWORD *)(a3 + 152) |= 2u;
      }
    }
    v8 = sub_140A98064(a2);
    if ( !dword_140D4E000 )
    {
      *(_DWORD *)(a3 + 152) |= 1u;
      sub_140A8B840(a3);
    }
  }
  else
  {
    return (unsigned int)sub_140A98064(a2);
  }
  return v8;
}
