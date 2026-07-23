/*
 * XREFs of sub_1406CFCE0 @ 0x1406CFCE0
 * Callers:
 *     sub_1406CF970 @ 0x1406CF970 (sub_1406CF970.c)
 *     sub_14076FAB0 @ 0x14076FAB0 (sub_14076FAB0.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     sub_14081F570 @ 0x14081F570 (sub_14081F570.c)
 *     sub_14095975C @ 0x14095975C (sub_14095975C.c)
 *     sub_140B0046C @ 0x140B0046C (sub_140B0046C.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406CFCE0(__int64 a1, __int64 a2)
{
  __int64 Pool2; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rax

  Pool2 = ExAllocatePool2(64LL, 784LL, 1685024324LL);
  *(_QWORD *)a2 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  _InterlockedIncrement(&dword_140C46010);
  *(_DWORD *)(*(_QWORD *)a2 + 448LL) = -1;
  *(_DWORD *)(*(_QWORD *)a2 + 452LL) = -1;
  *(_DWORD *)(*(_QWORD *)a2 + 456LL) = -1;
  *(_DWORD *)(*(_QWORD *)a2 + 460LL) = -1;
  *(_WORD *)(*(_QWORD *)a2 + 464LL) = -1;
  *(_DWORD *)(*(_QWORD *)a2 + 300LL) = 769;
  *(_DWORD *)(*(_QWORD *)a2 + 600LL) = 0;
  *(_DWORD *)(*(_QWORD *)a2 + 640LL) = 0;
  *(_QWORD *)(*(_QWORD *)a2 + 648LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)a2 + 656LL) = 0;
  *(_DWORD *)(*(_QWORD *)a2 + 660LL) = -1;
  *(_WORD *)(*(_QWORD *)a2 + 466LL) = 0;
  v5 = (_QWORD *)(*(_QWORD *)a2 + 488LL);
  v5[1] = v5;
  *v5 = v5;
  v6 = (_QWORD *)(*(_QWORD *)a2 + 504LL);
  v6[1] = v6;
  *v6 = v6;
  if ( a1 )
  {
    *(_QWORD *)(*(_QWORD *)a2 + 32LL) = a1;
    *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL) = *(_QWORD *)a2;
    *(_DWORD *)(a1 + 48) &= ~0x80u;
  }
  v7 = (_QWORD *)(*(_QWORD *)a2 + 472LL);
  v7[1] = v7;
  *v7 = v7;
  v8 = (_QWORD *)(*(_QWORD *)a2 + 576LL);
  v8[1] = v8;
  *v8 = v8;
  v9 = (_QWORD *)(*(_QWORD *)a2 + 608LL);
  v9[1] = v9;
  *v9 = v9;
  v10 = (_QWORD *)(*(_QWORD *)a2 + 624LL);
  v10[1] = v10;
  *v10 = v10;
  v11 = (_QWORD *)(*(_QWORD *)a2 + 176LL);
  v11[1] = v11;
  *v11 = v11;
  v12 = (_QWORD *)(*(_QWORD *)a2 + 192LL);
  v12[1] = v12;
  *v12 = v12;
  return 0LL;
}
