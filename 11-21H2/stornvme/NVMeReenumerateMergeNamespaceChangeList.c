/*
 * XREFs of NVMeReenumerateMergeNamespaceChangeList @ 0x1C000E998
 * Callers:
 *     NVMeReenumerateReissueGetLogNamespaceChangeListCompletion @ 0x1C000F9E0 (NVMeReenumerateReissueGetLogNamespaceChangeListCompletion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeReenumerateMergeNamespaceChangeList(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rcx
  unsigned int v4; // ebx
  unsigned int v5; // r10d
  __int64 v6; // rcx
  __int64 v7; // r9
  unsigned int v8; // r11d
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // rcx

  if ( a2 && a1 && *a2 != -1 )
  {
    if ( *(_DWORD *)(a1 + 4092) )
    {
LABEL_24:
      *a2 = -1;
    }
    else
    {
      v3 = 0LL;
      v4 = 1024;
      while ( *(_DWORD *)(a1 + 4 * v3) )
      {
        v3 = (unsigned int)(v3 + 1);
        if ( (unsigned int)v3 >= 0x400 )
          goto LABEL_10;
      }
      v4 = v3;
LABEL_10:
      v5 = 1024;
      v6 = 0LL;
      while ( a2[v6] )
      {
        v6 = (unsigned int)(v6 + 1);
        if ( (unsigned int)v6 >= 0x400 )
          goto LABEL_15;
      }
      v5 = v6;
LABEL_15:
      v7 = 0LL;
      if ( v4 )
      {
        v8 = v5;
        do
        {
          v9 = 0LL;
          if ( v5 )
          {
            while ( *(_DWORD *)(a1 + 4 * v7) != a2[v9] )
            {
              v9 = (unsigned int)(v9 + 1);
              if ( (unsigned int)v9 >= v5 )
                goto LABEL_20;
            }
          }
          else
          {
LABEL_20:
            if ( v8 >= 0x400 )
              goto LABEL_24;
            result = *(unsigned int *)(a1 + 4 * v7);
            v11 = v8++;
            a2[v11] = result;
          }
          v7 = (unsigned int)(v7 + 1);
        }
        while ( (unsigned int)v7 < v4 );
      }
    }
  }
  return result;
}
