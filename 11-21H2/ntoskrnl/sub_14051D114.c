/*
 * XREFs of sub_14051D114 @ 0x14051D114
 * Callers:
 *     sub_14051DAC0 @ 0x14051DAC0 (sub_14051DAC0.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_14051CE3C @ 0x14051CE3C (sub_14051CE3C.c)
 *     sub_14051DA10 @ 0x14051DA10 (sub_14051DA10.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14051D114(PVOID P)
{
  unsigned int v1; // edi
  __int64 v3; // rdx
  _QWORD *v4; // rcx
  PVOID *v5; // rax
  char v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v7 = 0;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)P + 29, 0, 0) <= 0 )
  {
    sub_14051CE3C((volatile signed __int32 *)P, &v7);
    v4 = *(_QWORD **)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P || (v5 = (PVOID *)*((_QWORD *)P + 1), *v5 != P) )
      __fastfail(3u);
    LOBYTE(v3) = v7;
    *v5 = v4;
    v4[1] = v5;
    sub_14051DA10(P, v3);
    ObfDereferenceObjectWithTag(*((PVOID *)P + 6), 0x746C6644u);
    ExFreePoolWithTag(P, 0x326C6148u);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v1;
}
