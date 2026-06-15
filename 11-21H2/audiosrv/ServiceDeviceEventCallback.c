/*
 * XREFs of ServiceDeviceEventCallback @ 0x180151260
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18004CB1C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ServiceDeviceEvent @ 0x18015110C (ServiceDeviceEvent.c)
 */

__int64 __fastcall ServiceDeviceEventCallback(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  char *v4; // rbp
  __int64 v7; // rdx
  _WORD *v8; // rax
  unsigned int v9; // eax
  __int64 v10; // r14
  HANDLE ProcessHeap; // rax
  unsigned int v12; // ebx
  char *v13; // rax
  void *v14; // rsi
  int v15; // ecx
  HANDLE v16; // rax

  v4 = (char *)(a4 + 24);
  if ( a4 == -24 )
    return 13;
  v7 = 0x7FFFFFFFLL;
  v8 = (_WORD *)(a4 + 24);
  do
  {
    if ( !*v8 )
      break;
    ++v8;
    --v7;
  }
  while ( v7 );
  if ( !v7 )
    return 13;
  v9 = v7 != 0 ? -2 - 2 * v7 : 0;
  v10 = v9 + 32;
  if ( (unsigned int)v10 < v9 )
    return 13;
  ProcessHeap = GetProcessHeap();
  v12 = 8;
  v13 = (char *)HeapAlloc(ProcessHeap, 8u, (unsigned int)v10);
  v14 = v13;
  if ( v13 )
  {
    *(_DWORD *)v13 = v10;
    *(_QWORD *)(v13 + 4) = 5LL;
    *(_OWORD *)(v13 + 12) = *(_OWORD *)(a4 + 8);
    if ( (int)StringCchCopyW(v13 + 28, v10 - 30, v4) < 0 )
    {
LABEL_9:
      v12 = 13;
LABEL_15:
      v16 = GetProcessHeap();
      HeapFree(v16, 0, v14);
      return v12;
    }
    if ( a3 )
    {
      if ( a3 != 1 )
        goto LABEL_9;
      v15 = 32772;
    }
    else
    {
      v15 = 0x8000;
    }
    v12 = ServiceDeviceEvent(v15, (__int64)v14);
    goto LABEL_15;
  }
  return v12;
}
