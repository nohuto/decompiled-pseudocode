/*
 * XREFs of ?AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z @ 0x180010330
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800095B4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreStartContext@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BF70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreS.c)
 *     WPP_SF_d @ 0x18000E914 (WPP_SF_d.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18000F448 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?AddInterface@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x18001051C (-AddInterface@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z.c)
 *     ?Init@CDuckingNotification@@QEAAJKPEBG_K@Z @ 0x180010C50 (-Init@CDuckingNotification@@QEAAJKPEBG_K@Z.c)
 *     WPP_SF_Sdi @ 0x180013680 (WPP_SF_Sdi.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDuckingManager::AddDuckingNotification(
        CDuckingManager *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        unsigned __int64 a4)
{
  volatile signed __int32 *v8; // rbx
  _UNKNOWN **v9; // rcx
  int v10; // edi
  signed __int32 v11; // eax
  ATL::CAtlException *v13; // rbx
  int v15; // [rsp+30h] [rbp-C8h]
  ATL::CAtlException *v16[2]; // [rsp+38h] [rbp-C0h] BYREF
  int v17; // [rsp+48h] [rbp-B0h]
  _QWORD v18[5]; // [rsp+50h] [rbp-A8h] BYREF
  ATL::CAtlException *v19; // [rsp+78h] [rbp-80h] BYREF
  int v20; // [rsp+80h] [rbp-78h]
  char *v21; // [rsp+88h] [rbp-70h] BYREF
  __m128i si128; // [rsp+98h] [rbp-60h]
  volatile signed __int32 *v23; // [rsp+A8h] [rbp-50h]

  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v21) = 0;
  v8 = 0LL;
  v23 = 0LL;
  v9 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sdi(*((_QWORD *)WPP_GLOBAL_Control + 2), (_DWORD)a2, a3, (_DWORD)a2, a3, a4);
    v9 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( *((_BYTE *)this + 440) == 1 )
  {
    v10 = -2147467260;
    goto LABEL_19;
  }
  v10 = CDuckingNotification::Init((CDuckingNotification *)&v19, a3, a2, a4);
  if ( v10 < 0 )
  {
    v8 = v23;
LABEL_18:
    v9 = (_UNKNOWN **)WPP_GLOBAL_Control;
LABEL_19:
    if ( v9 != &WPP_GLOBAL_Control && (*((_DWORD *)v9 + 7) & 0x8000000) != 0 && *((_BYTE *)v9 + 25) >= 2u )
      WPP_SF_d((TRACEHANDLE)v9[2], 0xBu, &WPP_e74777e2ae65337d95908bedb110e863_Traceguids, v10);
    AudPolicyLogError("CDuckingManager::AddDuckingNotification", 386, v10);
    goto LABEL_24;
  }
  v16[1] = v19;
  v17 = v20;
  try
  {
    std::wstring::wstring(v18, (__int64)&v21);
    v8 = v23;
    v18[4] = v23;
    if ( v23 )
    {
      do
        v11 = *((_DWORD *)v8 + 3);
      while ( v11 != 0x7FFFFFFF && v11 != _InterlockedCompareExchange(v8 + 3, v11 + 1, v11) );
      v8 = v23;
    }
    v10 = CLockedList<CDuckingNotification,1,0>::AddInterface((LPCRITICAL_SECTION)((char *)this + 64));
  }
  catch ( ATL::CAtlException *v16 )
  {
    v13 = v16[0];
    if ( *(_DWORD *)v16[0] == -1073741571 )
      _o__resetstkoflw();
    v15 = *(_DWORD *)v13;
    v8 = v23;
    v10 = v15;
  }
  if ( v10 < 0 )
    goto LABEL_18;
LABEL_24:
  if ( v8 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioStreamPreStartContext>::Release(v8);
  if ( si128.m128i_i64[1] >= 8uLL )
    std::_Deallocate<16,0>(v21, 2 * si128.m128i_i64[1] + 2);
  return (unsigned int)v10;
}
