/*
 * XREFs of sub_180068BC0 @ 0x180068BC0
 * Callers:
 *     sub_180056888 @ 0x180056888 (sub_180056888.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_18002C7C4 @ 0x18002C7C4 (sub_18002C7C4.c)
 *     sub_180036A48 @ 0x180036A48 (sub_180036A48.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 *     sub_1800496F0 @ 0x1800496F0 (sub_1800496F0.c)
 *     sub_180056B84 @ 0x180056B84 (sub_180056B84.c)
 *     sub_18006958C @ 0x18006958C (sub_18006958C.c)
 *     sub_180092790 @ 0x180092790 (sub_180092790.c)
 *     sub_1800952D4 @ 0x1800952D4 (sub_1800952D4.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180068BC0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 *v6; // rax
  __int64 v7; // rax
  __int64 *v8; // rbx
  __int64 v9; // rdx
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  __int64 **v12; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  unsigned int v15; // ebx
  _QWORD *v16; // rdi
  __int64 *v17; // rbx
  _QWORD *v18; // rsi
  _QWORD *k; // rdi
  __int64 **v20; // rax
  __int64 *m; // rax
  __int64 *n; // rcx
  _QWORD *v24; // rax
  __int64 v25; // r8
  __int128 v26; // [rsp+30h] [rbp-79h] BYREF
  _QWORD v27[2]; // [rsp+40h] [rbp-69h] BYREF
  _BYTE v28[16]; // [rsp+50h] [rbp-59h] BYREF
  _QWORD v29[4]; // [rsp+60h] [rbp-49h] BYREF
  _QWORD v30[4]; // [rsp+80h] [rbp-29h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+A0h] [rbp-9h] BYREF

  v6 = (__int64 *)sub_18006958C(a1, v28, a3, a4);
  v7 = sub_180056B84(*v6);
  sub_180036A48(v7, v27, a2);
  sub_180010910((__int64)v28);
  sub_18002C7C4(v27[0] + 24LL);
  if ( *(_DWORD *)(a1 + 432) != 1 )
  {
    sub_1800113D0(
      v30,
      "ShaderFamily::DetachDevice() -- The family must have finished declaration before detaching device");
    v24 = sub_1800113D0(
            v29,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderfamily.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v24, v25, (__int64)v30, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v8 = **(__int64 ***)(a1 + 480);
  while ( !*((_BYTE *)v8 + 25) )
  {
    v26 = 0LL;
    v9 = v8[5];
    if ( v9 )
    {
      v10 = *(_DWORD *)(v9 + 8);
      while ( v10 )
      {
        v11 = v10;
        v10 = _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 8), v10 + 1, v10);
        if ( v11 == v10 )
        {
          v26 = *((_OWORD *)v8 + 2);
          break;
        }
      }
    }
    if ( sub_1800122C0(&v26) )
      sub_1800496F0(v26, a2);
    sub_180010910((__int64)&v26);
    v12 = (__int64 **)v8[2];
    if ( *((_BYTE *)v12 + 25) )
    {
      for ( i = (__int64 *)v8[1]; !*((_BYTE *)i + 25) && v8 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v8 = i;
      v8 = i;
    }
    else
    {
      v8 = (__int64 *)v8[2];
      for ( j = *v12; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v8 = j;
    }
  }
  v15 = 0;
  v16 = (_QWORD *)(a1 + 256);
  do
  {
    if ( sub_1800122C0((_QWORD *)(a1 + 256 + 16LL * (int)v15)) )
      sub_180092790(*v16, a2);
    ++v15;
    v16 += 2;
  }
  while ( v15 < 0xA );
  v17 = **(__int64 ***)(a1 + 416);
  while ( !*((_BYTE *)v17 + 25) )
  {
    v18 = (_QWORD *)v17[5];
    for ( k = (_QWORD *)*v18; k != v18; k = (_QWORD *)*k )
      sub_1800952D4(k[2], a2);
    v20 = (__int64 **)v17[2];
    if ( *((_BYTE *)v20 + 25) )
    {
      for ( m = (__int64 *)v17[1]; !*((_BYTE *)m + 25) && v17 == (__int64 *)m[2]; m = (__int64 *)m[1] )
        v17 = m;
      v17 = m;
    }
    else
    {
      v17 = (__int64 *)v17[2];
      for ( n = *v20; !*((_BYTE *)n + 25); n = (__int64 *)*n )
        v17 = n;
    }
  }
  return sub_180010910((__int64)v27);
}
