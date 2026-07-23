/*
 * XREFs of sub_140A53160 @ 0x140A53160
 * Callers:
 *     <none>
 * Callees:
 *     sub_140521294 @ 0x140521294 (sub_140521294.c)
 */

__int64 (__fastcall **sub_140A53160())()
{
  __int64 (__fastcall **result)(); // rax
  _QWORD **v1; // rbx
  unsigned int v2; // edi
  unsigned int i; // r11d

  result = &off_1400032A0;
  if ( off_140C02520 == &off_1400032A0 )
  {
    v1 = (_QWORD **)qword_140C4D0A8;
  }
  else
  {
    result = (__int64 (__fastcall **)())qword_140C4D0A8;
    v1 = (_QWORD **)(qword_140C4D0A8 + 8LL * (unsigned int)(dword_140C4D044 * HIDWORD(KeGetPcr()[1].LockArray)));
  }
  v2 = dword_140C4A404;
  for ( i = 0; i < v2; ++v1 )
  {
    if ( *((_DWORD *)*v1 + 6) == 2 )
      result = (__int64 (__fastcall **)())sub_140521294(i, *v1, (_DWORD *)(*v1)[2]);
    ++i;
  }
  return result;
}
