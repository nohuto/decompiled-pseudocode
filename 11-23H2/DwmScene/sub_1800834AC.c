/*
 * XREFs of sub_1800834AC @ 0x1800834AC
 * Callers:
 *     sub_180082598 @ 0x180082598 (sub_180082598.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_18001B880 @ 0x18001B880 (sub_18001B880.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_180081E00 @ 0x180081E00 (sub_180081E00.c)
 *     sub_180082DD0 @ 0x180082DD0 (sub_180082DD0.c)
 *     sub_180083748 @ 0x180083748 (sub_180083748.c)
 *     sub_18008377C @ 0x18008377C (sub_18008377C.c)
 *     sub_1800837BC @ 0x1800837BC (sub_1800837BC.c)
 *     sub_1800837E4 @ 0x1800837E4 (sub_1800837E4.c)
 *     sub_180083810 @ 0x180083810 (sub_180083810.c)
 *     sub_180083844 @ 0x180083844 (sub_180083844.c)
 *     sub_180083864 @ 0x180083864 (sub_180083864.c)
 *     sub_18008388C @ 0x18008388C (sub_18008388C.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800834AC(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  char v6; // r14
  __int64 *v7; // rax
  int v8; // ebx
  __int64 v9; // r8
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  _QWORD *v18; // rax
  __int64 v19; // r8
  unsigned int v20; // xmm1_4
  unsigned int v21; // xmm0_4
  int v22; // xmm0_4
  __int128 v24; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v25[3]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v26[3]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v27[3]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v28[4]; // [rsp+88h] [rbp-78h] BYREF
  _OWORD pExceptionObject[4]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v30[4]; // [rsp+E8h] [rbp-18h] BYREF

  v6 = 0;
  LODWORD(v24) = 0;
  if ( *(_QWORD *)(a3 + 40) == *(_QWORD *)(a3 + 48) )
  {
    v7 = sub_180082DD0(v26, *(_DWORD *)(a3 + 32), a3);
    v8 = 2;
  }
  else
  {
    v7 = sub_180081E00(v27, a3 + 40);
    v8 = 1;
  }
  LODWORD(v24) = v8;
  sub_180081E00(v25, (__int64)v7);
  if ( (v8 & 2) != 0 )
  {
    LOBYTE(v8) = v8 & 0xFD;
    sub_18001B880((__int64)v26);
  }
  if ( (v8 & 1) != 0 )
    sub_18001B880((__int64)v27);
  v10 = *(_DWORD *)(a3 + 32);
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
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
                  if ( v17 != 1 )
                  {
                    sub_180010DD0(v30, (__int64)"ShaderPropertyLayout::AddProperties() -- unsupported property type");
                    v18 = sub_180010DD0(
                            v28,
                            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cp"
                                     "p\\source\\engine\\shaderpropertylayout.cpp");
                    sub_18003AF58(pExceptionObject, (__int64)v18, v19, (__int64)v30, 0);
                    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
                  }
                }
                else
                {
                  pExceptionObject[0] = *(_OWORD *)v25[0];
                  pExceptionObject[1] = *(_OWORD *)(v25[0] + 16);
                  pExceptionObject[2] = *(_OWORD *)(v25[0] + 32);
                  pExceptionObject[3] = *(_OWORD *)(v25[0] + 48);
                  sub_18008377C(a1, a2, pExceptionObject);
                }
              }
              else
              {
                v24 = *(_OWORD *)v25[0];
                sub_180083748(a1, a2, &v24);
              }
            }
            else
            {
              v24 = *(_OWORD *)v25[0];
              sub_180083810(a1, a2, &v24);
            }
          }
          else
          {
            v20 = *(_DWORD *)(v25[0] + 4);
            v21 = *(_DWORD *)(v25[0] + 8);
            LODWORD(v24) = *(_DWORD *)v25[0];
            *(_QWORD *)((char *)&v24 + 4) = __PAIR64__(v21, v20);
            sub_1800837E4(a1, a2, &v24);
          }
        }
        else
        {
          v22 = *(_DWORD *)(v25[0] + 4);
          LODWORD(v24) = *(_DWORD *)v25[0];
          DWORD1(v24) = v22;
          sub_1800837BC(a1, a2, &v24);
        }
      }
      else
      {
        sub_180083864(a1, a2);
      }
    }
    else
    {
      sub_180083844(a1, a2, (unsigned int)(int)*(float *)v25[0]);
    }
  }
  else
  {
    if ( *(float *)v25[0] != 0.0 )
      v6 = 1;
    LOBYTE(v9) = v6;
    sub_18008388C(a1, a2, v9);
  }
  return sub_18001B880((__int64)v25);
}
