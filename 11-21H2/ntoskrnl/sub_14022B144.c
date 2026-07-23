/*
 * XREFs of sub_14022B144 @ 0x14022B144
 * Callers:
 *     sub_1406A2ECC @ 0x1406A2ECC (sub_1406A2ECC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14022B144(__int64 a1, unsigned int *a2)
{
  unsigned int v4; // r8d
  unsigned __int64 v5; // rax
  unsigned int v6; // edx
  unsigned __int16 v7; // ax
  unsigned int v8; // ecx
  __int64 ***v10; // r9
  __int64 **v11; // r8
  unsigned int v12; // r10d
  __int64 **v13; // r9
  __int64 *v14; // r8
  unsigned int v15; // r10d
  __int64 ***v16; // r9
  __int64 **v17; // r8
  unsigned int v18; // r10d

  v4 = (*a2 + 7) & 0xFFFFFFF8;
  if ( v4 < *a2 )
    return (unsigned int)-1073741675;
  v5 = (unsigned __int64)*(unsigned int *)(a1 + 60) << 6;
  if ( v5 > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  v6 = v4 + v5;
  if ( v4 + (unsigned int)v5 < v4 )
    return (unsigned int)-1073741675;
  v7 = *(_WORD *)(a1 + 48);
  v8 = 0;
  if ( !v7 )
    return (unsigned int)-1073741811;
  if ( v7 > 2u )
  {
    switch ( v7 )
    {
      case 3u:
        v10 = (__int64 ***)(a1 + 72);
        v11 = *v10;
        while ( v11 != (__int64 **)v10 )
        {
          v12 = v6 + *((unsigned __int16 *)v11 + 20);
          if ( v12 < v6 )
            return (unsigned int)-1073741675;
          v11 = (__int64 **)*v11;
          v6 = v12;
        }
        goto LABEL_6;
      case 4u:
        v16 = (__int64 ***)(a1 + 72);
        v17 = *v16;
        while ( v17 != (__int64 **)v16 )
        {
          v18 = v6 + *((unsigned __int16 *)v17 + 24);
          if ( v18 < v6 )
            return (unsigned int)-1073741675;
          v17 = (__int64 **)*v17;
          v6 = v18;
        }
        goto LABEL_6;
      case 5u:
        goto LABEL_19;
      case 6u:
        goto LABEL_6;
      case 0x10u:
LABEL_19:
        v13 = (__int64 **)(a1 + 72);
        v14 = *v13;
        while ( v14 != (__int64 *)v13 )
        {
          v15 = v6 + *((_DWORD *)v14 + 12);
          if ( v15 < v6 )
            return (unsigned int)-1073741675;
          v14 = (__int64 *)*v14;
          v6 = v15;
        }
        goto LABEL_6;
    }
    return (unsigned int)-1073741811;
  }
LABEL_6:
  *a2 = v6;
  return v8;
}
