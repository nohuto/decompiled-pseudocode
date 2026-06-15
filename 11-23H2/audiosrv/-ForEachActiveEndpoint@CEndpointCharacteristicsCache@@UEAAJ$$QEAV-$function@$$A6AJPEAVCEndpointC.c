/*
 * XREFs of ?ForEachActiveEndpoint@CEndpointCharacteristicsCache@@UEAAJ$$QEAV?$function@$$A6AJPEAVCEndpointCharacteristics@@@Z@std@@@Z @ 0x18014BFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CEndpointCharacteristicsCache::ForEachActiveEndpoint(RTL_SRWLOCK *a1, __int64 a2)
{
  RTL_SRWLOCK *v2; // rsi
  _QWORD *Ptr; // rdi
  _QWORD *i; // rbx
  __int64 v7; // rcx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1 + 3;
  AcquireSRWLockShared(a1 + 3);
  Ptr = a1[5].Ptr;
  for ( i = (_QWORD *)*Ptr; i != Ptr; i = (_QWORD *)*i )
  {
    v7 = *(_QWORD *)(a2 + 56);
    v11 = i[6];
    if ( !v7 )
    {
      std::_Xbad_function_call();
      __debugbreak();
      break;
    }
    v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 16LL))(v7, &v11);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x13AC,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v8);
  }
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return 0LL;
}
