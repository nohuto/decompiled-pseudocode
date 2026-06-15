/*
 * XREFs of ServiceDeviceEventCallback @ 0x180008DC0
 * Callers:
 *     <none>
 * Callees:
 *     ServiceDeviceEvent @ 0x180008F34 (ServiceDeviceEvent.c)
 */

__int64 __fastcall ServiceDeviceEventCallback(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  _WORD *v4; // rax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rbx
  HANDLE ProcessHeap; // rax
  char *v11; // rax
  void *v12; // r14
  unsigned __int64 v13; // rdx
  _WORD *v14; // rax
  int v15; // r9d
  unsigned __int64 v16; // r8
  __int64 v17; // rsi
  __int16 v18; // cx
  __int64 v19; // rcx
  unsigned int v20; // ebx
  HANDLE v21; // rax
  int v23; // ecx
  unsigned int v24; // eax

  v4 = (_WORD *)(a4 + 24);
  if ( a4 == -24 )
    return 13LL;
  v7 = 0x7FFFFFFFLL;
  while ( *v4 )
  {
    ++v4;
    if ( !--v7 )
    {
      v23 = -2147024809;
      v24 = 0;
      goto LABEL_7;
    }
  }
  v8 = 0x7FFFFFFF - v7;
  v23 = 0;
  v24 = 2 * v8;
LABEL_7:
  if ( v23 < 0 )
    return 13LL;
  v9 = v24 + 32;
  if ( (unsigned int)v9 < v24 )
    return 13LL;
  ProcessHeap = GetProcessHeap();
  v11 = (char *)HeapAlloc(ProcessHeap, 8u, (unsigned int)v9);
  v12 = v11;
  if ( v11 )
  {
    *(_DWORD *)v11 = v9;
    v13 = v9 - 30;
    *(_QWORD *)(v11 + 4) = 5LL;
    *(_OWORD *)(v11 + 12) = *(_OWORD *)(a4 + 8);
    v14 = v11 + 28;
    if ( v9 != 30 )
    {
      if ( v13 > 0x7FFFFFFF )
      {
        *v14 = 0;
      }
      else
      {
        v15 = 0;
        v16 = 2147483646 - v13;
        v17 = a4 - (_QWORD)v14;
        while ( v16 + v13 )
        {
          v18 = *(_WORD *)((char *)v14 + v17 + 24);
          if ( !v18 )
          {
            if ( v13 )
              break;
LABEL_28:
            --v14;
            v15 = -2147024774;
            break;
          }
          *v14++ = v18;
          if ( !--v13 )
            goto LABEL_28;
        }
        *v14 = 0;
        if ( v15 >= 0 )
        {
          if ( !a3 )
          {
            v19 = 0x8000LL;
LABEL_21:
            v20 = ServiceDeviceEvent(v19, v12);
LABEL_22:
            v21 = GetProcessHeap();
            HeapFree(v21, 0, v12);
            return v20;
          }
          if ( a3 == 1 )
          {
            v19 = 32772LL;
            goto LABEL_21;
          }
        }
      }
    }
    v20 = 13;
    goto LABEL_22;
  }
  return 8LL;
}
