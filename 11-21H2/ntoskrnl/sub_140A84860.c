/*
 * XREFs of sub_140A84860 @ 0x140A84860
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A88430 @ 0x140A88430 (sub_140A88430.c)
 *     sub_140A88738 @ 0x140A88738 (sub_140A88738.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

__int64 __fastcall sub_140A84860(__int64 a1, __int64 a2, ULONG_PTR *a3, unsigned int a4)
{
  __int64 v8; // rbx
  __int64 result; // rax

  sub_140A88738(a1);
  v8 = sub_140A88430(a1);
  if ( (dword_140C29FC0 & 0x4000000) != 0 && a3 && *a3 < 0x100000000LL )
    sub_140A8C924(0xC4u, 0x141uLL, *a3, a4, 0LL);
  result = sub_14042A5E0(a1, a2);
  if ( result )
  {
    if ( v8 )
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 172));
  }
  return result;
}
