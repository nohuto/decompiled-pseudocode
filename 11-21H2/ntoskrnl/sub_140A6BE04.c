/*
 * XREFs of sub_140A6BE04 @ 0x140A6BE04
 * Callers:
 *     sub_140A6AEC0 @ 0x140A6AEC0 (sub_140A6AEC0.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     HalReturnToFirmware @ 0x14050A7E0 (HalReturnToFirmware.c)
 *     sub_1405430DC @ 0x1405430DC (sub_1405430DC.c)
 *     sub_14054ED18 @ 0x14054ED18 (sub_14054ED18.c)
 *     sub_1405E4210 @ 0x1405E4210 (sub_1405E4210.c)
 *     sub_140A4AF0C @ 0x140A4AF0C (sub_140A4AF0C.c)
 *     sub_140A6AE00 @ 0x140A6AE00 (sub_140A6AE00.c)
 *     sub_140A6BDA0 @ 0x140A6BDA0 (sub_140A6BDA0.c)
 */

void __fastcall __noreturn sub_140A6BE04(__int64 a1, __int64 a2)
{
  int v2; // ebx
  int v3; // ebx
  int v4; // ebx

  v2 = a1;
  sub_140A6BDA0(a1, a2);
  sub_14054ED18(0);
  if ( byte_140D0688B )
    sub_1405430DC(0);
  sub_140A6AE00();
  sub_1405E4210(0LL, -1LL, 0LL);
  if ( (dword_140C22278 & 0x800) == 0 || ((v2 - 4) & 0xFFFFFFFD) != 0 )
  {
    v3 = v2 - 4;
    if ( !v3 )
    {
      if ( (_BYTE)byte_140C22C98 )
        qword_140C233A8 = (__int64)sub_140A6BDD0;
      goto LABEL_12;
    }
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 != 1 )
LABEL_13:
        HalReturnToFirmware(3);
LABEL_12:
      sub_140A4AF0C(4, 0LL);
      HalReturnToFirmware(1);
    }
  }
  sub_140A4AF0C(5, 0LL);
  goto LABEL_13;
}
