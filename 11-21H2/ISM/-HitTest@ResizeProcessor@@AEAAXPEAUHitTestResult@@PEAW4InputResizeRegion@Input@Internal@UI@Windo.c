/*
 * XREFs of ?HitTest@ResizeProcessor@@AEAAXPEAUHitTestResult@@PEAW4InputResizeRegion@Input@Internal@UI@Windows@@PEAPEAVBamoResizeControllerClientProxy@@PEAPEAVInputSite@@@Z @ 0x1801458E8
 * Callers:
 *     ?StartGestureRecognition@ResizeProcessor@@AEAAXPEAUHitTestResult@@K@Z @ 0x180146FA8 (-StartGestureRecognition@ResizeProcessor@@AEAAXPEAUHitTestResult@@K@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18004905C (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E9710 (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18012E618 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$GetAttachedObject@UIResizeAreaClientProxy@@VBamoResizeAreaClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoResizeAreaClientProxy@@@WRL@Microsoft@@XZ @ 0x180143D38 (--$GetAttachedObject@UIResizeAreaClientProxy@@VBamoResizeAreaClientProxy@@@InputSite@@QEAA-AV-$C.c)
 *     ??$GetAttachedObject@UIResizeControllerClientProxy@@VBamoResizeControllerClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoResizeControllerClientProxy@@@WRL@Microsoft@@XZ @ 0x180143DDC (--$GetAttachedObject@UIResizeControllerClientProxy@@VBamoResizeControllerClientProxy@@@InputSite.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall ResizeProcessor::HitTest(
        ResizeProcessor *this,
        struct HitTestResult *a2,
        enum Windows::UI::Internal::Input::InputResizeRegion *a3,
        struct BamoResizeControllerClientProxy **a4,
        struct InputSite **a5)
{
  __int64 v6; // rax
  __int64 *v7; // rdi
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rax
  struct BamoResizeControllerClientProxy *v14; // rbx
  __int64 (__fastcall ***v15)(_QWORD); // rsi
  __int64 *v16; // rcx
  struct BamoResizeControllerClientProxy *v17; // rbx
  __int64 (__fastcall ***v18)(_QWORD); // rsi
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 *v21; // rcx
  enum Windows::UI::Internal::Input::InputResizeRegion *v22; // [rsp+20h] [rbp-40h]
  __int64 (__fastcall ***v23)(_QWORD); // [rsp+28h] [rbp-38h] BYREF
  __int64 (__fastcall ***v24)(_QWORD); // [rsp+30h] [rbp-30h] BYREF
  __int64 v25; // [rsp+38h] [rbp-28h] BYREF
  __int64 *v26; // [rsp+40h] [rbp-20h]
  GUID v27; // [rsp+48h] [rbp-18h]

  v22 = a3;
  *a4 = 0LL;
  *a5 = 0LL;
  v27 = GUID_NULL;
  v6 = *((_QWORD *)a2 + 13);
  v7 = *(__int64 **)(v6 - 24);
  v26 = *(__int64 **)(v6 - 16);
  if ( v7 == v26 )
    return;
  v8 = *(_QWORD *)v27.Data4;
  v9 = *(_QWORD *)&v27.Data1;
  while ( 1 )
  {
    v10 = v9 - *(_QWORD *)&GUID_NULL.Data1;
    if ( v9 == *(_QWORD *)&GUID_NULL.Data1 )
      v10 = v8 - *(_QWORD *)GUID_NULL.Data4;
    if ( !v10 && a3 )
    {
      InputSite::GetAttachedObject<IResizeAreaClientProxy,BamoResizeAreaClientProxy>(*v7, &v25);
      v11 = v25;
      if ( v25 )
      {
        v12 = v25 + 8;
        v27 = *(GUID *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v25 + 8) + 24LL))(v25 + 8);
        *(_DWORD *)v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 32LL))(v11 + 8);
        v8 = *(_QWORD *)v27.Data4;
        v9 = *(_QWORD *)&v27.Data1;
      }
      if ( v11 )
      {
        v25 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      }
      a3 = v22;
    }
    v13 = v9 - *(_QWORD *)&GUID_NULL.Data1;
    if ( v9 == *(_QWORD *)&GUID_NULL.Data1 )
      v13 = v8 - *(_QWORD *)GUID_NULL.Data4;
    if ( v13 )
      break;
    if ( a3 )
    {
      InputSite::GetAttachedObject<IResizeControllerClientProxy,BamoResizeControllerClientProxy>(*v7, (__int64 *)&v23);
      v14 = (struct BamoResizeControllerClientProxy *)v23;
      if ( v23 )
      {
        v15 = v23 + 1;
        if ( !(unsigned int)v23[1][9](v23 + 1)
          || (unsigned int)((__int64 (__fastcall **)(char *))*v15)[9]((char *)v14 + 8) == 2 )
        {
          Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v23);
          *a4 = v14;
          Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(v7);
          *a5 = (struct InputSite *)*v7;
          v21 = (__int64 *)&v23;
          goto LABEL_32;
        }
      }
      v16 = (__int64 *)&v23;
      goto LABEL_27;
    }
LABEL_28:
    if ( ++v7 == v26 )
      return;
  }
  InputSite::GetAttachedObject<IResizeControllerClientProxy,BamoResizeControllerClientProxy>(*v7, (__int64 *)&v24);
  v17 = (struct BamoResizeControllerClientProxy *)v24;
  if ( !v24 )
    goto LABEL_26;
  v18 = v24 + 1;
  if ( (unsigned int)v24[1][9](v24 + 1) != 1
    && (unsigned int)((__int64 (__fastcall **)(char *))*v18)[9]((char *)v17 + 8) != 2 )
  {
    goto LABEL_26;
  }
  v19 = (_QWORD *)((__int64 (__fastcall **)(char *))*v18)[8]((char *)v17 + 8);
  v20 = *v19 - v9;
  if ( *v19 == v9 )
    v20 = v19[1] - v8;
  if ( v20 )
  {
LABEL_26:
    v16 = (__int64 *)&v24;
LABEL_27:
    Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease(v16);
    a3 = v22;
    goto LABEL_28;
  }
  Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v24);
  *a4 = v17;
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(v7);
  *a5 = (struct InputSite *)*v7;
  v21 = (__int64 *)&v24;
LABEL_32:
  Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease(v21);
}
