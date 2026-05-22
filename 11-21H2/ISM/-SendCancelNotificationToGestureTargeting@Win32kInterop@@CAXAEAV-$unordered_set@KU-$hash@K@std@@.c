/*
 * XREFs of ?SendCancelNotificationToGestureTargeting@Win32kInterop@@CAXAEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAUInputInfo@@@Z @ 0x1800E1D44
 * Callers:
 *     ?RoutePointerFrame@Win32kInterop@@CAXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAXH@Z @ 0x1800E1C10 (-RoutePointerFrame@Win32kInterop@@CAXPEAUInputInfo@@AEAV-$unordered_set@KU-$hash@K@std@@U-$equal.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x18004AF4C (--_V@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$count@X@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@QEBA_KAEBK@Z @ 0x1800DDA6C (--$count@X@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@V-$a.c)
 *     ?CreateInputInteropMessageFromInputInfo@Win32kInterop@@CA?AUInputInteropMessageStorage@1@PEBUPointerInputInfo@@@Z @ 0x1800DEFC4 (-CreateInputInteropMessageFromInputInfo@Win32kInterop@@CA-AUInputInteropMessageStorage@1@PEBUPoi.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Win32kInterop::SendCancelNotificationToGestureTargeting(__int64 a1, __int64 a2)
{
  char *v4; // rbx
  unsigned int i; // edi
  __int64 v6; // rbp
  int v7; // [rsp+48h] [rbp+10h] BYREF
  void *v8; // [rsp+50h] [rbp+18h] BYREF

  Win32kInterop::CreateInputInteropMessageFromInputInfo((__int64 *)&v8, a2);
  v4 = (char *)v8;
  for ( i = 0; i < *(_DWORD *)(a2 + 316); ++i )
  {
    v6 = 240LL * i;
    v7 = *(_DWORD *)&v4[v6 + 172];
    if ( std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::count<void>(
           a1,
           (const unsigned __int8 *)&v7) )
    {
      *(_DWORD *)&v4[v6 + 180] = 294912;
      *(_DWORD *)&v4[v6 + 400] = 1;
    }
  }
  ((void (__fastcall *)(char *, _QWORD))Win32kInterop::s_pfnMTCallback)(v4, 0LL);
  if ( v4 )
    operator delete[](v4);
}
