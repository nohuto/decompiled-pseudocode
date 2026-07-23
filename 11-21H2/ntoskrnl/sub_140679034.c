/*
 * XREFs of sub_140679034 @ 0x140679034
 * Callers:
 *     sub_140679034 @ 0x140679034 (sub_140679034.c)
 *     sub_140685A20 @ 0x140685A20 (sub_140685A20.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140679034 @ 0x140679034 (sub_140679034.c)
 *     sub_140679280 @ 0x140679280 (sub_140679280.c)
 *     sub_1406793A4 @ 0x1406793A4 (sub_1406793A4.c)
 *     sub_1406FF880 @ 0x1406FF880 (sub_1406FF880.c)
 */

__int64 __fastcall sub_140679034(char *Object, __int64 a2)
{
  int v4; // r14d
  __int64 v5; // r9
  int v6; // eax
  int v7; // esi
  int v9; // ecx
  int v10; // ecx
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int64 v14; // [rsp+30h] [rbp-49h] BYREF
  __int64 v15; // [rsp+38h] [rbp-41h] BYREF
  __int64 v16[2]; // [rsp+40h] [rbp-39h] BYREF
  __int128 v17; // [rsp+50h] [rbp-29h]
  _OWORD v18[4]; // [rsp+60h] [rbp-19h] BYREF

  v16[1] = 0LL;
  v15 = 0LL;
  v17 = 0LL;
  memset(v18, 0, sizeof(v18));
  v16[0] = a2;
  v4 = 0;
  LODWORD(v14) = 0;
  ExAcquireResourceExclusiveLite((PERESOURCE)(Object + 56), 1u);
  v6 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    v9 = *((_DWORD *)Object + 378) & 0x200;
    if ( *(_BYTE *)(a2 + 4) )
    {
      if ( v9 )
      {
LABEL_34:
        LODWORD(v14) = -1073741811;
        ExReleaseResourceLite((PERESOURCE)(Object + 56));
        return (unsigned int)v14;
      }
    }
    else if ( !v9 )
    {
      goto LABEL_34;
    }
  }
  if ( (v6 & 4) == 0 )
    goto LABEL_3;
  v10 = *((_DWORD *)Object + 378) & 0x80000;
  if ( *(_BYTE *)(a2 + 5) )
  {
    if ( v10 )
      goto LABEL_34;
  }
  else if ( !v10 )
  {
    goto LABEL_34;
  }
LABEL_3:
  if ( (v6 & 2) != 0 )
  {
    if ( (*((_DWORD *)Object + 378) & 0x800) != 0 )
    {
      LOBYTE(v5) = 1;
      sub_1406793A4(Object, &v15, a2 + 8, v5);
      if ( v15 )
      {
        v11 = *((_OWORD *)Object + 68);
        v18[0] = *((_OWORD *)Object + 67);
        v12 = *((_OWORD *)Object + 69);
        v18[1] = v11;
        v13 = *((_OWORD *)Object + 70);
        v18[2] = v12;
        v18[3] = v13;
      }
    }
    *((_QWORD *)Object + 143) = *(_QWORD *)(a2 + 8);
    v6 = *(_DWORD *)a2;
  }
  v7 = 5;
  if ( (v6 & 1) != 0 )
  {
    if ( *(_BYTE *)(a2 + 4) )
      _interlockedbittestandset((volatile signed __int32 *)Object + 378, 9u);
    else
      _interlockedbittestandreset((volatile signed __int32 *)Object + 378, 9u);
    v6 = *(_DWORD *)a2;
    v4 = 5;
  }
  if ( (v6 & 4) != 0 )
  {
    if ( *(_BYTE *)(a2 + 5) )
      _interlockedbittestandset((volatile signed __int32 *)Object + 378, 0x13u);
    else
      _interlockedbittestandreset((volatile signed __int32 *)Object + 378, 0x13u);
  }
  else
  {
    v7 = v4;
    if ( !v4 )
      goto LABEL_9;
  }
  sub_1406FF880(Object, (__int64)v16, v7);
LABEL_9:
  ExReleaseResourceLite((PERESOURCE)(Object + 56));
  if ( v7 )
  {
    sub_1406FF880(Object, (__int64)&v14, 0);
    if ( (int)v14 < 0 )
    {
      *(_DWORD *)a2 &= ~4u;
      LODWORD(v17) = 4;
      BYTE5(v17) = 0;
      sub_140679034(Object);
      LODWORD(v14) = 262;
    }
  }
  sub_140679280(Object);
  return (unsigned int)v14;
}
