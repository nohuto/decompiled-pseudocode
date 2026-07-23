/*
 * XREFs of sub_1404584D6 @ 0x1404584D6
 * Callers:
 *     sub_140458780 @ 0x140458780 (sub_140458780.c)
 *     sub_140505810 @ 0x140505810 (sub_140505810.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     IoFreeAdapterChannel @ 0x140456A00 (IoFreeAdapterChannel.c)
 *     sub_140456F16 @ 0x140456F16 (sub_140456F16.c)
 *     sub_140457308 @ 0x140457308 (sub_140457308.c)
 *     sub_14045746C @ 0x14045746C (sub_14045746C.c)
 *     sub_14050905C @ 0x14050905C (sub_14050905C.c)
 *     sub_140513AD4 @ 0x140513AD4 (sub_140513AD4.c)
 */

__int64 *__fastcall sub_1404584D6(__int64 a1, char a2)
{
  __int64 *result; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // r8d

  while ( 1 )
  {
    result = sub_140457308(a1, a2);
    v5 = (__int64)result;
    if ( !result )
      return result;
    v6 = result[43];
    v7 = sub_140456F16((__int64)result, *((_DWORD *)result + 60));
    *(_QWORD *)(v5 + 232) = v7;
    if ( !v7 )
    {
      sub_140513AD4(v5);
      return (__int64 *)sub_14050905C(v5, *(unsigned int *)(v5 + 240));
    }
    v8 = sub_14042A5E0(*(_QWORD *)(v6 + 48), *(_QWORD *)(v6 + 56));
    if ( v8 == 3 )
    {
      *(_DWORD *)(v5 + 240) = 0;
      goto LABEL_6;
    }
    if ( v8 == 2 )
    {
LABEL_6:
      v9 = *(_DWORD *)(v5 + 240);
      if ( v9 )
      {
        sub_14045746C(v5, *(_QWORD **)(v5 + 232), v9);
        *(_DWORD *)(v5 + 240) = 0;
      }
      IoFreeAdapterChannel((PDMA_ADAPTER)v5);
    }
  }
}
