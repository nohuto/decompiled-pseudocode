/*
 * XREFs of CmpFreeSecurityDescriptor @ 0x140715D90
 * Callers:
 *     CmpFreeKeyByCell @ 0x1407164DC (CmpFreeKeyByCell.c)
 *     CmpCreateChild @ 0x140719278 (CmpCreateChild.c)
 *     CmpCopySaclToVirtualKey @ 0x14091822C (CmpCopySaclToVirtualKey.c)
 *     CmpSyncKeyValues @ 0x1409207EC (CmpSyncKeyValues.c)
 * Callees:
 *     CmpDereferenceSecurityNode @ 0x1402A2104 (CmpDereferenceSecurityNode.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 */

__int64 __fastcall CmpFreeSecurityDescriptor(ULONG_PTR BugCheckParameter3, ULONG_PTR a2)
{
  bool v2; // zf
  __int64 result; // rax
  __int64 v5; // rdi
  ULONG_PTR v6; // rdx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+40h] [rbp+18h]
  int v9; // [rsp+44h] [rbp+1Ch]

  v7 = 0xFFFFFFFFLL;
  v8 = -1;
  v2 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v9 = 0;
  if ( v2 )
    result = HvpGetCellPaged(BugCheckParameter3);
  else
    result = HvpGetCellFlat(BugCheckParameter3, a2, &v7);
  v5 = result;
  if ( result )
  {
    v6 = *(unsigned int *)(result + 44);
    if ( (_DWORD)v6 != -1 )
    {
      CmpDereferenceSecurityNode(BugCheckParameter3, v6);
      *(_DWORD *)(v5 + 44) = -1;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      return HvpReleaseCellFlat(BugCheckParameter3, &v7);
    else
      return HvpReleaseCellPaged(BugCheckParameter3, &v7);
  }
  return result;
}
