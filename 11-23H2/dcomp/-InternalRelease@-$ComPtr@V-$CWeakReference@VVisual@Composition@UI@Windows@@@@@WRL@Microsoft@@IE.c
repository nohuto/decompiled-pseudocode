/*
 * XREFs of ?InternalRelease@?$ComPtr@V?$CWeakReference@VVisual@Composition@UI@Windows@@@@@WRL@Microsoft@@IEAAKXZ @ 0x18008C038
 * Callers:
 *     ?SetParentForTransform@Visual@Composition@UI@Windows@@QEAAJPEAV1234@@Z @ 0x180063354 (-SetParentForTransform@Visual@Composition@UI@Windows@@QEAAJPEAV1234@@Z.c)
 *     ?GetParentForTransform@Visual@Composition@UI@Windows@@QEAAPEAV1234@XZ @ 0x18010B4D4 (-GetParentForTransform@Visual@Composition@UI@Windows@@QEAAPEAV1234@XZ.c)
 *     ??_GVisualReferenceController@Private@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180124750 (--_GVisualReferenceController@Private@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??_GInteropVisualReferenceController@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18015C380 (--_GInteropVisualReferenceController@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ?SetVisual@VisualReferenceController@Private@Composition@UI@Windows@@QEAAJPEAVVisual@345@@Z @ 0x18016F4C0 (-SetVisual@VisualReferenceController@Private@Composition@UI@Windows@@QEAAJPEAVVisual@345@@Z.c)
 *     ?get_Visual@Api@VisualReferenceController@Private@Composition@UI@Windows@@UEAAJPEAPEAUIVisual@456@@Z @ 0x18016F560 (-get_Visual@Api@VisualReferenceController@Private@Composition@UI@Windows@@UEAAJPEAPEAUIVisual@45.c)
 * Callees:
 *     ?Release@CWeakReferenceBase@@QEAAKXZ @ 0x18008C060 (-Release@CWeakReferenceBase@@QEAAKXZ.c)
 */

unsigned int __fastcall Microsoft::WRL::ComPtr<CWeakReference<Windows::UI::Composition::Visual>>::InternalRelease(
        CWeakReferenceBase **a1)
{
  CWeakReferenceBase *v1; // rdx
  unsigned int result; // eax

  v1 = *a1;
  result = 0;
  if ( *a1 )
  {
    *a1 = 0LL;
    return CWeakReferenceBase::Release(v1);
  }
  return result;
}
