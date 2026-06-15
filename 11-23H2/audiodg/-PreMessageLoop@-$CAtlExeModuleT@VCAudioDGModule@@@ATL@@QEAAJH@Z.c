/*
 * XREFs of ?PreMessageLoop@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z @ 0x1400518C8
 * Callers:
 *     _lambda_10c7ce318882e0e942d95a651b89d589_::operator() @ 0x1400504E0 (_lambda_10c7ce318882e0e942d95a651b89d589_--operator().c)
 * Callees:
 *     ?RegisterClassObject@_ATL_OBJMAP_ENTRY30@ATL@@QEAAJKK@Z @ 0x140051C88 (-RegisterClassObject@_ATL_OBJMAP_ENTRY30@ATL@@QEAAJKK@Z.c)
 */

__int64 __fastcall ATL::CAtlExeModuleT<CAudioDGModule>::PreMessageLoop(__int64 a1, unsigned int a2)
{
  HRESULT v3; // ebx
  ATL::_ATL_OBJMAP_ENTRY30 **v4; // rdi
  unsigned __int64 v5; // rax
  HRESULT v6; // eax
  __int64 *v7; // rdi
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx

  v3 = 1;
  v4 = (ATL::_ATL_OBJMAP_ENTRY30 **)qword_1400CF400;
  v5 = qword_1400CF408;
  while ( (unsigned __int64)v4 < v5 )
  {
    if ( v3 < 0 )
      return (unsigned int)v3;
    if ( *v4 )
    {
      v3 = ATL::_ATL_OBJMAP_ENTRY30::RegisterClassObject(*v4, a2, 5u);
      v5 = qword_1400CF408;
    }
    ++v4;
  }
  if ( v3 >= 0 )
  {
    if ( v3 )
    {
      *(_BYTE *)(a1 + 96) = 0;
    }
    else
    {
      if ( *(_BYTE *)(a1 + 96) )
      {
        v3 = CoResumeClassObjects();
        if ( v3 < 0 )
        {
          SetEvent(*(HANDLE *)(a1 + 80));
          WaitForSingleObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, 2 * *(_DWORD *)(a1 + 88));
        }
        CloseHandle((HANDLE)0xFFFFFFFFFFFFFFFFLL);
      }
      else
      {
        v3 = CoResumeClassObjects();
      }
      if ( v3 < 0 )
      {
        v6 = 0;
        v7 = (__int64 *)qword_1400CF400;
        v8 = qword_1400CF408;
        while ( (unsigned __int64)v7 < v8 && !v6 )
        {
          v9 = *v7;
          if ( *v7 && *(_DWORD *)(v9 + 40) )
          {
            v6 = CoRevokeClassObject(*(_DWORD *)(v9 + 40));
            v8 = qword_1400CF408;
          }
          ++v7;
        }
      }
    }
  }
  return (unsigned int)v3;
}
