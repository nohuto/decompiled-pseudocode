/*
 * XREFs of ??0MinimizeAnimationSystemStateOverride@@QEAA@H@Z @ 0x18054C2C0
 * Callers:
 *     ??$make_unique@VMinimizeAnimationSystemStateOverride@@H$0A@@std@@YA?AV?$unique_ptr@VMinimizeAnimationSystemStateOverride@@U?$default_delete@VMinimizeAnimationSystemStateOverride@@@std@@@0@$$QEAH@Z @ 0x18054BD78 (--$make_unique@VMinimizeAnimationSystemStateOverride@@H$0A@@std@@YA-AV-$unique_ptr@VMinimizeAnim.c)
 * Callees:
 *     <none>
 */

MinimizeAnimationSystemStateOverride *__fastcall MinimizeAnimationSystemStateOverride::MinimizeAnimationSystemStateOverride(
        MinimizeAnimationSystemStateOverride *this,
        int a2)
{
  int pvParam; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+34h] [rbp+Ch]

  *(_DWORD *)this = -1;
  pvParam = 8;
  SystemParametersInfoW(0x48u, 8u, &pvParam, 0);
  *(_DWORD *)this = v6;
  pvParam = 8;
  v6 = a2;
  SystemParametersInfoW(0x49u, 8u, &pvParam, 0);
  return this;
}
