/*
 * XREFs of sub_14050A93C @ 0x14050A93C
 * Callers:
 *     sub_140508F00 @ 0x140508F00 (sub_140508F00.c)
 *     HalReturnToFirmware @ 0x14050A7E0 (HalReturnToFirmware.c)
 *     sub_14051F9A8 @ 0x14051F9A8 (sub_14051F9A8.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x140303560 (KeStallExecutionProcessor.c)
 *     sub_14039174C @ 0x14039174C (sub_14039174C.c)
 *     sub_1403B2B00 @ 0x1403B2B00 (sub_1403B2B00.c)
 *     sub_1403BF3B8 @ 0x1403BF3B8 (sub_1403BF3B8.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140510080 @ 0x140510080 (sub_140510080.c)
 */

void __fastcall __noreturn sub_14050A93C(__int64 a1, volatile signed __int32 *a2)
{
  int v3; // esi
  __int64 v4; // rdx
  unsigned __int64 v5; // rax
  __int64 v6; // rdx

  v3 = a1;
  if ( qword_140CE1BE0 )
    sub_14042A5E0(a1, a2);
  if ( !v3 )
  {
    if ( sub_14039174C() )
    {
      __outbyte(0x70u, 0xFu);
      __outbyte(0x71u, 0);
      KeStallExecutionProcessor(0x64u);
    }
    if ( !byte_140C4BFC8 )
    {
      v5 = sub_1403BF3B8(0LL, 1LL, 1u, 0LL, 4u);
      if ( v5 )
        *(_WORD *)(v5 + 1138) = 4660;
    }
    if ( (dword_140C0C60C & 4) != 0 )
    {
      __outbyte(0x70u, 0x15u);
      KeStallExecutionProcessor(1u);
    }
    if ( byte_140C4C438 )
    {
      v4 = 0LL;
      __writemsr(0x40000003u, 1uLL);
    }
    if ( byte_140C4A620 )
    {
      sub_1403B2B00(8, 0, (__int64)&unk_140C4C0A0, 1u, 0LL);
      KeStallExecutionProcessor(0x1F4u);
    }
    if ( (dword_140C0C60C & 2) != 0 )
    {
      __outbyte(0x64u, 0xFEu);
      KeStallExecutionProcessor(0x1388u);
    }
    if ( byte_140C4BFC8 )
    {
      sub_140510080(1LL, v4);
      sub_140510080(0LL, v6);
      __debugbreak();
    }
  }
  if ( a2 )
    _InterlockedDecrement(a2);
  __halt();
}
