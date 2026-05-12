/*
 * XREFs of sub_1C0022A14 @ 0x1C0022A14
 * Callers:
 *     sub_1C001DFB4 @ 0x1C001DFB4 (sub_1C001DFB4.c)
 *     sub_1C005E1A8 @ 0x1C005E1A8 (sub_1C005E1A8.c)
 *     sub_1C005E234 @ 0x1C005E234 (sub_1C005E234.c)
 * Callees:
 *     sub_1C0006B40 @ 0x1C0006B40 (sub_1C0006B40.c)
 *     sub_1C0006BCC @ 0x1C0006BCC (sub_1C0006BCC.c)
 *     sub_1C001A2F4 @ 0x1C001A2F4 (sub_1C001A2F4.c)
 *     sub_1C00215F4 @ 0x1C00215F4 (sub_1C00215F4.c)
 */

__int64 __fastcall sub_1C0022A14(__int64 a1)
{
  __int64 v1; // rsi
  KIRQL v2; // r14
  union _SLIST_HEADER *v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rbx
  ULONGLONG Alignment; // rcx
  _QWORD *Region; // rax
  _QWORD *v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  __int64 v12; // rcx

  v1 = a1 + 16;
  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88));
  sub_1C001A2F4((struct _EX_RUNDOWN_REF *)v1);
  v3 = sub_1C0006B40((union _SLIST_HEADER *)v1);
  v4 = 0LL;
  v5 = (__int64)v3;
  if ( v3 )
  {
    if ( *(_QWORD *)(v1 + 144) == v1 + 144 )
    {
      ExpInterlockedPopEntrySList((PSLIST_HEADER)(v1 + 112));
    }
    else
    {
      Alignment = v3->Alignment;
      if ( *(union _SLIST_HEADER **)(v3->Alignment + 8) != v3 )
        goto LABEL_14;
      Region = (_QWORD *)v3->Region;
      if ( *Region != v5 )
        goto LABEL_14;
      *Region = Alignment;
      *(_QWORD *)(Alignment + 8) = Region;
    }
    if ( (*(_BYTE *)(v5 + 22) & 0x20) == 0 )
    {
LABEL_13:
      *(_BYTE *)(v5 + 20) &= 0xFCu;
      sub_1C0006BCC(v1, v5);
      goto LABEL_2;
    }
    v9 = (_QWORD *)sub_1C00215F4(v5);
    v10 = *v9;
    if ( *(_QWORD **)(*v9 + 8LL) == v9 )
    {
      v11 = (_QWORD *)v9[1];
      if ( (_QWORD *)*v11 == v9 )
      {
        *v11 = v10;
        *(_QWORD *)(v10 + 8) = v11;
        goto LABEL_13;
      }
    }
LABEL_14:
    __fastfail(3u);
  }
LABEL_2:
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 72), v2);
  if ( v5 )
  {
    v4 = v5 - 120;
    v12 = *(_QWORD *)(*(_QWORD *)(v5 - 120 + 184) + 8LL);
    if ( *(_BYTE *)(v12 + 2) != 40 )
      *(_QWORD *)(v12 + 56) = *(_QWORD *)(v12 + 40);
  }
  return v4;
}
