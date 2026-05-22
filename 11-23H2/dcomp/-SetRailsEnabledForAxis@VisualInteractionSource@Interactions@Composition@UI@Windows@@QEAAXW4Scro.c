/*
 * XREFs of ?SetRailsEnabledForAxis@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAXW4ScrollAxis@@_N@Z @ 0x18011E0DC
 * Callers:
 *     ?OnAnimatedPropertyChanged@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x18011DAD0 (-OnAnimatedPropertyChanged@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJIIW.c)
 *     ?put_IsPositionXRailsEnabled@Api@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJE@Z @ 0x18011EFD0 (-put_IsPositionXRailsEnabled@Api@VisualInteractionSource@Interactions@Composition@UI@Windows@@UE.c)
 *     ?put_IsPositionYRailsEnabled@Api@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJE@Z @ 0x18011F060 (-put_IsPositionYRailsEnabled@Api@VisualInteractionSource@Interactions@Composition@UI@Windows@@UE.c)
 * Callees:
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

char __fastcall Windows::UI::Composition::Interactions::VisualInteractionSource::SetRailsEnabledForAxis(
        __int64 a1,
        int a2,
        unsigned __int8 a3)
{
  __int64 v3; // rsi
  __int64 v5; // rdi
  char result; // al
  __int64 v7; // rcx
  int v8; // r8d
  __int64 v9; // rax
  int v10; // edx
  __int64 v11; // rdx

  v3 = a2;
  v5 = a3;
  result = (*(_BYTE *)(a1 + 8LL * a2 + 200) & 4) != 0;
  if ( result != a3 )
  {
    if ( a2 )
    {
      if ( a2 != 1 )
        Microsoft::WRL2::FailFast::Unexpected(0LL);
      v7 = *(_QWORD *)(a1 + 240);
      v8 = 14;
      v9 = *(_QWORD *)(v7 + 24);
      v10 = *(_DWORD *)(v7 + 128);
    }
    else
    {
      v11 = *(_QWORD *)(a1 + 240);
      v8 = 13;
      v9 = *(_QWORD *)(v11 + 24);
      v10 = *(_DWORD *)(v11 + 128);
    }
    DirectComposition::CDevice::ResourceSetIntegerProperty(*(DirectComposition::CDevice **)(v9 + 456), v10, v8, v5);
    result = (4 * v5) | *(_BYTE *)(a1 + 8 * v3 + 200) & 0xFB;
    *(_BYTE *)(a1 + 8 * v3 + 200) = result;
  }
  return result;
}
