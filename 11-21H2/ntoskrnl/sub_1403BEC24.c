/*
 * XREFs of sub_1403BEC24 @ 0x1403BEC24
 * Callers:
 *     sub_140520270 @ 0x140520270 (sub_140520270.c)
 *     sub_140A557A0 @ 0x140A557A0 (sub_140A557A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403BEC24(unsigned int a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  if ( off_140C02520 == &off_1400032A0 )
    v1 = qword_140C4D0A8;
  else
    v1 = qword_140C4D0A8 + 8LL * (unsigned int)(dword_140C4D044 * HIDWORD(KeGetPcr()[1].LockArray));
  *(_DWORD *)(*(_QWORD *)(v1 + 8LL * a1) + 24LL) = 3;
  result = *(_QWORD *)(v1 + 8LL * a1);
  *(_DWORD *)(result + 32) = 0;
  return result;
}
