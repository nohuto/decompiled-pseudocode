/*
 * XREFs of TelGetStringPolicy @ 0x180001E60
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003748 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004A4C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180005CA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall TelGetStringPolicy(__int64 a1, _WORD *a2, __int64 a3)
{
  __int64 v3; // r12
  _WORD *pvData; // rdi
  FARPROC ProcAddress; // r14
  FARPROC v7; // r15
  HMODULE Library; // rax
  HMODULE v9; // rsi
  int v10; // eax
  __int64 v11; // rdx
  unsigned int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // r9
  __int16 v15; // ax
  _WORD *v16; // rax
  LSTATUS ValueW; // eax
  int v18; // eax
  __int64 v19; // rdx
  int pdwType; // [rsp+20h] [rbp-30h]
  __int64 v22; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  DWORD pcbData; // [rsp+90h] [rbp+40h] BYREF
  __int64 v25; // [rsp+A8h] [rbp+58h] BYREF

  v3 = (unsigned int)a3;
  pvData = a2;
  if ( !a1 || !a2 )
  {
    v12 = -2147024809;
    v19 = 692LL;
    goto LABEL_35;
  }
  ProcAddress = 0LL;
  v7 = 0LL;
  Library = LoadLibraryExW(L"policymanager.dll", 0LL, 0x800u);
  v9 = Library;
  if ( Library )
  {
    ProcAddress = GetProcAddress(Library, "PolicyManager_GetPolicy");
    v7 = GetProcAddress(v9, "PolicyManager_FreeGetPolicyData");
  }
  v25 = 0LL;
  v22 = 0LL;
  if ( ProcAddress && v7 )
  {
    v22 = 0x200000001LL;
    v10 = ((__int64 (__fastcall *)(const wchar_t *, __int64, __int64 *, __int64 *))ProcAddress)(
            L"System",
            a1,
            &v22,
            &v25);
    v11 = v25;
    v12 = v10;
    if ( v10 >= 0 )
    {
      if ( v25 && *(_DWORD *)(v25 + 8) == 2 )
      {
        LODWORD(a3) = 2147483646;
        v13 = v3;
        if ( (unsigned __int64)(v3 - 1) > 0x7FFFFFFE )
        {
          v12 = -2147024809;
          if ( (_DWORD)v3 )
            *pvData = 0;
        }
        else
        {
          a3 = 2147483646 - v3;
          v14 = *(_QWORD *)(v25 + 16) - (_QWORD)pvData;
          do
          {
            if ( !(a3 + v13) )
              break;
            v15 = *(_WORD *)((char *)pvData + v14);
            if ( !v15 )
              break;
            *pvData++ = v15;
            --v13;
          }
          while ( v13 );
          v16 = pvData - 1;
          if ( v13 )
            v16 = pvData;
          v12 = v13 == 0 ? 0x8007007A : 0;
          *v16 = 0;
        }
      }
      else
      {
        v12 = -2147024883;
      }
    }
  }
  else
  {
    if ( (unsigned int)_o__wcsicmp(a1, L"ConfigureMicrosoft365UploadEndpoint") )
    {
      v12 = -2147024809;
    }
    else
    {
      pcbData = 2 * v3;
      ValueW = RegGetValueW(
                 HKEY_LOCAL_MACHINE,
                 L"Software\\Policies\\Microsoft\\Windows\\DataCollection",
                 L"ConfigureMicrosoft365UploadEndpoint",
                 2u,
                 0LL,
                 pvData,
                 &pcbData);
      v12 = (unsigned __int16)ValueW | 0x80070000;
      if ( ValueW <= 0 )
        v12 = ValueW;
    }
    v11 = v25;
  }
  if ( v11 )
  {
    v18 = ((__int64 (__fastcall *)(__int64))v7)(v11);
    if ( v18 < 0 )
      wil::details::in1diag3::_Log_Hr(retaddr, (void *)0x2FF, a3, (const char *)(unsigned int)v18, pdwType);
  }
  if ( v9 )
    FreeLibrary(v9);
  if ( (v12 & 0x80000000) != 0 )
  {
    v19 = 776LL;
LABEL_35:
    wil::details::in1diag3::Return_Hr(retaddr, (void *)v19, a3, (const char *)v12, pdwType);
  }
  return v12;
}
