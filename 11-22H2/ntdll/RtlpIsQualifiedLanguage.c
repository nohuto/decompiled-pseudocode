/*
 * XREFs of RtlpIsQualifiedLanguage @ 0x180004090
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTraverseParents @ 0x180003FD0 (RtlpTraverseParents.c)
 *     RtlpFreeTraverseNodes @ 0x180004170 (RtlpFreeTraverseNodes.c)
 *     RtlpCreateTraverseNodes @ 0x1800041AC (RtlpCreateTraverseNodes.c)
 */

__int64 __fastcall RtlpIsQualifiedLanguage(__int64 a1, __int16 *a2, char a3)
{
  char *v6; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  bool v9; // zf
  unsigned __int16 v10; // ax
  char *v12; // rcx
  __int64 v13; // r9
  __int16 v14; // dx
  __int16 v15; // dx
  PVOID BaseAddress; // [rsp+60h] [rbp+8h] BYREF

  BaseAddress = 0LL;
  v6 = 0LL;
  if ( a1 && a2 )
  {
    v7 = RtlpCreateTraverseNodes(&BaseAddress);
    v6 = (char *)BaseAddress;
    v8 = v7;
    if ( v7 >= 0 )
    {
      v9 = RtlpTraverseParents(a2, (__int64)BaseAddress, a1, 0LL, 0, 42) == 0;
      v10 = 0;
      if ( v9 )
        v8 = -1073741823;
      do
      {
        if ( v10 && *(_DWORD *)&v6[8 * v10 + 4] )
        {
          v12 = v6 + 2;
          v13 = v10;
          do
          {
            if ( *(_DWORD *)(v12 + 2) )
            {
              if ( *((_WORD *)v12 - 1) )
              {
                v14 = *(_WORD *)&v6[8 * v10];
                if ( v14 )
                {
                  if ( *((_WORD *)v12 - 1) == v14 )
                    v8 = -1073741823;
                }
              }
              if ( *(__int16 *)v12 > 0 )
              {
                v15 = *(_WORD *)&v6[8 * v10 + 2];
                if ( v15 > 0 && *(_WORD *)v12 == v15 )
                  v8 = -1073741823;
              }
            }
            v12 += 8;
            --v13;
          }
          while ( v13 );
        }
        ++v10;
      }
      while ( (__int16)v10 < 42 );
      if ( a3 == 1 && *a2 < 0 )
        v8 = -1073741823;
    }
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v6 )
    RtlpFreeTraverseNodes(v6);
  return v8;
}
