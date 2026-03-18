/*
 * XREFs of ?SyncDesktopCaptureBits@CChannel@@UEAAJU_LUID@@HHIIW4DXGI_FORMAT@@_KPEAX@Z @ 0x18002D0B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x18002D294 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?SyncFlush@CChannel@@UEAAJXZ @ 0x18002D2C0 (-SyncFlush@CChannel@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800BD4F0 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::SyncDesktopCaptureBits(
        CChannel *this,
        struct _LUID a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        enum DXGI_FORMAT a7,
        unsigned __int64 a8,
        HANDLE hSourceHandle)
{
  signed int v13; // esi
  HANDLE CurrentProcess; // rdi
  HANDLE v15; // rax
  HANDLE v16; // rdi
  HANDLE v17; // rax
  int v18; // eax
  unsigned int v19; // ecx
  signed int v21; // eax
  int v22; // r9d
  signed int LastError; // eax
  unsigned int v24; // [rsp+28h] [rbp-51h]
  char *v25; // [rsp+48h] [rbp-31h] BYREF
  HANDLE EventW; // [rsp+50h] [rbp-29h] BYREF
  int v27; // [rsp+58h] [rbp-21h] BYREF
  struct _LUID v28; // [rsp+5Ch] [rbp-1Dh]
  int v29; // [rsp+64h] [rbp-15h]
  int v30; // [rsp+68h] [rbp-11h]
  unsigned int v31; // [rsp+6Ch] [rbp-Dh]
  unsigned int v32; // [rsp+70h] [rbp-9h]
  enum DXGI_FORMAT v33; // [rsp+74h] [rbp-5h]
  _BYTE v34[20]; // [rsp+78h] [rbp-1h] BYREF
  int v35; // [rsp+8Ch] [rbp+13h]

  v13 = 0;
  EventW = CreateEventW(0LL, 0, 0, 0LL);
  if ( EventW )
  {
    v25 = (char *)this + 168;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
    v27 = 271;
    v35 = 0;
    v31 = a5;
    v32 = a6;
    v33 = a7;
    *(_OWORD *)&v34[4] = 0LL;
    *(_QWORD *)v34 = a8;
    v28 = a2;
    v29 = a3;
    v30 = a4;
    SetLastError(0);
    CurrentProcess = GetCurrentProcess();
    v15 = GetCurrentProcess();
    if ( DuplicateHandle(v15, EventW, CurrentProcess, (LPHANDLE)&v34[8], 0, 0, 2u) )
    {
      SetLastError(0);
      v16 = GetCurrentProcess();
      v17 = GetCurrentProcess();
      if ( DuplicateHandle(v17, hSourceHandle, v16, (LPHANDLE)&v34[16], 0, 0, 2u) )
      {
        v18 = CChannel::SendCommand(this, &v27, 0x38u);
        v13 = v18;
        if ( v18 < 0 )
        {
          v24 = 1973;
        }
        else
        {
          v18 = CChannel::SyncFlush(this);
          v13 = v18;
          if ( v18 >= 0 )
          {
            WaitForSingleObject(EventW, 0x1388u);
LABEL_7:
            CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v25);
            goto LABEL_8;
          }
          v24 = 1974;
        }
        v22 = v18;
LABEL_23:
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v22, v24, 0LL);
        goto LABEL_7;
      }
      LastError = GetLastError();
      v13 = LastError;
      if ( LastError > 0 )
        v13 = (unsigned __int16)LastError | 0x80070000;
      if ( v13 >= 0 )
        v13 = -2003304445;
      v24 = 1971;
    }
    else
    {
      v21 = GetLastError();
      v13 = v21;
      if ( v21 > 0 )
        v13 = (unsigned __int16)v21 | 0x80070000;
      if ( v13 >= 0 )
        v13 = -2003304445;
      v24 = 1963;
    }
    v22 = v13;
    goto LABEL_23;
  }
LABEL_8:
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&EventW);
  return (unsigned int)v13;
}
