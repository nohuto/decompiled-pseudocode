/*
 * XREFs of sub_140527A68 @ 0x140527A68
 * Callers:
 *     sub_14051AC2C @ 0x14051AC2C (sub_14051AC2C.c)
 *     sub_14051AD44 @ 0x14051AD44 (sub_14051AD44.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140527A68(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        ULONG_PTR a5)
{
  int v5; // eax
  ULONG_PTR BugCheckParameter4; // rbx
  int v8; // edi
  int v9; // eax
  int v11; // [rsp+60h] [rbp+8h] BYREF
  int v12; // [rsp+64h] [rbp+Ch]
  unsigned __int64 v13; // [rsp+70h] [rbp+18h]
  unsigned __int64 v14; // [rsp+78h] [rbp+20h]

  v5 = *(_DWORD *)(BugCheckParameter3 + 48);
  v12 = 0;
  BugCheckParameter4 = a5;
  v11 = v5;
  v13 = (unsigned __int64)(a4 + 4095) >> 12;
  v14 = a3 >> 12;
  v8 = sub_14042A5E0(&v11, a2);
  if ( v8 < 0 )
  {
    v9 = sub_14042A5E0(&v11, BugCheckParameter4);
    if ( v9 < 0 )
      KeBugCheckEx(0x1D9u, 1uLL, v9, BugCheckParameter3, BugCheckParameter4);
  }
  return (unsigned int)v8;
}
