/*
 * XREFs of ?GetComment@CompositionObject@Composition@UI@Windows@@QEAAJPEAPEAUHSTRING__@@@Z @ 0x180088D2C
 * Callers:
 *     ?get_Comment@Api@CompositionObject@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180088CD0 (-get_Comment@Api@CompositionObject@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     Windows::UI::Composition::CallOnVisual @ 0x180100C10 (Windows--UI--Composition--CallOnVisual.c)
 *     ?OnVisualAdded@CompositionDiagnosticsInterop@Composition@UI@Windows@@SAJPEAVVisual@234@00_N@Z @ 0x1801013B0 (-OnVisualAdded@CompositionDiagnosticsInterop@Composition@UI@Windows@@SAJPEAVVisual@234@00_N@Z.c)
 * Callees:
 *     ?GetReference@CSparseStorage@@QEBAPEAXI@Z @ 0x18007CDA8 (-GetReference@CSparseStorage@@QEBAPEAXI@Z.c)
 */

HRESULT __fastcall Windows::UI::Composition::CompositionObject::GetComment(
        Windows::UI::Composition::CompositionObject *this,
        HSTRING *a2)
{
  HSTRING Reference; // rax
  HSTRING *v3; // r9

  Reference = (HSTRING)CSparseStorage::GetReference(
                         (Windows::UI::Composition::CompositionObject *)((char *)this + 112),
                         1);
  return WindowsDuplicateString(Reference, v3);
}
