/*
 * XREFs of sub_1C003BCE8 @ 0x1C003BCE8
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B9D0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     memmove @ 0x1C0024A40 (memmove.c)
 */

__int64 __fastcall sub_1C003BCE8(__int64 a1, unsigned __int16 *a2)
{
  __int64 v2; // rax
  void *v4; // rcx
  unsigned int v5; // edi
  __int64 v6; // rsi
  size_t v8; // r15
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rax
  void *v13; // rcx
  void *v14; // rcx
  unsigned int i; // ebx
  unsigned __int64 v16; // rcx

  v2 = a2[5];
  v4 = *(void **)(a1 + 5544);
  v5 = 0;
  v6 = 0LL;
  v8 = 20 * v2 + 12;
  if ( !v4 )
  {
    v9 = sub_1C0007CF4(64LL, 20 * v2 + 12, 1917018450LL, *(_QWORD *)(a1 + 8));
    *(_QWORD *)(a1 + 5544) = v9;
    v4 = (void *)v9;
    if ( !v9 )
      goto LABEL_4;
  }
  memmove(v4, a2, v8);
  v6 = a1 + 5552;
  *(_DWORD *)(a1 + 5552) = a2[4];
  v10 = *(_QWORD *)(a1 + 8);
  v11 = (unsigned __int64)*(unsigned int *)(a1 + 5552) << 6;
  *(_DWORD *)(a1 + 5568) = 0;
  *(_BYTE *)(a1 + 5556) = 0;
  v12 = sub_1C0007CF4(64LL, v11, 1917018450LL, v10);
  *(_QWORD *)(a1 + 5560) = v12;
  if ( v12 )
  {
    for ( i = 0; i < *(_DWORD *)v6; ++i )
    {
      v16 = *(_QWORD *)(v6 + 8) + ((unsigned __int64)i << 6);
      *(_DWORD *)(v16 + 44) = 0;
      *(_DWORD *)v16 = i;
      InitializeSListHead((PSLIST_HEADER)(v16 + 48));
    }
  }
  else
  {
LABEL_4:
    v13 = *(void **)(a1 + 5544);
    v5 = -1056964605;
    if ( v13 )
    {
      ExFreePoolWithTag(v13, 0x72436152u);
      *(_QWORD *)(a1 + 5544) = 0LL;
    }
    v14 = *(void **)(v6 + 8);
    if ( v14 )
    {
      ExFreePoolWithTag(v14, 0x72436152u);
      *(_QWORD *)(a1 + 5544) = 0LL;
    }
  }
  return v5;
}
