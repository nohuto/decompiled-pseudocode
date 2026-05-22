/*
 * XREFs of ?SetVector3RefValue@Vector3NaturalMotionAnimation@Composition@UI@Windows@@CAJUVector3@Numerics@Foundation@4@_NPEAU?$ScalarNullable@UVector3@Numerics@Foundation@Windows@@@WRL2@Microsoft@@@Z @ 0x180168848
 * Callers:
 *     ?put_FinalValue@Api@Vector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAU?$IReference@UVector3@Numerics@Foundation@Windows@@@Foundation@5@@Z @ 0x180168A90 (-put_FinalValue@Api@Vector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAU-$IReference@.c)
 *     ?put_InitialValue@Api@Vector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAU?$IReference@UVector3@Numerics@Foundation@Windows@@@Foundation@5@@Z @ 0x180168B70 (-put_InitialValue@Api@Vector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAU-$IReferenc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::Vector3NaturalMotionAnimation::SetVector3RefValue(
        __int64 a1,
        char a2,
        __int64 a3)
{
  char v3; // al
  int v4; // eax

  v3 = 0;
  if ( a2 )
  {
    v4 = *(_DWORD *)(a1 + 8);
    *(_QWORD *)a3 = *(_QWORD *)a1;
    *(_DWORD *)(a3 + 8) = v4;
    v3 = 1;
  }
  *(_BYTE *)(a3 + 12) = v3;
  return 0LL;
}
