/*
 * XREFs of sub_14066B464 @ 0x14066B464
 * Callers:
 *     sub_14066AA00 @ 0x14066AA00 (sub_14066AA00.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14066A774 @ 0x14066A774 (sub_14066A774.c)
 *     sub_14066B514 @ 0x14066B514 (sub_14066B514.c)
 *     SeDeleteClientSecurity @ 0x1407A8070 (SeDeleteClientSecurity.c)
 */

__int64 __fastcall sub_14066B464(int a1, int a2, void *a3, unsigned int a4, _DWORD *a5)
{
  __int64 result; // rax
  unsigned int v10; // ebx
  _BYTE v11[8]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v12; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v13[80]; // [rsp+40h] [rbp-58h] BYREF

  memset(v13, 0, 0x44uLL);
  v12 = 0LL;
  v11[0] = 0;
  result = sub_14066B514(a1, a2, (unsigned int)&v12, (unsigned int)v13, (__int64)v11);
  if ( (int)result >= 0 )
  {
    v10 = sub_14066A774(v12, a3, a4, a5);
    if ( v11[0] )
      SeDeleteClientSecurity(v13);
    return v10;
  }
  return result;
}
