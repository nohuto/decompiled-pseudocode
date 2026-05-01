/*
 * XREFs of ?RmpPsmAppFamilyIdHash@@YA_KPEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x18002EC44
 * Callers:
 *     ?RmpPsmAppFamilyInitialize@@YAXPEAU_RM_PSM_APP_FAMILY_ID@@PEAU_RM_PSM_APP_FAMILY@@@Z @ 0x1800118B8 (-RmpPsmAppFamilyInitialize@@YAXPEAU_RM_PSM_APP_FAMILY_ID@@PEAU_RM_PSM_APP_FAMILY@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RmpPsmAppFamilyIdHash(struct _RM_PSM_APP_FAMILY_ID *a1)
{
  WCHAR *v1; // rsi
  WCHAR *v2; // rbx
  __int64 v3; // rdi
  WCHAR v4; // cx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  WCHAR v11; // [rsp+30h] [rbp+8h]

  v1 = (WCHAR *)((char *)a1 + 464);
  v2 = (WCHAR *)a1;
  v3 = 314159LL;
  if ( a1 < (struct _RM_PSM_APP_FAMILY_ID *)((char *)a1 + 464) )
  {
    do
    {
      v4 = *v2++;
      v11 = RtlUpcaseUnicodeChar(v4);
      v3 = HIBYTE(v11) + 37 * ((unsigned __int8)v11 + 37 * v3);
    }
    while ( v2 < v1 );
  }
  v5 = 9LL;
  do
  {
    v6 = *(unsigned __int8 *)v1;
    v1 += 4;
    v7 = *((unsigned __int8 *)v1 - 3)
       + 37
       * (*((unsigned __int8 *)v1 - 4)
        + 37
        * (*((unsigned __int8 *)v1 - 5)
         + 37 * (*((unsigned __int8 *)v1 - 6) + 37 * (*((unsigned __int8 *)v1 - 7) + 37 * (v6 + 37 * v3)))));
    v8 = *((unsigned __int8 *)v1 - 2);
    v9 = *((unsigned __int8 *)v1 - 1);
    v3 = v9 + 37 * (v8 + 37 * v7);
    --v5;
  }
  while ( v5 );
  return v9 + 37 * (v8 + 37 * v7);
}
