/*
 * XREFs of ?DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z @ 0x180010760
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800095B4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreStartContext@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BF70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreS.c)
 *     WPP_SF_d @ 0x18000E914 (WPP_SF_d.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18000F448 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?Init@CDuckingNotification@@QEAAJKPEBG_K@Z @ 0x180010C50 (-Init@CDuckingNotification@@QEAAJKPEBG_K@Z.c)
 *     ?RemoveInterface@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x1800122B0 (-RemoveInterface@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z.c)
 *     WPP_SF_di @ 0x180013720 (WPP_SF_di.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDuckingManager::DeleteDuckingNotification(CDuckingManager *this, __int64 a2, unsigned __int64 a3)
{
  unsigned int v4; // ebx
  int v6; // edi
  volatile signed __int32 *v7; // rbx
  signed __int32 v8; // eax
  ATL::CAtlException *v10; // rbx
  int v12; // [rsp+30h] [rbp-B8h]
  ATL::CAtlException *v13[2]; // [rsp+38h] [rbp-B0h] BYREF
  int v14; // [rsp+48h] [rbp-A0h]
  _QWORD v15[5]; // [rsp+50h] [rbp-98h] BYREF
  ATL::CAtlException *v16; // [rsp+78h] [rbp-70h] BYREF
  int v17; // [rsp+80h] [rbp-68h]
  char *v18; // [rsp+88h] [rbp-60h] BYREF
  __m128i si128; // [rsp+98h] [rbp-50h]
  volatile signed __int32 *v20; // [rsp+A8h] [rbp-40h]

  v4 = a2;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v18) = 0;
  v20 = 0LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_di(*((_QWORD *)WPP_GLOBAL_Control + 2), a2, a3, (unsigned int)a2, a3);
  }
  v6 = CDuckingNotification::Init((CDuckingNotification *)&v16, v4, 0LL, a3);
  if ( v6 < 0 )
  {
    v7 = v20;
LABEL_16:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xDu, &WPP_e74777e2ae65337d95908bedb110e863_Traceguids, v6);
    }
    AudPolicyLogError("CDuckingManager::DeleteDuckingNotification", 458, v6);
    goto LABEL_21;
  }
  try
  {
    v13[1] = v16;
    v14 = v17;
    std::wstring::wstring(v15, (__int64)&v18);
    v7 = v20;
    v15[4] = v20;
    if ( v20 )
    {
      do
        v8 = *((_DWORD *)v7 + 3);
      while ( v8 != 0x7FFFFFFF && v8 != _InterlockedCompareExchange(v7 + 3, v8 + 1, v8) );
      v7 = v20;
    }
    v6 = CLockedList<CDuckingNotification,1,0>::RemoveInterface((LPCRITICAL_SECTION)((char *)this + 64));
  }
  catch ( ATL::CAtlException *v13 )
  {
    v10 = v13[0];
    if ( *(_DWORD *)v13[0] == -1073741571 )
      _o__resetstkoflw();
    v12 = *(_DWORD *)v10;
    v7 = v20;
    v6 = v12;
  }
  if ( v6 < 0 )
    goto LABEL_16;
LABEL_21:
  if ( v7 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioStreamPreStartContext>::Release(v7);
  if ( si128.m128i_i64[1] >= 8uLL )
    std::_Deallocate<16,0>(v18, 2 * si128.m128i_i64[1] + 2);
  return (unsigned int)v6;
}
