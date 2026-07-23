/*
 * XREFs of sub_14023F8E8 @ 0x14023F8E8
 * Callers:
 *     sub_14023F658 @ 0x14023F658 (sub_14023F658.c)
 *     sub_14059854C @ 0x14059854C (sub_14059854C.c)
 *     sub_1405A032C @ 0x1405A032C (sub_1405A032C.c)
 * Callees:
 *     sub_140286D4C @ 0x140286D4C (sub_140286D4C.c)
 *     sub_140287A2C @ 0x140287A2C (sub_140287A2C.c)
 *     sub_140287B04 @ 0x140287B04 (sub_140287B04.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall sub_14023F8E8(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rdi
  volatile LONG *v8; // rbp
  int v9; // ecx
  __int64 v10; // rax

  *a3 = 0LL;
  *a2 = 0LL;
  v5 = *(_QWORD *)(a1 + 16);
  if ( qword_140C50780 && (v5 & 0x10) == 0 )
    v5 &= ~qword_140C50780;
  v6 = v5 >> 16;
  if ( (*(_BYTE *)(v6 + 34) & 2) == 0 )
  {
    v7 = *(_QWORD *)v6;
    v8 = (volatile LONG *)(*(_QWORD *)v6 + 72LL);
    ExAcquireSpinLockExclusiveAtDpcLevel(v8);
    v9 = *(_DWORD *)(v7 + 56);
    if ( !(v9 & 1 | ((v9 & 2) != 0)) )
    {
      if ( (v9 & 0x20) != 0 )
      {
LABEL_7:
        v10 = sub_140287B04(v7, 4LL);
        ++*(_DWORD *)(v7 + 76);
        *a3 = v10;
        sub_140287A2C(v7);
LABEL_8:
        ExReleaseSpinLockExclusiveFromDpcLevel(v8);
        return v7;
      }
      if ( (*(_BYTE *)(v6 + 34) & 1) == 0 && *(_QWORD *)(v6 + 8) && !*(_DWORD *)(v6 + 108) )
      {
        sub_140286D4C(v6, 0LL);
        *a2 = v6;
        goto LABEL_7;
      }
    }
    v7 = 0LL;
    goto LABEL_8;
  }
  return 0LL;
}
