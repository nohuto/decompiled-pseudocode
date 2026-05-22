/*
 * XREFs of ?Create@CPresentationBuffer@@SAJPEAVCPresentationManager@@PEAUIUnknown@@_KPEAPEAV1@@Z @ 0x1801AF19C
 * Callers:
 *     ?AddBufferFromResource@CPresentationManager@@UEAAJPEAUIUnknown@@PEAPEAUIPresentationBuffer@@@Z @ 0x1801AD190 (-AddBufferFromResource@CPresentationManager@@UEAAJPEAUIUnknown@@PEAPEAUIPresentationBuffer@@@Z.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180043FCC (--2@YAPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VCPresentationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCPresentationManager@@@Z @ 0x1801AEFF8 (--0-$com_ptr_t@VCPresentationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCPresentationMa.c)
 *     ??4?$com_ptr_t@VCPresentationBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCPresentationBuffer@@@Z @ 0x1801AF0EC (--4-$com_ptr_t@VCPresentationBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCPresentat.c)
 *     ?Initialize@CPresentationBuffer@@IEAAJPEAUIUnknown@@@Z @ 0x1801AF3A8 (-Initialize@CPresentationBuffer@@IEAAJPEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CPresentationBuffer::Create(
        struct CPresentationManager *a1,
        struct IUnknown *a2,
        __int64 a3,
        struct CPresentationBuffer **a4)
{
  _DWORD *v8; // rax
  __int64 v9; // rbx
  struct CPresentationBuffer *v10; // rdi
  unsigned int v11; // ebx
  unsigned int v12; // edx
  int v13; // ecx
  int v14; // eax
  CPresentationBuffer *v16[3]; // [rsp+20h] [rbp-18h] BYREF

  v16[0] = 0LL;
  v8 = operator new(0x38uLL);
  v9 = (__int64)v8;
  if ( v8 )
  {
    v8[2] = 0;
    *(_QWORD *)v8 = &CPresentationBuffer::`vftable';
    wil::com_ptr_t<CPresentationManager,wil::err_returncode_policy>::com_ptr_t<CPresentationManager,wil::err_returncode_policy>(
      (_QWORD *)v8 + 2,
      (__int64)a1);
    *(_QWORD *)(v9 + 24) = 0LL;
    *(_QWORD *)(v9 + 40) = 0LL;
    *(_BYTE *)(v9 + 48) &= 0xFCu;
    *(_QWORD *)(v9 + 32) = a3;
  }
  else
  {
    v9 = 0LL;
  }
  wil::com_ptr_t<CPresentationBuffer,wil::err_returncode_policy>::operator=((__int64 *)v16, v9);
  v10 = v16[0];
  if ( !v16[0] )
  {
    v11 = -2147024882;
    v12 = 20;
    v13 = -2147024882;
LABEL_9:
    DoStackCaptureDirect(v13, v12);
    goto LABEL_10;
  }
  v14 = CPresentationBuffer::Initialize(v16[0], a2);
  v11 = v14;
  if ( v14 < 0 )
  {
    v12 = 23;
    v13 = v14;
    goto LABEL_9;
  }
  v16[0] = 0LL;
  *a4 = v10;
LABEL_10:
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)v16);
  return v11;
}
