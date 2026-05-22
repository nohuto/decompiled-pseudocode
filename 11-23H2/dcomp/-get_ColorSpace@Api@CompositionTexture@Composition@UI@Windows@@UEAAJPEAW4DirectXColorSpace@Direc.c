/*
 * XREFs of ?get_ColorSpace@Api@CompositionTexture@Composition@UI@Windows@@UEAAJPEAW4DirectXColorSpace@DirectX@Graphics@5@@Z @ 0x1800A3990
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionTexture::Api::get_ColorSpace(
        Windows::UI::Composition::CompositionTexture::Api *this,
        enum Windows::Graphics::DirectX::DirectXColorSpace *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v5; // esi
  __int64 v6; // rax
  int v7; // edi
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 13);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*((_BYTE *)this - 96) & 2) != 0 )
  {
    v6 = *((_QWORD *)this + 5);
    v5 = 0;
    v9 = 0LL;
    (***(void (__fastcall ****)(_QWORD, GUID *, __int64 *))(v6 + 32))(
      *(_QWORD *)(v6 + 32),
      &GUID_2bfd280a_9471_4cf1_8d64_c33722820711,
      &v9);
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v9);
    *(_DWORD *)a2 = v7;
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v5;
}
