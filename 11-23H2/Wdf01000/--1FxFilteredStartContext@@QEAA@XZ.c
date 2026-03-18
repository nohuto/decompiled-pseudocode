/*
 * XREFs of ??1FxFilteredStartContext@@QEAA@XZ @ 0x1C0077990
 * Callers:
 *     ??_GFxFilteredStartContext@@QEAAPEAXI@Z @ 0x1C0077AA0 (--_GFxFilteredStartContext@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxFilteredStartContext::~FxFilteredStartContext(FxFilteredStartContext *this)
{
  _CM_RESOURCE_LIST *ResourcesRaw; // rcx
  _CM_RESOURCE_LIST *ResourcesTranslated; // rcx

  ResourcesRaw = this->ResourcesRaw;
  if ( ResourcesRaw )
    ExFreePoolWithTag(ResourcesRaw, 0);
  ResourcesTranslated = this->ResourcesTranslated;
  if ( ResourcesTranslated )
    ExFreePoolWithTag(ResourcesTranslated, 0);
}
