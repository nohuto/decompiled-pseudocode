/*
 * XREFs of ?GetCreativeEventString@ContentManagement@@YAJPEAUHSTRING__@@W4CreativeEventType@1@0PEAPEAG@Z @ 0x18005D144
 * Callers:
 *     ?IsEventReported@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0PEAE@Z @ 0x18005FBE0 (-IsEventReported@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEve.c)
 *     ?IsReportedEventExpired@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0PEAE@Z @ 0x1800600E0 (-IsReportedEventExpired@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4Crea.c)
 *     ?SetEventReported@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0@Z @ 0x180064580 (-SetEventReported@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEv.c)
 * Callees:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x180039F6C (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ContentManagement::GetCreativeEventString(HSTRING a1, unsigned int a2, HSTRING a3, _QWORD *a4)
{
  PCWSTR StringRawBuffer; // rbx
  PCWSTR v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  LPVOID pv[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *a4 = 0LL;
  memset(pv, 0, 24);
  StringRawBuffer = WindowsGetStringRawBuffer(a3, 0LL);
  v8 = WindowsGetStringRawBuffer(a1, 0LL);
  v9 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
         (__int64)pv,
         L"%ls-%d-%ls",
         v8,
         a2,
         StringRawBuffer);
  v10 = v9;
  if ( v9 >= 0 )
  {
    *a4 = pv[0];
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2BA,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v9);
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
    return v10;
  }
}
