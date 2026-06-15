/*
 * XREFs of ?CreateInstance@?$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z @ 0x180024CB0
 * Callers:
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x180024820 (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x180025018 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComObject<CVADServer>::CreateInstance(_QWORD *a1)
{
  int v2; // edi
  HANDLE ProcessHeap; // rax
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  _DWORD *v6; // r15
  signed __int32 i; // eax
  signed __int32 j; // eax

  if ( !a1 )
    return 2147500035LL;
  *a1 = 0LL;
  v2 = -2147024882;
  ProcessHeap = GetProcessHeap();
  v4 = HeapAlloc(ProcessHeap, 0, 0x240uLL);
  v5 = v4;
  if ( v4 )
  {
    v4[2] = 0;
    *((_OWORD *)v4 + 1) = 0LL;
    *((_OWORD *)v4 + 2) = 0LL;
    *((_QWORD *)v4 + 6) = 0LL;
    *((_BYTE *)v4 + 56) = 0;
    v4[16] = 0;
    *((_QWORD *)v4 + 9) = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
    *((_QWORD *)v5 + 10) = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
    *((_QWORD *)v5 + 11) = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
    *((_QWORD *)v5 + 14) = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
    *((GUID *)v5 + 6) = GUID_00000000_0000_0000_0000_000000000000;
    v5[30] = 0;
    v5[33] = -1;
    v5[32] = 0;
    v5[34] = 0;
    *((_QWORD *)v5 + 18) = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
    *((_QWORD *)v5 + 19) = 0LL;
    *((_QWORD *)v5 + 20) = 0LL;
    *((_QWORD *)v5 + 21) = 0LL;
    *((_QWORD *)v5 + 22) = 0LL;
    v5[46] = 0;
    *((_BYTE *)v5 + 188) = 0;
    *((_QWORD *)v5 + 24) = 0LL;
    *((_BYTE *)v5 + 200) = 1;
    *((_QWORD *)v5 + 26) = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
    *((_QWORD *)v5 + 27) = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v5 + 56), 0, 0);
    *((_BYTE *)v5 + 272) = 1;
    v5[69] = 0;
    *(GUID *)(v5 + 110) = GUID_00000000_0000_0000_0000_000000000000;
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v5 + 114), 0, 0);
    *((_QWORD *)v5 + 62) = 0LL;
    *((_QWORD *)v5 + 63) = 0LL;
    *((_QWORD *)v5 + 64) = 0LL;
    *((_QWORD *)v5 + 65) = 0LL;
    *((_BYTE *)v5 + 528) = 0;
    *((_QWORD *)v5 + 67) = 0LL;
    *((_QWORD *)v5 + 68) = 0LL;
    *((_QWORD *)v5 + 69) = 0LL;
    *((_QWORD *)v5 + 70) = 0LL;
    v5[142] = 0;
    memset_0(v5 + 70, 0, 0xA0uLL);
    *(_QWORD *)(v5 + 83) = 0LL;
    v5[82] = 0;
    v5[102] = 0;
    *(_QWORD *)v5 = &ATL::CComObject<CVADServer>::`vftable';
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  }
  else
  {
    v5 = 0LL;
  }
  v6 = v5;
  if ( v5 )
  {
    for ( i = v5[2]; i != 0x7FFFFFFF; i = v5[2] )
    {
      if ( i == _InterlockedCompareExchange(v5 + 2, i + 1, i) )
        break;
    }
    v2 = ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)(v5 + 4));
    if ( v2 >= 0 )
    {
      *((_BYTE *)v5 + 56) = 1;
      v2 = 0;
    }
    for ( j = v5[2]; j != 0x7FFFFFFF; j = v5[2] )
    {
      if ( j == _InterlockedCompareExchange(v5 + 2, j - 1, j) )
        break;
    }
    if ( v2 )
    {
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v5 + 216LL))(v5, 1LL);
      v6 = 0LL;
    }
  }
  *a1 = v6;
  return (unsigned int)v2;
}
