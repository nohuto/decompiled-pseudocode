/*
 * XREFs of ?ExcludeWindowRects@@YAHPEBUtagWND@@00PEAUtagRECT@@PEAU_CalcVisRgnData@@PEAH@Z @ 0x1C0048F40
 * Callers:
 *     ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C004BDA0 (-CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 * Callees:
 *     ?ResizeVisExcludeMemory@@YAHPEAU_CalcVisRgnData@@@Z @ 0x1C0141050 (-ResizeVisExcludeMemory@@YAHPEAU_CalcVisRgnData@@@Z.c)
 *     DpiRectIntersectsRectWithSubpixel @ 0x1C01DF6F0 (DpiRectIntersectsRectWithSubpixel.c)
 */

__int64 __fastcall ExcludeWindowRects(
        const struct tagWND *a1,
        const struct tagWND *a2,
        const struct tagWND *a3,
        struct tagRECT *a4,
        struct _CalcVisRgnData *a5,
        int *a6)
{
  int v6; // ebp
  const struct tagWND *i; // rbx
  __int64 v11; // rdx
  LONG *v12; // rdi
  __int64 result; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx

  v6 = 0;
  for ( i = a2; i; i = (const struct tagWND *)*((_QWORD *)i + 11) )
  {
    if ( i == a3 )
      break;
    v11 = *((_QWORD *)i + 5);
    v12 = (LONG *)(v11 + 88);
    if ( !v6 )
    {
      v14 = *((_QWORD *)a1 + 5);
      if ( *(_QWORD *)(v14 + 256) == *(_QWORD *)(v11 + 256) )
      {
        if ( (((unsigned __int16)(*(_DWORD *)(v11 + 288) >> 8) ^ (unsigned __int16)(*(_DWORD *)(v14 + 288) >> 8)) & 0x1FF) != 0 )
          goto LABEL_12;
      }
      else if ( (*(_DWORD *)(v14 + 288) & 0xF) != 2 || (*(_DWORD *)(v11 + 288) & 0xF) != 2 )
      {
LABEL_12:
        v6 = 1;
      }
    }
    if ( (*(_BYTE *)(v11 + 31) & 0x10) == 0 || (*(_BYTE *)(v11 + 26) & 8) != 0 || (*(_BYTE *)(v11 + 24) & 0x20) != 0 )
      continue;
    if ( v6 )
    {
      if ( !(unsigned int)DpiRectIntersectsRectWithSubpixel(v12, (char *)i + 224, i, a4, (char *)a1 + 224, a1) )
        continue;
    }
    else if ( a4->left >= *(_DWORD *)(v11 + 96)
           || *v12 >= a4->right
           || a4->top >= *(_DWORD *)(v11 + 100)
           || *(_DWORD *)(v11 + 92) >= a4->bottom )
    {
      continue;
    }
    if ( *v12 < v12[2] && v12[1] < v12[3] )
    {
      if ( *((_DWORD *)a5 + 1) == *((_DWORD *)a5 + 2) )
      {
        result = ResizeVisExcludeMemory(a5);
        if ( !(_DWORD)result )
          return result;
      }
      v15 = *((int *)a5 + 1);
      *(_QWORD *)(*((_QWORD *)a5 + 2) + 8 * v15) = i;
      *((_DWORD *)a5 + 1) = v15 + 1;
    }
  }
  if ( a6 )
  {
    if ( v6 )
      *a6 = 1;
  }
  return 1LL;
}
