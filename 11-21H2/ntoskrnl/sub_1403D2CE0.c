/*
 * XREFs of sub_1403D2CE0 @ 0x1403D2CE0
 * Callers:
 *     sub_140A5A6CC @ 0x140A5A6CC (sub_140A5A6CC.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *sub_1403D2CE0())()
{
  _QWORD *v0; // rax
  __int64 v1; // rcx
  __int64 (__fastcall *result)(); // rax

  v0 = &unk_140C4B120;
  v1 = 32LL;
  do
  {
    v0 += 10;
    *(_OWORD *)(v0 - 13) = 0LL;
    *(_OWORD *)(v0 - 11) = 0LL;
    *(v0 - 9) = 0LL;
    *(v0 - 11) = sub_14051C010;
    *((_DWORD *)v0 - 28) = 0;
    --v1;
  }
  while ( v1 );
  result = sub_14051C5C0;
  off_140C02028[0] = sub_14051C5C0;
  return result;
}
