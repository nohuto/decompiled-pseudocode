/*
 * XREFs of ?Show@CMultitaskingViewElementBase@@UEAAXXZ @ 0x1804BB240
 * Callers:
 *     ?Show@SwitchItemThumbnailElement@@UEAAXXZ @ 0x1802372F0 (-Show@SwitchItemThumbnailElement@@UEAAXXZ.c)
 *     ?Show@CSwitchItemElement@@UEAAXXZ @ 0x1804B88D0 (-Show@CSwitchItemElement@@UEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMultitaskingViewElementBase::Show(CMultitaskingViewElementBase *this)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  int (__fastcall *v4)(__int64, _QWORD, CMultitaskingViewElementBase *, char *); // rbx
  unsigned int v5; // eax
  bool v6; // bl
  __int64 v7; // rdx
  __int64 v8; // rcx
  char v9; // [rsp+50h] [rbp+8h] BYREF
  int v10; // [rsp+58h] [rbp+10h]
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  v10 = 0;
  if ( !*((_BYTE *)this + 72) )
  {
    v2 = (*(__int64 (__fastcall **)(CMultitaskingViewElementBase *, __int64 *))(*(_QWORD *)this + 384LL))(this, &v11);
    v10 = 1;
    v3 = *(_QWORD *)v2;
    v4 = *(int (__fastcall **)(__int64, _QWORD, CMultitaskingViewElementBase *, char *))(**(_QWORD **)v2 + 40LL);
    v5 = (*(__int64 (__fastcall **)(CMultitaskingViewElementBase *))(*(_QWORD *)this + 400LL))(this);
    v6 = v4(v3, v5, this, &v9) < 0 || v9;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
    if ( v6 )
    {
      *((_BYTE *)this + 72) = 1;
      v8 = *((_QWORD *)this + 11);
      if ( v8 )
        (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v8 + 32LL))(v8, v7, 0LL, 0LL);
    }
  }
}
