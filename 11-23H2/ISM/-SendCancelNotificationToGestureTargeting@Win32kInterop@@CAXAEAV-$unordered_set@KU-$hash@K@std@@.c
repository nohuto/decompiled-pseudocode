/*
 * XREFs of ?SendCancelNotificationToGestureTargeting@Win32kInterop@@CAXAEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAUInputInfo@@@Z @ 0x1800FB3B4
 * Callers:
 *     ?RoutePointerFrame@Win32kInterop@@CAXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAXH@Z @ 0x1800FB290 (-RoutePointerFrame@Win32kInterop@@CAXPEAUInputInfo@@AEAV-$unordered_set@KU-$hash@K@std@@U-$equal.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$count@X@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@QEBA_KAEBK@Z @ 0x1800F76E8 (--$count@X@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@V-$a.c)
 *     ??0InputInteropMessageStorage@Win32kInterop@@QEAA@H@Z @ 0x1800F7A84 (--0InputInteropMessageStorage@Win32kInterop@@QEAA@H@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Win32kInterop::SendCancelNotificationToGestureTargeting(__int64 a1, __int64 a2)
{
  int v4; // edi
  char *v5; // rbx
  unsigned int v6; // r12d
  __int64 i; // rdi
  __int64 v8; // r8
  char *v9; // rdx
  _OWORD *v10; // rcx
  int v11; // [rsp+60h] [rbp+8h] BYREF
  void *v12; // [rsp+68h] [rbp+10h] BYREF

  v4 = *(_DWORD *)(a1 + 16);
  Win32kInterop::InputInteropMessageStorage::InputInteropMessageStorage(
    (Win32kInterop::InputInteropMessageStorage *)&v12,
    240 * v4 + 168);
  v5 = (char *)v12;
  *(_DWORD *)v12 = 0;
  *((_DWORD *)v5 + 39) = v4;
  *(_OWORD *)(v5 + 8) = *(_OWORD *)(a2 + 88);
  *(_OWORD *)(v5 + 24) = *(_OWORD *)(a2 + 104);
  *(_OWORD *)(v5 + 40) = *(_OWORD *)(a2 + 120);
  *(_OWORD *)(v5 + 56) = *(_OWORD *)(a2 + 136);
  *(_OWORD *)(v5 + 72) = *(_OWORD *)(a2 + 152);
  *(_OWORD *)(v5 + 88) = *(_OWORD *)(a2 + 168);
  *(_OWORD *)(v5 + 104) = *(_OWORD *)(a2 + 184);
  *(_OWORD *)(v5 + 120) = *(_OWORD *)(a2 + 200);
  *(_OWORD *)(v5 + 136) = *(_OWORD *)(a2 + 216);
  v6 = 0;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 316); i = (unsigned int)(i + 1) )
  {
    v11 = *(_DWORD *)&v5[240 * (unsigned int)i + 172];
    if ( std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::count<void>(
           a1,
           (const unsigned __int8 *)&v11) )
    {
      v8 = 240LL * v6;
      v9 = &v5[v8 + 168];
      v10 = (_OWORD *)(144 * i + a2 + 320);
      *(_OWORD *)v9 = *v10;
      *((_OWORD *)v9 + 1) = v10[1];
      *((_OWORD *)v9 + 2) = v10[2];
      *((_OWORD *)v9 + 3) = v10[3];
      *((_OWORD *)v9 + 4) = v10[4];
      *((_OWORD *)v9 + 5) = v10[5];
      *((_OWORD *)v9 + 6) = v10[6];
      *((_OWORD *)v9 + 7) = v10[7];
      *((_OWORD *)v9 + 8) = v10[8];
      *(_DWORD *)&v5[v8 + 180] = 294912;
      *(_DWORD *)&v5[v8 + 400] = 1;
      ++v6;
    }
  }
  ((void (__fastcall *)(char *, _QWORD))Win32kInterop::s_pfnMTCallback)(v5, 0LL);
  operator delete[](v5);
}
