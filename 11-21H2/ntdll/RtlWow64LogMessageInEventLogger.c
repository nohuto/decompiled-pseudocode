/*
 * XREFs of RtlWow64LogMessageInEventLogger @ 0x1800E2D70
 * Callers:
 *     <none>
 * Callees:
 *     LdrUnloadDll @ 0x180038270 (LdrUnloadDll.c)
 *     LdrLoadDll @ 0x18003AE00 (LdrLoadDll.c)
 *     LdrGetProcedureAddressForCaller @ 0x18003AFD0 (LdrGetProcedureAddressForCaller.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlWow64LogMessageInEventLogger(__int16 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  int v9; // [rsp+28h] [rbp-50h]
  __int64 (__fastcall *v10)(_QWORD, const wchar_t *); // [rsp+50h] [rbp-28h] BYREF
  void (__fastcall *v11)(__int64, __int64, _QWORD, _QWORD, _QWORD, int, _DWORD, __int64, _QWORD); // [rsp+58h] [rbp-20h] BYREF
  signed __int32 v12[4]; // [rsp+60h] [rbp-18h] BYREF
  unsigned __int64 retaddr; // [rsp+78h] [rbp+0h]
  unsigned __int64 v14; // [rsp+98h] [rbp+20h] BYREF

  result = LdrLoadDll(0LL, 0LL, (__int64)&unk_18012D6A0, &v14);
  if ( (int)result >= 0 )
  {
    if ( (int)LdrGetProcedureAddressForCaller(v14, &qword_18012D6C0, 0LL, (volatile signed __int32 *)&v10, 0, retaddr) >= 0
      && (int)LdrGetProcedureAddressForCaller(v14, &qword_18012D6B0, 0LL, v12, 0, retaddr) >= 0
      && (int)LdrGetProcedureAddressForCaller(v14, &qword_18012D6D0, 0LL, (volatile signed __int32 *)&v11, 0, retaddr) >= 0 )
    {
      v7 = v10(0LL, L"Wow64 Emulation Layer");
      v8 = v7;
      if ( v7 )
      {
        LOWORD(v9) = a1;
        v11(v7, 4LL, 0LL, a3, 0LL, v9, 0, a2, 0LL);
        (*(void (__fastcall **)(__int64))v12)(v8);
      }
    }
    return LdrUnloadDll(v14);
  }
  return result;
}
