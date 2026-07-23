/*
 * XREFs of sub_140659E70 @ 0x140659E70
 * Callers:
 *     sub_140A32064 @ 0x140A32064 (sub_140A32064.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140652804 @ 0x140652804 (sub_140652804.c)
 *     sub_1406528B4 @ 0x1406528B4 (sub_1406528B4.c)
 *     sub_140A31D80 @ 0x140A31D80 (sub_140A31D80.c)
 *     sub_140A32E08 @ 0x140A32E08 (sub_140A32E08.c)
 *     sub_140A32E50 @ 0x140A32E50 (sub_140A32E50.c)
 *     sub_140A374B0 @ 0x140A374B0 (sub_140A374B0.c)
 *     sub_140A375DC @ 0x140A375DC (sub_140A375DC.c)
 */

__int64 __fastcall sub_140659E70(int a1, int a2, int a3, unsigned int *a4, __int64 a5)
{
  int v9; // ecx
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  unsigned int v13; // edi
  int v14; // r14d
  int v15; // eax
  _BYTE v17[32]; // [rsp+50h] [rbp-B0h] BYREF
  size_t Size; // [rsp+70h] [rbp-90h]
  void *Src; // [rsp+78h] [rbp-88h]
  size_t v20; // [rsp+80h] [rbp-80h]
  void *v21; // [rsp+88h] [rbp-78h]
  _BYTE v22[32]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v23[16]; // [rsp+B0h] [rbp-50h] BYREF
  int v24; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE *v25; // [rsp+C8h] [rbp-38h]
  char v26[96]; // [rsp+D0h] [rbp-30h] BYREF

  if ( (int)sub_140A32E08(a5, v22) < 0 )
    return (unsigned int)-1073740760;
  v10 = sub_140A31D80(v23);
  v11 = v10;
  if ( !v10 )
    return (unsigned int)-1073740760;
  if ( v10 == 9216 )
  {
    if ( (int)sub_140A32E50(&v24, v17) >= 0 )
    {
      v15 = sub_140A375DC(
              a1,
              a2,
              a3,
              (_DWORD)v21,
              (unsigned int)v20,
              (__int64)Src,
              (unsigned int)Size,
              *((_QWORD *)a4 + 1),
              *a4,
              0);
      if ( v15 < 0 )
        return (unsigned int)-1073740760;
      return (unsigned int)v15;
    }
    return (unsigned int)-1073740760;
  }
  if ( (unsigned int)(v10 - 11777) > 1 )
    return (unsigned int)-1073740760;
  v12 = v10 - 11777;
  if ( v11 == 11777 )
  {
    v13 = 32;
    goto LABEL_10;
  }
  if ( v12 != 1 )
    return (unsigned int)-1073740760;
  v13 = 48;
LABEL_10:
  if ( (int)sub_1406528B4((__int64)a4, (__int64)v17) < 0 )
    return (unsigned int)-1073740760;
  if ( v24 != 2 * v13 + 1 )
    return (unsigned int)-1073740760;
  v14 = (int)v25;
  if ( *v25 != 4 )
    return (unsigned int)-1073740760;
  if ( (int)sub_140652804((char *)Src, (unsigned int)Size, v26, v13) < 0 )
    return (unsigned int)-1073740760;
  if ( (int)sub_140652804((char *)v21, (unsigned int)v20, &v26[v13], v13) < 0 )
    return (unsigned int)-1073740760;
  v9 = sub_140A374B0(v11, v14 + 1, 2 * v13, a2, a3, (__int64)v26, 2 * v13);
  if ( v9 < 0 )
    return (unsigned int)-1073740760;
  return (unsigned int)v9;
}
