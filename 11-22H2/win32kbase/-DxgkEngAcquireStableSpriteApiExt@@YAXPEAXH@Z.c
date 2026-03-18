/*
 * XREFs of ?DxgkEngAcquireStableSpriteApiExt@@YAXPEAXH@Z @ 0x1C00E0480
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgkEngAcquireStableSpriteApiExt(void *a1, unsigned int a2)
{
  if ( qword_1C02945A0 && (int)qword_1C02945A0() >= 0 )
  {
    if ( qword_1C02945A8 )
      qword_1C02945A8(a1, a2);
  }
}
