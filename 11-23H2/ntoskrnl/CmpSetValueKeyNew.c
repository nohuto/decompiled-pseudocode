/*
 * XREFs of CmpSetValueKeyNew @ 0x140709EE0
 * Callers:
 *     CmSetValueKey @ 0x1406D3270 (CmSetValueKey.c)
 * Callees:
 *     CmpAddValueToListEx @ 0x140709CC4 (CmpAddValueToListEx.c)
 *     CmpAddValueKeyNew @ 0x14070A148 (CmpAddValueKeyNew.c)
 *     CmpFreeValue @ 0x14070B0D8 (CmpFreeValue.c)
 *     HvpMarkCellDirty @ 0x140747190 (HvpMarkCellDirty.c)
 */

__int64 __fastcall CmpSetValueKeyNew(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        int a7,
        int a8)
{
  unsigned int *v8; // rbx
  int v11; // edi
  int v12; // ebp
  unsigned int v13; // ebx
  int v15; // [rsp+20h] [rbp-38h]
  unsigned int *v16; // [rsp+20h] [rbp-38h]
  ULONG_PTR BugCheckParameter3; // [rsp+68h] [rbp+10h] BYREF

  LODWORD(BugCheckParameter3) = -1;
  v8 = (unsigned int *)(a2 + 36);
  if ( !*(_DWORD *)(a2 + 36) || (v11 = HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(a2 + 40)), v11 >= 0) )
  {
    v12 = a8;
    v15 = a7;
    v11 = CmpAddValueKeyNew(BugCheckParameter2, v15, a8, (__int64)&BugCheckParameter3);
    if ( v11 < 0 )
    {
      v13 = BugCheckParameter3;
    }
    else
    {
      v16 = v8;
      v13 = BugCheckParameter3;
      v11 = CmpAddValueToListEx(BugCheckParameter2, BugCheckParameter3, a4, v12, v16, 1);
      if ( v11 >= 0 )
      {
        v13 = -1;
        v11 = 0;
      }
    }
    if ( v13 != -1 )
      CmpFreeValue(BugCheckParameter2, v13);
  }
  return (unsigned int)v11;
}
