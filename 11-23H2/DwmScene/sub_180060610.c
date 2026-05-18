/*
 * XREFs of sub_180060610 @ 0x180060610
 * Callers:
 *     sub_18004F904 @ 0x18004F904 (sub_18004F904.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_18001D3F8 @ 0x18001D3F8 (sub_18001D3F8.c)
 *     sub_18002A404 @ 0x18002A404 (sub_18002A404.c)
 *     sub_1800342AC @ 0x1800342AC (sub_1800342AC.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_180044320 @ 0x180044320 (sub_180044320.c)
 *     sub_18004FAF8 @ 0x18004FAF8 (sub_18004FAF8.c)
 *     sub_180060D9C @ 0x180060D9C (sub_180060D9C.c)
 *     sub_180084DC0 @ 0x180084DC0 (sub_180084DC0.c)
 *     sub_180087388 @ 0x180087388 (sub_180087388.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall sub_180060610(__int64 a1, unsigned int a2)
{
  __int64 *v4; // rax
  __int64 v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  unsigned int v9; // ebx
  _QWORD *v10; // rsi
  __int64 j; // rax
  _QWORD *v12; // rbx
  _QWORD *v13; // rsi
  _QWORD *i; // rdi
  _QWORD *v15; // rcx
  __int64 v17; // [rsp+30h] [rbp-79h] BYREF
  __int64 v18; // [rsp+38h] [rbp-71h] BYREF
  __int64 v19; // [rsp+40h] [rbp-69h]
  __int64 v20; // [rsp+58h] [rbp-51h] BYREF
  __int64 v21; // [rsp+60h] [rbp-49h]
  _BYTE v22[8]; // [rsp+68h] [rbp-41h] BYREF
  __int64 v23; // [rsp+70h] [rbp-39h]
  _QWORD v24[4]; // [rsp+78h] [rbp-31h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+98h] [rbp-11h] BYREF

  v4 = (__int64 *)sub_180060D9C(a1, v22);
  v5 = sub_18004FAF8(*v4);
  sub_1800342AC(v5, &v20, a2);
  if ( v23 )
    sub_180010530(v23);
  sub_18002A404(v20 + 24);
  if ( *(_DWORD *)(a1 + 432) != 1 )
  {
    sub_180010DD0(
      v24,
      (__int64)"ShaderFamily::DetachDevice() -- The family must have finished declaration before detaching device");
    v6 = sub_180010DD0(
           &v18,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\shaderfamily.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v6, v7, (__int64)v24, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v8 = **(_QWORD **)(a1 + 480);
  v17 = v8;
  while ( !*(_BYTE *)(v8 + 25) )
  {
    sub_180011C50(v8 + 32, &v18);
    if ( sub_180011DE0(&v18) )
      sub_180044320(v18, a2);
    if ( v19 )
      sub_180010530(v19);
    sub_18001D3F8(&v17);
    v8 = v17;
  }
  v9 = 0;
  v10 = (_QWORD *)(a1 + 256);
  do
  {
    LOBYTE(j) = sub_180011DE0((_QWORD *)(a1 + 256 + 16LL * (int)v9));
    if ( (_BYTE)j )
      LOBYTE(j) = sub_180084DC0(*v10, a2);
    ++v9;
    v10 += 2;
  }
  while ( v9 < 0xA );
  v12 = **(_QWORD ***)(a1 + 416);
  while ( !*((_BYTE *)v12 + 25) )
  {
    v13 = (_QWORD *)v12[5];
    for ( i = (_QWORD *)*v13; i != v13; i = (_QWORD *)*i )
      sub_180087388(i[2], a2);
    j = v12[2];
    if ( *(_BYTE *)(j + 25) )
    {
      for ( j = v12[1]; !*(_BYTE *)(j + 25) && v12 == *(_QWORD **)(j + 16); j = *(_QWORD *)(j + 8) )
        v12 = (_QWORD *)j;
      v12 = (_QWORD *)j;
    }
    else
    {
      v12 = (_QWORD *)v12[2];
      v15 = *(_QWORD **)j;
      if ( !*(_BYTE *)(*(_QWORD *)j + 25LL) )
      {
        do
        {
          v12 = v15;
          j = *v15;
          v15 = (_QWORD *)j;
        }
        while ( !*(_BYTE *)(j + 25) );
      }
    }
  }
  if ( v21 )
    LOBYTE(j) = sub_180010530(v21);
  return j;
}
