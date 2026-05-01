/*
 * XREFs of ?QueryService@DelayedTileActivationCallSite@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1804E8570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DelayedTileActivationCallSite::QueryService(
        DelayedTileActivationCallSite *this,
        const struct _GUID *a2,
        struct _GUID *a3,
        void **a4)
{
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // rax

  *a4 = 0LL;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_23710692_92e0_4a33_a781_a81596a4cd7d.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_23710692_92e0_4a33_a781_a81596a4cd7d.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_23710692_92e0_4a33_a781_a81596a4cd7d.Data4;
  if ( !v4 && *((_BYTE *)this + 117) )
    return Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CopyToViewValueSetBase,IOleWindow,IShouldSwitchToDesktop,IAppActivationUIInfo>>(
             (__int64)this - 8,
             a3,
             a4);
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&IID_IAppActivationUIInfo.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_IAppActivationUIInfo.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)IID_IAppActivationUIInfo.Data4;
  if ( !v6 && *((_BYTE *)this + 124) )
    return Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CopyToViewValueSetBase,IOleWindow,IShouldSwitchToDesktop,IAppActivationUIInfo>>(
             (__int64)this - 8,
             a3,
             a4);
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&SID_ExecuteLogUsage.Revision;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&SID_ExecuteLogUsage.Revision )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)SID_ExecuteLogUsage.SubAuthority;
  if ( !v7 && *((_BYTE *)this + 128) )
    return Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CopyToViewValueSetBase,IOleWindow,IShouldSwitchToDesktop,IAppActivationUIInfo>>(
             (__int64)this - 8,
             a3,
             a4);
  else
    return CopyToViewValueSetBase::QueryService(
             (__int64 (__fastcall ***)(char *, const struct _GUID *, void **))this,
             a2,
             a3,
             a4);
}
