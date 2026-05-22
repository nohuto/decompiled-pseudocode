/*
 * XREFs of ?OnDeviceChanged@CompositorCommon@Composition@UI@Windows@@EEAAXXZ @ 0x180073A70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z @ 0x180108AEC (-ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z.c)
 */

void __fastcall Windows::UI::Composition::CompositorCommon::OnDeviceChanged(
        Windows::UI::Composition::CompositorCommon *this,
        __int64 a2)
{
  char v2; // al
  bool v3; // zf
  int v4; // eax
  const void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_BYTE *)this + 300);
  if ( (v2 & 1) == 0 )
  {
    v3 = *((_DWORD *)this + 74) == 0;
    *((_BYTE *)this + 300) = v2 | 1;
    if ( v3 )
    {
      LOBYTE(a2) = 1;
      v4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 35) + 48LL))(*((_QWORD *)this + 35), a2);
      if ( v4 < 0 )
        Microsoft::WRL2::FailFast::ForHR(v4, retaddr);
    }
  }
}
