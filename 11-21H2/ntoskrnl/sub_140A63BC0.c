/*
 * XREFs of sub_140A63BC0 @ 0x140A63BC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14052B630 @ 0x14052B630 (sub_14052B630.c)
 */

__int64 (__fastcall **sub_140A63BC0())()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v1; // rdi
  __int64 i; // rbx
  __int64 v3; // r8
  int v4; // eax

  result = &off_1400032A0;
  if ( off_140C02520 == &off_1400032A0 )
  {
    v1 = qword_140C4D0A8;
  }
  else
  {
    result = (__int64 (__fastcall **)())qword_140C4D0A8;
    v1 = qword_140C4D0A8 + 8LL * (unsigned int)(qword_140C4D044 * HIDWORD(KeGetPcr()[1].LockArray));
  }
  for ( i = 0LL; (unsigned int)i < dword_140C49FE0; i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(v1 + 8 * i);
    v4 = *(_DWORD *)(v3 + 24);
    if ( v4 >= 2 )
    {
      result = 0LL;
      __writemsr(*((_DWORD *)&xmmword_140C49FA0 + i), 0LL);
    }
    else
    {
      result = (__int64 (__fastcall **)())sub_14052B630(i, 1, *(_QWORD *)v3, **(_QWORD **)(v3 + 16), v4 != 1);
    }
  }
  return result;
}
