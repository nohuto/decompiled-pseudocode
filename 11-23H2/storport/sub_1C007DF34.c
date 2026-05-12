/*
 * XREFs of sub_1C007DF34 @ 0x1C007DF34
 * Callers:
 *     sub_1C0079FFC @ 0x1C0079FFC (sub_1C0079FFC.c)
 * Callees:
 *     sub_1C00551E0 @ 0x1C00551E0 (sub_1C00551E0.c)
 *     sub_1C00557CC @ 0x1C00557CC (sub_1C00557CC.c)
 *     sub_1C0055A78 @ 0x1C0055A78 (sub_1C0055A78.c)
 *     sub_1C0055B44 @ 0x1C0055B44 (sub_1C0055B44.c)
 *     sub_1C0055B8C @ 0x1C0055B8C (sub_1C0055B8C.c)
 */

__int64 __fastcall sub_1C007DF34(int *a1, _DWORD *a2)
{
  int v4; // ebp
  __int64 v5; // r8
  unsigned int v6; // edx
  unsigned int v7; // r8d
  unsigned __int64 v8; // r10
  _BYTE *v9; // r9
  unsigned int v11; // [rsp+58h] [rbp+10h] BYREF
  ULONG_PTR v12; // [rsp+60h] [rbp+18h] BYREF
  unsigned __int8 *v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0LL;
  v12 = 0LL;
  v11 = 0;
  *a2 = 0;
  v4 = sub_1C00551E0((__int64)a1, 0, 0, 2048, (__int64 *)&v12);
  if ( v4 >= 0 )
  {
    sub_1C0055B8C(a1, "GetProtocolList", 0, 0, 0LL, 0LL);
    v4 = sub_1C00557CC((__int64)a1, v12, v5);
    if ( v4 >= 0 )
    {
      sub_1C0055B44(a1, v12, &v13, &v11);
      if ( v11 >= 8 )
      {
        v6 = 0;
        v7 = v13[7] + (v13[6] << 8);
        if ( v7 )
        {
          v8 = v11;
          v9 = v13 + 8;
          do
          {
            if ( (int)(v6 + 8) + 1LL > v8 )
              break;
            if ( *v9 )
            {
              if ( *v9 == 1 )
              {
                *a2 |= 2u;
              }
              else if ( *v9 == 2 )
              {
                *a2 |= 4u;
              }
            }
            else
            {
              *a2 |= 1u;
            }
            ++v6;
            ++v9;
          }
          while ( v6 < v7 );
        }
      }
    }
  }
  if ( v12 )
    sub_1C0055A78(a1, v12);
  return (unsigned int)v4;
}
