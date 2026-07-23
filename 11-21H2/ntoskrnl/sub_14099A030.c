/*
 * XREFs of sub_14099A030 @ 0x14099A030
 * Callers:
 *     sub_14099A000 @ 0x14099A000 (sub_14099A000.c)
 * Callees:
 *     sub_140255D5C @ 0x140255D5C (sub_140255D5C.c)
 *     ExQueryWnfStateData @ 0x1407EEE10 (ExQueryWnfStateData.c)
 *     sub_1407EEF7C @ 0x1407EEF7C (sub_1407EEF7C.c)
 *     sub_140993C6C @ 0x140993C6C (sub_140993C6C.c)
 */

__int64 __fastcall sub_14099A030(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  int v3; // edi
  int v4; // ebx
  int v5; // ecx
  _DWORD v7[4]; // [rsp+30h] [rbp-10h] BYREF
  char v8; // [rsp+60h] [rbp+20h] BYREF
  unsigned int v9; // [rsp+68h] [rbp+28h] BYREF
  int v10; // [rsp+70h] [rbp+30h] BYREF
  int v11; // [rsp+78h] [rbp+38h] BYREF

  v11 = 0;
  v10 = 0;
  v9 = 0;
  v8 = 0;
  v3 = sub_140255D5C((__int64)&stru_140011F28, a2, 3, &v11, 4u, &v9);
  if ( v3 >= 0 )
  {
    v3 = sub_140255D5C((__int64)&stru_1400131B8, v2, 3, &v10, 4u, &v9);
    if ( v3 >= 0 )
    {
      v4 = 1;
      v9 = 1;
      v3 = ExQueryWnfStateData(qword_140C1F5D0, v7, &v8, &v9);
      if ( v3 >= 0 )
      {
        if ( v9 )
        {
          if ( !v10 || v11 != 1 || v8 || (dword_140C22390 & 1) != 0 )
            v4 = 0;
          v5 = dword_140D048D4;
          if ( dword_140D048D4 != v4 )
          {
            dword_140D048D4 = v4;
            sub_140993C6C(v5);
            sub_1407EEF7C(0);
          }
        }
      }
    }
  }
  return (unsigned int)v3;
}
