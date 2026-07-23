/*
 * XREFs of sub_140A31F7C @ 0x140A31F7C
 * Callers:
 *     sub_140A32064 @ 0x140A32064 (sub_140A32064.c)
 * Callees:
 *     sub_140A32D28 @ 0x140A32D28 (sub_140A32D28.c)
 *     sub_140A32F88 @ 0x140A32F88 (sub_140A32F88.c)
 */

__int64 __fastcall sub_140A31F7C(_DWORD *a1, _DWORD *a2, __int64 a3)
{
  unsigned int v5; // ebx
  _OWORD v8[2]; // [rsp+28h] [rbp-20h] BYREF
  char v9; // [rsp+68h] [rbp+20h] BYREF

  v5 = 0;
  v9 = 0;
  v8[0] = 0LL;
  if ( *a1 && (int)sub_140A32F88(&qword_140A389F0, a1, &v9, v8) > 0 )
  {
    if ( v9 )
    {
      if ( (int)sub_140A32D28(v8, a2, a3) <= 0 )
        return (unsigned int)-1073740760;
    }
    else
    {
      *a2 = 0;
    }
    return v5;
  }
  else
  {
    return (unsigned int)-1073740760;
  }
}
