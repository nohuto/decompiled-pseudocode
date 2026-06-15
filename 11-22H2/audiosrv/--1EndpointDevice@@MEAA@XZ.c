/*
 * XREFs of ??1EndpointDevice@@MEAA@XZ @ 0x1800066AC
 * Callers:
 *     ??_GEndpointDevice@@MEAAPEAXI@Z @ 0x180006670 (--_GEndpointDevice@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800D2D00 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

void __fastcall EndpointDevice::~EndpointDevice(EndpointDevice *this)
{
  unsigned __int64 v2; // rdx
  void *v3; // rcx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  void *v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  void *v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  void *v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // [rsp+40h] [rbp+20h] BYREF
  void *v15; // [rsp+48h] [rbp+28h] BYREF

  *(_QWORD *)this = &EndpointDevice::`vftable'{for `IEndpointDevice'};
  *((_QWORD *)this + 1) = &EndpointDevice::`vftable'{for `CUnknown'};
  v2 = *((_QWORD *)this + 22);
  if ( v2 >= 8 )
  {
    v3 = (void *)*((_QWORD *)this + 19);
    v4 = 2 * v2 + 2;
    v14 = v4;
    v15 = v3;
    if ( v4 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v15, &v14);
      v4 = v14;
      v3 = v15;
    }
    operator delete(v3, v4);
  }
  *((_QWORD *)this + 21) = 0LL;
  *((_WORD *)this + 76) = 0;
  *((_QWORD *)this + 22) = 7LL;
  v5 = *((_QWORD *)this + 18);
  if ( v5 >= 8 )
  {
    v6 = (void *)*((_QWORD *)this + 15);
    v7 = 2 * v5 + 2;
    v14 = v7;
    v15 = v6;
    if ( v7 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v15, &v14);
      v7 = v14;
      v6 = v15;
    }
    operator delete(v6, v7);
  }
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 7LL;
  *((_WORD *)this + 60) = 0;
  v8 = *((_QWORD *)this + 11);
  if ( v8 >= 8 )
  {
    v9 = (void *)*((_QWORD *)this + 8);
    v10 = 2 * v8 + 2;
    v14 = v10;
    v15 = v9;
    if ( v10 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v15, &v14);
      v10 = v14;
      v9 = v15;
    }
    operator delete(v9, v10);
  }
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 7LL;
  *((_WORD *)this + 32) = 0;
  v11 = *((_QWORD *)this + 7);
  if ( v11 >= 8 )
  {
    v12 = (void *)*((_QWORD *)this + 4);
    v13 = 2 * v11 + 2;
    v14 = v13;
    v15 = v12;
    if ( v13 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v15, &v14);
      v13 = v14;
      v12 = v15;
    }
    operator delete(v12, v13);
  }
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 7LL;
  *((_WORD *)this + 16) = 0;
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this + 3);
  *((_QWORD *)this + 1) = &CUnknown::`vftable';
}
