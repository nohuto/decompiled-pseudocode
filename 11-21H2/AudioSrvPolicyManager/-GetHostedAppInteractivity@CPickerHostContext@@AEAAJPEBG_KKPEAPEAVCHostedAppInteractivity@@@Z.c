/*
 * XREFs of ?GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z @ 0x1800264D4
 * Callers:
 *     ?AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z @ 0x1800260D0 (-AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800095B4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_d @ 0x18000E914 (WPP_SF_d.c)
 *     ?AddHead@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCHostedAppInteractivity@@@Z @ 0x180025D94 (-AddHead@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@@.c)
 *     ?CreateInstance@CHostedAppInteractivity@@SAJPEBG_KKPEAPEAV1@@Z @ 0x18002624C (-CreateInstance@CHostedAppInteractivity@@SAJPEBG_KKPEAPEAV1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPickerHostContext::GetHostedAppInteractivity(
        CPickerHostContext *this,
        const unsigned __int16 *a2,
        __int64 a3,
        int a4,
        struct CHostedAppInteractivity **a5)
{
  int v9; // ebx
  _QWORD *v10; // rsi
  struct CHostedAppInteractivity *v11; // rdi
  struct CHostedAppInteractivity *v12; // rdi
  __int64 result; // rax
  ATL::CAtlException *v14; // rbx
  struct CHostedAppInteractivity *v15; // [rsp+20h] [rbp-38h] BYREF
  ATL::CAtlException *v16; // [rsp+28h] [rbp-30h] BYREF
  int v17; // [rsp+60h] [rbp+8h]

  v9 = 0;
  v15 = 0LL;
  v10 = *(_QWORD **)this;
  while ( v10 )
  {
    v11 = (struct CHostedAppInteractivity *)v10[2];
    v10 = (_QWORD *)*v10;
    v15 = v11;
    if ( *((_DWORD *)v11 + 2) == a4 && *((_QWORD *)v11 + 2) == a3 && !(unsigned int)_o__wcsicmp(*(_QWORD *)v11, a2) )
      goto LABEL_10;
  }
  v9 = CHostedAppInteractivity::CreateInstance(a2, a3, a4, &v15);
  if ( v9 < 0 )
    goto LABEL_11;
  try
  {
    v9 = 0;
    ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::AddHead(
      (__int64 *)this,
      &v15);
  }
  catch ( ATL::CAtlException *v16 )
  {
    v14 = v16;
    if ( *(_DWORD *)v16 == -1073741571 )
      _o__resetstkoflw();
    v17 = *(_DWORD *)v14;
    v9 = *(_DWORD *)v14;
    if ( v17 >= 0 )
      goto LABEL_9;
LABEL_11:
    v12 = v15;
LABEL_12:
    if ( v12 )
    {
      if ( *(_QWORD *)v12 )
      {
        CoTaskMemFree(*(LPVOID *)v12);
        *(_QWORD *)v12 = 0LL;
      }
      operator delete(v12);
    }
    if ( v9 < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xDu, &WPP_1c004e7844a83aef02453228989ecd61_Traceguids, v9);
      }
      AudPolicyLogError("CPickerHostContext::GetHostedAppInteractivity", 254, v9);
    }
    result = (unsigned int)v9;
  }
LABEL_9:
  v11 = v15;
LABEL_10:
  *a5 = v11;
  v12 = 0LL;
  goto LABEL_12;
}
