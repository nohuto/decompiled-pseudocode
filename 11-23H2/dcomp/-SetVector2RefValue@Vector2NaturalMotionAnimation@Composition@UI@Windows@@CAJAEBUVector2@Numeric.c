/*
 * XREFs of ?SetVector2RefValue@Vector2NaturalMotionAnimation@Composition@UI@Windows@@CAJAEBUVector2@Numerics@Foundation@4@_NPEAU?$ScalarNullable@UVector2@Numerics@Foundation@Windows@@@WRL2@Microsoft@@@Z @ 0x180168224
 * Callers:
 *     ?put_FinalValue@Api@Vector2NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAU?$IReference@UVector2@Numerics@Foundation@Windows@@@Foundation@5@@Z @ 0x180168490 (-put_FinalValue@Api@Vector2NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAU-$IReference@.c)
 *     ?put_InitialValue@Api@Vector2NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAU?$IReference@UVector2@Numerics@Foundation@Windows@@@Foundation@5@@Z @ 0x180168540 (-put_InitialValue@Api@Vector2NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAU-$IReferenc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::Vector2NaturalMotionAnimation::SetVector2RefValue(
        _QWORD *a1,
        char a2,
        __int64 a3)
{
  char v3; // al

  v3 = 0;
  if ( a2 )
  {
    v3 = 1;
    *(_QWORD *)a3 = *a1;
  }
  *(_BYTE *)(a3 + 8) = v3;
  return 0LL;
}
