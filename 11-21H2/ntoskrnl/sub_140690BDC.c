/*
 * XREFs of sub_140690BDC @ 0x140690BDC
 * Callers:
 *     sub_140690378 @ 0x140690378 (sub_140690378.c)
 * Callees:
 *     PsGetPermanentSiloContext @ 0x140211FA0 (PsGetPermanentSiloContext.c)
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 */

__int64 sub_140690BDC()
{
  __int64 v0; // r9
  void *v1; // rcx
  __int64 v2; // r8
  __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  *(_OWORD *)v4 = 0LL;
  sub_140347770((__int64)v4);
  v5 = 0LL;
  PsGetPermanentSiloContext(v0, dword_140C490B8, &v5);
  if ( v5 && (v1 = *(void **)(v5 + 32)) != 0LL )
    ObfReferenceObject(v1);
  else
    ObfReferenceObject(qword_140D3CB10);
  sub_14022EA30(v4);
  return v2;
}
