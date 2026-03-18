/*
 * XREFs of FindNSObjMainNoLock @ 0x1C001F71C
 * Callers:
 *     AMLIFindNameSpaceObject @ 0x1C001F5E4 (AMLIFindNameSpaceObject.c)
 * Callees:
 *     FindNSObj @ 0x1C00175E0 (FindNSObj.c)
 *     HeapFree @ 0x1C0018DD0 (HeapFree.c)
 *     _strupr_0 @ 0x1C002F1FB (_strupr_0.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 */

__int64 __fastcall FindNSObjMainNoLock(char *Src, __int64 a2, __int64 a3, int a4)
{
  __int64 v8; // rbx
  __int64 v9; // r9
  __int64 v10; // r8
  unsigned int NSObj; // eax
  unsigned int v12; // ebx
  __int64 v14; // rcx
  size_t v15; // [rsp+28h] [rbp-20h]
  int v16; // [rsp+50h] [rbp+8h] BYREF

  if ( Src )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( Src[v8] );
    strupr_0(Src);
    if ( (unsigned int)v8 > 4 )
    {
      return (unsigned int)-1073741773;
    }
    else
    {
      v16 = 1600085855;
      memmove(&v16, Src, (unsigned int)v8);
      LODWORD(v15) = a4;
      if ( (a4 & 1) != 0 )
      {
        v9 = a2;
        v10 = a2;
      }
      else
      {
        v10 = *(_QWORD *)(a2 + 16);
        v9 = 0LL;
      }
      NSObj = FindNSObj(v16, a2, v10, v9, a3, v15);
      v12 = NSObj;
      if ( NSObj == -1073741772 )
      {
        if ( *(_DWORD *)(a3 + 24) )
          return 0;
      }
      else if ( NSObj == -1073741675 || NSObj == -1073741670 )
      {
        v14 = *(_QWORD *)(a3 + 8);
        if ( *(_QWORD *)(v14 + 16) )
        {
          HeapFree(*(_QWORD **)(v14 + 32));
          *(_QWORD *)(*(_QWORD *)(a3 + 8) + 16LL) = 0LL;
          *(_DWORD *)(*(_QWORD *)(a3 + 8) + 24LL) = 0;
        }
        if ( *(_QWORD *)(a3 + 16) )
        {
          HeapFree(*(_QWORD **)(a3 + 32));
          *(_QWORD *)(a3 + 16) = 0LL;
          *(_DWORD *)(a3 + 24) = 0;
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1072431095;
  }
  return v12;
}
