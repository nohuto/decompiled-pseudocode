/*
 * XREFs of sub_140A530A0 @ 0x140A530A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140399A14 @ 0x140399A14 (sub_140399A14.c)
 *     sub_140521A70 @ 0x140521A70 (sub_140521A70.c)
 */

__int64 (__fastcall **sub_140A530A0())()
{
  __int64 (__fastcall **result)(); // rax
  unsigned __int64 **v1; // rdi
  unsigned int v2; // esi
  unsigned int i; // ebx
  char v4; // r9
  char v5; // r11
  int v6; // edx
  __int64 v7; // r10
  unsigned int v8; // r8d
  int v9; // edx

  result = &off_1400032A0;
  if ( off_140C02520 == &off_1400032A0 )
  {
    v1 = (unsigned __int64 **)qword_140C4D0A8;
  }
  else
  {
    result = (__int64 (__fastcall **)())qword_140C4D0A8;
    v1 = (unsigned __int64 **)(qword_140C4D0A8 + 8LL
                                               * (unsigned int)(dword_140C4D044 * HIDWORD(KeGetPcr()[1].LockArray)));
  }
  v2 = dword_140C4A404;
  for ( i = 0; i < v2; ++v1 )
  {
    v4 = 0;
    v5 = 1;
    v6 = *((_DWORD *)*v1 + 6);
    v7 = **v1;
    v8 = *(_DWORD *)(*v1)[2];
    if ( v6 )
    {
      v9 = v6 - 1;
      if ( v9 )
      {
        if ( v9 == 1 )
        {
          result = (__int64 (__fastcall **)())sub_140521A70(i, **v1, v8);
          goto LABEL_9;
        }
        v5 = 0;
        v7 = 0LL;
        v8 = 0;
      }
    }
    else
    {
      v4 = 1;
    }
    result = (__int64 (__fastcall **)())sub_140399A14(i, v5, v7, v8, v4);
LABEL_9:
    ++i;
  }
  return result;
}
