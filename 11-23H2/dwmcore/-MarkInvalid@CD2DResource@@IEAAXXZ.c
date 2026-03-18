/*
 * XREFs of ?MarkInvalid@CD2DResource@@IEAAXXZ @ 0x18028BBAC
 * Callers:
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x18010445C (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 *     ?MarkHardwareProtectedResourcesInvalid@CD2DResourceManager@@QEAA_NXZ @ 0x18029C3CC (-MarkHardwareProtectedResourcesInvalid@CD2DResourceManager@@QEAA_NXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CD2DResource::MarkInvalid(CD2DResource *this)
{
  __int64 i; // rdi
  void (__fastcall ***v3)(_QWORD, char *); // rcx

  (*(void (__fastcall **)(CD2DResource *))(*(_QWORD *)this + 8LL))(this);
  for ( i = (__int64)(*((_QWORD *)this + 8) - *((_QWORD *)this + 7)) >> 3; (int)i > 0; LODWORD(i) = i - 1 )
  {
    v3 = *(void (__fastcall ****)(_QWORD, char *))(*((_QWORD *)this + 7) + 8LL * (unsigned int)(i - 1));
    (**v3)(v3, (char *)this + *(int *)(*((_QWORD *)this + 2) + 8LL) + 16);
  }
  (*(void (__fastcall **)(CD2DResource *))(*(_QWORD *)this + 56LL))(this);
  (*(void (__fastcall **)(CD2DResource *))(*(_QWORD *)this + 16LL))(this);
}
