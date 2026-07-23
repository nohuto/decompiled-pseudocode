/*
 * XREFs of sub_140941CFC @ 0x140941CFC
 * Callers:
 *     sub_14055F620 @ 0x14055F620 (sub_14055F620.c)
 *     sub_140941654 @ 0x140941654 (sub_140941654.c)
 * Callees:
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 *     sub_140941244 @ 0x140941244 (sub_140941244.c)
 *     sub_140957E34 @ 0x140957E34 (sub_140957E34.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140941CFC(ULONG_PTR a1, const void **a2, _WORD *a3, __int64 a4, char a5, _BYTE *a6)
{
  _BYTE *v6; // r14
  char v8; // r9
  PVOID v9; // rdi
  bool v10; // zf
  int v11; // eax
  unsigned int v12; // esi
  PVOID P[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v15; // [rsp+60h] [rbp+18h] BYREF

  v6 = a6;
  v15 = 0;
  v8 = a5;
  v9 = 0LL;
  P[0] = 0LL;
  *a6 = 0;
  if ( a3 )
  {
    if ( *a3 != *(_WORD *)(a4 + 16) )
      goto LABEL_17;
  }
  else if ( !v8 && *(_WORD *)(a4 + 16) )
  {
    goto LABEL_17;
  }
  if ( a1 )
  {
    if ( !*(_DWORD *)(a4 + 4) )
      goto LABEL_17;
    if ( !a2 )
    {
      v11 = sub_140941244(a1, &v15, P);
      v9 = P[0];
      v12 = v11;
      if ( v11 < 0 )
        goto LABEL_18;
      if ( (unsigned __int8)sub_140957E34((PCWCH)P[0], (PCWCH)(a4 + 24), 0) )
        goto LABEL_16;
      goto LABEL_17;
    }
    v10 = RtlCompareMemory((const void *)(a4 + 24), a2[1], *(unsigned __int16 *)a2) == *(unsigned int *)(a4 + 4);
  }
  else
  {
    if ( v8 )
    {
LABEL_16:
      *v6 = 1;
      goto LABEL_17;
    }
    v10 = *(_DWORD *)(a4 + 4) == 0;
  }
  if ( v10 )
    goto LABEL_16;
LABEL_17:
  v12 = 0;
LABEL_18:
  if ( v9 )
    ExFreePoolWithTag(v9, 0x61706E50u);
  return v12;
}
