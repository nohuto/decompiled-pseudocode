/*
 * XREFs of ?FreeAndAssignOnSuccess@String@Internal@Windows@@CAJJPEAUHSTRING__@@PEAPEAU4@@Z @ 0x180032DD0
 * Callers:
 *     ?Duplicate@String@Internal@Windows@@QEAAJAEBV123@@Z @ 0x1800313A0 (-Duplicate@String@Internal@Windows@@QEAAJAEBV123@@Z.c)
 *     ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x180092760 (-Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::String::FreeAndAssignOnSuccess(int a1, HSTRING a2, HSTRING *a3)
{
  HSTRING v4; // rcx

  if ( a1 >= 0 )
  {
    v4 = *a3;
    *a3 = a2;
    WindowsDeleteString(v4);
  }
  return (unsigned int)a1;
}
