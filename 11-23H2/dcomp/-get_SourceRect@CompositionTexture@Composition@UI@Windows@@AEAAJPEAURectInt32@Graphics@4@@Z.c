/*
 * XREFs of ?get_SourceRect@CompositionTexture@Composition@UI@Windows@@AEAAJPEAURectInt32@Graphics@4@@Z @ 0x1800A3AE8
 * Callers:
 *     ?get_SourceRect@Api@CompositionTexture@Composition@UI@Windows@@UEAAJPEAURectInt32@Graphics@5@@Z @ 0x1800A3A60 (-get_SourceRect@Api@CompositionTexture@Composition@UI@Windows@@UEAAJPEAURectInt32@Graphics@5@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionTexture::get_SourceRect(
        Windows::UI::Composition::CompositionTexture *this,
        struct Windows::Graphics::RectInt32 *a2)
{
  __int64 v2; // rax
  int v4; // ecx
  int v5; // eax
  __int64 result; // rax
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  _DWORD v8[4]; // [rsp+28h] [rbp-20h] BYREF

  v2 = *((_QWORD *)this + 21);
  v7 = 0LL;
  (***(void (__fastcall ****)(_QWORD, GUID *, __int64 *))(v2 + 32))(
    *(_QWORD *)(v2 + 32),
    &GUID_2bfd280a_9471_4cf1_8d64_c33722820711,
    &v7);
  (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v7 + 48LL))(v7, v8);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v7);
  v4 = v8[0];
  v5 = v8[2] - v8[0];
  *(_DWORD *)a2 = v8[0];
  *((_DWORD *)a2 + 2) = v5;
  *((_DWORD *)a2 + 3) = v8[3] - v8[1];
  result = 0LL;
  *((_DWORD *)a2 + 1) = v4;
  return result;
}
