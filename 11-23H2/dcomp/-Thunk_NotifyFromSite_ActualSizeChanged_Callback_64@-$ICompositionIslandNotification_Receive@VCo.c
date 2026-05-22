/*
 * XREFs of ?Thunk_NotifyFromSite_ActualSizeChanged_Callback_64@?$ICompositionIslandNotification_Receive@VCompositionIsland@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x18006B220
 * Callers:
 *     <none>
 * Callees:
 *     ??9Numerics@Foundation@Windows@@YA_NAEBUfloat2@012@0@Z @ 0x18006B2A8 (--9Numerics@Foundation@Windows@@YA_NAEBUfloat2@012@0@Z.c)
 *     ?NotifyTransformChanged_Callback@CompositionIsland@Composition@UI@Windows@@AEAAXXZ @ 0x18006B4DC (-NotifyTransformChanged_Callback@CompositionIsland@Composition@UI@Windows@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ICompositionIslandNotification_Receive<Windows::UI::Composition::CompositionIsland>::Thunk_NotifyFromSite_ActualSizeChanged_Callback_64(
        Windows::UI::Composition::CompositionIsland *this,
        unsigned int **a2)
{
  __int64 *v2; // rbx
  _DWORD *v4; // rcx
  int v5; // xmm1_4
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)*a2;
  (*(void (__fastcall **)(Windows::UI::Composition::CompositionIsland *, unsigned __int64))(*(_QWORD *)this + 288LL))(
    this,
    _mm_unpacklo_ps((__m128)**a2, (__m128)(*a2)[1]).m128_u64[0]);
  v7 = *v2;
  if ( (unsigned __int8)Windows::Foundation::Numerics::operator!=((char *)this + 288, &v7) )
  {
    v5 = *((_DWORD *)v2 + 1);
    *v4 = *(_DWORD *)v2;
    v4[1] = v5;
    Windows::UI::Composition::CompositionIsland::NotifyTransformChanged_Callback(this);
  }
  return 0LL;
}
