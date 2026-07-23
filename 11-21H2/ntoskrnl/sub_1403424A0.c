/*
 * XREFs of sub_1403424A0 @ 0x1403424A0
 * Callers:
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 * Callees:
 *     sub_1402103E0 @ 0x1402103E0 (sub_1402103E0.c)
 *     sub_140253F34 @ 0x140253F34 (sub_140253F34.c)
 *     sub_140291E98 @ 0x140291E98 (sub_140291E98.c)
 */

bool __fastcall sub_1403424A0(struct _KPRCB *a1, __int64 a2, __int64 a3, int a4, __int64 *a5)
{
  int v5; // edi
  char v10; // r9
  __int64 v11; // rsi
  __int64 *v12; // r15
  __int64 v13; // r12
  unsigned int v14; // r9d
  unsigned int v15; // eax
  char v16; // al
  bool result; // al
  __int64 v18; // rax
  int v19; // eax
  unsigned int v20; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v21; // [rsp+78h] [rbp+10h] BYREF

  v5 = 0;
  v21 = 0;
  v10 = *((_QWORD *)a1 + 2) == a2 || a1 == KeGetCurrentPrcb();
  v11 = *(_QWORD *)(a2 + 104);
  if ( v11 )
  {
    v11 += *((unsigned int *)a1 + 54);
    if ( v11 )
      v21 = sub_1402103E0(a2, v11, a3, v10, 0LL);
  }
  v12 = a5;
  v13 = *(_QWORD *)(a3 + 104);
  v20 = 0;
  *a5 = 0LL;
  if ( !v13 )
    goto LABEL_5;
  v13 += *((unsigned int *)a1 + 54);
  if ( !v13 )
    goto LABEL_5;
  v20 = sub_1402103E0(a3, v13, a3, 1, 0LL);
  v14 = v20;
  if ( v20 )
  {
    *v12 = v13;
    goto LABEL_6;
  }
  v18 = v13;
  do
  {
    v5 += *(_DWORD *)(v18 + 116);
    v18 = *(_QWORD *)(v18 + 408);
  }
  while ( v18 );
  if ( v5 )
  {
    v19 = *(_DWORD *)(a3 + 120);
    if ( (v19 & 0x200) == 0 && *(char *)(a3 + 195) < 16 && (v19 & 0xC00) == 0 && sub_140291E98(a3) )
    {
      _interlockedbittestandset((volatile signed __int32 *)(a3 + 120), 0xBu);
LABEL_5:
      v14 = v20;
    }
  }
LABEL_6:
  if ( !v11 || !v13 )
    goto LABEL_7;
  v15 = v21;
  if ( v21 && v14 )
  {
    sub_140253F34(v11, v13, &v21, &v20);
    v14 = v20;
LABEL_7:
    v15 = v21;
  }
  result = 1;
  if ( v14 >= v15 )
  {
    if ( v14 != v15 )
      return 0;
    v16 = *(_BYTE *)(a3 + 195);
    if ( v16 <= *(char *)(a2 + 195) && (v16 != *(_BYTE *)(a2 + 195) || !a4) )
      return 0;
  }
  return result;
}
