/*
 * XREFs of TrimString @ 0x1C0065544
 * Callers:
 *     ATAShimGetMsftId @ 0x1C0064EF0 (ATAShimGetMsftId.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 */

__int64 __fastcall TrimString(unsigned __int16 *a1, struct _STRING *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v6; // esi
  __int64 v7; // rdi
  __int64 v8; // rdi
  const char *Pool; // r8
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  char *v12; // rdx
  __int64 v13; // r9
  char v14; // al
  char *v15; // rcx

  v2 = *a1;
  v3 = 0;
  if ( (_WORD)v2 )
  {
    v6 = v2 - 1;
    v7 = *a1;
    while ( --v7 >= 0 && isspace(*(char *)(v7 + *((_QWORD *)a1 + 1))) )
      --v6;
    if ( v6 >= 0 )
    {
      v8 = v6 + 2;
      Pool = (const char *)RaidAllocatePool(64LL, v8, 1213423954LL, 0LL);
      if ( Pool )
      {
        if ( (unsigned __int64)(v8 - 1) <= 0x7FFFFFFE )
        {
          v10 = v6 + 1LL;
          if ( v10 <= 0x7FFFFFFE )
          {
            v11 = v10 - v8;
            v12 = (char *)Pool;
            v13 = *((_QWORD *)a1 + 1) - (_QWORD)Pool;
            do
            {
              if ( !(v11 + v8) )
                break;
              v14 = v12[v13];
              if ( !v14 )
                break;
              *v12++ = v14;
              --v8;
            }
            while ( v8 );
            v15 = v12 - 1;
            if ( v8 )
              v15 = v12;
            *v15 = 0;
          }
          else
          {
            *Pool = 0;
          }
        }
        RtlInitAnsiString(a2, Pool);
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  return v3;
}
