/*
 * XREFs of ?ReadUserSigninSupportCapability@CApplicationManager@@QEAAJPEAXPEAH@Z @ 0x18002E7B8
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800033F0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x18001F3E8 (WPP_SF_d.c)
 */

__int64 __fastcall CApplicationManager::ReadUserSigninSupportCapability(CApplicationManager *this, void *a2, int *a3)
{
  int v3; // ebx
  signed int v5; // eax
  bool v6; // sf
  __int64 result; // rax
  CApplicationManager *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = this;
  v3 = 0;
  *a3 = 0;
  LOBYTE(v8) = 0;
  v5 = CapabilityCheck(a2, L"userSigninSupport", &v8);
  v6 = v5 < 0;
  if ( v5 > 0 )
  {
    v5 = (unsigned __int16)v5 | 0x80070000;
    v6 = v5 < 0;
  }
  if ( v6
    && WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x17u, &WPP_7bcb4e64156732b2305239eaa24ad5b8_Traceguids, v5);
  }
  LOBYTE(v3) = (_BYTE)v8 != 0;
  result = 0LL;
  *a3 = v3;
  return result;
}
