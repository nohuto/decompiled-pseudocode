/*
 * XREFs of ?GetExclusiveSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18010C130
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_44fd5c58d02accc22ae075b126dea950_::operator() @ 0x18010B2AC (_lambda_44fd5c58d02accc22ae075b126dea950_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDeviceGraphObjectsStore::GetExclusiveSaDevices(__int64 a1, __int64 *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  const char *v5; // r9
  __int64 v6; // rdi
  _QWORD *v7; // r12
  _QWORD *i; // rsi
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 *v11; // [rsp+50h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+60h] [rbp+18h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  v12 = v4;
  v6 = 0LL;
  try
  {
    while ( (unsigned int)v6 < 4 )
    {
      v11 = a2;
      v7 = *(_QWORD **)(a1 + 24 * v6 + 96);
      for ( i = *(_QWORD **)(a1 + 24 * v6 + 88); i != v7; ++i )
        lambda_44fd5c58d02accc22ae075b126dea950_::operator()(&v11, i);
      v6 = (unsigned int)(v6 + 1);
    }
    if ( v4 )
      LeaveCriticalSection(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x209,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
                           v5);
  }
  return result;
}
