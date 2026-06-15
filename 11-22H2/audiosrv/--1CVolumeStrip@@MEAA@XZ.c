/*
 * XREFs of ??1CVolumeStrip@@MEAA@XZ @ 0x18005501C
 * Callers:
 *     ??_GCVolumeStrip@@MEAAPEAXI@Z @ 0x180054FE0 (--_GCVolumeStrip@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CVolumeStrip::~CVolumeStrip(CVolumeStrip *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  void *v5; // rcx
  __int64 *v6; // rdi
  void *v7; // rcx
  __int64 *v8; // rbp

  *(_QWORD *)this = &CVolumeStrip::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)this + 1) = &CVolumeStrip::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IVolumeStrip>'};
  v2 = *((_QWORD *)this + 21);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 21) = 0LL;
  }
  v3 = *((_QWORD *)this + 22);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    *((_QWORD *)this + 22) = 0LL;
  }
  v4 = *((_QWORD *)this + 23);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 23) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 19);
  if ( v5 )
    CoTaskMemFree(v5);
  v6 = (__int64 *)*((_QWORD *)this + 16);
  if ( v6 )
  {
    v8 = (__int64 *)*((_QWORD *)this + 17);
    while ( v6 != v8 )
    {
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(v6);
      v6 += 2;
    }
    std::_Deallocate<16,0>(
      *((void **)this + 16),
      (*((_QWORD *)this + 18) - *((_QWORD *)this + 16)) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 16) = 0LL;
    *((_QWORD *)this + 17) = 0LL;
    *((_QWORD *)this + 18) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  v7 = (void *)*((_QWORD *)this + 8);
  if ( v7 )
  {
    std::_Deallocate<16,0>(v7, (*((_QWORD *)this + 10) - (_QWORD)v7) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  *((_DWORD *)this + 5) = -1073741823;
}
