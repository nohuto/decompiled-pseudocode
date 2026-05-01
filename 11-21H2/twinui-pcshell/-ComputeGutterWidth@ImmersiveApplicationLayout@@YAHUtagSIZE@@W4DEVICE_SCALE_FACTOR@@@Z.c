/*
 * XREFs of ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x1805EF8D0
 * Callers:
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1805EF8A0 (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?ComputeLayoutEnvMaxApps@ImmersiveApplicationLayout@@YAIPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1805EF968 (-ComputeLayoutEnvMaxApps@ImmersiveApplicationLayout@@YAIPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800C27AC (-IsPPIEdition@@YA_NXZ.c)
 */

__int64 __fastcall ImmersiveApplicationLayout::ComputeGutterWidth(
        ImmersiveApplicationLayout *this,
        struct tagSIZE a2,
        enum DEVICE_SCALE_FACTOR a3)
{
  LONG cx; // esi
  int v4; // ebx
  unsigned int v5; // edi
  int v7; // [rsp+34h] [rbp+Ch]

  v7 = HIDWORD(this);
  cx = a2.cx;
  v4 = (int)this;
  v5 = a2.cx * (IsPPIEdition() ? 28 : 20) / 100;
  if ( !IsPPIEdition()
    && v4 == *((_DWORD *)&unk_1806FC708 - 2)
    && (!*((_BYTE *)&unk_1806FC708 - 4) || v7 == unk_1806FC708)
    && cx == *((_DWORD *)&unk_1806FC708 + 1) )
  {
    return (unsigned int)(cx * *((_DWORD *)&unk_1806FC708 + 2) / 100);
  }
  return v5;
}
