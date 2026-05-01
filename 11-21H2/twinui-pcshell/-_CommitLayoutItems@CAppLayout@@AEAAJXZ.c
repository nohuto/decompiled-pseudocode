/*
 * XREFs of ?_CommitLayoutItems@CAppLayout@@AEAAJXZ @ 0x18061863C
 * Callers:
 *     ?Commit@CAppLayout@@UEAAJXZ @ 0x1806163A0 (-Commit@CAppLayout@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIAppLayoutItemBuilder@@@?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAppLayoutItemBuilder@@@WRL@Microsoft@@@Details@12@@Z @ 0x180512354 (--$As@UIAppLayoutItemBuilder@@@-$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Co.c)
 *     ?ComputeAppViewData@ImmersiveApplicationLayout@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@PEBUtagRECT@@1PEAUAPPLICATION_VIEW_DATA@@@Z @ 0x1805EF7DC (-ComputeAppViewData@ImmersiveApplicationLayout@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@PEBUtagRECT@@.c)
 */

__int64 __fastcall CAppLayout::_CommitLayoutItems(CAppLayout *this)
{
  unsigned __int64 v1; // r14
  int v2; // ebx
  unsigned __int64 i; // rdi
  __int64 **v5; // rax
  __int64 (__fastcall ****v6)(_QWORD, GUID *, __int64 *); // r8
  __int64 v8; // [rsp+20h] [rbp-29h] BYREF
  __int64 v9; // [rsp+28h] [rbp-21h] BYREF
  struct tagRECT v10; // [rsp+30h] [rbp-19h] BYREF
  struct tagRECT v11; // [rsp+40h] [rbp-9h] BYREF
  struct tagRECT v12; // [rsp+50h] [rbp+7h] BYREF

  v1 = *((_QWORD *)this + 14);
  v2 = 0;
  for ( i = 0LL; i < v1; ++i )
  {
    if ( v2 < 0 )
      break;
    v8 = 0LL;
    v5 = (__int64 **)Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v8, &v9);
    v2 = Microsoft::WRL::ComPtr<IAppLayoutItem>::As<IAppLayoutItemBuilder>(v6, *v5);
    if ( v2 >= 0
      && ((*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8) == 1
       || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8) == 4) )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(__int64, _QWORD, struct tagRECT *))(*(_QWORD *)v8 + 56LL))(v8, 0LL, &v11);
      v10 = v11;
      (*(void (__fastcall **)(__int64, __int64, struct tagRECT *))(*(_QWORD *)v8 + 104LL))(v8, 1LL, &v10);
      v2 = ImmersiveApplicationLayout::ComputeAppViewData((CAppLayout *)((char *)this + 64), &v10, &v10, &v12);
      if ( v2 >= 0 )
        (*(void (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v8 + 120LL))(v8, &v12);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v8);
  }
  return (unsigned int)v2;
}
