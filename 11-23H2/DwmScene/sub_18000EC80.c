/*
 * XREFs of sub_18000EC80 @ 0x18000EC80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18000EC80(char *a1)
{
  FARPROC WilFailureNotifyWatchers; // rax
  HMODULE ModuleHandleW; // rax
  __int64 result; // rax
  int v5; // [rsp+20h] [rbp-30h] BYREF
  __int64 v6; // [rsp+28h] [rbp-28h]
  char v7; // [rsp+30h] [rbp-20h]
  __int16 v8; // [rsp+32h] [rbp-1Eh]
  __int16 v9; // [rsp+38h] [rbp-18h]
  int v10; // [rsp+3Ch] [rbp-14h]
  __int64 v11; // [rsp+40h] [rbp-10h]
  __int64 v12; // [rsp+48h] [rbp-8h]
  __int64 v13; // [rsp+60h] [rbp+10h] BYREF

  v5 = *((_DWORD *)a1 + 2);
  v6 = *((_QWORD *)a1 + 3);
  v7 = *a1;
  v8 = word_1801D32E0;
  v9 = *((_WORD *)a1 + 32);
  v10 = 0;
  v11 = *((_QWORD *)a1 + 7);
  v12 = *((_QWORD *)a1 + 16);
  v13 = 0LL;
  WilFailureNotifyWatchers = (FARPROC)qword_1801D3350;
  if ( qword_1801D3350 )
    goto LABEL_5;
  ModuleHandleW = hModule;
  if ( !hModule )
  {
    ModuleHandleW = GetModuleHandleW(L"kernelbase.dll");
    hModule = ModuleHandleW;
  }
  WilFailureNotifyWatchers = GetProcAddress(ModuleHandleW, "WilFailureNotifyWatchers");
  qword_1801D3350 = (__int64)WilFailureNotifyWatchers;
  if ( WilFailureNotifyWatchers )
LABEL_5:
    ((void (__fastcall *)(_QWORD, int *, __int64 *))WilFailureNotifyWatchers)(0LL, &v5, &v13);
  result = (unsigned int)v13;
  *((_DWORD *)a1 + 4) = v13;
  switch ( BYTE4(v13) )
  {
    case 1u:
      *((_DWORD *)a1 + 1) |= 1u;
      break;
    case 2u:
      *((_DWORD *)a1 + 1) |= 2u;
      break;
    case 3u:
      *((_DWORD *)a1 + 1) |= 4u;
      break;
  }
  return result;
}
