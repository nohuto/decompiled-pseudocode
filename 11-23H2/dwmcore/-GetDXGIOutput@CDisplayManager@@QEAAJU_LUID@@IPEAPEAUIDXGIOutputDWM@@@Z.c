/*
 * XREFs of ?GetDXGIOutput@CDisplayManager@@QEAAJU_LUID@@IPEAPEAUIDXGIOutputDWM@@@Z @ 0x18028EC8C
 * Callers:
 *     ?EnsureValidVidPnTargetId@CLegacySwapChain@@MEBAXXZ @ 0x1800FBA00 (-EnsureValidVidPnTargetId@CLegacySwapChain@@MEBAXXZ.c)
 *     ?PostPresent@CLegacySwapChain@@MEAAJ_N0@Z @ 0x1800FC9F0 (-PostPresent@CLegacySwapChain@@MEAAJ_N0@Z.c)
 *     ?UpdateRefreshRate@CLegacySwapChain@@UEAAJXZ @ 0x18029B670 (-UpdateRefreshRate@CLegacySwapChain@@UEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800047F0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18006BE74 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalGetAdapter@CDisplayManager@@AEAAJU_LUID@@PEAPEAUIDXGIAdapter1@@@Z @ 0x1801000FC (-InternalGetAdapter@CDisplayManager@@AEAAJU_LUID@@PEAPEAUIDXGIAdapter1@@@Z.c)
 *     ?InternalGetDXGIOutput@CDisplayManager@@AEAAJPEAUIDXGIAdapter1@@IPEAPEAUIDXGIOutputDWM@@@Z @ 0x18028ED48 (-InternalGetDXGIOutput@CDisplayManager@@AEAAJPEAUIDXGIAdapter1@@IPEAPEAUIDXGIOutputDWM@@@Z.c)
 */

__int64 __fastcall CDisplayManager::GetDXGIOutput(
        CDisplayManager *this,
        struct _LUID a2,
        unsigned int a3,
        struct IDXGIOutputDWM **a4)
{
  int Adapter; // eax
  CDisplayManager *v7; // rcx
  unsigned int v8; // ebx
  int DXGIOutput; // eax
  __int64 v10; // rcx
  CDisplayManager *v12; // [rsp+40h] [rbp+8h] BYREF
  struct IDXGIAdapter1 *v13; // [rsp+58h] [rbp+20h] BYREF

  v12 = this;
  *a4 = 0LL;
  v13 = 0LL;
  Adapter = CDisplayManager::InternalGetAdapter(this, a2, &v13);
  LODWORD(v12) = Adapter;
  v8 = Adapter;
  if ( Adapter < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v7, &dword_1803BA0C8, 2u, Adapter, 0x6Cu, 0LL);
LABEL_5:
    TranslateDXGIorD3DErrorInContext(v8, 4, &v12);
    v8 = (unsigned int)v12;
    goto LABEL_6;
  }
  DXGIOutput = CDisplayManager::InternalGetDXGIOutput(v7, v13, a3, a4);
  LODWORD(v12) = DXGIOutput;
  v8 = DXGIOutput;
  if ( DXGIOutput < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_1803BA0C8, 2u, DXGIOutput, 0x72u, 0LL);
    goto LABEL_5;
  }
LABEL_6:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v13);
  return v8;
}
