/*
 * XREFs of AudioServerCreateStreamConnection @ 0x180120700
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180027F80 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067078 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800D2D00 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

__int64 __fastcall AudioServerCreateStreamConnection(__int64 a1, _WORD *a2, _WORD *a3, int a4, _QWORD *a5)
{
  int v7; // ebx
  std::_Ref_count_base *v8; // rdx
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  __int64 v11; // r15
  std::_Ref_count_base *v12; // r14
  _QWORD *v13; // rax
  _QWORD *v14; // rdi
  __int64 (__fastcall *v15)(__int64, _QWORD *, _QWORD *, _QWORD, _QWORD *); // rbx
  void *v16; // rcx
  void *v17; // rcx
  void *v19; // [rsp+30h] [rbp-41h] BYREF
  void *v20; // [rsp+38h] [rbp-39h] BYREF
  _QWORD v21[3]; // [rsp+40h] [rbp-31h] BYREF
  unsigned __int64 v22; // [rsp+58h] [rbp-19h]
  _QWORD v23[3]; // [rsp+60h] [rbp-11h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp+7h]

  LODWORD(v19) = a4;
  v7 = -2147467261;
  if ( a5 )
  {
    *a5 = 0LL;
    v8 = qword_1801D01F8;
    if ( qword_1801D01F8 )
    {
      v9 = *((_DWORD *)qword_1801D01F8 + 2);
      while ( v9 )
      {
        v10 = v9;
        v9 = _InterlockedCompareExchange((volatile signed __int32 *)v8 + 2, v9 + 1, v9);
        if ( v10 == v9 )
        {
          v11 = g_weakStreamMonitorManager;
          v12 = qword_1801D01F8;
          if ( g_weakStreamMonitorManager )
          {
            v13 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
            v14 = v13;
            if ( v13 )
            {
              *v13 = 0LL;
              v13[1] = 0LL;
              v15 = *(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD *, _QWORD, _QWORD *))(*(_QWORD *)v11 + 24LL);
              std::wstring::wstring(v23, a3);
              std::wstring::wstring(v21, a2);
              v7 = v15(v11, v21, v23, (unsigned int)v19, v14);
              if ( v22 >= 8 )
              {
                v16 = (void *)v21[0];
                v19 = (void *)(2 * v22 + 2);
                v20 = (void *)v21[0];
                if ( (unsigned __int64)v19 >= 0x1000 )
                {
                  std::_Adjust_manually_vector_aligned(&v20, (unsigned __int64 *)&v19);
                  v16 = v20;
                }
                operator delete(v16);
              }
              v21[2] = 0LL;
              v22 = 7LL;
              LOWORD(v21[0]) = 0;
              if ( v24 >= 8 )
              {
                v17 = (void *)v23[0];
                v20 = (void *)(2 * v24 + 2);
                v19 = (void *)v23[0];
                if ( (unsigned __int64)v20 >= 0x1000 )
                {
                  std::_Adjust_manually_vector_aligned(&v19, (unsigned __int64 *)&v20);
                  v17 = v19;
                }
                operator delete(v17);
              }
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
