/*
 * XREFs of ?EnsureD2DFactory@CD2DFactory@@QEAAJXZ @ 0x180025F18
 * Callers:
 *     ?Startup@@YAJXZ @ 0x180025540 (-Startup@@YAJXZ.c)
 * Callees:
 *     ?Register@CMesh2DEffect@@SAJPEAVCD2DFactory@@@Z @ 0x18002606C (-Register@CMesh2DEffect@@SAJPEAVCD2DFactory@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$query_to@UID2D1PrivateFactoryDwmRoundedRectangle@@@?$com_ptr_t@UID2D1Factory1@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUID2D1PrivateFactoryDwmRoundedRectangle@@@Z @ 0x180104EA4 (--$query_to@UID2D1PrivateFactoryDwmRoundedRectangle@@@-$com_ptr_t@UID2D1Factory1@@Uerr_returncod.c)
 *     ??I?$com_ptr_t@UID2D1PrivateFactoryDwmRoundedRectangle@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUID2D1PrivateFactoryDwmRoundedRectangle@@XZ @ 0x180104ED4 (--I-$com_ptr_t@UID2D1PrivateFactoryDwmRoundedRectangle@@Uerr_returncode_policy@wil@@@wil@@QEAAPE.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DFactory::EnsureD2DFactory(CD2DFactory *this)
{
  unsigned int v1; // ebx
  HRESULT Factory; // eax
  unsigned int v3; // ecx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  struct CD2DFactory *v7; // rcx
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v12; // [rsp+20h] [rbp-18h]
  CD2DFactory *pFactoryOptions; // [rsp+40h] [rbp+8h] BYREF

  pFactoryOptions = this;
  v1 = 0;
  if ( g_DeviceManager )
    return v1;
  LODWORD(pFactoryOptions) = 0;
  g_DeviceManager = 0LL;
  Factory = D2D1CreateFactory(
              D2D1_FACTORY_TYPE_MULTI_THREADED,
              &GUID_bb12d362_daee_4b9a_aa1d_14ba401cfa1f,
              (const D2D1_FACTORY_OPTIONS *)&pFactoryOptions,
              (void **)&g_DeviceManager);
  v1 = Factory;
  if ( Factory < 0 )
  {
    v12 = 31;
    goto LABEL_10;
  }
  v4 = *(&g_DeviceManager + 1);
  *(&g_DeviceManager + 1) = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  Factory = (*(__int64 (__fastcall **)(_QWORD, GUID *, char *))*g_DeviceManager)(
              g_DeviceManager,
              &GUID_6f72c0a2_6db7_46e9_9b62_b58a23f4928b,
              (char *)&g_DeviceManager + 8);
  v1 = Factory;
  if ( Factory < 0 )
  {
    v12 = 33;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, Factory, v12, 0LL);
    return v1;
  }
  v5 = wil::com_ptr_t<ID2D1PrivateFactoryDwmRoundedRectangle,wil::err_returncode_policy>::operator&(&qword_1803D75A0);
  wil::com_ptr_t<ID2D1Factory1,wil::err_returncode_policy>::query_to<ID2D1PrivateFactoryDwmRoundedRectangle>(v6, v5);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(&g_DeviceManager + 1) + 48LL))(*(&g_DeviceManager + 1), 0LL);
  v8 = CMesh2DEffect::Register(v7);
  v1 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xB5u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v1, 0x2Fu, 0LL);
  }
  return v1;
}
