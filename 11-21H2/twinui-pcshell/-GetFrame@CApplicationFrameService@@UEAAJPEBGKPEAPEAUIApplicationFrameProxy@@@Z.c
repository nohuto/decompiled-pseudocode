/*
 * XREFs of ?GetFrame@CApplicationFrameService@@UEAAJPEBGKPEAPEAUIApplicationFrameProxy@@@Z @ 0x180070A90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_TransferFromPoolToActive@CApplicationFrameService@@AEAAJ_K@Z @ 0x180070B48 (-_TransferFromPoolToActive@CApplicationFrameService@@AEAAJ_K@Z.c)
 *     ??$?0VCApplicationFrameWrapper@@@?$ComPtr@UIApplicationFrameProxy@@@WRL@Microsoft@@QEAA@AEBV?$ComPtr@VCApplicationFrameWrapper@@@12@PEAPEAX@Z @ 0x180070C7C (--$-0VCApplicationFrameWrapper@@@-$ComPtr@UIApplicationFrameProxy@@@WRL@Microsoft@@QEAA@AEBV-$Co.c)
 *     ?Initialize@CApplicationFrameWrapper@@QEAAJPEBGK@Z @ 0x180070CB0 (-Initialize@CApplicationFrameWrapper@@QEAAJPEBGK@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationFrameService::GetFrame(
        CApplicationFrameService *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        struct IApplicationFrameProxy **a4)
{
  int v8; // edi
  __int64 v9; // rcx
  struct IApplicationFrameProxy *v10; // rax
  unsigned __int64 v12; // rsi
  struct IApplicationFrameProxy *v13; // rcx
  __int64 v14; // rbx
  struct IApplicationFrameProxy *v15; // [rsp+68h] [rbp+20h] BYREF

  *a4 = 0LL;
  v8 = -2147023728;
  v9 = *((_QWORD *)this + 9);
  if ( !BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) )
  {
    v12 = 0LL;
    if ( !v9 )
      return (unsigned int)v8;
    while ( CompareStringOrdinal(*(LPCWCH *)(*(_QWORD *)(*((_QWORD *)this + 8) + 8 * v12) + 144LL), -1, a2, -1, 1) != 2
         || *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 8 * v12) + 168LL) != a3 )
    {
      if ( ++v12 >= *((_QWORD *)this + 9) )
        return (unsigned int)v8;
    }
    Microsoft::WRL::ComPtr<IApplicationFrameProxy>::ComPtr<IApplicationFrameProxy>(&v15);
    v8 = CApplicationFrameService::_TransferFromPoolToActive((CApplicationFrameService *)((char *)this - 40), v12);
    if ( v8 >= 0 )
    {
      v13 = v15;
      v15 = 0LL;
      *a4 = v13;
    }
    goto LABEL_6;
  }
  if ( v9 )
  {
    v8 = CApplicationFrameWrapper::Initialize(**((CApplicationFrameWrapper ***)this + 8), a2, a3);
    if ( v8 >= 0 )
    {
      Microsoft::WRL::ComPtr<IApplicationFrameProxy>::ComPtr<IApplicationFrameProxy>(&v15);
      v8 = CApplicationFrameService::_TransferFromPoolToActive((CApplicationFrameService *)((char *)this - 40), 0LL);
      if ( v8 < 0 )
      {
        v14 = **((_QWORD **)this + 8);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v14 + 144);
        *(_DWORD *)(v14 + 168) = 0;
        RemovePropW(*(HWND *)(v14 + 80), L"LastSetGlomIdForReconstitution");
      }
      else
      {
        v10 = v15;
        v15 = 0LL;
        *a4 = v10;
      }
LABEL_6:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v15);
    }
  }
  return (unsigned int)v8;
}
