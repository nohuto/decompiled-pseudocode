/*
 * XREFs of ?DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z @ 0x180021410
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B5D0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800113F0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     __security_check_cookie @ 0x180016790 (__security_check_cookie.c)
 *     ??1CDuckingNotification@@QEAA@XZ @ 0x18001C0E4 (--1CDuckingNotification@@QEAA@XZ.c)
 *     WPP_SF_d @ 0x18001F3E8 (WPP_SF_d.c)
 *     ??$remove_if@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@@std@@V_lambda_d28866b9a85f3417e65a955c46fd5d1a_@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@@0@V10@V10@V_lambda_d28866b9a85f3417e65a955c46fd5d1a_@@@Z @ 0x18001FF50 (--$remove_if@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@ULockedListEntry@-$CLockedList@.c)
 *     ??0CDuckingNotification@@QEAA@AEBV0@@Z @ 0x1800201C8 (--0CDuckingNotification@@QEAA@AEBV0@@Z.c)
 *     ?Init@CDuckingNotification@@QEAAJKPEBG_K@Z @ 0x180021900 (-Init@CDuckingNotification@@QEAAJKPEBG_K@Z.c)
 *     ?erase@?$vector@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@@std@@@std@@@2@0@Z @ 0x1800238E4 (-erase@-$vector@ULockedListEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@V-$allocator@ULoc.c)
 *     WPP_SF_di @ 0x180023B60 (WPP_SF_di.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDuckingManager::DeleteDuckingNotification(CDuckingManager *this, __int64 a2, unsigned __int64 a3)
{
  unsigned int v4; // ebx
  int v6; // ebx
  CDuckingNotification *v7; // r14
  __int64 v8; // rbx
  _QWORD *v9; // rax
  ATL::CAtlException *v11; // rbx
  char v12; // [rsp+30h] [rbp-D8h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v14[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+50h] [rbp-B8h] BYREF
  ATL::CAtlException *v16; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v17[56]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v18[16]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v19; // [rsp+A8h] [rbp-60h]
  __m128i si128; // [rsp+B8h] [rbp-50h]
  __int64 v21; // [rsp+C8h] [rbp-40h]

  v4 = a2;
  v19 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v21 = 0LL;
  if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_di(*((_QWORD *)WPP_GLOBAL_Control + 2), a2, a3, (unsigned int)a2, a3);
  }
  v6 = CDuckingNotification::Init((CDuckingNotification *)v18, v4, 0LL, a3);
  if ( v6 < 0 )
    goto LABEL_8;
  try
  {
    v7 = CDuckingNotification::CDuckingNotification(
           (CDuckingNotification *)v17,
           (const struct CDuckingNotification *)v18);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
    v13 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
    v12 = 0;
    v8 = *((_QWORD *)this + 14);
    v14[0] = v7;
    v14[1] = &v12;
    v9 = std::remove_if<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>>,_lambda_d28866b9a85f3417e65a955c46fd5d1a_>(
           &v15,
           *((_QWORD *)this + 13),
           v8,
           (__int64)v14);
    std::vector<CLockedList<CDuckingNotification,1,0>::LockedListEntry,std::allocator<CLockedList<CDuckingNotification,1,0>::LockedListEntry>>::erase(
      (char *)this + 104,
      v14,
      *v9,
      v8);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v13);
    CDuckingNotification::~CDuckingNotification(v7);
    v6 = 0;
  }
  catch ( ATL::CAtlException *v16 )
  {
    v11 = v16;
    if ( *(_DWORD *)v16 == -1073741571 )
      _o__resetstkoflw();
    LODWORD(v13) = *(_DWORD *)v11;
    v6 = (int)v13;
    if ( (int)v13 < 0 )
    {
LABEL_8:
      if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xDu, &WPP_53f29f244fa932abd536e394721a76e7_Traceguids, v6);
      }
      AudPolicyLogError("CDuckingManager::DeleteDuckingNotification", 469, v6);
    }
  }
  CDuckingNotification::~CDuckingNotification((CDuckingNotification *)v18);
  return (unsigned int)v6;
}
