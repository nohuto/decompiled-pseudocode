/*
 * XREFs of ?HitTest@EdgyProcessor@@AEAAXPEAUHitTestResult@@PEAPEAVBamoEdgyDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@3@Z @ 0x1801766AC
 * Callers:
 *     ?StartGestureRecognition@EdgyProcessor@@AEAAXPEAUHitTestResult@@KUtagPOINT@@@Z @ 0x180177EFC (-StartGestureRecognition@EdgyProcessor@@AEAAXPEAUHitTestResult@@KUtagPOINT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180003198 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18001B20C (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     IsEqualGUID @ 0x180022FE0 (IsEqualGUID.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180111030 (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIEdgyDragSourceClientProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIEdgyDragSourceClientProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18014DC34 (--$As@UIEdgyDragSourceClientProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Com.c)
 *     ??$GetAttachedObject@UIDragManagerClientProxy@@VBamoDragManagerClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@XZ @ 0x18016889C (--$GetAttachedObject@UIDragManagerClientProxy@@VBamoDragManagerClientProxy@@@InputSite@@QEAA-AV-.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall EdgyProcessor::HitTest(
        EdgyProcessor *this,
        struct HitTestResult *a2,
        struct BamoEdgyDragSourceClientProxy **a3,
        struct BamoDragManagerClientProxy **a4,
        struct InputSite **a5,
        struct InputSite **a6)
{
  __int64 **v7; // rsi
  __int64 **v8; // r12
  __int64 *v9; // rdi
  __int64 *v10; // r15
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // r14
  __int64 v15; // rbx
  _QWORD *v16; // r8
  struct BamoDragManagerClientProxy *v17; // rbx
  _QWORD *v18; // rax
  struct BamoDragManagerClientProxy *v19; // [rsp+20h] [rbp-50h] BYREF
  __int64 v20; // [rsp+28h] [rbp-48h] BYREF
  struct BamoEdgyDragSourceClientProxy **v21; // [rsp+30h] [rbp-40h]
  __int64 (__fastcall ***v22)(_QWORD); // [rsp+38h] [rbp-38h] BYREF
  struct InputSite **v23; // [rsp+40h] [rbp-30h]
  struct InputSite **v24; // [rsp+48h] [rbp-28h]
  GUID v25; // [rsp+50h] [rbp-20h] BYREF

  v21 = a3;
  v23 = a5;
  v24 = a6;
  v25 = GUID_NULL;
  if ( a3 && a4 )
  {
    v7 = (__int64 **)*((_QWORD *)a2 + 12);
    v8 = (__int64 **)*((_QWORD *)a2 + 13);
LABEL_20:
    if ( v7 != v8 )
    {
      v9 = *v7;
      v10 = v7[1];
      while ( 1 )
      {
        if ( v9 == v10 )
        {
          v7 += 3;
          goto LABEL_20;
        }
        if ( IsEqualGUID(&v25, &GUID_NULL) )
        {
          v11 = *v9;
          v12 = 0LL;
          v20 = 0LL;
          v13 = *(_QWORD *)(v11 + 488);
          v14 = *(_QWORD *)(v11 + 496);
          if ( v13 != v14 )
          {
            do
            {
              if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IEdgyDragSourceClientProxy>(
                          (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v13 + 8),
                          &v20) >= 0 )
                break;
              v13 += 16LL;
            }
            while ( v13 != v14 );
            v12 = v20;
          }
          v15 = (v12 - 8) & -(__int64)(v12 != 0);
          v22 = (__int64 (__fastcall ***)(_QWORD))v15;
          Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v22);
          Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v20);
          if ( v15 )
          {
            Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v22);
            *v21 = (struct BamoEdgyDragSourceClientProxy *)v15;
            v25 = *(GUID *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v15 + 8) + 24LL))(v15 + 8);
            Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(v9);
            *v23 = (struct InputSite *)*v9;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
          }
        }
        if ( !IsEqualGUID(&v25, &GUID_NULL) && *v16 )
        {
          InputSite::GetAttachedObject<IDragManagerClientProxy,BamoDragManagerClientProxy>(*v9, (__int64 *)&v19);
          v17 = v19;
          if ( v19 )
          {
            v18 = (_QWORD *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)v19 + 1) + 80LL))((char *)v19 + 8);
            if ( IsEqualGUID(v18, &v25) )
            {
              Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v19);
              *a4 = v17;
              Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(v9);
              *v24 = (struct InputSite *)*v9;
              Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease((__int64 *)&v19);
              return;
            }
          }
          Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease((__int64 *)&v19);
        }
        ++v9;
      }
    }
  }
}
