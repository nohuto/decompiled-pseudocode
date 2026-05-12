/*
 * XREFs of sub_1C00454F4 @ 0x1C00454F4
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B9D0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_1C00076F4 @ 0x1C00076F4 (sub_1C00076F4.c)
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 *     sub_1C000E318 @ 0x1C000E318 (sub_1C000E318.c)
 *     sub_1C001AAE0 @ 0x1C001AAE0 (sub_1C001AAE0.c)
 *     sub_1C0021E44 @ 0x1C0021E44 (sub_1C0021E44.c)
 *     sub_1C00783F0 @ 0x1C00783F0 (sub_1C00783F0.c)
 */

__int64 __fastcall sub_1C00454F4(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rdi
  char v3; // r14
  unsigned int v6; // ebx
  _DWORD *v7; // rax
  int v8; // eax
  _QWORD *v9; // rsi
  _QWORD *v10; // rax
  __int64 v11; // rbx
  struct _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  void *KeyHandle; // [rsp+98h] [rbp+38h] BYREF

  KeyHandle = 0LL;
  v2 = 0LL;
  v3 = 0;
  memset(&ObjectAttributes, 0, 44);
  UnicodeString = 0LL;
  if ( !a2 || (v7 = sub_1C000E2EC(a1), (v2 = v7) == 0LL) )
  {
    v6 = -1056964602;
    goto LABEL_15;
  }
  v8 = sub_1C00076F4((__int64)v7);
  if ( v8 < 0 )
    goto LABEL_5;
  v3 = 1;
  if ( !*((_QWORD *)v2 + 750) )
  {
    v8 = sub_1C00783F0((PCUNICODE_STRING)(*((_QWORD *)v2 + 2) + 40LL), &UnicodeString);
    if ( v8 < 0
      || (ObjectAttributes.RootDirectory = 0LL,
          ObjectAttributes.ObjectName = &UnicodeString,
          ObjectAttributes.Length = 48,
          ObjectAttributes.Attributes = 576,
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
          v8 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes),
          v8 < 0) )
    {
LABEL_5:
      v6 = sub_1C000E318(v8);
      goto LABEL_15;
    }
    v9 = (_QWORD *)sub_1C0007CF4(64LL, 192LL, 1465016658LL, 0LL);
    if ( !v9 )
    {
      v6 = -1056964605;
      goto LABEL_15;
    }
    v10 = (_QWORD *)sub_1C0007CF4(64LL, 192LL, 1465016658LL, 0LL);
    v11 = (__int64)v10;
    if ( !v10 )
    {
      v6 = -1056964605;
      ExFreePoolWithTag(v9, 0x57526152u);
      goto LABEL_15;
    }
    *v9 = a1;
    v9[1] = a2;
    *v10 = v9;
    v10[1] = sub_1C0045280;
    sub_1C0021E44((__int64)KeyHandle, (__int64)v10);
    sub_1C001AAE0(v11);
    *((_QWORD *)v2 + 750) = v11;
    KeyHandle = 0LL;
  }
  v6 = 0;
LABEL_15:
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v2 && v3 )
    ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)v2 + 37));
  return v6;
}
