/*
 * XREFs of ?CreateInstance@TouchGestureComponentClassFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800CDAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ @ 0x180079874 (-unconditional_release_ref@-$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ.c)
 *     ??$make@VTouchGestureComponent@@$$V@winrt@@YA?AU?$com_ptr@UIObjectWithSite@@@0@XZ @ 0x1800CDA2C (--$make@VTouchGestureComponent@@$$V@winrt@@YA-AU-$com_ptr@UIObjectWithSite@@@0@XZ.c)
 *     ?as@?$com_ptr@UIObjectWithSite@@@winrt@@QEBA?AUhresult@2@AEBUguid@2@PEAPEAX@Z @ 0x1800CECEC (-as@-$com_ptr@UIObjectWithSite@@@winrt@@QEBA-AUhresult@2@AEBUguid@2@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

__int64 __fastcall TouchGestureComponentClassFactory::CreateInstance(
        TouchGestureComponentClassFactory *this,
        struct IUnknown *a2,
        const struct _GUID *a3,
        void **a4)
{
  _QWORD *v6; // rax
  unsigned int v7; // ebx
  __int64 result; // rax
  int v9; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+28h] [rbp-30h] BYREF
  unsigned int Data1; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int16 Data2; // [rsp+34h] [rbp-24h]
  unsigned __int16 Data3; // [rsp+36h] [rbp-22h]
  unsigned __int8 v14; // [rsp+38h] [rbp-20h]
  unsigned __int8 v15; // [rsp+39h] [rbp-1Fh]
  unsigned __int8 v16; // [rsp+3Ah] [rbp-1Eh]
  unsigned __int8 v17; // [rsp+3Bh] [rbp-1Dh]
  unsigned __int8 v18; // [rsp+3Ch] [rbp-1Ch]
  unsigned __int8 v19; // [rsp+3Dh] [rbp-1Bh]
  unsigned __int8 v20; // [rsp+3Eh] [rbp-1Ah]
  unsigned __int8 v21; // [rsp+3Fh] [rbp-19h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  try
  {
    *a4 = 0LL;
    if ( a2 )
    {
      result = 2147746064LL;
    }
    else
    {
      v6 = winrt::make<TouchGestureComponent,>(&v10);
      Data1 = a3->Data1;
      Data2 = a3->Data2;
      Data3 = a3->Data3;
      v14 = a3->Data4[0];
      v15 = a3->Data4[1];
      v16 = a3->Data4[2];
      v17 = a3->Data4[3];
      v18 = a3->Data4[4];
      v19 = a3->Data4[5];
      v20 = a3->Data4[6];
      v21 = a3->Data4[7];
      v7 = *(_DWORD *)winrt::com_ptr<IObjectWithSite>::as(v6, &v9, &Data1, a4);
      if ( v10 )
        winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref(&v10);
      result = v7;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x3E,
                           (unsigned int)"pcshell\\twinui\\touchgestures\\lib\\touchgesturecomponent.cpp",
                           (const char *)a4);
  }
  return result;
}
