/*
 * XREFs of sub_140756C90 @ 0x140756C90
 * Callers:
 *     sub_1402D6B9C @ 0x1402D6B9C (sub_1402D6B9C.c)
 *     sub_1406DD660 @ 0x1406DD660 (sub_1406DD660.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406FB240 @ 0x1406FB240 (sub_1406FB240.c)
 *     sub_1406FC8B0 @ 0x1406FC8B0 (sub_1406FC8B0.c)
 *     sub_1406FCA10 @ 0x1406FCA10 (sub_1406FCA10.c)
 *     sub_140756F2C @ 0x140756F2C (sub_140756F2C.c)
 *     sub_140757090 @ 0x140757090 (sub_140757090.c)
 *     sub_1407E72CC @ 0x1407E72CC (sub_1407E72CC.c)
 *     sub_1409E637C @ 0x1409E637C (sub_1409E637C.c)
 */

__int64 __fastcall sub_140756C90(
        void *a1,
        __int64 a2,
        int a3,
        __int64 *a4,
        _QWORD *a5,
        _QWORD *a6,
        int a7,
        int a8,
        volatile void *Address,
        int a10,
        int a11,
        __int64 a12,
        KPROCESSOR_MODE a13)
{
  __int64 result; // rax
  int v17; // ebx
  int v18; // edx
  __int64 v19[2]; // [rsp+50h] [rbp-128h] BYREF
  __int128 v20; // [rsp+60h] [rbp-118h] BYREF
  PVOID Object[2]; // [rsp+70h] [rbp-108h]
  _QWORD v22[16]; // [rsp+80h] [rbp-F8h] BYREF
  _QWORD v23[15]; // [rsp+100h] [rbp-78h] BYREF

  memset(v22, 0, sizeof(v22));
  *(_OWORD *)v19 = 0LL;
  v20 = 0LL;
  *(_OWORD *)Object = 0LL;
  memset(v23, 0, 0x48uLL);
  result = sub_1406FB240(a2, a1, a3, a4, (unsigned __int64)a6, (unsigned __int64)a5, a8, 0, a13, v19);
  if ( (int)result < 0 )
  {
    if ( v19[0] )
      ++dword_140C52B1C;
    else
      ++dword_140C52B18;
    return result;
  }
  v17 = sub_1407E72CC(Address, v23);
  if ( v17 < 0 )
  {
LABEL_12:
    if ( v17 >= 0 )
      goto LABEL_13;
    goto LABEL_22;
  }
  if ( (v23[7] & 0xFFFFFFFFFFFFFF9FuLL) == 0 )
  {
    v17 = sub_1406FC8B0(v22, (__int64)Object[0], (__int64)Object[1], v19[0], v19[1], a7, a8, 0LL);
    if ( v17 >= 0 )
    {
      v17 = sub_140756F2C(v22, v19, v23);
      if ( v17 >= 0 )
      {
        HIDWORD(v22[8]) = a11;
        v22[9] = a12;
        v17 = sub_1406FCA10((__int64)Object[0], (__int64)v22, (void **)v19, 0LL, (unsigned int *)&v20, 1, 0);
        if ( v17 >= 0 )
        {
          if ( (v22[7] & 0x400000000LL) != 0 )
            sub_140757090(Object[1]);
          if ( (*((_DWORD *)Object[0] + 14) & 0x20) == 0 && (BYTE8(v20) & 2) != 0 )
          {
            LOBYTE(v18) = a13;
            sub_1409E637C(Object[1], v18, v19[0], v19[1], a7, a8);
          }
          *a4 = v19[0];
          *a6 = v22[3];
          if ( a5 )
            *a5 = v20;
        }
      }
    }
    goto LABEL_12;
  }
  v17 = -1073741811;
LABEL_22:
  if ( v19[0] )
    ++dword_140C52B1C;
  else
    ++dword_140C52B18;
LABEL_13:
  if ( !a3 )
  {
    ObfDereferenceObject(Object[0]);
    ObfDereferenceObjectWithTag(Object[1], 0x77566D4Du);
  }
  return (unsigned int)v17;
}
