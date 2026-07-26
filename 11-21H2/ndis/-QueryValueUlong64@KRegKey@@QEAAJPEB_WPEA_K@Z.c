/*
 * XREFs of ?QueryValueUlong64@KRegKey@@QEAAJPEB_WPEA_K@Z @ 0x1C0113AE0
 * Callers:
 *     ?ReadKnobFromKey@RegistryKnobCollection@@MEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z @ 0x1C01138B0 (-ReadKnobFromKey@RegistryKnobCollection@@MEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z.c)
 * Callees:
 *     ?QueryValueUlong64@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEA_K@Z @ 0x1C0113B6C (-QueryValueUlong64@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEA_K@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueUlong64(KRegKey *this, wchar_t *a2, unsigned __int64 *a3)
{
  __int64 v3; // r9
  wchar_t *v4; // rax
  struct _UNICODE_STRING v6; // [rsp+20h] [rbp-18h] BYREF

  v6 = 0LL;
  if ( !a2 )
    return KRegKey::QueryValueUlong64(this, &v6, a3);
  v3 = 0x7FFFLL;
  v4 = a2;
  do
  {
    if ( !*v4 )
      break;
    ++v4;
    --v3;
  }
  while ( v3 );
  if ( v3 )
  {
    v6.Buffer = a2;
    v6.Length = -2 - 2 * v3;
    v6.MaximumLength = -2 * v3;
    return KRegKey::QueryValueUlong64(this, &v6, a3);
  }
  return 3221225485LL;
}
