/*
 * XREFs of ?HitTest@EdgyProcessor@@AEAAXPEAUHitTestResult@@PEAPEAVBamoEdgyDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@3@Z @ 0x180149ADC
 * Callers:
 *     ?StartGestureRecognition@EdgyProcessor@@AEAAXPEAUHitTestResult@@KUtagPOINT@@@Z @ 0x18014B438 (-StartGestureRecognition@EdgyProcessor@@AEAAXPEAUHitTestResult@@KUtagPOINT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18004905C (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E9710 (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIEdgyDragSourceClientProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIEdgyDragSourceClientProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x180125170 (--$As@UIEdgyDragSourceClientProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Com.c)
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18012E618 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$GetAttachedObject@UIDragManagerClientProxy@@VBamoDragManagerClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@XZ @ 0x18013B254 (--$GetAttachedObject@UIDragManagerClientProxy@@VBamoDragManagerClientProxy@@@InputSite@@QEAA-AV-.c)
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
  __int64 **v6; // rsi
  __int64 **v7; // rax
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 *v10; // rdi
  __int64 *v11; // r13
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // r14
  struct BamoEdgyDragSourceClientProxy *v16; // rbx
  __int64 v17; // rax
  struct BamoDragManagerClientProxy *v18; // rbx
  _QWORD *v19; // rax
  __int64 v20; // rcx
  struct BamoDragManagerClientProxy *v21; // [rsp+20h] [rbp-50h] BYREF
  __int64 v22; // [rsp+28h] [rbp-48h] BYREF
  struct BamoEdgyDragSourceClientProxy **v23; // [rsp+30h] [rbp-40h]
  struct InputSite **v24; // [rsp+38h] [rbp-38h]
  __int64 **v25; // [rsp+40h] [rbp-30h]
  struct BamoDragManagerClientProxy **v26; // [rsp+48h] [rbp-28h]
  struct InputSite **v27; // [rsp+50h] [rbp-20h]
  GUID v28; // [rsp+58h] [rbp-18h] BYREF

  v26 = a4;
  v23 = a3;
  v24 = a5;
  v27 = a6;
  v28 = GUID_NULL;
  if ( a3 )
  {
    if ( a4 )
    {
      v6 = (__int64 **)*((_QWORD *)a2 + 12);
      v7 = (__int64 **)*((_QWORD *)a2 + 13);
      v25 = v7;
      if ( v6 != v7 )
      {
        v8 = *(_QWORD *)v28.Data4;
        v9 = *(_QWORD *)&v28.Data1;
        do
        {
          v10 = *v6;
          v11 = v6[1];
          if ( *v6 != v11 )
          {
            while ( 1 )
            {
              v12 = v9 - *(_QWORD *)&GUID_NULL.Data1;
              if ( v9 == *(_QWORD *)&GUID_NULL.Data1 )
                v12 = v8 - *(_QWORD *)GUID_NULL.Data4;
              if ( !v12 )
              {
                v13 = *v10;
                v22 = 0LL;
                v14 = *(_QWORD *)(v13 + 488);
                v15 = *(_QWORD *)(v13 + 496);
                if ( v14 != v15 )
                {
                  do
                  {
                    if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IEdgyDragSourceClientProxy>(
                                (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v14 + 8),
                                &v22) >= 0 )
                      break;
                    v14 += 16LL;
                  }
                  while ( v14 != v15 );
                  v12 = v22;
                }
                v16 = (struct BamoEdgyDragSourceClientProxy *)((v12 - 8) & -(__int64)(v12 != 0));
                *(_QWORD *)&v28.Data1 = v16;
                Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v28);
                Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease(&v22);
                if ( v16 )
                {
                  Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v28);
                  *v23 = v16;
                  v28 = *(GUID *)(*(__int64 (__fastcall **)(_QWORD *))(*((_QWORD *)v16 + 1) + 24LL))((_QWORD *)v16 + 1);
                  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(v10);
                  *v24 = (struct InputSite *)*v10;
                  v8 = *(_QWORD *)v28.Data4;
                  v9 = *(_QWORD *)&v28.Data1;
                  (*(void (__fastcall **)(struct BamoEdgyDragSourceClientProxy *))(*(_QWORD *)v16 + 8LL))(v16);
                }
                a3 = v23;
              }
              v17 = v9 - *(_QWORD *)&GUID_NULL.Data1;
              if ( v9 == *(_QWORD *)&GUID_NULL.Data1 )
                v17 = v8 - *(_QWORD *)GUID_NULL.Data4;
              if ( v17 && *a3 )
              {
                InputSite::GetAttachedObject<IDragManagerClientProxy,BamoDragManagerClientProxy>(*v10, (__int64 *)&v21);
                v18 = v21;
                if ( v21 )
                {
                  v19 = (_QWORD *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)v21 + 1) + 72LL))((char *)v21 + 8);
                  v20 = *v19 - v9;
                  if ( *v19 == v9 )
                    v20 = v19[1] - v8;
                  if ( !v20 )
                  {
                    Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v21);
                    *v26 = v18;
                    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(v10);
                    *v27 = (struct InputSite *)*v10;
                    Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease((__int64 *)&v21);
                    return;
                  }
                }
                Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease((__int64 *)&v21);
              }
              ++v10;
              a3 = v23;
              if ( v10 == v11 )
              {
                v7 = v25;
                break;
              }
            }
          }
          v6 += 3;
        }
        while ( v6 != v7 );
      }
    }
  }
}
