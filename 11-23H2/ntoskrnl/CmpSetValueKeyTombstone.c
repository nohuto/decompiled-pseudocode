/*
 * XREFs of CmpSetValueKeyTombstone @ 0x140A16FA0
 * Callers:
 *     CmDeleteValueKey @ 0x14070F134 (CmDeleteValueKey.c)
 * Callees:
 *     CmpAddValueToListEx @ 0x140709CC4 (CmpAddValueToListEx.c)
 *     CmpFreeValue @ 0x14070B0D8 (CmpFreeValue.c)
 *     HvpMarkCellDirty @ 0x140747190 (HvpMarkCellDirty.c)
 *     CmpAddValueKeyTombstone @ 0x140A165B4 (CmpAddValueKeyTombstone.c)
 */

__int64 __fastcall CmpSetValueKeyTombstone(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        unsigned __int16 *a3,
        unsigned int a4,
        int a5)
{
  unsigned int *v5; // rbx
  int v9; // edi
  unsigned int v10; // ebx
  unsigned int *v12; // [rsp+20h] [rbp-28h]
  ULONG_PTR BugCheckParameter3; // [rsp+58h] [rbp+10h] BYREF

  LODWORD(BugCheckParameter3) = -1;
  v5 = (unsigned int *)(a2 + 36);
  if ( !*(_DWORD *)(a2 + 36) || (v9 = HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(a2 + 40), 0), v9 >= 0) )
  {
    v9 = CmpAddValueKeyTombstone(BugCheckParameter2, a3, a5, (int *)&BugCheckParameter3);
    if ( v9 < 0 )
    {
      v10 = BugCheckParameter3;
    }
    else
    {
      v12 = v5;
      v10 = BugCheckParameter3;
      v9 = CmpAddValueToListEx(BugCheckParameter2, BugCheckParameter3, a4, a5, v12, 1);
      if ( v9 >= 0 )
      {
        v10 = -1;
        v9 = 0;
      }
    }
    if ( v10 != -1 )
      CmpFreeValue(BugCheckParameter2, v10);
  }
  return (unsigned int)v9;
}
