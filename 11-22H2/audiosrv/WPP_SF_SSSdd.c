/*
 * XREFs of WPP_SF_SSSdd @ 0x180102740
 * Callers:
 *     ?AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@PEBG1KPEAU_ResourceInfo@@KKHPEAUResourceHandleInfo@@@Z @ 0x1800FF204 (-AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@PEBG1KPEAU_ResourceInf.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_SSSdd(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  bool v10; // zf

  v6 = -1LL;
  if ( a6 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( *(_WORD *)(a6 + 2 * v8) );
  }
  if ( a5 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( *(_WORD *)(a5 + 2 * v9) );
  }
  v10 = a4 == 0LL;
  if ( a4 )
  {
    do
      ++v6;
    while ( a4[v6] );
    v10 = a4 == 0LL;
  }
  if ( v10 )
    a4 = L"NULL";
  return EtwTraceMessage(a1, 43LL, &WPP_2b5f394d6942332cf81378c5e0b14847_Traceguids, 19LL, a4);
}
