/*
 * XREFs of sub_1405DFAC4 @ 0x1405DFAC4
 * Callers:
 *     sub_1409A0FD0 @ 0x1409A0FD0 (sub_1409A0FD0.c)
 * Callees:
 *     sub_140208AD8 @ 0x140208AD8 (sub_140208AD8.c)
 *     sub_1407F16F0 @ 0x1407F16F0 (sub_1407F16F0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1405DFAC4(ULONG Tag, unsigned __int16 *a2, __int64 a3)
{
  unsigned __int16 v3; // bx
  __int64 v7; // rax
  void *v8; // rbp
  int v9; // ebx

  v3 = *a2;
  v7 = sub_1407F16F0(*a2, Tag);
  v8 = (void *)v7;
  if ( v7 )
  {
    *(_QWORD *)(a3 + 8) = v7;
    *(_WORD *)a3 = 0;
    *(_WORD *)(a3 + 2) = v3;
    v9 = sub_140208AD8((_WORD *)a3, a2);
    if ( v9 < 0 )
    {
      ExFreePoolWithTag(v8, Tag);
    }
    else
    {
      v9 = 0;
      *(_QWORD *)(a3 + 16) = *((_QWORD *)a2 + 2);
      *(_QWORD *)(a3 + 24) = *((_QWORD *)a2 + 3);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v9;
}
