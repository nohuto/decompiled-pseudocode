/*
 * XREFs of ?UpdateRegistryFromResourceS@CAtlModule@ATL@@QEAAJIHPEAU_ATL_REGMAP_ENTRY@2@@Z @ 0x1400871E4
 * Callers:
 *     ?UpdateRegistry@CCrossProcessClientInputEndpoint@@SAJH@Z @ 0x140087170 (-UpdateRegistry@CCrossProcessClientInputEndpoint@@SAJH@Z.c)
 *     ?UpdateRegistry@CCrossProcessClientOutputEndpoint@@SAJH@Z @ 0x140087190 (-UpdateRegistry@CCrossProcessClientOutputEndpoint@@SAJH@Z.c)
 *     ?UpdateRegistry@CCrossProcessServerInputEndpoint@@SAJH@Z @ 0x1400871B0 (-UpdateRegistry@CCrossProcessServerInputEndpoint@@SAJH@Z.c)
 *     ?UpdateRegistry@CCrossProcessServerOutputEndpoint@@SAJH@Z @ 0x1400871D0 (-UpdateRegistry@CCrossProcessServerOutputEndpoint@@SAJH@Z.c)
 *     ?UpdateRegistry@CSpatialCrossProcessClientOutputEndpoint@@SAJH@Z @ 0x14008E740 (-UpdateRegistry@CSpatialCrossProcessClientOutputEndpoint@@SAJH@Z.c)
 *     ?UpdateRegistry@CSpatialCrossProcessServerInputEndpoint@@SAJH@Z @ 0x14008E760 (-UpdateRegistry@CSpatialCrossProcessServerInputEndpoint@@SAJH@Z.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x1400175D4 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x14002F6B8 (__report_rangecheckfailure.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     memcpy_s_0 @ 0x14004F70C (memcpy_s_0.c)
 *     ??1?$CAtlSafeAllocBufferManager@VCCRTAllocator@ATL@@@_ATL_SAFE_ALLOCA_IMPL@ATL@@QEAA@XZ @ 0x14006DF44 (--1-$CAtlSafeAllocBufferManager@VCCRTAllocator@ATL@@@_ATL_SAFE_ALLOCA_IMPL@ATL@@QEAA@XZ.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x140075104 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     ??1CRegObject@ATL@@UEAA@XZ @ 0x140083520 (--1CRegObject@ATL@@UEAA@XZ.c)
 *     ?AddReplacement@CRegObject@ATL@@UEAAJPEBG0@Z @ 0x140083E50 (-AddReplacement@CRegObject@ATL@@UEAAJPEBG0@Z.c)
 *     ?RegisterFromResource@CRegObject@ATL@@IEAAJPEBG00H@Z @ 0x1400865E0 (-RegisterFromResource@CRegObject@ATL@@IEAAJPEBG00H@Z.c)
 */

__int64 __fastcall ATL::CAtlModule::UpdateRegistryFromResourceS(
        ATL::CAtlModule *this,
        unsigned __int16 a2,
        int a3,
        struct ATL::_ATL_REGMAP_ENTRY *a4)
{
  struct ATL::CAtlModule *v6; // rdi
  int Error; // ebx
  HMODULE v8; // rbx
  DWORD ModuleFileNameW; // eax
  WCHAR *v11; // rdx
  unsigned int i; // ecx
  unsigned __int16 v13; // r8
  unsigned __int16 *v14; // r8
  __int64 v15; // rbx
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  int v18; // eax
  _QWORD *v19; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD *v20; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v21[3]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v22[48]; // [rsp+60h] [rbp-A8h] BYREF
  char v23; // [rsp+90h] [rbp-78h]
  WCHAR Filename[264]; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int16 Source[520]; // [rsp+2A8h] [rbp+1A0h] BYREF
  unsigned __int16 v26; // [rsp+6B8h] [rbp+5B0h] BYREF
  _BYTE Destination[1054]; // [rsp+6BAh] [rbp+5B2h] BYREF

  v6 = ATL::_pAtlModule;
  v21[0] = &ATL::CRegObject::`vftable';
  v21[1] = 0LL;
  v21[2] = 0LL;
  *(_DWORD *)v22 = 0;
  memset(&v22[8], 0, 40);
  v23 = 0;
  Error = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)&v22[8]);
  if ( Error >= 0 )
  {
    v23 = 1;
    Error = (*(__int64 (__fastcall **)(struct ATL::CAtlModule *, _QWORD *))(*(_QWORD *)v6 + 40LL))(v6, v21);
    if ( Error >= 0 )
    {
      v19 = 0LL;
      v8 = hModule;
      ModuleFileNameW = GetModuleFileNameW(hModule, Filename, 0x104u);
      if ( !ModuleFileNameW )
      {
        Error = ATL::AtlHresultFromLastError();
LABEL_26:
        ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<ATL::CCRTAllocator>::~CAtlSafeAllocBufferManager<ATL::CCRTAllocator>(&v19);
        goto LABEL_7;
      }
      if ( ModuleFileNameW != 260 )
      {
        v11 = Filename;
        for ( i = 0; i < 0x207; ++i )
        {
          v13 = *v11;
          if ( !*v11 )
            break;
          Source[i] = v13;
          if ( v13 == 39 && i < 0x206 )
            Source[++i] = 39;
          ++v11;
        }
        Source[i] = 0;
        if ( !v8 || v8 == GetModuleHandleW(0LL) )
        {
          v26 = 34;
          v15 = -1LL;
          v16 = -1LL;
          do
            ++v16;
          while ( Source[v16] );
          if ( memcpy_s_0(Destination, 0x414uLL, Source, 2LL * ((int)v16 + 1)) )
          {
            ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<ATL::CCRTAllocator>::~CAtlSafeAllocBufferManager<ATL::CCRTAllocator>(&v19);
            Error = -2147467259;
            goto LABEL_7;
          }
          do
            ++v15;
          while ( *(_WORD *)&Destination[2 * v15 - 2] );
          *(_WORD *)&Destination[2 * (int)v15 - 2] = 34;
          v17 = 2LL * (int)v15 + 2;
          if ( v17 >= 0x418 )
            _report_rangecheckfailure();
          *(_WORD *)&Destination[v17 - 2] = 0;
          v14 = &v26;
        }
        else
        {
          v14 = Source;
        }
        Error = ATL::CRegObject::AddReplacement((ATL::CRegObject *)v21, L"Module", v14);
        if ( Error >= 0 )
        {
          Error = ATL::CRegObject::AddReplacement((ATL::CRegObject *)v21, L"Module_Raw", Source);
          if ( Error >= 0 )
          {
            v20 = 0LL;
            if ( a3 )
              v18 = ATL::CRegObject::RegisterFromResource(
                      (ATL::CRegObject *)v21,
                      Filename,
                      (const unsigned __int16 *)a2,
                      L"REGISTRY",
                      1);
            else
              v18 = ATL::CRegObject::RegisterFromResource(
                      (ATL::CRegObject *)v21,
                      Filename,
                      (const unsigned __int16 *)a2,
                      L"REGISTRY",
                      0);
            Error = v18;
            ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<ATL::CCRTAllocator>::~CAtlSafeAllocBufferManager<ATL::CCRTAllocator>(&v20);
          }
        }
        goto LABEL_26;
      }
      ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<ATL::CCRTAllocator>::~CAtlSafeAllocBufferManager<ATL::CCRTAllocator>(&v19);
      Error = -2147024774;
    }
  }
LABEL_7:
  ATL::CRegObject::~CRegObject((ATL::CRegObject *)v21);
  return (unsigned int)Error;
}
