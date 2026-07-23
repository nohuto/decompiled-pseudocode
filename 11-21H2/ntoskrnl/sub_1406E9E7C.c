/*
 * XREFs of sub_1406E9E7C @ 0x1406E9E7C
 * Callers:
 *     sub_14076DC10 @ 0x14076DC10 (sub_14076DC10.c)
 *     sub_140B010DC @ 0x140B010DC (sub_140B010DC.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     sub_14077198C @ 0x14077198C (sub_14077198C.c)
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 */

__int64 __fastcall sub_1406E9E7C(int a1)
{
  int v2; // ebx
  int v3; // eax
  _DWORD v5[4]; // [rsp+60h] [rbp-10h] BYREF
  char v6; // [rsp+A8h] [rbp+38h] BYREF
  int v7; // [rsp+B0h] [rbp+40h] BYREF
  int v8; // [rsp+B8h] [rbp+48h] BYREF

  v7 = 0;
  v8 = 0;
  v5[0] = 0;
  v6 = 0;
  v2 = sub_14077DA5C(
         qword_140D00AC0,
         a1,
         5,
         0,
         0LL,
         (__int64)&qword_14000ED70,
         (__int64)&v7,
         (__int64)&v6,
         1,
         (__int64)&v8,
         0);
  if ( v2 >= 0 && v6 && v7 == 17 )
  {
    v3 = sub_14077DA5C(
           qword_140D00AC0,
           a1,
           5,
           0,
           0LL,
           (__int64)&MatchingChangeStamp,
           (__int64)&v7,
           (__int64)v5,
           4,
           (__int64)&v8,
           0);
    v2 = v3;
    if ( v3 >= 0 )
    {
      if ( v7 != 7 )
      {
LABEL_9:
        v2 = sub_14077198C(
               qword_140D00AC0,
               a1,
               5,
               0LL,
               (__int64)&MatchingChangeStamp,
               7,
               (__int64)&qword_14000E4D8,
               4,
               0);
        if ( v2 < 0 )
          return (unsigned int)v2;
LABEL_10:
        ZwUpdateWnfStateData(&stru_14000E4D0, 0LL, 0, 0LL, 0LL, 0, 0);
        return (unsigned int)v2;
      }
      if ( !v5[0] )
        return (unsigned int)v2;
    }
    if ( v3 != -1073741275 )
      goto LABEL_10;
    goto LABEL_9;
  }
  return (unsigned int)v2;
}
