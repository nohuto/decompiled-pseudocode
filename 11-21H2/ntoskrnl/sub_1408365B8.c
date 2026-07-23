/*
 * XREFs of sub_1408365B8 @ 0x1408365B8
 * Callers:
 *     sub_140835844 @ 0x140835844 (sub_140835844.c)
 *     sub_140864D14 @ 0x140864D14 (sub_140864D14.c)
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 */

__int64 __fastcall sub_1408365B8(_DWORD *a1)
{
  _DWORD *v2; // rdx
  __int64 result; // rax

  if ( PsIsCurrentThreadInServerSilo() )
    v2 = (_DWORD *)(*((_QWORD *)sub_140347DB0() + 165) + 592LL);
  else
    v2 = (_DWORD *)0xFFFFF78000000020LL;
  v2[2] = a1[1];
  *v2 = *a1;
  result = (unsigned int)a1[1];
  v2[1] = result;
  return result;
}
