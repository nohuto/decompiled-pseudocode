/*
 * XREFs of ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C00A0434
 * Callers:
 *     CleanupGDI @ 0x1C00A0060 (CleanupGDI.c)
 * Callees:
 *     GrepDeleteDC @ 0x1C003B5E0 (GrepDeleteDC.c)
 *     GreSetDCOwnerEx @ 0x1C004BDD0 (GreSetDCOwnerEx.c)
 */

void __fastcall DestroyDC(HDC *a1)
{
  HDC v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    GreSetDCOwnerEx((__int64)v2, 0x80000002, 0, 0);
    GrepDeleteDC(*a1, 0x400000u);
    *a1 = 0LL;
  }
}
