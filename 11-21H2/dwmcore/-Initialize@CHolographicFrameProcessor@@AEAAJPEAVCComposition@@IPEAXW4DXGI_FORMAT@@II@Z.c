/*
 * XREFs of ?Initialize@CHolographicFrameProcessor@@AEAAJPEAVCComposition@@IPEAXW4DXGI_FORMAT@@II@Z @ 0x18029F7E0
 * Callers:
 *     ?Create@CHolographicFrameProcessor@@SAJPEAVCComposition@@IPEAXW4DXGI_FORMAT@@IIPEAPEAV1@@Z @ 0x18029F5A4 (-Create@CHolographicFrameProcessor@@SAJPEAVCComposition@@IPEAXW4DXGI_FORMAT@@IIPEAPEAV1@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003DB7C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800D193C (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ?AddWin32kInteropTexture@CHolographicManager@@QEAA_NPEAUIHolographicWin32kInteropTexture@@PEAX@Z @ 0x1802955CC (-AddWin32kInteropTexture@CHolographicManager@@QEAA_NPEAUIHolographicWin32kInteropTexture@@PEAX@Z.c)
 */

__int64 __fastcall CHolographicFrameProcessor::Initialize(
        CHolographicFrameProcessor *this,
        struct CComposition *a2,
        void *a3,
        void *a4,
        enum DXGI_FORMAT a5,
        unsigned int a6,
        unsigned int a7)
{
  signed int v8; // esi
  RTL_SRWLOCK *v10; // rbx
  RTL_SRWLOCK *v11; // rcx
  RTL_SRWLOCK *v12; // rax
  HANDLE CurrentProcess; // rbx
  HANDLE v14; // rax
  signed int LastError; // eax
  __int64 v16; // rcx

  *((_DWORD *)this + 17) = a6;
  v8 = 0;
  *((_DWORD *)this + 18) = a7;
  *((_DWORD *)this + 16) = 87;
  *((_DWORD *)this + 28) = (_DWORD)a3;
  v10 = (RTL_SRWLOCK *)*((_QWORD *)a2 + 33);
  v11 = (RTL_SRWLOCK *)*((_QWORD *)this + 6);
  if ( v11 != v10 )
  {
    v12 = v11;
    if ( v10 )
    {
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)&v10[2]);
      v12 = (RTL_SRWLOCK *)*((_QWORD *)this + 6);
    }
    *((_QWORD *)this + 6) = v10;
    v11 = v10;
    if ( v12 )
    {
      CMILRefCountBaseT<IMILRefCount>::InternalRelease((volatile signed __int32 *)&v12[1]);
      v11 = (RTL_SRWLOCK *)*((_QWORD *)this + 6);
    }
  }
  if ( v11 )
  {
    CHolographicManager::AddWin32kInteropTexture(v11, (struct IUnknown *)this + 5, a3);
    SetLastError(0);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (void **)this + 15,
      0LL);
    CurrentProcess = GetCurrentProcess();
    v14 = GetCurrentProcess();
    if ( !DuplicateHandle(v14, a4, CurrentProcess, (LPHANDLE)this + 15, 0, 0, 2u) )
    {
      LastError = GetLastError();
      v8 = LastError;
      if ( LastError > 0 )
        v8 = (unsigned __int16)LastError | 0x80070000;
      if ( v8 >= 0 )
        v8 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0LL, v8, 0x44u);
    }
  }
  else
  {
    v8 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0LL, -2147418113, 0x39u);
  }
  return (unsigned int)v8;
}
