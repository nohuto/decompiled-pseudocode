/*
 * XREFs of sub_14095336C @ 0x14095336C
 * Callers:
 *     sub_1406619F8 @ 0x1406619F8 (sub_1406619F8.c)
 *     sub_140765DC0 @ 0x140765DC0 (sub_140765DC0.c)
 *     sub_14095341C @ 0x14095341C (sub_14095341C.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x1402DECF0 (RtlDeleteElementGenericTableAvl.c)
 *     sub_140563B98 @ 0x140563B98 (sub_140563B98.c)
 *     sub_140661C18 @ 0x140661C18 (sub_140661C18.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14095336C(const wchar_t **P, __int64 a2, __int64 a3)
{
  const wchar_t ***v4; // rcx
  PVOID *v5; // rdx
  wchar_t *v6; // rdx
  void *v7; // rdi

  if ( (byte_140C0DD4C & 2) != 0 )
    sub_140563B98((__int64)P, (const EVENT_DESCRIPTOR *)qword_14003B600, a3, P[1], P[2], *((const wchar_t **)P[14] + 1));
  v4 = (const wchar_t ***)P[12];
  if ( v4[1] != P + 12 || (v5 = (PVOID *)P[13], *v5 != P + 12) )
    __fastfail(3u);
  *v5 = v4;
  v4[1] = (const wchar_t **)v5;
  v6 = (wchar_t *)P[14];
  if ( *((wchar_t **)v6 + 2) == v6 + 8 )
  {
    v7 = (void *)*((_QWORD *)v6 + 1);
    RtlDeleteElementGenericTableAvl(&stru_140C44720, v6);
    if ( v7 )
      ExFreePoolWithTag(v7, 0x57706E50u);
  }
  P[14] = 0LL;
  sub_140661C18(P);
}
