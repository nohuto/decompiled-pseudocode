/*
 * XREFs of ?InitializeVolumeCoefficientCount@CAudioStream@@QEAAJI@Z @ 0x1800E4B4C
 * Callers:
 *     ?InitializeHardwareStreamControls@CAudioStream@@UEAAJPEAUIAudioDeviceGraph@@@Z @ 0x1800E4970 (-InitializeHardwareStreamControls@CAudioStream@@UEAAJPEAUIAudioDeviceGraph@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800084A0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005F02C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?4U?$default_delete@$$BY0A@M@std@@$0A@@?$unique_ptr@$$BY0A@MU?$default_delete@$$BY0A@M@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800E2EF0 (--$-4U-$default_delete@$$BY0A@M@std@@$0A@@-$unique_ptr@$$BY0A@MU-$default_delete@$$BY0A@M@std@@@.c)
 */

__int64 __fastcall CAudioStream::InitializeVolumeCoefficientCount(CAudioStream *this, unsigned int a2)
{
  SIZE_T v3; // rax
  _QWORD *v4; // r14
  unsigned int v5; // ebx
  __int64 v6; // rdx
  SIZE_T v8; // rax
  _QWORD *v9; // rsi
  SIZE_T v10; // rax
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v13; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 21) != a2 )
  {
    *((_DWORD *)this + 21) = a2;
    v3 = 4LL * a2;
    if ( !is_mul_ok(a2, 4uLL) )
      v3 = -1LL;
    v4 = (_QWORD *)((char *)this + 504);
    v13 = operator new[](v3, (const struct std::nothrow_t *)&std::nothrow);
    std::unique_ptr<float [0]>::operator=<std::default_delete<float [0]>,0>((void **)this + 63, &v13);
    v5 = 0;
    if ( v13 )
      operator delete(v13);
    if ( !*v4 )
    {
      v6 = 190LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)0x8007000ELL);
      return 2147942414LL;
    }
    v8 = 4LL * *((unsigned int *)this + 21);
    if ( !is_mul_ok(*((unsigned int *)this + 21), 4uLL) )
      v8 = -1LL;
    v9 = (_QWORD *)((char *)this + 104);
    v13 = operator new[](v8, (const struct std::nothrow_t *)&std::nothrow);
    std::unique_ptr<float [0]>::operator=<std::default_delete<float [0]>,0>((void **)this + 13, &v13);
    if ( v13 )
      operator delete(v13);
    if ( !*v9 )
    {
      v6 = 192LL;
      goto LABEL_8;
    }
    v10 = 4LL * *((unsigned int *)this + 21);
    if ( !is_mul_ok(*((unsigned int *)this + 21), 4uLL) )
      v10 = -1LL;
    v13 = operator new[](v10, (const struct std::nothrow_t *)&std::nothrow);
    std::unique_ptr<float [0]>::operator=<std::default_delete<float [0]>,0>((void **)this + 14, &v13);
    if ( v13 )
      operator delete(v13);
    if ( !*((_QWORD *)this + 14) )
    {
      v6 = 194LL;
      goto LABEL_8;
    }
    if ( *((_DWORD *)this + 21) )
    {
      do
      {
        v11 = v5++;
        *(_DWORD *)(*v4 + 4 * v11) = 1065353216;
        *(_DWORD *)(*v9 + 4 * v11) = 1065353216;
      }
      while ( v5 < *((_DWORD *)this + 21) );
    }
  }
  return 0LL;
}
