/*
 * XREFs of ?QueryInterface@MiniSearchExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18017A400
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VIMiniSearch@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F6450 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VIMiniSearc.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall MiniSearchExperienceManager::QueryInterface(__int64 this, _DWORD *a2, _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IMiniSearch>>(
           this,
           a2,
           a3);
}
