/*
 * XREFs of ?InitializeVisualGroupData@CVisualGroup@@AEAAJPEAPEAVCVisual@@I0I@Z @ 0x1801FF150
 * Callers:
 *     ?ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALGROUP@@PEBXI@Z @ 0x1801FF2D8 (-ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALGROUP@@PEBXI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_GCExcludeVisualReference@@QEAAPEAXI@Z @ 0x180192CAC (--_GCExcludeVisualReference@@QEAAPEAXI@Z.c)
 *     ?Create@CExcludeVisualReference@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x1801A9144 (-Create@CExcludeVisualReference@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ??$emplace_back@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@?$vector@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@2@@std@@QEAAAEAV?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@1@$$QEAV21@@Z @ 0x1801FEFC8 (--$emplace_back@V-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExcludeVisualReferen.c)
 */

__int64 __fastcall CVisualGroup::InitializeVisualGroupData(
        CVisualGroup *this,
        struct CVisual **a2,
        unsigned int a3,
        struct CVisual **a4,
        unsigned int a5)
{
  int v5; // ebx
  unsigned int i; // esi
  struct CVisual *v11; // rcx
  CExcludeVisualReference *v12; // rcx
  unsigned int j; // edi
  struct CVisual *v14; // rcx
  CExcludeVisualReference *v15; // rcx
  CExcludeVisualReference *v17; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v18[2]; // [rsp+38h] [rbp-18h]
  struct CExcludeVisualReference *v19; // [rsp+40h] [rbp-10h] BYREF
  char v20; // [rsp+48h] [rbp-8h]

  v5 = 0;
  for ( i = 0; i < a3; ++i )
  {
    v11 = *a2;
    if ( *a2 )
    {
      v17 = 0LL;
      v19 = 0LL;
      *(_QWORD *)v18 = &v17;
      v20 = 1;
      v5 = CExcludeVisualReference::Create(v11, (struct CWeakResourceReference ***)&v19);
      if ( v20 )
      {
        v12 = **(CExcludeVisualReference ***)v18;
        **(_QWORD **)v18 = v19;
        if ( v12 )
          CExcludeVisualReference::`scalar deleting destructor'(v12);
      }
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v12, 0LL, 0LL, v5, 0x6Au);
LABEL_22:
        if ( v17 )
          CExcludeVisualReference::`scalar deleting destructor'(v17);
        return (unsigned int)v5;
      }
      std::vector<std::unique_ptr<CExcludeVisualReference>>::emplace_back<std::unique_ptr<CExcludeVisualReference>>(
        (__int64 *)this + 8,
        (__int64 *)&v17);
      if ( v17 )
        CExcludeVisualReference::`scalar deleting destructor'(v17);
    }
    ++a2;
  }
  for ( j = 0; j < a5; ++a4 )
  {
    v14 = *a4;
    if ( *a4 )
    {
      v17 = 0LL;
      v19 = 0LL;
      *(_QWORD *)v18 = &v17;
      v20 = 1;
      v5 = CExcludeVisualReference::Create(v14, (struct CWeakResourceReference ***)&v19);
      if ( v20 )
      {
        v15 = **(CExcludeVisualReference ***)v18;
        **(_QWORD **)v18 = v19;
        if ( v15 )
          CExcludeVisualReference::`scalar deleting destructor'(v15);
      }
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v15, 0LL, 0LL, v5, 0x76u);
        goto LABEL_22;
      }
      std::vector<std::unique_ptr<CExcludeVisualReference>>::emplace_back<std::unique_ptr<CExcludeVisualReference>>(
        (__int64 *)this + 8,
        (__int64 *)&v17);
      if ( v17 )
        CExcludeVisualReference::`scalar deleting destructor'(v17);
    }
    ++j;
  }
  return (unsigned int)v5;
}
