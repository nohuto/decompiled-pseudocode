/*
 * XREFs of sub_1C001AAA8 @ 0x1C001AAA8
 * Callers:
 *     sub_1C0010F40 @ 0x1C0010F40 (sub_1C0010F40.c)
 *     sub_1C0014348 @ 0x1C0014348 (sub_1C0014348.c)
 *     sub_1C001D070 @ 0x1C001D070 (sub_1C001D070.c)
 *     sub_1C001DA50 @ 0x1C001DA50 (sub_1C001DA50.c)
 *     sub_1C0021B28 @ 0x1C0021B28 (sub_1C0021B28.c)
 *     sub_1C0049C54 @ 0x1C0049C54 (sub_1C0049C54.c)
 *     sub_1C006DDBC @ 0x1C006DDBC (sub_1C006DDBC.c)
 *     sub_1C006E0D8 @ 0x1C006E0D8 (sub_1C006E0D8.c)
 *     sub_1C006F440 @ 0x1C006F440 (sub_1C006F440.c)
 *     sub_1C006F918 @ 0x1C006F918 (sub_1C006F918.c)
 *     sub_1C006FDF8 @ 0x1C006FDF8 (sub_1C006FDF8.c)
 *     sub_1C0070108 @ 0x1C0070108 (sub_1C0070108.c)
 *     sub_1C0070474 @ 0x1C0070474 (sub_1C0070474.c)
 *     sub_1C00707BC @ 0x1C00707BC (sub_1C00707BC.c)
 *     sub_1C0070BFC @ 0x1C0070BFC (sub_1C0070BFC.c)
 *     sub_1C0071348 @ 0x1C0071348 (sub_1C0071348.c)
 *     sub_1C0071664 @ 0x1C0071664 (sub_1C0071664.c)
 *     sub_1C007189C @ 0x1C007189C (sub_1C007189C.c)
 *     sub_1C00A2788 @ 0x1C00A2788 (sub_1C00A2788.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C001AAA8(__int64 a1, _BYTE *a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  if ( a2 )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( a2[v2] );
    result = (unsigned int)(v2 + 1);
  }
  else
  {
    a2 = &unk_1C0082FE6;
    result = 1LL;
  }
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = result;
  return result;
}
