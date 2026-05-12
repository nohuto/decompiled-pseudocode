/*
 * XREFs of sub_1C0014C8C @ 0x1C0014C8C
 * Callers:
 *     sub_1C000E18C @ 0x1C000E18C (sub_1C000E18C.c)
 * Callees:
 *     sub_1C0014D10 @ 0x1C0014D10 (sub_1C0014D10.c)
 */

__int64 __fastcall sub_1C0014C8C(union _SLIST_HEADER *a1, __int64 a2, struct _SLIST_ENTRY *a3, int a4)
{
  PSLIST_ENTRY v8; // rax

  v8 = ExpInterlockedPopEntrySList(a1 + 64);
  if ( v8 )
  {
    LODWORD(v8[1].Next) = 134684674;
    LODWORD(v8[2].Next) = 11;
    *((_QWORD *)&v8[2].Next + 1) = a2;
    v8[3].Next = a3;
    *((_DWORD *)&v8[3].Next + 2) = a4;
    sub_1C0014D10(&a1[59]);
    return 0LL;
  }
  else
  {
    _InterlockedIncrement(&dword_1C0093C54);
    return 3238002691LL;
  }
}
