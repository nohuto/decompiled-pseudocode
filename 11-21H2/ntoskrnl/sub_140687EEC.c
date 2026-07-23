/*
 * XREFs of sub_140687EEC @ 0x140687EEC
 * Callers:
 *     sub_1406879B8 @ 0x1406879B8 (sub_1406879B8.c)
 *     PsAssignProcessToJobObject @ 0x140688050 (PsAssignProcessToJobObject.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     sub_1406C9B74 @ 0x1406C9B74 (sub_1406C9B74.c)
 *     sub_1406E1784 @ 0x1406E1784 (sub_1406E1784.c)
 *     sub_1409B0334 @ 0x1409B0334 (sub_1409B0334.c)
 */

__int64 __fastcall sub_140687EEC(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  struct _EX_RUNDOWN_REF *v8; // r14
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  _DWORD *v14; // r9

  v4 = 0;
  if ( a2 )
  {
    v8 = (struct _EX_RUNDOWN_REF *)(a2 + 1112);
    if ( sub_140347810((struct _EX_RUNDOWN_REF *)(a2 + 1112)) )
    {
      if ( (*(_DWORD *)(a2 + 1124) & 8) != 0 )
      {
        v4 = -1073741558;
      }
      else if ( *(_QWORD *)(a2 + 1296) )
      {
        if ( (unsigned int)sub_1406C9B74(a2, a1) == 292 )
        {
          *a4 = 2;
        }
        else
        {
          v10 = a1;
          if ( a1 )
          {
            while ( v10 != *(_QWORD *)(a2 + 1296) )
            {
              v10 = *(_QWORD *)(v10 + 1264);
              if ( !v10 )
                goto LABEL_11;
            }
            *a4 = 3;
          }
          else
          {
LABEL_11:
            if ( (unsigned __int8)sub_1406E1784(a1) || *(_DWORD *)(a1 + 212) )
            {
              if ( (unsigned __int8)sub_1409B0334(v11) )
                *a4 = 5;
              else
                v4 = -1073741637;
            }
            else
            {
              *a4 = 4;
            }
          }
        }
      }
      else
      {
        *a4 = 1;
      }
      sub_1402AD030(v8);
      return v4;
    }
    else
    {
      return 3221225738LL;
    }
  }
  else if ( (unsigned __int8)((__int64 (*)(void))sub_1406E1784)()
         || *(_DWORD *)(v12 + 212)
         || *(_QWORD *)(v12 + 1752) == -1LL )
  {
    return 3221225659LL;
  }
  else
  {
    *v14 = (v13 != 0) + 6;
    return 0LL;
  }
}
