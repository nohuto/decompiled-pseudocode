/*
 * XREFs of ?_Tidy@?$vector@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1800064E0
 * Callers:
 *     ??_EInputContext@@UEAAPEAXI@Z @ 0x180013D70 (--_EInputContext@@UEAAPEAXI@Z.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800173C0 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 *     ??1HitTestResult@@QEAA@XZ @ 0x1800CE710 (--1HitTestResult@@QEAA@XZ.c)
 *     ?HitTest@InjectionRawInputProvider@@AEAAJUtagPOINT@@KPEAVInputInjectionClientProxy@@@Z @ 0x1800CEAD4 (-HitTest@InjectionRawInputProvider@@AEAAJUtagPOINT@@KPEAVInputInjectionClientProxy@@@Z.c)
 *     ??4HitTestResult@@QEAAAEAU0@$$QEAU0@@Z @ 0x18013DB34 (--4HitTestResult@@QEAAAEAU0@$$QEAU0@@Z.c)
 *     ?GetDragManagerInputSite@DragNDropProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@PEAUHitTestResult@@@Z @ 0x18013EE60 (-GetDragManagerInputSite@DragNDropProcessor@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOI.c)
 *     ?GetDragSourceInputSite@DragNDropProcessor@@AEAAXUtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@PEAPEAVBamoDragSourceClientProxy@@PEAPEAVInputSite@@@Z @ 0x18013F140 (-GetDragSourceInputSite@DragNDropProcessor@@AEAAXUtagPOINT@@W4InputType@@PEAVBamoDragManagerClie.c)
 *     ?HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@_NPEAUHitTestResult@@PEAU2@PEA_K6PEAPEAXPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@PEAPEAV8@@Z @ 0x18013F578 (-HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@_NPEAUHitTestResult@@PEAU2@PEA.c)
 *     ?HitTestForTarget@EdgyProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@PEAU2@PEA_K4@Z @ 0x180149FAC (-HitTestForTarget@EdgyProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@PEAU2@PEA_K4@Z.c)
 *     ??$?4U?$default_delete@UHitTestResult@@@std@@$0A@@?$unique_ptr@UHitTestResult@@U?$default_delete@UHitTestResult@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180198F8C (--$-4U-$default_delete@UHitTestResult@@@std@@$0A@@-$unique_ptr@UHitTestResult@@U-$default_delete.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x18019A990 (-HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z.c)
 *     ?RequestUIAHitTest@DWMInputRouter@@QEAA?AU_GUID@@II@Z @ 0x18019B7F8 (-RequestUIAHitTest@DWMInputRouter@@QEAA-AU_GUID@@II@Z.c)
 *     ?RequestViewHitTestHelper@DWMInputRouter@@IEAAXUViewHitTestInfo@@PEAI@Z @ 0x18019BB90 (-RequestViewHitTestHelper@DWMInputRouter@@IEAAXUViewHitTestInfo@@PEAI@Z.c)
 *     ?RequestHitTest@TestCommands@@MEAAJPEAVBamoTestCommandsStub@@_J1PEBG@Z @ 0x18019F7E0 (-RequestHitTest@TestCommands@@MEAAJPEAVBamoTestCommandsStub@@_J1PEBG@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x18007FD24 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::vector<std::vector<Microsoft::WRL::ComPtr<InputSite>>>::_Tidy(__int64 a1)
{
  __int64 **v2; // rdi
  __int64 **v3; // rsi
  __int64 *v4; // r14
  unsigned __int64 v5; // rdx
  __int64 *v6; // rbp
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  void *v10; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(__int64 ***)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(__int64 ***)(a1 + 8);
    if ( v2 != v3 )
    {
      do
      {
        v4 = *v2;
        if ( *v2 )
        {
          v6 = v2[1];
          if ( v4 != v6 )
          {
            do
            {
              v7 = *v4;
              if ( *v4 )
              {
                *v4 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
              }
              ++v4;
            }
            while ( v4 != v6 );
            v4 = *v2;
          }
          v8 = ((char *)v2[2] - (char *)v4) & 0xFFFFFFFFFFFFFFF8uLL;
          v9 = v8;
          v10 = v4;
          if ( v8 >= 0x1000 )
          {
            std::_Adjust_manually_vector_aligned(&v10, &v9);
            v8 = v9;
            v4 = (__int64 *)v10;
          }
          operator delete(v4, v8);
          *v2 = 0LL;
          v2[1] = 0LL;
          v2[2] = 0LL;
        }
        v2 += 3;
      }
      while ( v2 != v3 );
      v2 = *(__int64 ***)a1;
    }
    v5 = 8 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v2) >> 3);
    v9 = v5;
    v10 = v2;
    if ( v5 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v10, &v9);
      v5 = v9;
      v2 = (__int64 **)v10;
    }
    operator delete(v2, v5);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
