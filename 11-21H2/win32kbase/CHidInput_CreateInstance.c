/*
 * XREFs of CHidInput_CreateInstance @ 0x1C005B240
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateInstance@CHidInput@@SAJPEAPEAV1@@Z @ 0x1C005C718 (-CreateInstance@CHidInput@@SAJPEAPEAV1@@Z.c)
 */

CBaseInput *__fastcall CHidInput_CreateInstance(struct CHidInput **a1)
{
  int Instance; // eax
  __int64 v2; // rdx

  Instance = CHidInput::CreateInstance(a1);
  v2 = 0LL;
  if ( Instance >= 0 )
    return gpHidInput;
  return (CBaseInput *)v2;
}
