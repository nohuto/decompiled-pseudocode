/*
 * XREFs of sub_140A0980C @ 0x140A0980C
 * Callers:
 *     sub_140646AB8 @ 0x140646AB8 (sub_140646AB8.c)
 *     sub_140A09B3C @ 0x140A09B3C (sub_140A09B3C.c)
 * Callees:
 *     RtlWriteRegistryValue @ 0x1406D76C0 (RtlWriteRegistryValue.c)
 *     RtlCheckRegistryKey @ 0x1406DEF70 (RtlCheckRegistryKey.c)
 *     RtlCreateRegistryKey @ 0x1408609D0 (RtlCreateRegistryKey.c)
 *     sub_140A09A80 @ 0x140A09A80 (sub_140A09A80.c)
 *     sub_140A0A16C @ 0x140A0A16C (sub_140A0A16C.c)
 */

__int64 sub_140A0980C()
{
  NTSTATUS RegistryKey; // ebx
  char v1; // bp
  _BYTE *v2; // rdi
  unsigned int v3; // esi
  wchar_t **v4; // r14

  RegistryKey = RtlCheckRegistryKey(2u, (PWSTR)L"WHEA\\Policy");
  if ( RegistryKey < 0 )
  {
    RegistryKey = RtlCreateRegistryKey(2u, (PWSTR)L"WHEA");
    if ( RegistryKey >= 0 )
      RegistryKey = RtlCreateRegistryKey(2u, (PWSTR)L"WHEA\\Policy");
  }
  if ( RegistryKey >= 0 )
  {
    v1 = 0;
    v2 = byte_140D3B300;
    v3 = 0;
    v4 = &off_140A3A100;
    while ( 1 )
    {
      if ( *v2 )
      {
        v1 = 1;
        RegistryKey = RtlWriteRegistryValue(2u, L"WHEA\\Policy", *v4, 4u, v4[1], 4u);
        if ( RegistryKey < 0 )
          break;
      }
      ++v3;
      ++v2;
      v4 += 4;
      if ( v3 >= 0x11 )
      {
        if ( v1 )
          sub_140A0A16C();
        break;
      }
    }
    sub_140A09A80();
  }
  return (unsigned int)RegistryKey;
}
