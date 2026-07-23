/*
 * XREFs of sub_14069726C @ 0x14069726C
 * Callers:
 *     sub_14069717C @ 0x14069717C (sub_14069717C.c)
 *     sub_140698298 @ 0x140698298 (sub_140698298.c)
 *     sub_140955CA4 @ 0x140955CA4 (sub_140955CA4.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140697384 @ 0x140697384 (sub_140697384.c)
 */

__int64 __fastcall sub_14069726C(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 a7,
        int a8,
        __int64 a9)
{
  __int64 v13; // rdi
  int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // ebx
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // eax
  _QWORD v21[10]; // [rsp+58h] [rbp-39h] BYREF

  memset(v21, 0, sizeof(v21));
  v13 = *(_QWORD *)(a1 + 488);
  v21[3] = 0LL;
  LODWORD(v21[8]) = 0;
  LOBYTE(v21[4]) = a6;
  v21[5] = a7;
  LODWORD(v21[6]) = a8;
  v21[7] = a9;
  v21[2] = a4;
  if ( v13 )
  {
    v14 = sub_14042A5E0(a1, a2);
    if ( v14 == -1073741822 )
    {
      v13 = 0LL;
    }
    else
    {
      if ( v14 == -1073741536 )
        return LODWORD(v21[0]);
      if ( v14 )
        return (unsigned int)-1073741595;
    }
  }
  v15 = sub_140697384(a1, a2, a3, v21[2], v21[3], v21[4], v21[5], v21[6], v21[7], v21[8]);
  v16 = v15;
  if ( !v13 )
    return v16;
  LODWORD(v21[0]) = v15;
  v18 = sub_14042A5E0(a1, a2);
  v19 = v18;
  if ( v18 == -1073741822 )
    return v16;
  if ( v18 == -1073741536 )
    return LODWORD(v21[0]);
  v20 = v16;
  if ( v19 )
    return (unsigned int)-1073741595;
  return v20;
}
