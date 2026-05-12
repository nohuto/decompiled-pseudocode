/*
 * XREFs of sub_1C00356B8 @ 0x1C00356B8
 * Callers:
 *     sub_1C0014EE0 @ 0x1C0014EE0 (sub_1C0014EE0.c)
 * Callees:
 *     sub_1C00081BC @ 0x1C00081BC (sub_1C00081BC.c)
 *     sub_1C001A194 @ 0x1C001A194 (sub_1C001A194.c)
 *     sub_1C003EEB0 @ 0x1C003EEB0 (sub_1C003EEB0.c)
 */

void __fastcall sub_1C00356B8(__int64 a1, unsigned int a2)
{
  unsigned __int8 v2; // bl
  __int64 v3; // rax
  __int64 v4; // rdi
  volatile LONG *v5; // rbx
  KIRQL v6; // al

  v2 = a2;
  v3 = sub_1C00081BC(a1, a2);
  v4 = v3;
  if ( v3 )
  {
    v5 = (volatile LONG *)(v3 + 728);
    v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 728));
    *(_DWORD *)(v4 + 684) = 0;
    ExReleaseSpinLockExclusive(v5, v6);
    sub_1C001A194(v4, 0);
  }
  else if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
         && (HIDWORD(off_1C0093070->Timer) & 0x20) != 0
         && BYTE1(off_1C0093070->Timer) >= 3u )
  {
    sub_1C003EEB0(off_1C0093070->AttachedDevice, 55LL, &unk_1C0083210, v2, BYTE1(a2), BYTE2(a2));
  }
}
