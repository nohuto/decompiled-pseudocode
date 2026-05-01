/*
 * XREFs of ?HampDepHostStackIsEmpty@@YAKPEAU_HAM_DEP_HOST_STACK@@@Z @ 0x18004FC8C
 * Callers:
 *     ?HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEP_HOST_STACK@@@Z @ 0x180074EF8 (-HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEP_HOST_STACK@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampDepHostStackIsEmpty(unsigned __int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx

  v1 = *(_QWORD *)a1;
  v2 = 0;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
  {
    if ( v1 )
      v1 ^= a1;
    else
      v1 = 0LL;
  }
  LOBYTE(v2) = v1 == 0;
  return v2;
}
