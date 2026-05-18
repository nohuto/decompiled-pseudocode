/*
 * XREFs of sub_180092B70 @ 0x180092B70
 * Callers:
 *     sub_180092D8C @ 0x180092D8C (sub_180092D8C.c)
 *     sub_18009319C @ 0x18009319C (sub_18009319C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_1800122D0 @ 0x1800122D0 (sub_1800122D0.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 *     sub_180090760 @ 0x180090760 (sub_180090760.c)
 *     sub_180092DD8 @ 0x180092DD8 (sub_180092DD8.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180092B70(__int64 a1)
{
  __int64 v2; // r15
  __int64 result; // rax
  _QWORD *v4; // rax
  bool v5; // bl
  _QWORD *v6; // rax
  unsigned int *v7; // rdx
  unsigned int *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // r11
  unsigned int *i; // rbx
  __int64 v14; // r12
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // r8
  char v25; // [rsp+38h] [rbp-89h]
  unsigned int *v26; // [rsp+40h] [rbp-81h]
  _QWORD v27[2]; // [rsp+48h] [rbp-79h] BYREF
  _QWORD v28[2]; // [rsp+58h] [rbp-69h] BYREF
  _QWORD v29[2]; // [rsp+68h] [rbp-59h] BYREF
  _QWORD v30[4]; // [rsp+78h] [rbp-49h] BYREF
  _QWORD v31[4]; // [rsp+98h] [rbp-29h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+B8h] [rbp-9h] BYREF

  v2 = *(_QWORD *)(a1 + 112);
  result = *(unsigned int *)(v2 + 80);
  if ( *(_DWORD *)(a1 + 104) != (_DWORD)result )
  {
    sub_180090760(*(_QWORD *)(a1 + 16), v29);
    v4 = (_QWORD *)sub_180092DD8(v2, v30);
    v5 = sub_1800122D0(v29, v4);
    sub_180010910((__int64)v30);
    if ( v5 )
    {
      sub_1800113D0(
        v31,
        "ShaderPropertyBlock::FlushPropertiesFromMaster() -- cannot flush block properties unless the master layout has b"
        "een previously attached via SetMasterLayout().");
      v23 = sub_1800113D0(
              v30,
              "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shad"
              "erpropertyblock.cpp");
      sub_18003F4DC(pExceptionObject, (__int64)v23, v24, (__int64)v31, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
    v25 = 0;
    v6 = *(_QWORD **)(a1 + 16);
    v7 = (unsigned int *)v6[150];
    v8 = (unsigned int *)v6[149];
    if ( v8 != v7 )
    {
      do
      {
        v9 = v8[1];
        v10 = *(_QWORD *)(a1 + 32);
        v11 = *v8;
        v12 = *(_QWORD *)(v2 + 32);
        if ( *(_DWORD *)(v10 + 4 * v9) != *(_DWORD *)(v12 + 4 * v11) )
        {
          *(_DWORD *)(v10 + 4 * v9) = *(_DWORD *)(v12 + 4 * v11);
          v25 = 1;
        }
        v8 += 2;
      }
      while ( v8 != v7 );
      v6 = *(_QWORD **)(a1 + 16);
    }
    v26 = (unsigned int *)v6[153];
    for ( i = (unsigned int *)v6[152]; i != v26; i += 2 )
    {
      v14 = 5LL * *i;
      v15 = *(_QWORD *)(v2 + 56);
      v16 = i[1];
      v17 = 5 * v16;
      v18 = *(_QWORD *)(a1 + 56);
      v19 = *(_QWORD *)(v15 + 40LL * *i + 8);
      if ( v19 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
        v19 = *(_QWORD *)(v15 + 8 * v14 + 8);
      }
      v20 = *(_QWORD *)(v15 + 8 * v14);
      v27[0] = *(_QWORD *)(v18 + 40 * v16);
      *(_QWORD *)(v18 + 40 * v16) = v20;
      v27[1] = *(_QWORD *)(v18 + 40 * v16 + 8);
      *(_QWORD *)(v18 + 40 * v16 + 8) = v19;
      sub_180010910((__int64)v27);
      v21 = *(_QWORD *)(v15 + 8 * v14 + 24);
      if ( v21 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v21 + 8));
        v21 = *(_QWORD *)(v15 + 8 * v14 + 24);
      }
      v22 = *(_QWORD *)(v15 + 8 * v14 + 16);
      v28[0] = *(_QWORD *)(v18 + 8 * v17 + 16);
      *(_QWORD *)(v18 + 8 * v17 + 16) = v22;
      v28[1] = *(_QWORD *)(v18 + 8 * v17 + 24);
      *(_QWORD *)(v18 + 8 * v17 + 24) = v21;
      sub_180010910((__int64)v28);
    }
    *(_DWORD *)(a1 + 104) = *(_DWORD *)(v2 + 80);
    if ( v25 )
      ++*(_DWORD *)(a1 + 80);
    return sub_180010910((__int64)v29);
  }
  return result;
}
