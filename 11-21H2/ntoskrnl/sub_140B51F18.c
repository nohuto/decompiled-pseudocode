/*
 * XREFs of sub_140B51F18 @ 0x140B51F18
 * Callers:
 *     sub_140B27D88 @ 0x140B27D88 (sub_140B27D88.c)
 * Callees:
 *     sub_140B55AEC @ 0x140B55AEC (sub_140B55AEC.c)
 *     sub_140B55BE0 @ 0x140B55BE0 (sub_140B55BE0.c)
 */

_BOOL8 __fastcall sub_140B51F18(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  _BOOL8 result; // rax
  __int64 v6; // [rsp+30h] [rbp-38h] BYREF
  __int64 v7; // [rsp+38h] [rbp-30h] BYREF
  __int64 v8; // [rsp+40h] [rbp-28h] BYREF
  __int64 v9; // [rsp+48h] [rbp-20h] BYREF
  __int64 v10; // [rsp+50h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 240);
  result = 0;
  if ( v1 )
  {
    if ( *(_DWORD *)v1 >= 0xED8u )
    {
      v2 = *(_QWORD *)(v1 + 40);
      if ( (int)sub_140B55AEC(v2, (unsigned int)&v6, (unsigned int)&v7, (unsigned int)&v8, (__int64)&v9, (__int64)&v10) >= 0 )
      {
        if ( (unsigned __int8)sub_140B55BE0(v2) )
        {
          v3 = v2 + (unsigned int)dword_140C0DAE4;
          if ( v3 )
          {
            v4 = v2 + *(unsigned int *)(v3 + 20);
            if ( v4 )
            {
              if ( *(_DWORD *)(v4 + 12) )
                return 1;
            }
          }
        }
      }
    }
  }
  return result;
}
