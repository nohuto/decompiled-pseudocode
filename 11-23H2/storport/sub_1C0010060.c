/*
 * XREFs of sub_1C0010060 @ 0x1C0010060
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C003EDF0 @ 0x1C003EDF0 (sub_1C003EDF0.c)
 */

void __fastcall sub_1C0010060(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  if ( *(_QWORD *)(a2 + 56) >= 0x20uLL && *(int *)(a2 + 48) >= 0 )
  {
    v2 = *(_QWORD *)(a2 + 24);
    if ( v2 )
    {
      *(_WORD *)(v2 + 30) = 0;
      if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
        && (HIDWORD(off_1C0093070->Timer) & 0x10) != 0
        && BYTE1(off_1C0093070->Timer) >= 4u )
      {
        sub_1C003EDF0(off_1C0093070->AttachedDevice, 17LL, &unk_1C008B030);
      }
    }
  }
}
