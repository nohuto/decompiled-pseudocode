/*
 * XREFs of sub_140644030 @ 0x140644030
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_140643F08 @ 0x140643F08 (sub_140643F08.c)
 *     sub_140645F80 @ 0x140645F80 (sub_140645F80.c)
 *     sub_140A0A2E8 @ 0x140A0A2E8 (sub_140A0A2E8.c)
 *     sub_140A6D528 @ 0x140A6D528 (sub_140A6D528.c)
 */

LONG __fastcall sub_140644030(__int64 a1, ULONG_PTR a2)
{
  __int64 v3; // rax
  unsigned int v4; // ecx
  int v5; // eax
  ULONG_PTR *v7; // rax

  if ( byte_140D04C69 )
  {
    if ( (*(_BYTE *)(a2 + 144) & 2) != 0 && *(_DWORD *)(a2 + 52) <= 1u )
    {
      v3 = *(_QWORD *)(a2 + 32);
      if ( v3 )
      {
        v4 = *(_DWORD *)(v3 + 40);
        if ( v4 <= 9 )
        {
          v5 = 665;
          if ( _bittest(&v5, v4) )
            sub_140A6D528(a2);
        }
      }
    }
  }
  if ( dword_140C10AF8 && *(char *)(a2 + 144) >= 0 )
  {
    sub_140A0A2E8(a2);
    sub_140645F80(a2 + 40);
    return sub_140643F08(a2);
  }
  else
  {
    KeWaitForSingleObject(&stru_140C10B00, Executive, 0, 0, 0LL);
    v7 = (ULONG_PTR *)qword_140C10B28;
    if ( *(__int64 **)qword_140C10B28 != &qword_140C10B20 )
      __fastfail(3u);
    *(_QWORD *)a2 = &qword_140C10B20;
    *(_QWORD *)(a2 + 8) = v7;
    *v7 = a2;
    qword_140C10B28 = a2;
    return KeSetEvent(&stru_140C10B00, 0, 0);
  }
}
