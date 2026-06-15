/*
 * XREFs of ?InitializeVolumeCoefficientCount@CAudioStream@@QEAAJI@Z @ 0x18000C968
 * Callers:
 *     ?RuntimeClassInitialize@CAudioStream@@QEAAJPEAUIAudioProcess@@_NKPEAUVadServerSettings@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEBUtWAVEFORMATEX@@@Z @ 0x18000C398 (-RuntimeClassInitialize@CAudioStream@@QEAAJPEAUIAudioProcess@@_NKPEAUVadServerSettings@@W4SYSTEM.c)
 *     ?InitializeAPOs@CAudioStream@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x180029910 (-InitializeAPOs@CAudioStream@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?InitializeHardwareStreamControls@CAudioStream@@UEAAJPEAUIAudioDeviceGraph@@@Z @ 0x1800EC7D0 (-InitializeHardwareStreamControls@CAudioStream@@UEAAJPEAUIAudioDeviceGraph@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 *     ??$?4U?$default_delete@$$BY0A@M@std@@$0A@@?$unique_ptr@$$BY0A@MU?$default_delete@$$BY0A@M@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000CAC0 (--$-4U-$default_delete@$$BY0A@M@std@@$0A@@-$unique_ptr@$$BY0A@MU-$default_delete@$$BY0A@M@std@@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006706C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CAudioStream::InitializeVolumeCoefficientCount(CAudioStream *this, unsigned int a2)
{
  unsigned __int64 v3; // rax
  _QWORD *v4; // r14
  unsigned int v5; // ebx
  unsigned __int64 v6; // rax
  _QWORD *v7; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v11; // rdx
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v14; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 24) == a2 )
    return 0LL;
  *((_DWORD *)this + 24) = a2;
  v3 = 4LL * a2;
  if ( !is_mul_ok(a2, 4uLL) )
    v3 = -1LL;
  v4 = (_QWORD *)((char *)this + 528);
  v14 = operator new[](v3, (const struct std::nothrow_t *)&std::nothrow);
  std::unique_ptr<float [0]>::operator=<std::default_delete<float [0]>,0>((char *)this + 528, &v14);
  v5 = 0;
  if ( v14 )
    operator delete(v14);
  if ( *v4 )
  {
    v6 = 4LL * *((unsigned int *)this + 24);
    if ( !is_mul_ok(*((unsigned int *)this + 24), 4uLL) )
      v6 = -1LL;
    v7 = (_QWORD *)((char *)this + 120);
    v14 = operator new[](v6, (const struct std::nothrow_t *)&std::nothrow);
    std::unique_ptr<float [0]>::operator=<std::default_delete<float [0]>,0>((char *)this + 120, &v14);
    if ( v14 )
      operator delete(v14);
    if ( *v7 )
    {
      v8 = 4LL * *((unsigned int *)this + 24);
      if ( !is_mul_ok(*((unsigned int *)this + 24), 4uLL) )
        v8 = -1LL;
      v14 = operator new[](v8, (const struct std::nothrow_t *)&std::nothrow);
      std::unique_ptr<float [0]>::operator=<std::default_delete<float [0]>,0>((char *)this + 128, &v14);
      if ( v14 )
        operator delete(v14);
      if ( *((_QWORD *)this + 16) )
      {
        if ( *((_DWORD *)this + 24) )
        {
          do
          {
            v9 = v5++;
            *(_DWORD *)(*v4 + 4 * v9) = 1065353216;
            *(_DWORD *)(*v7 + 4 * v9) = 1065353216;
          }
          while ( v5 < *((_DWORD *)this + 24) );
        }
        return 0LL;
      }
      v11 = 200LL;
    }
    else
    {
      v11 = 198LL;
    }
  }
  else
  {
    v11 = 196LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)0x8007000ELL,
    v12);
  return 2147942414LL;
}
