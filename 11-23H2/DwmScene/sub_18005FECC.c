/*
 * XREFs of sub_18005FECC @ 0x18005FECC
 * Callers:
 *     sub_18007D240 @ 0x18007D240 (sub_18007D240.c)
 *     sub_18007E900 @ 0x18007E900 (sub_18007E900.c)
 *     sub_18007FB80 @ 0x18007FB80 (sub_18007FB80.c)
 *     sub_1800808B0 @ 0x1800808B0 (sub_1800808B0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_18004DD30 @ 0x18004DD30 (sub_18004DD30.c)
 *     sub_18004DF24 @ 0x18004DF24 (sub_18004DF24.c)
 *     sub_18004F228 @ 0x18004F228 (sub_18004F228.c)
 *     sub_18004FBD8 @ 0x18004FBD8 (sub_18004FBD8.c)
 *     sub_18005EA14 @ 0x18005EA14 (sub_18005EA14.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18005FECC(__int64 a1, void **a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  unsigned int v6; // esi
  __int64 v7; // rbx
  char v8; // r8
  void *v10[2]; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD v11[4]; // [rsp+40h] [rbp-98h] BYREF
  _QWORD v12[4]; // [rsp+60h] [rbp-78h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp-58h] BYREF

  if ( *(_DWORD *)(a1 + 432) )
  {
    sub_180010DD0(
      v12,
      (__int64)"ShaderFamily::AddOption() -- Cannot add option after the shader family has ended declaration");
    v4 = sub_180010DD0(
           v11,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\shaderfamily.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v4, v5, (__int64)v12, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v6 = sub_18004F228(*(_QWORD *)(a1 + 440), a2);
  sub_18004DF24((__int64 *)(a1 + 48), (__int64)v10, a2);
  v7 = *(_QWORD *)(a1 + 440);
  sub_18005EA14((__int64 *)v10, (_QWORD *)(a1 + 48), v8);
  *(_QWORD *)(a1 + 64) = sub_18004FBD8(v7, v10);
  *(_DWORD *)(*(_QWORD *)sub_18004DD30((__int64 *)(a1 + 80), (__int64)v10, a2) + 64LL) = v6;
  return v6;
}
