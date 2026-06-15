/*
 * XREFs of AudioServerCreateStreamConnection @ 0x1800F0F90
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000ABEC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18004135C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerCreateStreamConnection(__int64 a1, _WORD *a2, _WORD *a3, unsigned int a4, _QWORD *a5)
{
  int v7; // ebx
  std::_Ref_count_base *v8; // rdx
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  __int64 v11; // r15
  std::_Ref_count_base *v12; // r14
  _QWORD *v13; // rax
  _QWORD *v14; // rdi
  __int64 (__fastcall *v15)(__int64, void **, void **, _QWORD, _QWORD *); // rbx
  void *v18[3]; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+50h] [rbp-30h]
  void *v20[3]; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int64 v21; // [rsp+70h] [rbp-10h]

  v7 = -2147467261;
  if ( a5 )
  {
    *a5 = 0LL;
    v8 = qword_1801C2E90;
    if ( qword_1801C2E90 )
    {
      v9 = *((_DWORD *)qword_1801C2E90 + 2);
      while ( v9 )
      {
        v10 = v9;
        v9 = _InterlockedCompareExchange((volatile signed __int32 *)v8 + 2, v9 + 1, v9);
        if ( v10 == v9 )
        {
          v11 = g_weakStreamMonitorManager;
          v12 = qword_1801C2E90;
          if ( g_weakStreamMonitorManager )
          {
            v13 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
            v14 = v13;
            if ( v13 )
            {
              *v13 = 0LL;
              v13[1] = 0LL;
              v15 = *(__int64 (__fastcall **)(__int64, void **, void **, _QWORD, _QWORD *))(*(_QWORD *)v11 + 24LL);
              std::wstring::wstring(v20, a3);
              std::wstring::wstring(v18, a2);
              v7 = v15(v11, v18, v20, a4, v14);
              if ( v19 >= 8 )
                std::_Deallocate<16,0>(v18[0], 2 * v19 + 2);
              v18[2] = 0LL;
              v19 = 7LL;
              LOWORD(v18[0]) = 0;
              if ( v21 >= 8 )
                std::_Deallocate<16,0>(v20[0], 2 * v21 + 2);
              if ( v7 >= 0 )
                *a5 = v14;
            }
            else
            {
              v7 = -2147024882;
            }
          }
          if ( v12 )
            std::_Ref_count_base::_Decref(v12);
          return (unsigned int)v7;
        }
      }
    }
  }
  return (unsigned int)v7;
}
