/*
 * XREFs of sub_18002E690 @ 0x18002E690
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_180079B60 @ 0x180079B60 (sub_180079B60.c)
 *     sub_18007DB98 @ 0x18007DB98 (sub_18007DB98.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18002E690(_QWORD *a1)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  __int64 v6; // rcx
  unsigned int v8; // eax
  int v9; // r8d
  __int128 v10; // [rsp+30h] [rbp-49h] BYREF
  _BYTE v11[8]; // [rsp+40h] [rbp-39h] BYREF
  __int64 v12; // [rsp+48h] [rbp-31h]
  _QWORD v13[4]; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v14[4]; // [rsp+70h] [rbp-9h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+90h] [rbp+17h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*a1 + 376LL))(a1, v11);
  v10 = 0LL;
  v3 = *(_QWORD *)(v2 + 8);
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 + 8);
    while ( v4 )
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 8), v4 + 1, v4);
      if ( v5 == v4 )
      {
        v10 = *(_OWORD *)v2;
        break;
      }
    }
  }
  v6 = v12;
  if ( v12 && _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 12), 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v6 + 8LL))(v6, v3, v2);
  if ( !(_QWORD)v10 )
  {
    sub_1800113D0(v14, "RenderDevice was removed");
    v8 = (unsigned int)sub_1800113D0(
                         v13,
                         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\e"
                         "ngine\\renderoutput.cpp");
    sub_180079B60((unsigned int)pExceptionObject, v8, v9, (unsigned int)v14, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  sub_18007DB98(a1[26], v10, v2);
  return sub_180010910((__int64)&v10);
}
