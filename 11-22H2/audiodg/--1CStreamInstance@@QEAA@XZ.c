/*
 * XREFs of ??1CStreamInstance@@QEAA@XZ @ 0x1400029AC
 * Callers:
 *     ??1?$CComObject@VCStreamInstance@@@ATL@@UEAA@XZ @ 0x1400044B4 (--1-$CComObject@VCStreamInstance@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComAggObject@VCStreamInstance@@@ATL@@UEAA@XZ @ 0x14004B2AC (--1-$CComAggObject@VCStreamInstance@@@ATL@@UEAA@XZ.c)
 *     ??_GCStreamInstance@@QEAAPEAXI@Z @ 0x1400557D4 (--_GCStreamInstance@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002A38 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x140006EE0 (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 */

void __fastcall CStreamInstance::~CStreamInstance(CStreamInstance *this)
{
  char *v2; // rcx

  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 208));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  v2 = (char *)*((_QWORD *)this + 15);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v2);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((char *)this + 112);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((char *)this + 104);
  ATL::CAutoPtr<CPipeInstance>::Free((char *)this + 80);
  if ( *((_BYTE *)this + 72) )
  {
    *((_BYTE *)this + 72) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  }
}
