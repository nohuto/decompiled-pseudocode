/*
 * XREFs of sub_14039693C @ 0x14039693C
 * Callers:
 *     sub_140A52150 @ 0x140A52150 (sub_140A52150.c)
 * Callees:
 *     sub_1403969E8 @ 0x1403969E8 (sub_1403969E8.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140A521EC @ 0x140A521EC (sub_140A521EC.c)
 *     sub_140A5228C @ 0x140A5228C (sub_140A5228C.c)
 *     sub_140A522B8 @ 0x140A522B8 (sub_140A522B8.c)
 */

__int64 __fastcall sub_14039693C(__int64 a1)
{
  __int64 v1; // rax
  char v2; // di
  int v3; // eax
  int v4; // eax
  __int64 v5; // rcx

  v1 = *(_QWORD *)(a1 + 184);
  v2 = *(_BYTE *)(v1 + 1);
  v3 = *(_DWORD *)(v1 + 24);
  if ( v3 == 1 )
  {
    if ( byte_140C547D1 )
    {
      byte_140C4C688 = 1;
      byte_140C547D1 = 0;
    }
    if ( byte_140C4C178 )
    {
      sub_140A5228C();
      byte_140C4C178 = 0;
    }
    LOBYTE(a1) = 1;
    sub_1403969E8(a1);
    if ( (dword_140C0C60C & 1) != 0 )
    {
      LOBYTE(v5) = 1;
      goto LABEL_9;
    }
  }
  else
  {
    if ( (unsigned int)(v3 - 2) > 3 )
      return 0LL;
    if ( !byte_140C4C178 )
    {
      v4 = sub_140A522B8();
      if ( v4 < 0 )
      {
        if ( v2 == 2 )
          KeBugCheckEx(0x5Cu, 0x10CuLL, v4, 0LL, 0LL);
        return 0LL;
      }
      byte_140C4C178 = 1;
    }
    if ( v2 == 2 )
    {
      sub_1403969E8(0LL);
      if ( (dword_140C0C60C & 1) != 0 )
      {
        v5 = 0LL;
LABEL_9:
        sub_140A521EC(v5);
      }
    }
  }
  return 0LL;
}
