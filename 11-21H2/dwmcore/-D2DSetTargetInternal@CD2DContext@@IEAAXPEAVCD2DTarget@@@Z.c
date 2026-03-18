/*
 * XREFs of ?D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z @ 0x180080BA4
 * Callers:
 *     ?ReleaseCachedD2DTarget@CD2DContext@@IEAAXXZ @ 0x1800228A0 (-ReleaseCachedD2DTarget@CD2DContext@@IEAAXXZ.c)
 *     ?PopTarget@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z @ 0x18007F150 (-PopTarget@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z.c)
 *     ?ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z @ 0x180080A78 (-ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CD2DContext::D2DSetTargetInternal(CD2DContext *this, struct CD2DTarget *a2)
{
  __int64 *v2; // rcx
  __int64 v3; // rax

  v2 = (__int64 *)*((_QWORD *)this + 26);
  v3 = *v2;
  if ( a2 )
    (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v3 + 56))(v2, *((_QWORD *)a2 + 4), *((_QWORD *)a2 + 5));
  else
    (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v3 + 56))(v2, 0LL, 0LL);
}
