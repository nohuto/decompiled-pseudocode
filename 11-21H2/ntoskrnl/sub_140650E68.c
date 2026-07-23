/*
 * XREFs of sub_140650E68 @ 0x140650E68
 * Callers:
 *     sub_1406515E8 @ 0x1406515E8 (sub_1406515E8.c)
 *     IoCreateDisk @ 0x140930510 (IoCreateDisk.c)
 * Callees:
 *     sub_14064FAD0 @ 0x14064FAD0 (sub_14064FAD0.c)
 *     sub_140651824 @ 0x140651824 (sub_140651824.c)
 *     sub_1406518D8 @ 0x1406518D8 (sub_1406518D8.c)
 *     sub_14065246C @ 0x14065246C (sub_14065246C.c)
 */

__int64 __fastcall sub_140650E68(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 v3; // r8
  __int64 v5; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v3 = *a2;
    if ( !(_DWORD)v3 )
    {
      sub_1406518D8(&v6, a1, v3, a2);
      return sub_140651824(&v6, v5);
    }
    a3 = (unsigned int)(v3 - 1);
    if ( !(_DWORD)a3 )
    {
      v6 = a1;
      return sub_14064FAD0((__int64)&v6, (__int64)a2);
    }
    if ( (_DWORD)a3 != 1 )
      return 3221225659LL;
  }
  v6 = a1;
  return sub_14065246C(&v6, a2, a3, a2);
}
