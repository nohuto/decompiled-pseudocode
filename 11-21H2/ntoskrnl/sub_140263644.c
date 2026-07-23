/*
 * XREFs of sub_140263644 @ 0x140263644
 * Callers:
 *     sub_140263558 @ 0x140263558 (sub_140263558.c)
 *     sub_1403D3960 @ 0x1403D3960 (sub_1403D3960.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140263644(unsigned int a1)
{
  unsigned int *v1; // rax
  __int64 result; // rax

  if ( a1 == -1 )
    v1 = (unsigned int *)&unk_140C53394;
  else
    v1 = (unsigned int *)(*(_QWORD *)(120LL * a1 + qword_140C506E0 + 112) + 68LL);
  result = *v1;
  if ( !(_DWORD)result )
    return 1LL;
  return result;
}
