/*
 * XREFs of sub_18004FBD8 @ 0x18004FBD8
 * Callers:
 *     sub_18005FECC @ 0x18005FECC (sub_18005FECC.c)
 *     sub_180064EF0 @ 0x180064EF0 (sub_180064EF0.c)
 *     sub_18007CD0C @ 0x18007CD0C (sub_18007CD0C.c)
 *     sub_18007D310 @ 0x18007D310 (sub_18007D310.c)
 *     sub_18007D430 @ 0x18007D430 (sub_18007D430.c)
 *     sub_1800808B0 @ 0x1800808B0 (sub_1800808B0.c)
 *     sub_18008D684 @ 0x18008D684 (sub_18008D684.c)
 *     sub_180098B8C @ 0x180098B8C (sub_180098B8C.c)
 *     sub_18009AD20 @ 0x18009AD20 (sub_18009AD20.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_18001C61C @ 0x18001C61C (sub_18001C61C.c)
 *     sub_18001C74C @ 0x18001C74C (sub_18001C74C.c)
 *     sub_18001D3F8 @ 0x18001D3F8 (sub_18001D3F8.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_18004D8C4 @ 0x18004D8C4 (sub_18004D8C4.c)
 *     sub_18004FA08 @ 0x18004FA08 (sub_18004FA08.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18004FBD8(__int64 a1, void **a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  _QWORD *v6; // rsi
  int v7; // eax
  char *v8; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // r8
  __int64 v13[2]; // [rsp+30h] [rbp-69h] BYREF
  _QWORD v14[4]; // [rsp+40h] [rbp-59h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+60h] [rbp-39h] BYREF
  char v16[32]; // [rsp+98h] [rbp-1h] BYREF
  _QWORD v17[4]; // [rsp+B8h] [rbp+1Fh] BYREF

  v13[1] = (__int64)a2;
  v4 = 0LL;
  v5 = *(_QWORD *)*a2;
  v13[0] = v5;
  while ( !*(_BYTE *)(v5 + 25) )
  {
    v6 = (_QWORD *)(v5 + 32);
    v7 = sub_18004FA08(a1, (_QWORD *)(v5 + 32));
    if ( v7 == -1 )
    {
      v8 = sub_18001C74C(
             v16,
             "ShaderManager::GetOptionGroup() -- option group contains a non-registered option name '",
             v6);
      v9 = sub_18001C61C(v17, v8, (__int64)"'. ShaderManager::AddOption() must be called first.");
      v10 = sub_180010DD0(
              v14,
              (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\eng"
                       "ine\\shadermanager.cpp");
      sub_18003AF58(pExceptionObject, (__int64)v10, v11, (__int64)v9, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
    _bittestandset64(&v4, v7);
    sub_18001D3F8(v13);
    v5 = v13[0];
  }
  sub_18004D8C4(a2, (__int64)a2);
  return v4;
}
