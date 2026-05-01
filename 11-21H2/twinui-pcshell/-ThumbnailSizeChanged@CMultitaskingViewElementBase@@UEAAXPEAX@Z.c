/*
 * XREFs of ?ThumbnailSizeChanged@CMultitaskingViewElementBase@@UEAAXPEAX@Z @ 0x1804BB3D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CMultitaskingViewElementBase::ThumbnailSizeChanged(CMultitaskingViewElementBase *this, void *a2)
{
  _QWORD *v2; // rbx
  _QWORD *v4; // rdi

  v2 = (_QWORD *)*((_QWORD *)this + 2);
  v4 = &v2[*((_QWORD *)this + 3)];
  while ( v2 != v4 )
  {
    (*(void (__fastcall **)(_QWORD, void *))(*(_QWORD *)*v2 + 480LL))(*v2, a2);
    ++v2;
  }
}
