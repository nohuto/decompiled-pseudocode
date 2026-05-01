/*
 * XREFs of ?UpdateConnectedStandbyState@TouchKeyboardExperienceManager@@AEAAX_N@Z @ 0x18020BEC0
 * Callers:
 *     wistd::__function::__func__lambda_7d0739256fada0ff8c98c9de4f75de3b__void___cdecl(unsigned_char_const_&)_::operator() @ 0x180208F50 (wistd--__function--__func__lambda_7d0739256fada0ff8c98c9de4f75de3b__void___cdecl(unsigned_char_c.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x180094388 (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180097490 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800B382C (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_251c98e664c8db8f4dd28d1d1fb5cd17___ @ 0x180205430 (Windows--Internal--ComTaskPool--QueueTask__lambda_251c98e664c8db8f4dd28d1d1fb5cd17___.c)
 */

void __fastcall TouchKeyboardExperienceManager::UpdateConnectedStandbyState(
        TouchKeyboardExperienceManager *this,
        char a2)
{
  char v2; // r8
  bool v4; // zf
  __int64 *v5; // rax
  unsigned int v6; // r8d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v11; // [rsp+50h] [rbp+18h] BYREF

  v2 = *((_BYTE *)this + 1013);
  v4 = *((_DWORD *)this + 251) == 0;
  *((_BYTE *)this + 1013) = a2;
  if ( v2 && !a2 && !v4 )
  {
    v10 = 0LL;
    v11 = &v10;
    v5 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v11);
    if ( (int)Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>((__int64)this, v5) >= 0 )
    {
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(v9, &v10);
      v6 = *((_DWORD *)this + 243);
      v9[1] = (__int64)this;
      Windows::Internal::ComTaskPool::QueueTask__lambda_251c98e664c8db8f4dd28d1d1fb5cd17___(
        v8,
        v7,
        v6,
        (volatile signed __int32 *)v9);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v9);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
  }
}
