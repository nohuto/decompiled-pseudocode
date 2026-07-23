/*
 * XREFs of sub_140A91FDC @ 0x140A91FDC
 * Callers:
 *     sub_140A800C4 @ 0x140A800C4 (sub_140A800C4.c)
 *     sub_140A919A8 @ 0x140A919A8 (sub_140A919A8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A91FDC(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  do
  {
    v1 = a1;
    a1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 48LL);
  }
  while ( a1 );
  do
  {
    result = *(_QWORD *)(v1 + 312);
    *(_DWORD *)(result + 32) &= 0x3FFFFFFFu;
    v1 = *(_QWORD *)(v1 + 24);
  }
  while ( v1 );
  return result;
}
