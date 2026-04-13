/*
 * XREFs of ?QueryInterface@MobilityExperienceSettings@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003AD20
 * Callers:
 *     ?QueryInterface@MobilityExperienceSettings@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003AD30 (-QueryInterface@MobilityExperienceSettings@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MobilityExperienceSettings@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003AD50 (-QueryInterface@MobilityExperienceSettings@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MobilityExperienceSettings@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003AD70 (-QueryInterface@MobilityExperienceSettings@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::MobilityExperienceSettings::QueryInterface(
        __int64 this,
        const struct _GUID *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IMobilityExperienceSettings>>(
           this,
           a2,
           a3);
}
