/*
 * XREFs of ?MarkSystemEffectsForResolution@CEndpointCharacteristics@@AEAAXW4SED_RESOLVECALLBACKOPT@@@Z @ 0x18014B758
 * Callers:
 *     ?SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@_N@Z @ 0x18006A144 (-SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEBUSpatialAudioSettings@@PEBUtWAVEFORMA.c)
 * Callees:
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z @ 0x1800101C0 (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z.c)
 *     ?MarkAsNeedsResolution@SystemEffectDescriptor@@QEAAXW4SED_RESOLVECALLBACKOPT@@@Z @ 0x18014FD28 (-MarkAsNeedsResolution@SystemEffectDescriptor@@QEAAXW4SED_RESOLVECALLBACKOPT@@@Z.c)
 */

__int64 *__fastcall CEndpointCharacteristics::MarkSystemEffectsForResolution(unsigned __int64 *a1, unsigned int a2)
{
  __int64 *v2; // rdi
  unsigned __int64 *v4; // rbp
  unsigned __int64 *v5; // r14
  unsigned __int64 *v6; // r15
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 *result; // rax
  int v12; // [rsp+50h] [rbp+18h] BYREF
  int v13; // [rsp+54h] [rbp+1Ch]
  __int64 v14; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0;
  v2 = (__int64 *)&v12;
  v13 = 1;
  v4 = a1 + 224;
  v5 = a1 + 226;
  v6 = a1 + 228;
  do
  {
    v7 = *(int *)v2;
    v8 = gsl::span<SystemEffectDescriptor,-1>::operator[](v4, v7);
    SystemEffectDescriptor::MarkAsNeedsResolution(v8, a2);
    v9 = gsl::span<SystemEffectDescriptor,-1>::operator[](v5, v7);
    SystemEffectDescriptor::MarkAsNeedsResolution(v9, a2);
    v10 = gsl::span<SystemEffectDescriptor,-1>::operator[](v6, v7);
    SystemEffectDescriptor::MarkAsNeedsResolution(v10, a2);
    result = &v14;
    v2 = (__int64 *)((char *)v2 + 4);
  }
  while ( v2 != &v14 );
  return result;
}
