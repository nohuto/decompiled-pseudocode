/*
 * XREFs of _anonymous_namespace_::DecodeBatchIdFromCreativeId @ 0x18005A394
 * Callers:
 *     ?IsEventReported@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0PEAE@Z @ 0x18005FBE0 (-IsEventReported@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEve.c)
 *     ?IsReportedEventExpired@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0PEAE@Z @ 0x1800600E0 (-IsReportedEventExpired@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4Crea.c)
 *     ?SetEventReported@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0@Z @ 0x180064580 (-SetEventReported@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEv.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??1?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@XZ @ 0x180057EB4 (--1-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$basic_.c)
 *     _anonymous_namespace_::SplitString @ 0x180064B8C (_anonymous_namespace_--SplitString.c)
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180066A7C (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180069E40 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x180069F34 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall anonymous_namespace_::DecodeBatchIdFromCreativeId(__int64 a1, _WORD *a2)
{
  __int64 v4; // rbx
  __int64 v5; // r8
  void **v6; // rdx
  char v7; // bl
  char v8; // bl
  __int64 v10[4]; // [rsp+28h] [rbp-51h] BYREF
  void *v11[2]; // [rsp+48h] [rbp-31h] BYREF
  __int64 v12; // [rsp+58h] [rbp-21h]
  unsigned __int64 v13; // [rsp+60h] [rbp-19h]
  void *v14[2]; // [rsp+68h] [rbp-11h] BYREF
  __int64 v15; // [rsp+78h] [rbp-1h]
  unsigned __int64 v16; // [rsp+80h] [rbp+7h]
  void *v17[3]; // [rsp+88h] [rbp+Fh] BYREF
  unsigned __int64 v18; // [rsp+A0h] [rbp+27h]

  v10[3] = a1;
  v13 = 7LL;
  v12 = 0LL;
  LOWORD(v11[0]) = 0;
  v4 = -1LL;
  if ( *a2 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a2[v5] );
  }
  std::wstring::assign(v11, a2);
  anonymous_namespace_::SplitString(v10, v11, L"`");
  if ( v13 >= 8 )
    operator delete(v11[0]);
  v13 = 7LL;
  v12 = 0LL;
  LOWORD(v11[0]) = 0;
  if ( v10[0] == v10[1] )
  {
    v16 = 7LL;
    v15 = 0LL;
    LOWORD(v14[0]) = 0;
    if ( *a2 )
    {
      do
        ++v4;
      while ( a2[v4] );
    }
    std::wstring::assign(v14, a2);
    v6 = v14;
    v7 = 2;
  }
  else
  {
    v18 = 7LL;
    v17[2] = 0LL;
    LOWORD(v17[0]) = 0;
    std::wstring::assign(v17);
    v6 = v17;
    v7 = 1;
  }
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_WORD *)a1 = 0;
  std::wstring::_Assign_rv(a1, v6);
  v8 = v7 | 4;
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    if ( v16 >= 8 )
      operator delete(v14[0]);
    v16 = 7LL;
    v15 = 0LL;
    LOWORD(v14[0]) = 0;
  }
  if ( (v8 & 1) != 0 && v18 >= 8 )
    operator delete(v17[0]);
  std::vector<std::wstring>::~vector<std::wstring>(v10);
  return a1;
}
