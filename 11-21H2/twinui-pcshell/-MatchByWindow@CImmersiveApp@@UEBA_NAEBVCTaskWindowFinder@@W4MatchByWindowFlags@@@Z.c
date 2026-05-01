/*
 * XREFs of ?MatchByWindow@CImmersiveApp@@UEBA_NAEBVCTaskWindowFinder@@W4MatchByWindowFlags@@@Z @ 0x1801257E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x180021CA8 (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$FindEx@VCTaskWindowFinder@@@?$CTSimpleFixedArray@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@@@QEBAJAEBVCTaskWindowFinder@@AEBV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1800C6D60 (--$FindEx@VCTaskWindowFinder@@@-$CTSimpleFixedArray@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@V-$C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall CImmersiveApp::MatchByWindow(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // si
  __int64 v6; // rbx
  __int64 *v7; // rcx
  __int64 v8; // rax
  char v9; // al
  bool result; // al
  bool v11; // bl
  _QWORD v12[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  v3 = a3;
  if ( (a3 & 4) != 0 )
    return CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176)) == *(HWND *)a2;
  v13 = 0LL;
  v6 = 0LL;
  if ( *(_QWORD *)(a1 + 352) )
  {
    while ( !*(_BYTE *)(a2 + 16) )
    {
      v7 = *(__int64 **)(*(_QWORD *)(a1 + 344) + 8 * v6);
      v8 = *v7;
      if ( *(_QWORD *)a2 )
      {
        if ( (*(__int64 (**)(void))(v8 + 32))() == *(_QWORD *)a2 )
          break;
      }
      else if ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(v8 + 48))(v7, *(_QWORD *)(a2 + 8)) )
      {
        break;
      }
      if ( (unsigned __int64)++v6 >= *(_QWORD *)(a1 + 352) )
        goto LABEL_7;
    }
    v9 = 1;
  }
  else
  {
LABEL_7:
    v9 = 0;
  }
  result = v9
        || (v3 & 1) != 0
        && (v13 = 0LL,
            v11 = (int)CTSimpleFixedArray<Microsoft::WRL::ComPtr<ITaskWindow>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskWindow>>>::FindEx<CTaskWindowFinder>(
                         (_QWORD *)(a1 + 432),
                         a2,
                         a3,
                         v12) >= 0,
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13),
            v11)
        || (v3 & 2) != 0
        && *(_QWORD *)a2
        && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 328) + 192LL))(*(_QWORD *)(a1 + 328));
  return result;
}
