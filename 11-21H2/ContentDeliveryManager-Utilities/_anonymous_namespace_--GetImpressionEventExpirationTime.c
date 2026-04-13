/*
 * XREFs of _anonymous_namespace_::GetImpressionEventExpirationTime @ 0x18005DDE0
 * Callers:
 *     ContentManagement::ExecuteHandlerByEventPolicy__lambda_929976d9f769b9ae6bfa1e1f0592e0ca___ @ 0x180052028 (ContentManagement--ExecuteHandlerByEventPolicy__lambda_929976d9f769b9ae6bfa1e1f0592e0ca___.c)
 *     ?IsReportedEventExpired@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0PEAE@Z @ 0x1800600E0 (-IsReportedEventExpired@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4Crea.c)
 * Callees:
 *     ?_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z @ 0x18000524C (-_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z.c)
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     _anonymous_namespace_::PlacementHealth::HandleEvent_10_unsigned_int_unsigned___int64_ @ 0x180052C94 (_anonymous_namespace_--PlacementHealth--HandleEvent_10_unsigned_int_unsigned___int64_.c)
 *     ??0?$basic_istringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x1800562F0 (--0-$basic_istringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV-$basic_string@G.c)
 *     ??1?$basic_istringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UEAA@XZ @ 0x180057C3C (--1-$basic_istringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@UEAA@XZ.c)
 *     ??1?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@XZ @ 0x180057EB4 (--1-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$basic_.c)
 *     ??5?$basic_istream@GU?$char_traits@G@std@@@std@@QEAAAEAV01@AEAI@Z @ 0x1800585AC (--5-$basic_istream@GU-$char_traits@G@std@@@std@@QEAAAEAV01@AEAI@Z.c)
 *     ??5?$basic_istream@GU?$char_traits@G@std@@@std@@QEAAAEAV01@AEA_K@Z @ 0x18005879C (--5-$basic_istream@GU-$char_traits@G@std@@@std@@QEAAAEAV01@AEA_K@Z.c)
 *     _anonymous_namespace_::SplitString @ 0x180064B8C (_anonymous_namespace_--SplitString.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x180069F34 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall anonymous_namespace_::GetImpressionEventExpirationTime(_WORD *Src, _WORD *a2, __int64 a3)
{
  __int64 v5; // r8
  char v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rbx
  unsigned int v11; // ebx
  int v12; // eax
  int v14; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v15; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v16; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+38h] [rbp-C8h]
  __int64 v18[18]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v19[12]; // [rsp+E0h] [rbp-20h] BYREF
  void *v20[2]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v21; // [rsp+150h] [rbp+50h]
  unsigned __int64 v22; // [rsp+158h] [rbp+58h]

  v15 = 0LL;
  v22 = 7LL;
  v21 = 0LL;
  LOWORD(v20[0]) = 0;
  if ( *a2 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a2[v5] );
  }
  std::wstring::assign(v20, a2);
  anonymous_namespace_::SplitString(&v16, v20, L"`");
  if ( v22 >= 8 )
    operator delete(v20[0]);
  v22 = 7LL;
  v21 = 0LL;
  LOWORD(v20[0]) = 0;
  v7 = v17;
  v8 = v16;
  if ( (unsigned __int64)((v17 - v16) >> 5) > 6 )
  {
    std::basic_istringstream<unsigned short>::basic_istringstream<unsigned short>(v18, v16 + 192, v6);
    std::basic_istream<unsigned short>::operator>>(v18, (__int64)&v15);
    v9 = v15;
    std::wistringstream::~wistringstream((__int64)v19);
    v19[0] = &std::ios_base::`vftable';
    std::ios_base::_Ios_base_dtor((struct std::ios_base *)v19);
    if ( v9 )
    {
      v10 = v9 + 600000000;
      goto LABEL_15;
    }
    v7 = v17;
    v8 = v16;
  }
  v11 = 86400;
  v14 = 86400;
  if ( (unsigned __int64)((v7 - v8) >> 5) > 4 )
  {
    std::basic_istringstream<unsigned short>::basic_istringstream<unsigned short>(v18, v8 + 128, v6);
    std::basic_istream<unsigned short>::operator>>(v18, (__int64)&v14);
    v12 = v14;
    if ( !v14 )
      v12 = 86400;
    v14 = v12;
    std::wistringstream::~wistringstream((__int64)v19);
    v19[0] = &std::ios_base::`vftable';
    std::ios_base::_Ios_base_dtor((struct std::ios_base *)v19);
    v11 = v14;
  }
  v10 = a3 + 10000000 * (v11 + 600LL);
LABEL_15:
  if ( Src )
    anonymous_namespace_::PlacementHealth::HandleEvent_10_unsigned_int_unsigned___int64_(Src);
  std::vector<std::wstring>::~vector<std::wstring>(&v16);
  return v10;
}
