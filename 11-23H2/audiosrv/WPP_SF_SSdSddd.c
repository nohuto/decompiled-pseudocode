/*
 * XREFs of WPP_SF_SSdSddd @ 0x180102A20
 * Callers:
 *     ?AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@PEBG1KPEAU_ResourceInfo@@KKHPEAUResourceHandleInfo@@@Z @ 0x1800FF1B4 (-AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@PEBG1KPEAU_ResourceInf.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_SSdSddd(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        __int64 a5,
        char a6,
        __int64 a7)
{
  __int64 v7; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  bool v11; // zf

  v7 = -1LL;
  if ( a7 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( *(_WORD *)(a7 + 2 * v9) );
  }
  if ( a5 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( *(_WORD *)(a5 + 2 * v10) );
  }
  v11 = a4 == 0LL;
  if ( a4 )
  {
    do
      ++v7;
    while ( a4[v7] );
    v11 = a4 == 0LL;
  }
  if ( v11 )
    a4 = L"NULL";
  return EtwTraceMessage(a1, 43LL, &WPP_2b5f394d6942332cf81378c5e0b14847_Traceguids, 18LL, a4);
}
