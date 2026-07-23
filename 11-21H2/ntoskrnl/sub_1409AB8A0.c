/*
 * XREFs of sub_1409AB8A0 @ 0x1409AB8A0
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     PsGetCurrentSilo @ 0x140347D50 (PsGetCurrentSilo.c)
 *     sub_14068A6A0 @ 0x14068A6A0 (sub_14068A6A0.c)
 *     sub_1406E1570 @ 0x1406E1570 (sub_1406E1570.c)
 */

__int64 __fastcall sub_1409AB8A0(_DWORD *a1, unsigned int a2, unsigned int *a3)
{
  unsigned __int64 v3; // r15
  unsigned int v5; // edi
  __int64 CurrentSilo; // r12
  __int64 v8; // rsi
  int v9; // ebx
  void *i; // rcx
  _DWORD *v11; // rax
  _DWORD *v12; // r8

  v3 = a2;
  v5 = 4;
  if ( a2 < 4 )
    return 3221225507LL;
  CurrentSilo = PsGetCurrentSilo();
  v8 = 0LL;
  v9 = 0;
  for ( i = 0LL; ; i = v12 )
  {
    v11 = sub_14068A6A0(i, 0);
    v12 = v11;
    if ( !v11 )
      break;
    if ( v11 != (_DWORD *)CurrentSilo && sub_1406E1570((__int64)v11, CurrentSilo) )
    {
      if ( (unsigned __int64)v5 + 4 > v3 )
      {
        v9 = -1073741789;
        ObfDereferenceObjectWithTag(v12, 0x6E457350u);
        break;
      }
      a1[v8 + 1] = v12[357];
      v5 += 4;
      v8 = (unsigned int)(v8 + 1);
    }
  }
  if ( v9 >= 0 )
  {
    *a1 = v8;
    *a3 = v5;
  }
  return (unsigned int)v9;
}
