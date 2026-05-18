/*
 * XREFs of sub_18005E53C @ 0x18005E53C
 * Callers:
 *     sub_18002AB08 @ 0x18002AB08 (sub_18002AB08.c)
 *     sub_18005D70C @ 0x18005D70C (sub_18005D70C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18005E488 @ 0x18005E488 (sub_18005E488.c)
 *     sub_180079B60 @ 0x180079B60 (sub_180079B60.c)
 */

// Hidden C++ exception states: #wind=1
_UNKNOWN **__fastcall sub_18005E53C(__int64 a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  _QWORD *v4; // rdi
  _QWORD *v5; // rbx
  _QWORD *v6; // rcx
  unsigned int v7; // eax
  int v8; // r8d
  _QWORD v9[4]; // [rsp+38h] [rbp-A0h] BYREF
  _QWORD v10[4]; // [rsp+58h] [rbp-80h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-60h] BYREF
  _UNKNOWN *retaddr; // [rsp+D8h] [rbp+0h] BYREF

  result = &retaddr;
  if ( *(float *)&a2 < 0.0 || *((float *)&a2 + 1) < 0.0 )
  {
    sub_1800113D0(v10, "Attempted to set an active size with a negative component");
    v7 = (unsigned int)sub_1800113D0(
                         v9,
                         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\e"
                         "ngine\\texture.cpp");
    sub_180079B60((unsigned int)pExceptionObject, v7, v8, (unsigned int)v10, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  *(_QWORD *)(a1 + 144) = a2;
  v4 = *(_QWORD **)(a1 + 112);
  v5 = (_QWORD *)*v4;
  while ( v5 != v4 )
  {
    sub_18005E488(v5[5], a2);
    result = (_UNKNOWN **)v5[2];
    if ( *((_BYTE *)result + 25) )
    {
      for ( result = (_UNKNOWN **)v5[1];
            !*((_BYTE *)result + 25) && v5 == (_QWORD *)result[2];
            result = (_UNKNOWN **)result[1] )
      {
        v5 = result;
      }
      v5 = result;
    }
    else
    {
      v5 = (_QWORD *)v5[2];
      v6 = *result;
      if ( !*((_BYTE *)*result + 25) )
      {
        do
        {
          v5 = v6;
          result = (_UNKNOWN **)*v6;
          v6 = result;
        }
        while ( !*((_BYTE *)result + 25) );
      }
    }
  }
  return result;
}
