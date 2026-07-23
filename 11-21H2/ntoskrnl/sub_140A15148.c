/*
 * XREFs of sub_140A15148 @ 0x140A15148
 * Callers:
 *     sub_140A18F30 @ 0x140A18F30 (sub_140A18F30.c)
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140841A58 @ 0x140841A58 (sub_140841A58.c)
 *     sub_140A1530C @ 0x140A1530C (sub_140A1530C.c)
 */

__int64 __fastcall sub_140A15148(int *a1, __int64 a2)
{
  bool v3; // zf
  int v5; // ebx
  int v6; // edi
  __int16 v8; // [rsp+70h] [rbp+38h] BYREF
  unsigned __int16 v9; // [rsp+78h] [rbp+40h] BYREF
  int v10; // [rsp+80h] [rbp+48h] BYREF
  int v11; // [rsp+88h] [rbp+50h] BYREF

  v3 = *(_DWORD *)(a2 + 64) == 1;
  v5 = 0;
  v9 = 0;
  v8 = 0;
  v11 = 0;
  v10 = 0;
  if ( !v3 )
  {
    v6 = sub_140841A58(a2);
    if ( v6 >= 0 )
    {
      switch ( *(_DWORD *)(a2 + 64) )
      {
        case 3:
          v5 = 2;
          goto LABEL_34;
        case 4:
          v5 = 3;
          goto LABEL_34;
        case 5:
          v5 = 4;
          goto LABEL_34;
        case 6:
          v6 = sub_140A1530C((unsigned int)&v9, (unsigned int)&v8, (unsigned int)&v10, (unsigned int)&v11, a2);
          if ( v6 >= 0 )
          {
            if ( v10 )
            {
              if ( v8 == 523 )
              {
                v5 = 15;
              }
              else if ( (v11 & 0x20002) == 0x20002 )
              {
                v5 = 14;
              }
              else
              {
                v5 = 13 - ((v11 & 0x20003) != 1);
              }
            }
            else if ( v8 == 523 )
            {
              if ( v9 == 512 )
              {
                v5 = 11;
              }
              else if ( v9 == 34404 )
              {
                v5 = 9;
              }
              else
              {
                v5 = 10;
                if ( v9 != 43620 )
                  v5 = 8;
              }
            }
            else if ( v9 == 332 )
            {
              v5 = 6;
            }
            else if ( v9 == 448 || v9 == 452 )
            {
              v5 = 7;
            }
            else
            {
              v5 = 5;
            }
            goto LABEL_34;
          }
          break;
        default:
          v6 = -1073741823;
          break;
      }
    }
    sub_1406E0C3C(1LL, (__int64)"AslFileMappingGetFileKindDetail");
    goto LABEL_35;
  }
  v5 = 1;
LABEL_34:
  v6 = 0;
LABEL_35:
  if ( a1 )
    *a1 = v5;
  return (unsigned int)v6;
}
