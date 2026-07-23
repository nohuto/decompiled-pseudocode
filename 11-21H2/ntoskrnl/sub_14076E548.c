/*
 * XREFs of sub_14076E548 @ 0x14076E548
 * Callers:
 *     sub_14076E224 @ 0x14076E224 (sub_14076E224.c)
 *     sub_140A297B0 @ 0x140A297B0 (sub_140A297B0.c)
 * Callees:
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14076E548(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        PVOID *a6,
        unsigned int *a7,
        _QWORD *a8,
        unsigned int *a9)
{
  __int64 v13; // r10
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int v17; // eax
  __int64 Pool2; // rax
  unsigned int v19; // edx
  _BYTE *v20; // r8
  unsigned int v21; // eax
  unsigned int v22; // [rsp+60h] [rbp-38h] BYREF
  int v23[3]; // [rsp+64h] [rbp-34h] BYREF

  *a8 = 0LL;
  *a9 = 0;
  v13 = (__int64)*a6;
  v23[0] = 0;
  v22 = 0;
  while ( 1 )
  {
    v14 = sub_14077DA5C(a1, a2, a3, a4, 0LL, a5, (__int64)v23, v13, *a7, (__int64)&v22, 0);
    v15 = v14;
    if ( v14 != -1073741789 )
      break;
    v17 = v22;
    if ( v22 <= *a7 )
      return (unsigned int)-1073741823;
    if ( *a6 )
    {
      ExFreePoolWithTag(*a6, 0);
      v17 = v22;
    }
    *a7 = v17;
    Pool2 = ExAllocatePool2(256LL, v17, 1380994640LL);
    *a6 = (PVOID)Pool2;
    v13 = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741801;
  }
  if ( v14 < 0 )
    return v15;
  if ( v23[0] != 4099 )
    return (unsigned int)-1073741823;
  v19 = v22;
  if ( !v22 )
    return (unsigned int)-1073741823;
  v20 = *a6;
  v21 = *(_DWORD *)*a6 & 0x7F;
  if ( v21 && (v21 != 1 || v22 >= 0x10) && (v21 < 2 || v22 >= 0x14) && (v20[8] & 0x38u) < 0x30 )
  {
    *a8 = v20;
    *a9 = v19;
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v15;
}
