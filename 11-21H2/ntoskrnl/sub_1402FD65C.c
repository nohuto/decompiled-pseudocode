/*
 * XREFs of sub_1402FD65C @ 0x1402FD65C
 * Callers:
 *     sub_140207028 @ 0x140207028 (sub_140207028.c)
 *     sub_14021F640 @ 0x14021F640 (sub_14021F640.c)
 *     sub_140244144 @ 0x140244144 (sub_140244144.c)
 *     sub_1402A45CC @ 0x1402A45CC (sub_1402A45CC.c)
 *     sub_1402F9680 @ 0x1402F9680 (sub_1402F9680.c)
 *     SeAccessCheckWithHint @ 0x1402F9CF0 (SeAccessCheckWithHint.c)
 *     sub_1402FB0E0 @ 0x1402FB0E0 (sub_1402FB0E0.c)
 *     sub_1402FBEC0 @ 0x1402FBEC0 (sub_1402FBEC0.c)
 *     sub_140384600 @ 0x140384600 (sub_140384600.c)
 *     sub_14038473C @ 0x14038473C (sub_14038473C.c)
 *     sub_1405F4040 @ 0x1405F4040 (sub_1405F4040.c)
 *     sub_14064AFB8 @ 0x14064AFB8 (sub_14064AFB8.c)
 *     sub_14064B0FC @ 0x14064B0FC (sub_14064B0FC.c)
 *     sub_140731DA0 @ 0x140731DA0 (sub_140731DA0.c)
 *     sub_14078DDF0 @ 0x14078DDF0 (sub_14078DDF0.c)
 *     sub_1407F4B20 @ 0x1407F4B20 (sub_1407F4B20.c)
 * Callees:
 *     RtlEqualSid @ 0x1402A6DB0 (RtlEqualSid.c)
 *     RtlSidHashLookup @ 0x1402FD710 (RtlSidHashLookup.c)
 */

bool __fastcall sub_1402FD65C(PSID_AND_ATTRIBUTES_HASH SidAttrHash, void *a2, void *a3, char a4, char a5, char a6)
{
  void *v7; // rbx
  PSID_AND_ATTRIBUTES v10; // rax
  bool result; // al
  ULONG Attributes; // ecx

  v7 = a3;
  if ( a2 && RtlEqualSid(Sid1, a3) )
    v7 = a2;
  result = 1;
  if ( !a6 || !RtlEqualSid(Buf1, v7) )
  {
    v10 = RtlSidHashLookup(SidAttrHash, v7);
    if ( !v10 )
      return 0;
    if ( a5 || v10 != SidAttrHash->SidAttr || (v10->Attributes & 0x10) != 0 && !a4 )
    {
      Attributes = v10->Attributes;
      if ( (Attributes & 4) == 0 && (!a4 || (Attributes & 0x10) == 0) )
        return 0;
    }
  }
  return result;
}
