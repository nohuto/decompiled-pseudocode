/*
 * XREFs of sub_1403C0934 @ 0x1403C0934
 * Callers:
 *     sub_1403C087C @ 0x1403C087C (sub_1403C087C.c)
 *     sub_1403C08BC @ 0x1403C08BC (sub_1403C08BC.c)
 *     sub_1406433D0 @ 0x1406433D0 (sub_1406433D0.c)
 *     WheaReportHwError @ 0x140643630 (WheaReportHwError.c)
 *     sub_140643CB4 @ 0x140643CB4 (sub_140643CB4.c)
 *     sub_1406456B8 @ 0x1406456B8 (sub_1406456B8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403C0934(__int64 a1, int a2, char a3)
{
  __int64 v3; // r10
  signed __int32 i; // eax
  int v5; // edx
  __int64 v6; // rax
  __int64 v8; // rax
  int v9; // edx
  int v10; // edx
  __int64 v11; // rax

  v3 = 0LL;
  if ( a1 && *(_DWORD *)(a1 + 40) <= 0x10u )
  {
    if ( a3 )
    {
LABEL_8:
      if ( a2 )
      {
        v5 = a2 - 1;
        if ( v5 )
        {
          v9 = v5 - 1;
          if ( v9 )
          {
            v10 = v9 - 1;
            if ( v10 )
            {
              if ( v10 == 1 )
              {
                v11 = *(int *)(a1 + 40);
                if ( (_DWORD)v11 == 16 )
                  return *(_QWORD *)(a1 + 184);
                else
                  return *((_QWORD *)&unk_140D00C50 + 8 * v11 + 6);
              }
            }
            else
            {
              return *((_QWORD *)&unk_140D00C50 + 8 * (__int64)*(int *)(a1 + 40) + 5);
            }
          }
          else
          {
            return *((_QWORD *)&unk_140D00C50 + 8 * (__int64)*(int *)(a1 + 40) + 4);
          }
        }
        else
        {
          v6 = *(int *)(a1 + 40);
          if ( (_DWORD)v6 == 16 )
            return *(_QWORD *)(a1 + 176);
          else
            return *((_QWORD *)&unk_140D00C50 + 8 * v6 + 3);
        }
      }
      else
      {
        v8 = *(int *)(a1 + 40);
        if ( (_DWORD)v8 == 16 )
          return *(_QWORD *)(a1 + 192);
        else
          return *((_QWORD *)&unk_140D00C50 + 8 * v8 + 2);
      }
    }
    else if ( *(_DWORD *)(a1 + 108) != 3 )
    {
      for ( i = *(_DWORD *)(a1 + 92); i >= 0; i = *(_DWORD *)(a1 + 92) )
      {
        if ( i == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 92), i + 1, i) )
          goto LABEL_8;
      }
    }
  }
  return v3;
}
