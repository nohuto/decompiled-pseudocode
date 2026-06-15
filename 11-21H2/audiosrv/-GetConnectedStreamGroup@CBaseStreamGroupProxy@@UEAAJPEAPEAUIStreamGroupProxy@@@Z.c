/*
 * XREFs of ?GetConnectedStreamGroup@CBaseStreamGroupProxy@@UEAAJPEAPEAUIStreamGroupProxy@@@Z @ 0x1800F9080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseStreamGroupProxy::GetConnectedStreamGroup(
        CBaseStreamGroupProxy *this,
        struct IStreamGroupProxy **a2)
{
  return (**(__int64 (__fastcall ***)(CBaseStreamGroupProxy *, GUID *, struct IStreamGroupProxy **))this)(
           this,
           &GUID_07e01ceb_3edc_4c8e_ae6b_945861fab285,
           a2);
}
