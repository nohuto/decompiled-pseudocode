/*
 * XREFs of sub_14059EDEC @ 0x14059EDEC
 * Callers:
 *     sub_14028B330 @ 0x14028B330 (sub_14028B330.c)
 *     sub_140329730 @ 0x140329730 (sub_140329730.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14059FECC @ 0x14059FECC (sub_14059FECC.c)
 *     sub_1405A1128 @ 0x1405A1128 (sub_1405A1128.c)
 */

__int64 __fastcall sub_14059EDEC(
        __int64 a1,
        ULONG_PTR a2,
        ULONG_PTR a3,
        __int64 a4,
        ULONG_PTR BugCheckParameter2,
        __int64 a6)
{
  int v8; // edi
  int v9; // ebx
  __int64 v10; // rsi

  if ( (*(_BYTE *)(*(_QWORD *)BugCheckParameter2 + 62LL) & 0xC) == 8 )
  {
    sub_1405A1128((PMDL)a2, BugCheckParameter2, a3, a6);
    if ( *(_DWORD *)a6 || *(_QWORD *)(a6 + 8) != *(_DWORD *)(a2 + 40) )
      KeBugCheckEx(0x1Au, 0x14001uLL, BugCheckParameter2, a3, a2);
  }
  else
  {
    v8 = *(_DWORD *)(a2 + 44);
    v9 = *(_DWORD *)(a2 + 32);
    v10 = *(unsigned int *)(a2 + 40);
    *(_QWORD *)(a6 + 8) = 0LL;
    *(_DWORD *)a6 = 0;
    sub_14059FECC((PMDL)a2);
    *(_DWORD *)a6 = 0;
    *(_QWORD *)(a6 + 8) = (v10 + 4095 + (((_WORD)v8 + (_WORD)v9) & 0xFFF)) & 0xFFFFFFFFFFFFF000uLL;
  }
  return 0LL;
}
