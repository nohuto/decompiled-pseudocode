/*
 * XREFs of sub_14028C82C @ 0x14028C82C
 * Callers:
 *     sub_14028B8B0 @ 0x14028B8B0 (sub_14028B8B0.c)
 *     sub_14028C230 @ 0x14028C230 (sub_14028C230.c)
 *     sub_14037AFC0 @ 0x14037AFC0 (sub_14037AFC0.c)
 *     sub_140385FB0 @ 0x140385FB0 (sub_140385FB0.c)
 * Callees:
 *     sub_1402297E4 @ 0x1402297E4 (sub_1402297E4.c)
 *     sub_140232694 @ 0x140232694 (sub_140232694.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_1402C6EB0 @ 0x1402C6EB0 (sub_1402C6EB0.c)
 *     sub_140337F0C @ 0x140337F0C (sub_140337F0C.c)
 *     sub_140338500 @ 0x140338500 (sub_140338500.c)
 *     sub_14033FAA4 @ 0x14033FAA4 (sub_14033FAA4.c)
 */

__int64 __fastcall sub_14028C82C(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int64 v2; // rdi
  char v3; // bl
  unsigned __int64 *v5; // rcx
  unsigned __int64 *v8; // r14
  int v9; // ebp
  unsigned __int64 v10; // r9

  v2 = 0LL;
  v3 = a2;
  if ( (a2 & 1) != 0 )
  {
    v5 = (unsigned __int64 *)(BugCheckParameter2 + 16);
    if ( (*(_DWORD *)v5 & 0x400LL) == 0 )
      v2 = sub_140232694(v5, 1, 0);
    *(_BYTE *)(BugCheckParameter2 + 34) |= 0x10u;
  }
  else if ( (a2 & 2) != 0 )
  {
    v8 = (unsigned __int64 *)(BugCheckParameter2 + 16);
    v9 = sub_1402297E4(
           *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL)),
           (_WORD *)(BugCheckParameter2 + 16));
    if ( !v9 && (*(_DWORD *)v8 & 2) != 0 )
      v9 = ((v10 >> 60) & 7) == 2;
    v2 = sub_140232694(v8, 1, v9);
    if ( v9 )
      *v8 &= ~2uLL;
  }
  *(_BYTE *)(BugCheckParameter2 + 34) &= ~8u;
  if ( (v3 & 8) != 0 )
    *(_BYTE *)(BugCheckParameter2 + 35) &= 0xF8u;
  if ( (*(_WORD *)(BugCheckParameter2 + 32))-- == 1 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0
      && (*(_QWORD *)(BugCheckParameter2 + 24) & 0x4000000000000000LL) != 0
      && !(unsigned int)sub_140337F0C(BugCheckParameter2, a2) )
    {
      sub_14028CE10(*(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL)), 1LL);
    }
    if ( (v3 & 4) != 0 )
    {
      sub_14033FAA4(BugCheckParameter2);
      sub_1402C6EB0(0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4));
    }
    else
    {
      sub_140338500(BugCheckParameter2, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4));
    }
  }
  return v2;
}
