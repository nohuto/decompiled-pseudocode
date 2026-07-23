/*
 * XREFs of sub_1407894A8 @ 0x1407894A8
 * Callers:
 *     sub_1407855F0 @ 0x1407855F0 (sub_1407855F0.c)
 *     sub_140A245FC @ 0x140A245FC (sub_140A245FC.c)
 * Callees:
 *     sub_1407446E0 @ 0x1407446E0 (sub_1407446E0.c)
 *     sub_14076DFF0 @ 0x14076DFF0 (sub_14076DFF0.c)
 *     sub_1407720B8 @ 0x1407720B8 (sub_1407720B8.c)
 *     sub_140789040 @ 0x140789040 (sub_140789040.c)
 *     sub_140A2A168 @ 0x140A2A168 (sub_140A2A168.c)
 *     sub_140A2A2CC @ 0x140A2A2CC (sub_140A2A2CC.c)
 *     sub_140A2C368 @ 0x140A2C368 (sub_140A2C368.c)
 */

__int64 __fastcall sub_1407894A8(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        PLARGE_INTEGER Time,
        ULONG a8)
{
  unsigned int v11; // ebx
  __int64 (**v12)[3]; // r8
  unsigned int v13; // r9d
  __int64 *v14; // rdx
  __int64 **v15; // r8
  __int64 v16; // r9
  __int64 *v17; // rdx
  __int64 **v18; // r8
  unsigned int v19; // r9d
  __int64 *v20; // rdx
  __int64 **v21; // r8
  unsigned int v22; // edx
  __int64 *v23; // r9
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // eax

  v11 = -1073741802;
  if ( !a4 )
  {
    if ( sub_140789040(a2) )
    {
      return (unsigned int)-1073741790;
    }
    else
    {
      v12 = &off_140A3AC00;
      v13 = 0;
      while ( 1 )
      {
        v14 = (__int64 *)*v12;
        if ( *v12 && *(_DWORD *)(a5 + 16) == *((_DWORD *)v14 + 4) )
        {
          v26 = *(_QWORD *)a5 - *v14;
          if ( *(_QWORD *)a5 == *v14 )
            v26 = *(_QWORD *)(a5 + 8) - v14[1];
          if ( !v26 )
            break;
        }
        ++v13;
        v12 += 3;
        if ( v13 >= 0x21 )
          goto LABEL_7;
      }
      v11 = sub_14076DFF0(a1, (int)a2, a3, a5, a6, (__int64)Time, a8);
      if ( v11 != -1073741802 )
        return v11;
LABEL_7:
      v15 = &off_140A3B370;
      v16 = 0LL;
      while ( 1 )
      {
        v17 = *v15;
        if ( *(_DWORD *)(a5 + 16) == *((_DWORD *)*v15 + 4) )
        {
          v27 = *(_QWORD *)a5 - *v17;
          if ( *(_QWORD *)a5 == *v17 )
            v27 = *(_QWORD *)(a5 + 8) - v17[1];
          if ( !v27 )
            break;
        }
        v16 = (unsigned int)(v16 + 1);
        v15 += 4;
        if ( (unsigned int)v16 >= 0xD )
          goto LABEL_10;
      }
      if ( a6 < 2 )
        sub_140A2A168(a1, a2, a5, v16);
      else
        sub_1407446E0(a1, (int)a2, a5, a6, Time, a8);
      v11 = -1073741802;
LABEL_10:
      v18 = &off_140A38610;
      v19 = 0;
      while ( 1 )
      {
        v20 = *v18;
        if ( *(_DWORD *)(a5 + 16) == *((_DWORD *)*v18 + 4) )
        {
          v28 = *(_QWORD *)a5 - *v20;
          if ( *(_QWORD *)a5 == *v20 )
            v28 = *(_QWORD *)(a5 + 8) - v20[1];
          if ( !v28 )
            break;
        }
        ++v19;
        v18 += 4;
        if ( v19 >= 2 )
          goto LABEL_13;
      }
      if ( a6 < 2 )
        v29 = sub_140A2A2CC(a1, a2, a3, a5);
      else
        v29 = sub_140A2C368(a1, a2, a3, a5, a6, Time, a8);
      v11 = v29;
      if ( v29 >= 0 )
      {
        sub_1407720B8(a1, (__int64)a2, 1, a3, 0LL, a5);
        return v11;
      }
      if ( v29 == -1073741802 )
      {
LABEL_13:
        v21 = &off_140A3A8C0;
        v22 = 0;
        while ( 1 )
        {
          v23 = *v21;
          if ( *(_DWORD *)(a5 + 16) == *((_DWORD *)*v21 + 4) )
          {
            v25 = *(_QWORD *)a5 - *v23;
            if ( *(_QWORD *)a5 == *v23 )
              v25 = *(_QWORD *)(a5 + 8) - v23[1];
            if ( !v25 )
              break;
          }
          ++v22;
          v21 += 2;
          if ( v22 >= 0x1C )
            return v11;
        }
        return (unsigned int)-1073741790;
      }
    }
  }
  return v11;
}
