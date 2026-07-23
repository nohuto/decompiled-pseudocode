/*
 * XREFs of HalpInitializeNMI @ 0x140380B98
 * Callers:
 *     HalpInitializeErrSrc @ 0x140A8ACE0 (HalpInitializeErrSrc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpInitializeNMI(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a2 + 8) == 3 )
  {
    dword_140C6A924 = 1;
    HalpNmiInfo = *(_DWORD *)(a2 + 28);
    dword_140C6A928 = 0;
  }
  return 0LL;
}
