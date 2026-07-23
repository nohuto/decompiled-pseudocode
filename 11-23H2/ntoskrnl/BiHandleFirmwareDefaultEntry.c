/*
 * XREFs of BiHandleFirmwareDefaultEntry @ 0x140A5EC9C
 * Callers:
 *     BiExportEfiBootManager @ 0x140A5E87C (BiExportEfiBootManager.c)
 * Callees:
 *     memmove @ 0x140435B00 (memmove.c)
 *     BiDeleteElement @ 0x14080394C (BiDeleteElement.c)
 *     BiGetElement @ 0x140A5CBE0 (BiGetElement.c)
 *     BiTranslateObjectIdentifier @ 0x140A5F114 (BiTranslateObjectIdentifier.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall BiHandleFirmwareDefaultEntry(__int64 a1, void *a2, PVOID *a3, unsigned int *a4)
{
  int Element; // eax
  unsigned int v9; // ebx
  unsigned int v10; // ecx
  char *v11; // r12
  int v12; // edi
  _DWORD *v13; // rax
  unsigned int v14; // eax
  unsigned int v15; // ebp
  _DWORD *Pool2; // rax
  _DWORD *v17; // rsi
  int v19; // [rsp+20h] [rbp-28h] BYREF
  ULONG v20; // [rsp+24h] [rbp-24h] BYREF
  PVOID P[4]; // [rsp+28h] [rbp-20h] BYREF

  v19 = 0;
  v20 = 0;
  P[0] = 0LL;
  Element = BiGetElement(a2, 0x23000003u, P, &v20);
  v9 = Element;
  if ( Element == -1073741275 )
  {
LABEL_21:
    v9 = 0;
    goto LABEL_22;
  }
  if ( Element >= 0 )
  {
    BiDeleteElement(a2, 0x23000003u);
    v9 = 0;
    if ( (int)BiTranslateObjectIdentifier(a1, P[0], &v19) >= 0 )
    {
      v10 = *a4;
      v11 = (char *)*a3;
      v12 = v19;
      if ( *a4 )
      {
        v13 = *a3;
        do
        {
          if ( *v13 == v19 )
            break;
          ++v9;
          ++v13;
        }
        while ( v9 < v10 );
      }
      if ( v9 || !v10 )
      {
        v14 = v10 + 1;
        if ( v9 != v10 )
          v14 = *a4;
        v15 = v14;
        Pool2 = (_DWORD *)ExAllocatePool2(258LL, 4LL * v14, 1262764866LL);
        v17 = Pool2;
        if ( !Pool2 )
        {
          v9 = -1073741670;
          goto LABEL_22;
        }
        *Pool2 = v12;
        if ( v9 )
          memmove(Pool2 + 1, v11, 4LL * v9);
        if ( v9 < v15 - 1 )
          memmove(&v17[v9 + 1], &v11[4 * v9 + 4], 4LL * (v15 - v9 - 1));
        if ( *a3 )
          ExFreePoolWithTag(*a3, 0x4B444342u);
        *a3 = v17;
        *a4 = v15;
      }
      goto LABEL_21;
    }
  }
LABEL_22:
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0x4B444342u);
  return v9;
}
