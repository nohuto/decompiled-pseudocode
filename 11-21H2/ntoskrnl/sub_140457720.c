/*
 * XREFs of sub_140457720 @ 0x140457720
 * Callers:
 *     sub_140456F16 @ 0x140456F16 (sub_140456F16.c)
 *     sub_140512C04 @ 0x140512C04 (sub_140512C04.c)
 *     sub_14051314C @ 0x14051314C (sub_14051314C.c)
 *     sub_140909214 @ 0x140909214 (sub_140909214.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140457720(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx

  v3 = a1;
  v4 = (unsigned int)(a2 - 1);
  if ( (_DWORD)v4 )
  {
    do
    {
      v3 = *(_QWORD *)(v3 + 8);
      --v4;
    }
    while ( v4 );
  }
  *(_QWORD *)(v3 + 8) = a3;
  return a1;
}
