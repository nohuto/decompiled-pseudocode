/*
 * XREFs of sub_1405DBF90 @ 0x1405DBF90
 * Callers:
 *     sub_140306100 @ 0x140306100 (sub_140306100.c)
 * Callees:
 *     KeGetCurrentProcessorNumberEx @ 0x140355110 (KeGetCurrentProcessorNumberEx.c)
 *     sub_140398BE0 @ 0x140398BE0 (sub_140398BE0.c)
 *     sub_1405DBB20 @ 0x1405DBB20 (sub_1405DBB20.c)
 */

ULONG __fastcall sub_1405DBF90(int a1, int a2, __int64 a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  unsigned int *v6; // rbx
  __int64 v10; // r9
  ULONG result; // eax

  v6 = (unsigned int *)qword_140C1F490;
  if ( qword_140C1F490 && a1 == dword_140C0C5EC && a2 >= 0 )
  {
    sub_1405DBB20(a2, a3);
    sub_140398BE0(v6, a4, a6, v10);
    v6[10] = a2;
    *((_OWORD *)v6 + 3) = *(_OWORD *)a3;
    *((_OWORD *)v6 + 4) = *(_OWORD *)(a3 + 16);
    *((_OWORD *)v6 + 5) = *(_OWORD *)(a3 + 32);
    *((_OWORD *)v6 + 6) = *(_OWORD *)(a3 + 48);
    *((_OWORD *)v6 + 7) = *(_OWORD *)(a3 + 64);
    *((_OWORD *)v6 + 8) = *(_OWORD *)(a3 + 80);
    *((_OWORD *)v6 + 9) = *(_OWORD *)(a3 + 96);
    *((_OWORD *)v6 + 10) = *(_OWORD *)(a3 + 112);
    *((_QWORD *)v6 + 22) = *(_QWORD *)(a3 + 128);
    *((_QWORD *)v6 + 23) = a5;
    *((_QWORD *)v6 + 1) = a5;
    *((_QWORD *)v6 + 24) = a5 - a4;
    result = KeGetCurrentProcessorNumberEx(0LL);
    *v6 |= 0x10u;
    v6[50] = result;
  }
  else
  {
    result = (unsigned int)a6;
    *a6 = -1;
  }
  return result;
}
