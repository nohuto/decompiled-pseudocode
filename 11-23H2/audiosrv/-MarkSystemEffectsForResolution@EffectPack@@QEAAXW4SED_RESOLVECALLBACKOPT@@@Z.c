/*
 * XREFs of ?MarkSystemEffectsForResolution@EffectPack@@QEAAXW4SED_RESOLVECALLBACKOPT@@@Z @ 0x1800301F4
 * Callers:
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z @ 0x180036A20 (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z.c)
 *     ?SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@_N@Z @ 0x1800605C8 (-SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSettings.c)
 * Callees:
 *     ?MarkAsNeedsResolution@SystemEffectDescriptor@@QEAAXW4SED_RESOLVECALLBACKOPT@@@Z @ 0x1800302B0 (-MarkAsNeedsResolution@SystemEffectDescriptor@@QEAAXW4SED_RESOLVECALLBACKOPT@@@Z.c)
 */

char *__fastcall EffectPack::MarkSystemEffectsForResolution(_QWORD *a1, unsigned int a2)
{
  int v2; // eax
  int *i; // rsi
  unsigned __int64 v6; // rdi
  __int64 v7; // r14
  char *result; // rax
  int v9; // [rsp+50h] [rbp+18h] BYREF
  int v10; // [rsp+54h] [rbp+1Ch]
  char v11; // [rsp+58h] [rbp+20h] BYREF

  v2 = 0;
  v10 = 1;
  v9 = 0;
  for ( i = &v9; ; v2 = *i )
  {
    v6 = v2;
    if ( (unsigned __int64)v2 >= a1[144]
      || (v7 = 96LL * v2, SystemEffectDescriptor::MarkAsNeedsResolution(v7 + a1[145], a2), v6 >= a1[146])
      || (SystemEffectDescriptor::MarkAsNeedsResolution(v7 + a1[147], a2), v6 >= a1[148]) )
    {
      _o_terminate(a1);
      __debugbreak();
      JUMPOUT(0x1800302AALL);
    }
    SystemEffectDescriptor::MarkAsNeedsResolution(v7 + a1[149], a2);
    result = &v11;
    if ( ++i == (int *)&v11 )
      break;
  }
  return result;
}
