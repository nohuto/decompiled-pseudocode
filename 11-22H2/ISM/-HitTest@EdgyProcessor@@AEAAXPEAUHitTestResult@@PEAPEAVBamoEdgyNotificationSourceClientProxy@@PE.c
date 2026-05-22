/*
 * XREFs of ?HitTest@EdgyProcessor@@AEAAXPEAUHitTestResult@@PEAPEAVBamoEdgyNotificationSourceClientProxy@@PEAPEAVInputSite@@@Z @ 0x1801768F4
 * Callers:
 *     ?StartGestureRecognition@EdgyProcessor@@AEAAXPEAUHitTestResult@@KUtagPOINT@@@Z @ 0x180177EFC (-StartGestureRecognition@EdgyProcessor@@AEAAXPEAUHitTestResult@@KUtagPOINT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180003198 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18001B20C (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIEdgyNotificationSourceClientProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIEdgyNotificationSourceClientProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18014DC90 (--$As@UIEdgyNotificationSourceClientProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRe.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall EdgyProcessor::HitTest(
        EdgyProcessor *this,
        struct HitTestResult *a2,
        struct BamoEdgyNotificationSourceClientProxy **a3,
        struct InputSite **a4)
{
  __int64 **v6; // rdi
  __int64 **v7; // r14
  __int64 *v8; // rsi
  __int64 *v9; // rbp
  __int64 v10; // rcx
  EdgyProcessor *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // r15
  __int64 (__fastcall ***v14)(_QWORD); // rbx
  EdgyProcessor *v15; // [rsp+60h] [rbp+8h] BYREF
  __int64 (__fastcall ***v16)(_QWORD); // [rsp+70h] [rbp+18h] BYREF

  if ( a3 )
  {
    v15 = this;
    v6 = (__int64 **)*((_QWORD *)a2 + 12);
    v7 = (__int64 **)*((_QWORD *)a2 + 13);
LABEL_12:
    if ( v6 != v7 )
    {
      v8 = *v6;
      v9 = v6[1];
      while ( 1 )
      {
        if ( v8 == v9 )
        {
          v6 += 3;
          goto LABEL_12;
        }
        v10 = *v8;
        v11 = 0LL;
        v15 = 0LL;
        v12 = *(_QWORD *)(v10 + 488);
        v13 = *(_QWORD *)(v10 + 496);
        if ( v12 != v13 )
        {
          do
          {
            if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IEdgyNotificationSourceClientProxy>(
                        (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v12 + 8),
                        (__int64 *)&v15) >= 0 )
              break;
            v12 += 16LL;
          }
          while ( v12 != v13 );
          v11 = v15;
        }
        v14 = (__int64 (__fastcall ***)(_QWORD))(((unsigned __int64)v11 - 8) & -(__int64)(v11 != 0LL));
        v16 = v14;
        Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v16);
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v15);
        if ( v14 )
          break;
        ++v8;
      }
      Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v16);
      *a3 = (struct BamoEdgyNotificationSourceClientProxy *)v14;
      Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(v8);
      *a4 = (struct InputSite *)*v8;
      (*v14)[1](v14);
    }
  }
}
