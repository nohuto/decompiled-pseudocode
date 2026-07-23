/*
 * XREFs of sub_1409A0FD0 @ 0x1409A0FD0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_14036C0A0 @ 0x14036C0A0 (sub_14036C0A0.c)
 *     sub_14036C1D4 @ 0x14036C1D4 (sub_14036C1D4.c)
 *     sub_1405DFAC4 @ 0x1405DFAC4 (sub_1405DFAC4.c)
 *     sub_1409A0CF0 @ 0x1409A0CF0 (sub_1409A0CF0.c)
 */

__int64 __fastcall sub_1409A0FD0(__int64 a1, __int128 *a2, unsigned int a3, __int64 a4, __int64 *a5)
{
  unsigned int v9; // ecx
  _QWORD *v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdi
  int v15; // ebx
  __int128 v16; // xmm0
  __int64 v17; // rax
  __int64 *v18; // rcx

  if ( a1 && a3 && a4 && a5 )
  {
    v9 = 0;
    v10 = (_QWORD *)(a4 + 24);
    while ( *(v10 - 2) && *((_WORD *)v10 - 12) && *v10 )
    {
      ++v9;
      v10 += 4;
      if ( v9 >= a3 )
      {
        v11 = 32 * a3;
        if ( 32 * (unsigned __int64)a3 > 0xFFFFFFFF )
          return (unsigned int)-1073741675;
        v12 = v11 + 48;
        if ( (unsigned int)v12 < v11 )
        {
          return (unsigned int)-1073741675;
        }
        else
        {
          v13 = sub_14036C1D4(v12, *(_DWORD *)(a1 + 24));
          v14 = v13;
          if ( v13 )
          {
            v16 = *a2;
            *(_QWORD *)(v13 + 16) = a1;
            *(_OWORD *)(v13 + 24) = v16;
            *(_QWORD *)(v13 + 8) = v13;
            *(_QWORD *)v13 = v13;
            *(_DWORD *)(v13 + 40) = 0;
            if ( a3 )
            {
              v17 = 0LL;
              while ( 1 )
              {
                v15 = sub_1405DFAC4(*(_DWORD *)(a1 + 24), (unsigned __int16 *)(32 * v17 + a4), 32 * v17 + v14 + 48);
                if ( v15 < 0 )
                  break;
                v17 = (unsigned int)(*(_DWORD *)(v14 + 40) + 1);
                *(_DWORD *)(v14 + 40) = v17;
                if ( (unsigned int)v17 >= a3 )
                  goto LABEL_19;
              }
              sub_1409A0CF0((_QWORD *)v14);
            }
            else
            {
LABEL_19:
              ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
              v18 = *(__int64 **)(a1 + 64);
              if ( *v18 != a1 + 56 )
                __fastfail(3u);
              *(_QWORD *)(v14 + 8) = v18;
              *(_QWORD *)v14 = a1 + 56;
              *v18 = v14;
              *(_QWORD *)(a1 + 64) = v14;
              sub_14036C0A0(a1 + 16);
              *a5 = v14;
              return 0;
            }
          }
          else
          {
            return (unsigned int)-1073741670;
          }
        }
        return (unsigned int)v15;
      }
    }
  }
  return (unsigned int)-1073741811;
}
