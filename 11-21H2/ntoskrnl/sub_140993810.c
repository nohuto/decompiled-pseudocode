/*
 * XREFs of sub_140993810 @ 0x140993810
 * Callers:
 *     sub_1403D33C4 @ 0x1403D33C4 (sub_1403D33C4.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_14036B86C @ 0x14036B86C (sub_14036B86C.c)
 *     sub_14099351C @ 0x14099351C (sub_14099351C.c)
 */

void __fastcall sub_140993810(__int64 a1, __int64 a2)
{
  REGHANDLE v4; // rbx
  void *v5; // rax
  void *v6; // rbx
  __int64 v7; // rdi

  if ( byte_140C5AE14 )
  {
    v4 = RegHandle;
    if ( EtwEventEnabled(RegHandle, &stru_1400381B0) || EtwEventEnabled(v4, &stru_140039040) )
    {
      v5 = sub_14036B86C(a2, 0x67446F50u);
      v6 = v5;
      if ( v5 )
      {
        v7 = *(_QWORD *)(*((_QWORD *)v5 + 39) + 40LL);
        if ( v7 )
        {
          sub_14099351C(*(_WORD *)(v7 + 128) >> 1, *(_QWORD *)(v7 + 136), *(_DWORD *)(a1 + 28) / 0xAu, &stru_1400381B0);
          sub_14099351C(*(_WORD *)(v7 + 128) >> 1, *(_QWORD *)(v7 + 136), *(_DWORD *)(a1 + 28) / 0xAu, &stru_140039040);
        }
        ObfDereferenceObjectWithTag(v6, 0x67446F50u);
      }
    }
  }
}
