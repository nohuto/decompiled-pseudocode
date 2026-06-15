/*
 * XREFs of ?PreMessageLoop@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z @ 0x140001EB0
 * Callers:
 *     _lambda_d1a8b950306abda3aed68804ea97f7ae_::operator() @ 0x140002364 (_lambda_d1a8b950306abda3aed68804ea97f7ae_--operator().c)
 * Callees:
 *     ?RegisterClassObject@_ATL_OBJMAP_ENTRY30@ATL@@QEAAJKK@Z @ 0x14002AAA4 (-RegisterClassObject@_ATL_OBJMAP_ENTRY30@ATL@@QEAAJKK@Z.c)
 */

__int64 __fastcall ATL::CAtlExeModuleT<CAudioDGModule>::PreMessageLoop(__int64 a1, unsigned int a2, unsigned int a3)
{
  HRESULT v4; // ebx
  ATL::_ATL_OBJMAP_ENTRY30 **v5; // rdi
  unsigned __int64 v6; // rax
  HRESULT v8; // eax
  __int64 *v9; // rdi
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx

  v4 = 1;
  v5 = (ATL::_ATL_OBJMAP_ENTRY30 **)qword_1400C1330;
  v6 = qword_1400C1338;
  while ( (unsigned __int64)v5 < v6 )
  {
    if ( v4 < 0 )
      return (unsigned int)v4;
    if ( *v5 )
    {
      v4 = ATL::_ATL_OBJMAP_ENTRY30::RegisterClassObject(*v5, a2, a3);
      v6 = qword_1400C1338;
    }
    ++v5;
  }
  if ( v4 >= 0 )
  {
    if ( v4 )
    {
      *(_BYTE *)(a1 + 96) = 0;
    }
    else
    {
      if ( *(_BYTE *)(a1 + 96) )
      {
        v4 = CoResumeClassObjects();
        if ( v4 < 0 )
        {
          SetEvent(*(HANDLE *)(a1 + 80));
          WaitForSingleObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, 2 * *(_DWORD *)(a1 + 88));
        }
        CloseHandle((HANDLE)0xFFFFFFFFFFFFFFFFLL);
      }
      else
      {
        v4 = CoResumeClassObjects();
      }
      if ( v4 < 0 )
      {
        v8 = 0;
        v9 = (__int64 *)qword_1400C1330;
        v10 = qword_1400C1338;
        while ( (unsigned __int64)v9 < v10 && !v8 )
        {
          v11 = *v9;
          if ( *v9 && *(_DWORD *)(v11 + 40) )
          {
            v8 = CoRevokeClassObject(*(_DWORD *)(v11 + 40));
            v10 = qword_1400C1338;
          }
          ++v9;
        }
      }
    }
  }
  return (unsigned int)v4;
}
