/*
 * XREFs of ?ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1803BD7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x1800406B0 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?add_ref@?$com_ptr@UIServiceProvider@@@winrt@@AEBAXXZ @ 0x18004159C (-add_ref@-$com_ptr@UIServiceProvider@@@winrt@@AEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18031A2A4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??$Make@VSelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VSelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@12@XZ @ 0x18031A650 (--$Make@VSelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@$$V@Detai.c)
 *     ??0SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@AEBU01234@@Z @ 0x18031B14C (--0SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@AEBU01234@@Z.c)
 *     ??1SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ @ 0x18031B354 (--1SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x1803BC72C (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTP.c)
 *     ??$GetSelectedItem@UParsedPenWorkspaceLayout@@@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJAEBV?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@USelectionData@0123@V?$function@$$A6A?AUSelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEBUParsedPenWorkspaceLayout@@@Z@5@PEAUParsedPenWorkspaceLayout@@@Z @ 0x1803BCD24 (--$GetSelectedItem@UParsedPenWorkspaceLayout@@@CuratedTileCollections@UnifiedTile@Shell@WindowsI.c)
 *     ??$_Destroy_range@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@YAXPEAUParsedPenWorkspaceLayout@@QEAU1@AEAV?$allocator@UParsedPenWorkspaceLayout@@@0@@Z @ 0x1803BCF58 (--$_Destroy_range@V-$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@YAXPEAUParsedPenWorkspaceL.c)
 *     ??$_Emplace_reallocate@UParsedPenWorkspaceLayout@@@?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@QEAAPEAUParsedPenWorkspaceLayout@@QEAU2@$$QEAU2@@Z @ 0x1803BCF9C (--$_Emplace_reallocate@UParsedPenWorkspaceLayout@@@-$vector@UParsedPenWorkspaceLayout@@V-$alloca.c)
 *     ?CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ @ 0x1803BD55C (-CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ.c)
 *     ?ParsePinnedAppNode@PWSLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUIPenWorkspaceLayoutItem@@@Z @ 0x1803BDF44 (-ParsePinnedAppNode@PWSLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUIPenWorkspaceLayoutItem@@@Z.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall PWSLayoutParser::ParsePWSLayoutCollectionNode(
        PWSLayoutParser *this,
        __int64 (__fastcall ****a2)(_QWORD, GUID *, int *),
        _QWORD *a3)
{
  _QWORD *v3; // r14
  PWSLayoutParser *v5; // r15
  int v6; // eax
  unsigned int v7; // ebx
  __int64 (__fastcall ***v8)(_QWORD, GUID *, int *); // rdi
  __int64 (__fastcall *v9)(_QWORD, GUID *, int *); // rbx
  int v10; // eax
  __int64 v11; // rbx
  int (__fastcall *v12)(__int64, struct IXMLDOMNode **); // rdi
  __int64 (__fastcall ***v13)(_QWORD, GUID *, int *); // rdi
  __int64 (__fastcall *v14)(_QWORD, GUID *, int *); // rbx
  int v15; // eax
  int v16; // eax
  void *v17; // r8
  __int64 v18; // rcx
  __int64 *v19; // rcx
  __int64 *v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rcx
  int v23; // eax
  unsigned int v24; // edi
  __int64 v25; // rdx
  const char *v26; // r9
  WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *v27; // rax
  int Selected; // eax
  __int64 *v29; // rdi
  __int64 v30; // r15
  __int64 v31; // rbx
  void *v32; // r8
  __int64 v33; // rdx
  __int64 *v34; // rdx
  int v36[2]; // [rsp+20h] [rbp-248h] BYREF
  struct IPenWorkspaceLayoutItem *v37; // [rsp+28h] [rbp-240h] BYREF
  __int64 v38; // [rsp+30h] [rbp-238h] BYREF
  __int128 v39; // [rsp+38h] [rbp-230h] BYREF
  __int64 v40; // [rsp+48h] [rbp-220h]
  __int64 v41[2]; // [rsp+50h] [rbp-218h] BYREF
  __int64 v42; // [rsp+60h] [rbp-208h] BYREF
  __int64 v43; // [rsp+68h] [rbp-200h]
  __int64 v44; // [rsp+70h] [rbp-1F8h]
  __int64 v45; // [rsp+78h] [rbp-1F0h]
  __int64 v46; // [rsp+80h] [rbp-1E8h] BYREF
  char v47; // [rsp+88h] [rbp-1E0h]
  __int128 v48; // [rsp+90h] [rbp-1D8h]
  __int128 v49; // [rsp+A0h] [rbp-1C8h]
  __int128 v50; // [rsp+B0h] [rbp-1B8h]
  __int128 v51; // [rsp+C0h] [rbp-1A8h]
  __int64 v52; // [rsp+D0h] [rbp-198h]
  __int64 v53; // [rsp+D8h] [rbp-190h]
  char v54; // [rsp+E0h] [rbp-188h]
  __int64 *v55; // [rsp+F0h] [rbp-178h]
  _OWORD v56[2]; // [rsp+100h] [rbp-168h] BYREF
  __int64 v57; // [rsp+120h] [rbp-148h] BYREF
  char v58; // [rsp+128h] [rbp-140h]
  __int128 v59; // [rsp+130h] [rbp-138h]
  __int128 v60; // [rsp+140h] [rbp-128h]
  __int128 v61; // [rsp+150h] [rbp-118h]
  __int128 v62; // [rsp+160h] [rbp-108h]
  __int64 v63; // [rsp+170h] [rbp-F8h]
  __int64 v64; // [rsp+178h] [rbp-F0h]
  char v65; // [rsp+180h] [rbp-E8h]
  __int64 v66[8]; // [rsp+190h] [rbp-D8h] BYREF
  char v67[152]; // [rsp+1D0h] [rbp-98h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+0h]
  struct IXMLDOMNode *v71; // [rsp+288h] [rbp+20h] BYREF

  v3 = a3;
  v5 = this;
  v6 = PWSLayoutParser::CalculateSelectionAttributes(this);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v41[0] = 0LL;
    v8 = *a2;
    v9 = (**a2)[12];
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v41);
    v10 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, int *), __int64 *))v9)(v8, v41);
    v7 = v10;
    if ( v10 >= 0 )
    {
      v71 = 0LL;
      v42 = 0LL;
      v43 = 0LL;
      v44 = 0LL;
      v45 = 0LL;
      v46 = 0LL;
      v47 = 0;
      v48 = 0LL;
      v49 = 0LL;
      v50 = 0LL;
      v51 = 0LL;
      v52 = 0LL;
      v53 = 0LL;
      v54 = 0;
      while ( 1 )
      {
        v11 = v41[0];
        v12 = *(int (__fastcall **)(__int64, struct IXMLDOMNode **))(*(_QWORD *)v41[0] + 72LL);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v71);
        if ( v12(v11, &v71) < 0 || !v71 )
          break;
        *(_QWORD *)v36 = 0LL;
        v13 = *a2;
        v14 = ***a2;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v36);
        v15 = v14(v13, &GUID_2933bf80_7b36_11d2_b20e_00c04f983e60, v36);
        v7 = v15;
        if ( v15 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x68,
            (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
            (const char *)(unsigned int)v15);
          goto LABEL_27;
        }
        v37 = 0LL;
        Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v37);
        v16 = PWSLayoutParser::ParsePinnedAppNode(v5, v71, &v37);
        v7 = v16;
        if ( v16 < 0 )
        {
          v25 = 107LL;
          goto LABEL_24;
        }
        v18 = v43;
        if ( v43 == v45 )
        {
          v16 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                  (__int64)&v42,
                  v43 + 1,
                  v17);
          v7 = v16;
          if ( v16 < 0 )
          {
            v25 = 108LL;
LABEL_24:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v25,
              (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
              (const char *)(unsigned int)v16);
LABEL_25:
            Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v37);
LABEL_27:
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v36);
LABEL_28:
            WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::~SelectionData((WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)&v46);
            CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll((__int64)&v42);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v71);
            goto LABEL_43;
          }
          v18 = v43;
        }
        v43 = v18 + 1;
        v19 = (__int64 *)(v42 - 8 + 8 * (v18 + 1));
        if ( v19 )
        {
          *v19 = (__int64)v37;
          winrt::com_ptr<IServiceProvider>::add_ref(v19);
        }
        v20 = Microsoft::WRL::Details::Make<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser,>(&v38);
        v21 = *v20;
        v55 = (__int64 *)*v20;
        *v20 = 0LL;
        v22 = v38;
        if ( v38 )
        {
          v38 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
        }
        if ( !v21 )
        {
          v7 = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x6F,
            (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
            (const char *)0x8007000ELL);
          goto LABEL_25;
        }
        v23 = (*(__int64 (__fastcall **)(__int64, int *, __int64 *))(*(_QWORD *)v21 + 24LL))(v21, v36, &v46);
        v24 = v23;
        if ( v23 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x70,
            (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
            (const char *)(unsigned int)v23);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
          Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v37);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v36);
          WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::~SelectionData((WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)&v46);
          CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll((__int64)&v42);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v71);
          v7 = v24;
          goto LABEL_43;
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v37);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v36);
      }
      try
      {
        v39 = 0LL;
        v40 = 0LL;
        std::vector<ParsedPenWorkspaceLayout>::_Emplace_reallocate<ParsedPenWorkspaceLayout>((__int64 *)&v39, 0LL, &v42);
      }
      catch ( ... )
      {
        wil::details::in1diag3::Log_CaughtException(
          retaddr,
          (void *)0x77,
          (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
          v26);
        v5 = this;
        v3 = a3;
      }
      memset(v56, 0, sizeof(v56));
      v57 = 0LL;
      v58 = 0;
      v59 = 0LL;
      v60 = 0LL;
      v61 = 0LL;
      v62 = 0LL;
      v63 = 0LL;
      v64 = 0LL;
      v65 = 0;
      v55 = v66;
      v66[0] = (__int64)off_18064F8E8;
      v66[7] = (__int64)v66;
      v27 = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::SelectionData(
              (WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)v67,
              (PWSLayoutParser *)((char *)v5 + 40));
      Selected = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetSelectedItem<ParsedPenWorkspaceLayout>(
                   (__int64 *)&v39,
                   v27,
                   v66,
                   (__int64)v56);
      v7 = Selected;
      if ( Selected < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x7D,
          (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
          (const char *)(unsigned int)Selected);
        WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::~SelectionData((WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)&v57);
        CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll((__int64)v56);
        if ( (_QWORD)v39 )
        {
          std::_Destroy_range<std::allocator<ParsedPenWorkspaceLayout>>(v39, *((__int64 *)&v39 + 1));
          std::_Deallocate<16,0>((void *)v39, 8 * ((v40 - (__int64)v39) >> 3));
          v39 = 0LL;
          v40 = 0LL;
        }
        goto LABEL_28;
      }
      v29 = *(__int64 **)&v56[0];
      v30 = *(_QWORD *)&v56[0] + 8LL * *((_QWORD *)&v56[0] + 1);
      while ( v29 != (__int64 *)v30 )
      {
        v31 = *v29;
        v38 = *v29;
        winrt::com_ptr<IServiceProvider>::add_ref(&v38);
        v33 = v3[1];
        if ( v33 != v3[3]
          || (int)CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                    (__int64)v3,
                    v33 + 1,
                    v32) >= 0 )
        {
          v34 = (__int64 *)(*v3 + 8 * v3[1]++);
          if ( v34 )
          {
            *v34 = 0LL;
            if ( v34 != &v38 )
            {
              *v34 = v31;
              v38 = 0LL;
            }
          }
        }
        Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v38);
        ++v29;
      }
      WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::~SelectionData((WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)&v57);
      CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll((__int64)v56);
      if ( (_QWORD)v39 )
      {
        std::_Destroy_range<std::allocator<ParsedPenWorkspaceLayout>>(v39, *((__int64 *)&v39 + 1));
        std::_Deallocate<16,0>((void *)v39, 8 * ((v40 - (__int64)v39) >> 3));
        v39 = 0LL;
        v40 = 0LL;
      }
      WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::~SelectionData((WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)&v46);
      CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll((__int64)&v42);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v71);
      v7 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x60,
        (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
        (const char *)(unsigned int)v10);
    }
LABEL_43:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v41);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5D,
      (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
      (const char *)(unsigned int)v6);
  }
  return v7;
}
