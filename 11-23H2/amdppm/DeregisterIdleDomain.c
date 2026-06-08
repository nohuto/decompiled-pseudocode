/*
 * XREFs of DeregisterIdleDomain @ 0x1C0030AD4
 * Callers:
 *     DeregisterKernelIdleDomains @ 0x1C0030BE8 (DeregisterKernelIdleDomains.c)
 * Callees:
 *     <none>
 */

bool __fastcall DeregisterIdleDomain(__int64 a1, _QWORD *a2)
{
  unsigned int *v2; // r8
  _QWORD *v4; // rsi
  unsigned __int64 v6; // r11
  unsigned int *v7; // r10
  _QWORD *v8; // rax
  char v9; // r8
  unsigned int *v10; // rcx
  bool v11; // bl
  int v12; // edi
  int v13; // ebx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  _QWORD *v16; // rdx
  void **v17; // rcx
  bool result; // al

  v2 = *(unsigned int **)(a1 + 728);
  v4 = (_QWORD *)a2[1];
  v6 = (unsigned __int64)&v2[8 * *v2 + 2];
  v7 = v2 + 2;
  v8 = (_QWORD *)v4[2];
  v9 = 1;
  while ( v8 != v4 + 2 )
  {
    v10 = (unsigned int *)(v8 - 2);
    if ( v8 - 2 != a2 && v10 >= v7 && (unsigned __int64)v10 < v6 )
      v9 = 0;
    v8 = (_QWORD *)*v8;
  }
  v11 = 0;
  if ( v9 )
  {
    v12 = *((_DWORD *)v4 + 8);
    v13 = *((_DWORD *)v4 + 11);
    KeRemoveProcessorAffinityEx(v4 + 6, *(unsigned int *)(a1 + 56));
    --*((_DWORD *)v4 + 8);
    v11 = v12 == v13;
  }
  v14 = a2[2];
  v15 = (_QWORD *)a2[3];
  if ( *(_QWORD **)(v14 + 8) != a2 + 2 || (_QWORD *)*v15 != a2 + 2 )
    goto LABEL_17;
  *v15 = v14;
  *(_QWORD *)(v14 + 8) = v15;
  if ( v15 == (_QWORD *)v14 )
  {
    v16 = (_QWORD *)*v4;
    if ( *(_QWORD **)(*v4 + 8LL) == v4 )
    {
      v17 = (void **)v4[1];
      if ( *v17 == v4 )
      {
        *v17 = v16;
        v16[1] = v17;
        ExFreePoolWithTag(v4, (ULONG)0);
        goto LABEL_16;
      }
    }
LABEL_17:
    __fastfail(3u);
  }
LABEL_16:
  result = v11;
  a2[1] = 0LL;
  return result;
}
