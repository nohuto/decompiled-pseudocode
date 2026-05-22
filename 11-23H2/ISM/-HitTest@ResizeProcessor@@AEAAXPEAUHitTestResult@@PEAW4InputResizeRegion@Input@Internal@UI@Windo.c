/*
 * XREFs of ?HitTest@ResizeProcessor@@AEAAXPEAUHitTestResult@@PEAW4InputResizeRegion@Input@Internal@UI@Windows@@PEAPEAVBamoResizeControllerClientProxy@@PEAPEAVInputSite@@@Z @ 0x180164504
 * Callers:
 *     ?StartGestureRecognition@ResizeProcessor@@AEAAXPEAUHitTestResult@@K@Z @ 0x18016583C (-StartGestureRecognition@ResizeProcessor@@AEAAXPEAUHitTestResult@@K@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180002D48 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18001A8DC (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     IsEqualGUID @ 0x180021F40 (IsEqualGUID.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1801024F0 (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$GetAttachedObject@UIResizeAreaClientProxy@@VBamoResizeAreaClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoResizeAreaClientProxy@@@WRL@Microsoft@@XZ @ 0x180162A64 (--$GetAttachedObject@UIResizeAreaClientProxy@@VBamoResizeAreaClientProxy@@@InputSite@@QEAA-AV-$C.c)
 *     ??$GetAttachedObject@UIResizeControllerClientProxy@@VBamoResizeControllerClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoResizeControllerClientProxy@@@WRL@Microsoft@@XZ @ 0x180162B08 (--$GetAttachedObject@UIResizeControllerClientProxy@@VBamoResizeControllerClientProxy@@@InputSite.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall ResizeProcessor::HitTest(
        ResizeProcessor *this,
        struct HitTestResult *a2,
        enum Windows::UI::Internal::Input::InputResizeRegion *a3,
        struct BamoResizeControllerClientProxy **a4,
        struct InputSite **a5)
{
  __int64 v7; // rax
  __int64 *v8; // rdi
  __int64 *v9; // r13
  __int64 v10; // rsi
  __int64 v11; // rbx
  struct BamoResizeControllerClientProxy *v12; // rbx
  __int64 (__fastcall ***v13)(_QWORD); // rsi
  _QWORD *v14; // rax
  __int64 *v15; // rcx
  struct BamoResizeControllerClientProxy *v16; // rbx
  __int64 (__fastcall ***v17)(_QWORD); // rsi
  __int64 *v18; // rcx
  __int64 (__fastcall ***v19)(_QWORD); // [rsp+20h] [rbp-30h] BYREF
  __int64 (__fastcall ***v20)(_QWORD); // [rsp+28h] [rbp-28h] BYREF
  __int64 v21; // [rsp+30h] [rbp-20h] BYREF
  GUID v22; // [rsp+38h] [rbp-18h] BYREF

  *a4 = 0LL;
  *a5 = 0LL;
  v22 = GUID_NULL;
  v7 = *((_QWORD *)a2 + 13);
  v8 = *(__int64 **)(v7 - 24);
  v9 = *(__int64 **)(v7 - 16);
  while ( v8 != v9 )
  {
    if ( IsEqualGUID(&v22, &GUID_NULL) && a3 )
    {
      InputSite::GetAttachedObject<IResizeAreaClientProxy,BamoResizeAreaClientProxy>(*v8, &v21);
      v10 = v21;
      if ( v21 )
      {
        v11 = v21 + 8;
        v22 = *(GUID *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v21 + 8) + 24LL))(v21 + 8);
        *(_DWORD *)a3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 32LL))(v10 + 8);
      }
      if ( v10 )
      {
        v21 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      }
    }
    if ( IsEqualGUID(&v22, &GUID_NULL) )
    {
      if ( !a3 )
        goto LABEL_20;
      InputSite::GetAttachedObject<IResizeControllerClientProxy,BamoResizeControllerClientProxy>(*v8, (__int64 *)&v20);
      v16 = (struct BamoResizeControllerClientProxy *)v20;
      if ( v20 )
      {
        v17 = v20 + 1;
        if ( !(unsigned int)v20[1][9](v20 + 1)
          || (unsigned int)((__int64 (__fastcall **)(char *))*v17)[9]((char *)v16 + 8) == 2 )
        {
          Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v20);
          *a4 = v16;
          Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(v8);
          *a5 = (struct InputSite *)*v8;
          v18 = (__int64 *)&v20;
          goto LABEL_25;
        }
      }
      v15 = (__int64 *)&v20;
    }
    else
    {
      InputSite::GetAttachedObject<IResizeControllerClientProxy,BamoResizeControllerClientProxy>(*v8, (__int64 *)&v19);
      v12 = (struct BamoResizeControllerClientProxy *)v19;
      if ( v19 )
      {
        v13 = v19 + 1;
        if ( (unsigned int)v19[1][9](v19 + 1) == 1
          || (unsigned int)((__int64 (__fastcall **)(char *))*v13)[9]((char *)v12 + 8) == 2 )
        {
          v14 = (_QWORD *)((__int64 (__fastcall **)(char *))*v13)[8]((char *)v12 + 8);
          if ( IsEqualGUID(v14, &v22) )
          {
            Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v19);
            *a4 = v12;
            Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(v8);
            *a5 = (struct InputSite *)*v8;
            v18 = (__int64 *)&v19;
LABEL_25:
            Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease(v18);
            return;
          }
        }
      }
      v15 = (__int64 *)&v19;
    }
    Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease(v15);
LABEL_20:
    ++v8;
  }
}
