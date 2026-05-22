/*
 * XREFs of ?_Tidy@?$vector@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x18000EE10
 * Callers:
 *     ??_EInputContext@@UEAAPEAXI@Z @ 0x18001C7A0 (--_EInputContext@@UEAAPEAXI@Z.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x18001F480 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 *     ??1HitTestResult@@QEAA@XZ @ 0x1800E7DB8 (--1HitTestResult@@QEAA@XZ.c)
 *     ?HitTest@InjectionRawInputProvider@@AEAAJUtagPOINT@@KPEAVInputInjectionClientProxy@@@Z @ 0x1800E817C (-HitTest@InjectionRawInputProvider@@AEAAJUtagPOINT@@KPEAVInputInjectionClientProxy@@@Z.c)
 *     ??4HitTestResult@@QEAAAEAU0@$$QEAU0@@Z @ 0x18015CC94 (--4HitTestResult@@QEAAAEAU0@$$QEAU0@@Z.c)
 *     ?GetDragManagerInputSite@DragNDropProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@PEAUHitTestResult@@@Z @ 0x18015DDB0 (-GetDragManagerInputSite@DragNDropProcessor@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOI.c)
 *     ?GetDragSourceInputSite@DragNDropProcessor@@AEAAXUtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@PEAPEAVBamoDragSourceClientProxy@@PEAPEAVInputSite@@@Z @ 0x18015E04C (-GetDragSourceInputSite@DragNDropProcessor@@AEAAXUtagPOINT@@W4InputType@@PEAVBamoDragManagerClie.c)
 *     ?HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@_NPEAUHitTestResult@@PEAU2@PEA_K6PEAPEAXPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@PEAPEAV8@@Z @ 0x18015E414 (-HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@_NPEAUHitTestResult@@PEAU2@PEA.c)
 *     ?HitTestForTarget@EdgyProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@PEAU2@PEA_K4@Z @ 0x180168860 (-HitTestForTarget@EdgyProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@PEAU2@PEA_K4@Z.c)
 *     ??$?4U?$default_delete@UHitTestResult@@@std@@$0A@@?$unique_ptr@UHitTestResult@@U?$default_delete@UHitTestResult@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801B7030 (--$-4U-$default_delete@UHitTestResult@@@std@@$0A@@-$unique_ptr@UHitTestResult@@U-$default_delete.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x1801B9380 (-HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z.c)
 *     ?RequestUIAHitTest@DWMInputRouter@@QEAA?AU_GUID@@II@Z @ 0x1801B9E4C (-RequestUIAHitTest@DWMInputRouter@@QEAA-AU_GUID@@II@Z.c)
 *     ?RequestViewHitTestHelper@DWMInputRouter@@IEAAXUViewHitTestInfo@@PEAI@Z @ 0x1801BA190 (-RequestViewHitTestHelper@DWMInputRouter@@IEAAXUViewHitTestInfo@@PEAI@Z.c)
 *     ?RequestHitTest@TestCommands@@MEAAJPEAVBamoTestCommandsStub@@_J1PEBG@Z @ 0x1801BDA10 (-RequestHitTest@TestCommands@@MEAAJPEAVBamoTestCommandsStub@@_J1PEBG@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@0@@Z @ 0x180024924 (--$_Destroy_range@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$ComPtr.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180096C5C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

void __fastcall std::vector<std::vector<Microsoft::WRL::ComPtr<InputSite>>>::_Tidy(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *i; // rsi
  _QWORD *v4; // rcx
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  void *v7; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v1 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    for ( i = *(_QWORD **)(a1 + 8); v1 != i; v1 += 3 )
    {
      if ( *v1 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<InputSite>>>(*v1, v1[1]);
        std::_Deallocate<16,0>(*v1, (v1[2] - *v1) & 0xFFFFFFFFFFFFFFF8uLL);
        *v1 = 0LL;
        v1[1] = 0LL;
        v1[2] = 0LL;
      }
    }
    v4 = *(_QWORD **)a1;
    v5 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3);
    v7 = *(void **)a1;
    v6 = 24 * v5;
    v8 = 24 * v5;
    if ( 24 * v5 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v7, &v8);
      v4 = v7;
      v6 = v8;
    }
    operator delete(v4, v6);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
