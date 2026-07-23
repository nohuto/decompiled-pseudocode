/*
 * XREFs of sub_140811940 @ 0x140811940
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     RtlEnumerateGenericTableAvl @ 0x1402DE820 (RtlEnumerateGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1402DECF0 (RtlDeleteElementGenericTableAvl.c)
 *     sub_1407F015C @ 0x1407F015C (sub_1407F015C.c)
 */

void sub_140811940()
{
  BOOLEAN i; // dl
  _QWORD *v1; // rax
  __int128 Buffer; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+30h] [rbp-18h]

  Buffer = 0LL;
  LODWORD(v3) = 0;
  sub_1402D66A8((ULONG_PTR)&qword_140C1CFD0);
  for ( i = 1; ; i = 0 )
  {
    v1 = RtlEnumerateGenericTableAvl(&stru_140C1CF60, i);
    if ( !v1 )
      break;
    if ( *(_DWORD *)v1 == 1 )
    {
      Buffer = *(_OWORD *)v1;
      v3 = v1[2];
      RtlDeleteElementGenericTableAvl(&stru_140C1CF60, &Buffer);
      sub_1407F015C((__int64)&Buffer);
    }
  }
  sub_1402935D0((ULONG_PTR)&qword_140C1CFD0);
}
