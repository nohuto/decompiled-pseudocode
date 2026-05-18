/*
 * XREFs of sub_180090D2C @ 0x180090D2C
 * Callers:
 *     sub_18008FBE8 @ 0x18008FBE8 (sub_18008FBE8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 *     sub_18008EF64 @ 0x18008EF64 (sub_18008EF64.c)
 *     sub_18008F18C @ 0x18008F18C (sub_18008F18C.c)
 *     sub_1800905A4 @ 0x1800905A4 (sub_1800905A4.c)
 *     sub_180090FF8 @ 0x180090FF8 (sub_180090FF8.c)
 *     sub_18009102C @ 0x18009102C (sub_18009102C.c)
 *     sub_18009106C @ 0x18009106C (sub_18009106C.c)
 *     sub_180091094 @ 0x180091094 (sub_180091094.c)
 *     sub_1800910C0 @ 0x1800910C0 (sub_1800910C0.c)
 *     sub_1800910F4 @ 0x1800910F4 (sub_1800910F4.c)
 *     sub_180091114 @ 0x180091114 (sub_180091114.c)
 *     sub_18009113C @ 0x18009113C (sub_18009113C.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180090D2C(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  char v6; // r14
  __int64 v7; // rax
  int v8; // ebx
  __int64 result; // rax
  __int64 v10; // r8
  int v11; // ecx
  char *v12; // rbx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  _OWORD *v20; // rax
  unsigned int v21; // xmm1_4
  unsigned int v22; // xmm0_4
  int v23; // xmm0_4
  _QWORD *v24; // rax
  __int64 v25; // r8
  __int128 v26; // [rsp+30h] [rbp-D0h] BYREF
  char *v27; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v28; // [rsp+48h] [rbp-B8h]
  char *v29; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v30; // [rsp+60h] [rbp-A0h]
  char *v31[3]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v32[4]; // [rsp+88h] [rbp-78h] BYREF
  _OWORD pExceptionObject[4]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v34[4]; // [rsp+E8h] [rbp-18h] BYREF

  LODWORD(v26) = 0;
  v6 = 1;
  if ( *(_QWORD *)(a3 + 40) == *(_QWORD *)(a3 + 48) )
  {
    v7 = sub_1800905A4((__int64)&v27, *(_DWORD *)(a3 + 32));
    v8 = 2;
  }
  else
  {
    v7 = (__int64)sub_18008F18C(&v29, a3 + 40);
    v8 = 1;
  }
  LODWORD(v26) = v8;
  result = (__int64)sub_18008F18C(v31, v7);
  if ( (v8 & 2) != 0 )
  {
    LOBYTE(v8) = v8 & 0xFD;
    if ( v27 )
    {
      result = sub_180010884(v27, (*((_QWORD *)&v28 + 1) - (_QWORD)v27) & 0xFFFFFFFFFFFFFFFCuLL);
      v27 = 0LL;
      v28 = 0LL;
    }
  }
  if ( (v8 & 1) != 0 && v29 )
  {
    result = sub_180010884(v29, (*((_QWORD *)&v30 + 1) - (_QWORD)v29) & 0xFFFFFFFFFFFFFFFCuLL);
    v29 = 0LL;
    v30 = 0LL;
  }
  v11 = *(_DWORD *)(a3 + 32);
  v12 = v31[0];
  if ( v11 )
  {
    v13 = v11 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            v17 = v16 - 1;
            if ( v17 )
            {
              v18 = v17 - 1;
              if ( v18 )
              {
                v19 = v18 - 1;
                if ( v19 )
                {
                  if ( v19 != 1 )
                  {
                    sub_1800113D0(v34, "ShaderPropertyLayout::AddProperties() -- unsupported property type");
                    v24 = sub_1800113D0(
                            v32,
                            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source"
                            "\\engine\\shaderpropertylayout.cpp");
                    sub_18003F4DC(pExceptionObject, (__int64)v24, v25, (__int64)v34, 0);
                    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
                  }
                }
                else
                {
                  v20 = (_OWORD *)sub_18008EF64((__int64)v31[0]);
                  pExceptionObject[0] = *v20;
                  pExceptionObject[1] = v20[1];
                  pExceptionObject[2] = v20[2];
                  pExceptionObject[3] = v20[3];
                  result = sub_18009102C(a1, a2, pExceptionObject);
                }
              }
              else
              {
                v26 = *(_OWORD *)v31[0];
                result = sub_180090FF8(a1, a2, &v26);
              }
            }
            else
            {
              v26 = *(_OWORD *)v31[0];
              result = sub_1800910C0(a1, a2, &v26);
            }
          }
          else
          {
            v21 = *((_DWORD *)v31[0] + 1);
            v22 = *((_DWORD *)v31[0] + 2);
            LODWORD(v26) = *(_DWORD *)v31[0];
            *(_QWORD *)((char *)&v26 + 4) = __PAIR64__(v22, v21);
            result = sub_180091094(a1, a2, &v26);
          }
        }
        else
        {
          v23 = *((_DWORD *)v31[0] + 1);
          LODWORD(v26) = *(_DWORD *)v31[0];
          DWORD1(v26) = v23;
          result = sub_18009106C(a1, a2, &v26);
        }
      }
      else
      {
        result = sub_180091114(a1, a2);
      }
    }
    else
    {
      result = sub_1800910F4(a1, a2, (unsigned int)(int)*(float *)v31[0]);
    }
  }
  else
  {
    if ( *(float *)v31[0] == 0.0 )
      v6 = 0;
    LOBYTE(v10) = v6;
    result = sub_18009113C(a1, a2, v10);
  }
  if ( v12 )
    return sub_180010884(v12, (v31[2] - v12) & 0xFFFFFFFFFFFFFFFCuLL);
  return result;
}
