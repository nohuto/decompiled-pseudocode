/*
 * XREFs of sub_140941DDC @ 0x140941DDC
 * Callers:
 *     sub_14055F620 @ 0x14055F620 (sub_14055F620.c)
 *     sub_140941654 @ 0x140941654 (sub_140941654.c)
 * Callees:
 *     sub_140941244 @ 0x140941244 (sub_140941244.c)
 *     sub_140957E34 @ 0x140957E34 (sub_140957E34.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140941DDC(ULONG_PTR a1, __int64 a2, char a3, _BYTE *a4)
{
  PVOID v4; // rbx
  int v7; // eax
  unsigned int v8; // edi
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0;
  v4 = 0LL;
  P = 0LL;
  *a4 = 0;
  if ( !a1 )
  {
    if ( !a3 && *(_DWORD *)(a2 + 4) )
      goto LABEL_9;
    goto LABEL_8;
  }
  if ( *(_DWORD *)(a2 + 4) )
  {
    v7 = sub_140941244(a1, &v10, &P);
    v4 = P;
    v8 = v7;
    if ( v7 < 0 )
      goto LABEL_10;
    if ( (unsigned __int8)sub_140957E34((PCWCH)P, (PCWCH)(a2 + 16), 0) )
LABEL_8:
      *a4 = 1;
  }
LABEL_9:
  v8 = 0;
LABEL_10:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x61706E50u);
  return v8;
}
