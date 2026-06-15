/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x1800E1924
 * Callers:
 *     ?clear@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x1800E1BC4 (-clear@-$_Hash@V-$_Umap_traits@VCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@@Uerr_retur.c)
 * Callees:
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18000C0AC (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18001C8C0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x18001CA18 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001CA60 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001CAA0 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?_Bump_erased@_Range_eraser@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x1800E1398 (-_Bump_erased@_Range_eraser@-$_Hash@V-$_Umap_traits@VCAudioSessionInstanceId@@V-$com_ptr_t@VCAud.c)
 *     ?Hash@?$CStringElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL@@SAKPEBG@Z @ 0x1800E6488 (-Hash@-$CStringElementTraits@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL.c)
 *     ?MakeUpper@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV12@XZ @ 0x1800E781C (-MakeUpper@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV12@XZ.c)
 */

// Hidden C++ exception states: #wind=2
_DWORD *__fastcall std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::_Unchecked_erase(
        _QWORD *a1,
        __int64 a2,
        _DWORD *a3)
{
  _QWORD *v5; // r13
  __int64 v6; // r14
  _DWORD *v7; // rdi
  _QWORD *Upper; // rax
  unsigned int v9; // ebx
  ATL::CStringData *v10; // rcx
  __int64 v11; // r12
  _DWORD *v12; // rax
  bool v13; // bl
  _QWORD *v14; // rax
  _DWORD *v15; // rbx
  int v16; // r15d
  __int64 v17; // r15
  ATL::CStringData *v18; // rcx
  __int64 v19; // r15
  _DWORD *v20; // r12
  _QWORD *v21; // rax
  _QWORD *v23; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v24; // [rsp+28h] [rbp-20h]
  _DWORD *v25; // [rsp+30h] [rbp-18h]
  _DWORD *v27; // [rsp+98h] [rbp+50h] BYREF
  __int64 v28; // [rsp+A0h] [rbp+58h]
  _QWORD *v29; // [rsp+A8h] [rbp+60h]

  if ( (_DWORD *)a2 != a3 )
  {
    v5 = (_QWORD *)a1[1];
    v6 = a1[3];
    v23 = a1 + 1;
    v29 = *(_QWORD **)(a2 + 8);
    v24 = v29;
    v7 = (_DWORD *)a2;
    v25 = (_DWORD *)a2;
    ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v27, (__int64)&ATL::g_strmgr);
    if ( (int)CAudioSessionInstanceId::ToString((__int64)(v7 + 4), (void **)&v27) < 0 )
    {
      v10 = (ATL::CStringData *)(v27 - 6);
      v9 = 0;
    }
    else
    {
      Upper = (_QWORD *)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::MakeUpper(&v27);
      v9 = ATL::CStringElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>::Hash(*Upper);
      v10 = (ATL::CStringData *)(v27 - 6);
    }
    ATL::CStringData::Release(v10);
    v11 = 2 * (a1[6] & v9);
    v28 = *(_QWORD *)(v6 + 16 * (a1[6] & v9));
    v12 = *(_DWORD **)(v6 + 8 * v11 + 8);
    v27 = v12;
    while ( 1 )
    {
      v13 = v7 == v12;
      std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::_Range_eraser::_Bump_erased(&v23);
      if ( v13 )
        break;
      v7 = v25;
      v12 = v27;
      if ( v25 == a3 )
      {
        if ( v28 == a2 )
          *(_QWORD *)(v6 + 8 * v11) = v25;
        goto LABEL_23;
      }
    }
    if ( v28 == a2 )
    {
      *(_QWORD *)(v6 + 8 * v11) = v5;
      v14 = v5;
    }
    else
    {
      v14 = v29;
    }
    *(_QWORD *)(v6 + 8 * v11 + 8) = v14;
    while ( 1 )
    {
      v7 = v25;
      if ( v25 == a3 )
        break;
      ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v27, (__int64)&ATL::g_strmgr);
      if ( (int)CAudioSessionInstanceId::ToString((__int64)(v7 + 4), (void **)&v27) < 0 )
      {
        v18 = (ATL::CStringData *)(v27 - 6);
        v17 = 0LL;
      }
      else
      {
        v15 = v27;
        v16 = *(v27 - 4);
        if ( ((1 - *(v27 - 2)) | (*(v27 - 3) - v16)) < 0 )
        {
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)&v27, v16);
          v15 = v27;
        }
        _o__wcsupr_s(v15, v16 + 1);
        ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)&v27, v16);
        v17 = (unsigned int)ATL::CStringElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>::Hash(v15);
        v18 = (ATL::CStringData *)(v15 - 6);
      }
      ATL::CStringData::Release(v18);
      v19 = 2 * (a1[6] & v17);
      v20 = *(_DWORD **)(v6 + 8 * v19 + 8);
      while ( 1 )
      {
        std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::_Range_eraser::_Bump_erased(&v23);
        if ( v7 == v20 )
          break;
        v7 = v25;
        if ( v25 == a3 )
        {
          *(_QWORD *)(v6 + 8 * v19) = v25;
          goto LABEL_23;
        }
      }
      *(_QWORD *)(v6 + 8 * v19) = v5;
      *(_QWORD *)(v6 + 8 * v19 + 8) = v5;
    }
LABEL_23:
    v21 = v24;
    *v24 = v7;
    *((_QWORD *)v7 + 1) = v21;
  }
  return a3;
}
