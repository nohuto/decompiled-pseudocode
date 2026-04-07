/*
 * XREFs of ?LoadPenResources@CContactManager@@AEAAXXZ @ 0x1800AB444
 * Callers:
 *     ?ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x1800ACBD4 (-ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@.c)
 * Callees:
 *     ?LoadFeedbackString@CContactManager@@IEAAPEAGPEAUHINSTANCE__@@HPEAH@Z @ 0x1800AB360 (-LoadFeedbackString@CContactManager@@IEAAPEAGPEAUHINSTANCE__@@HPEAH@Z.c)
 */

void __fastcall CContactManager::LoadPenResources(CContactManager *this)
{
  HMODULE ModuleHandleW; // rax
  CContactManager *v3; // rcx
  HINSTANCE v4; // rdi
  unsigned __int16 *v5; // rax
  CContactManager *v6; // rcx
  unsigned __int16 *v7; // rax
  CContactManager *v8; // rcx
  unsigned __int16 *v9; // rax
  CContactManager *v10; // rcx
  unsigned __int16 *v11; // rax
  CContactManager *v12; // rcx
  unsigned __int16 *v13; // rax
  CContactManager *v14; // rcx
  unsigned __int16 *v15; // rax
  int v16; // [rsp+30h] [rbp+10h] BYREF
  INITCOMMONCONTROLSEX picce; // [rsp+38h] [rbp+18h] BYREF

  picce.dwSize = 8;
  picce.dwICC = 8;
  InitCommonControlsEx(&picce);
  *((_DWORD *)this + 12) = 0;
  ModuleHandleW = GetModuleHandleW(0LL);
  v4 = ModuleHandleW;
  if ( ModuleHandleW )
  {
    v16 = 0;
    *((_DWORD *)this + 12) = 1;
    v5 = CContactManager::LoadFeedbackString(v3, ModuleHandleW, 0x5DDu, &v16);
    *(_QWORD *)this = v5;
    if ( v5 )
      *((_DWORD *)this + 12) += v16;
    v7 = CContactManager::LoadFeedbackString(v6, v4, 0x5DEu, &v16);
    *((_QWORD *)this + 2) = v7;
    if ( v7 )
      *((_DWORD *)this + 12) += v16;
    v9 = CContactManager::LoadFeedbackString(v8, v4, 0x5DFu, &v16);
    *((_QWORD *)this + 1) = v9;
    if ( v9 )
      *((_DWORD *)this + 12) += v16;
    v11 = CContactManager::LoadFeedbackString(v10, v4, 0x5E0u, &v16);
    *((_QWORD *)this + 3) = v11;
    if ( v11 )
      *((_DWORD *)this + 12) += v16;
    v13 = CContactManager::LoadFeedbackString(v12, v4, 0x5E1u, &v16);
    *((_QWORD *)this + 4) = v13;
    if ( v13 )
      *((_DWORD *)this + 12) += v16;
    v15 = CContactManager::LoadFeedbackString(v14, v4, 0x5DCu, &v16);
    *((_QWORD *)this + 5) = v15;
    if ( v15 )
      *((_DWORD *)this + 12) += 4 * v16;
  }
}
