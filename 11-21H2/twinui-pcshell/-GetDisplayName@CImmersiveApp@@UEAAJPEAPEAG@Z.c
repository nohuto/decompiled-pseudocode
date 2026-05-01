/*
 * XREFs of ?GetDisplayName@CImmersiveApp@@UEAAJPEAPEAG@Z @ 0x180134D90
 * Callers:
 *     <none>
 * Callees:
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x18008D0C0 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800E8158 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@details@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::GetDisplayName(CImmersiveApp *this, unsigned __int16 **a2)
{
  int v4; // ebp
  unsigned __int16 *v5; // rdi
  char *v6; // rsi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  unsigned __int16 *v9; // rdx
  signed __int64 v10; // rsi
  unsigned __int16 v11; // ax
  unsigned __int16 *v12; // rax
  __int64 v13; // r9
  unsigned __int16 *v14; // rax
  unsigned __int16 *v16; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-30h]
  __int64 v18; // [rsp+30h] [rbp-28h]

  *a2 = 0LL;
  v4 = 0;
  v5 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v6 = (char *)*((_QWORD *)this + 64);
  if ( v6 )
  {
    if ( *(_WORD *)v6 )
    {
      v7 = -1LL;
      do
        ++v7;
      while ( *(_WORD *)&v6[2 * v7] );
      v4 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
             (LPVOID *)&v16,
             v7);
      v5 = v16;
      if ( v4 >= 0 )
      {
        v8 = v7 + 1;
        if ( v7 > 0x7FFFFFFE )
        {
          if ( v7 != -1LL )
            *v16 = 0;
        }
        else
        {
          v9 = v16;
          v10 = v6 - (char *)v16;
          while ( v8 != 1 )
          {
            v11 = *(unsigned __int16 *)((char *)v9 + v10);
            if ( !v11 )
              break;
            *v9++ = v11;
            --v8;
          }
          v12 = v9 - 1;
          if ( v8 )
            v12 = v9;
          *v12 = 0;
        }
        v17 = v7;
      }
    }
  }
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v4 >= 0 )
  {
    if ( v5 && *v5 )
    {
      v14 = v5;
      v5 = 0LL;
      *a2 = v14;
    }
    else
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetImpl'::`2'::impl,
        1u,
        3u,
        v13);
      v4 = -2147024882;
    }
  }
  if ( v5 )
    CoTaskMemFree(v5);
  return (unsigned int)v4;
}
