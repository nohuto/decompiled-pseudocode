/*
 * XREFs of ?ExtendedQueryInterface@CompositionPath@Composition@UI@Windows@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18012FBC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18002BF8C (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPath::ExtendedQueryInterface(
        Windows::UI::Composition::CompositionPath *this,
        const struct _GUID *a2,
        void **a3)
{
  Microsoft::WRL2::NestableRuntimeClass **v3; // r8
  Microsoft::WRL2::NestableRuntimeClass *v4; // r9

  if ( InlineIsEqualGUID(a2, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90) )
  {
    *v3 = v4;
    Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(v4);
    return 0LL;
  }
  else
  {
    *v3 = 0LL;
    return 2147500034LL;
  }
}
