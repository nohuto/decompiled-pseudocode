/*
 * XREFs of sub_1C0006C10 @ 0x1C0006C10
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0006CB0 @ 0x1C0006CB0 (sub_1C0006CB0.c)
 *     sub_1C0007400 @ 0x1C0007400 (sub_1C0007400.c)
 *     sub_1C003F074 @ 0x1C003F074 (sub_1C003F074.c)
 *     sub_1C003F0C4 @ 0x1C003F0C4 (sub_1C003F0C4.c)
 *     sub_1C0040378 @ 0x1C0040378 (sub_1C0040378.c)
 */

__int64 __fastcall sub_1C0006C10(__int64 a1, __int64 a2)
{
  int *v4; // rcx
  int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // ebx

  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 0x10) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003F074(off_1C0093070->AttachedDevice, 16LL, &unk_1C0089898, a1, a2);
  }
  *(_BYTE *)(a2 + 141) = -88;
  v4 = *(int **)(a1 + 64);
  v5 = *v4;
  if ( *v4 == 1431193940 )
  {
    v6 = sub_1C0006CB0(v4, (PIRP)a2);
  }
  else if ( v5 == 1094997074 )
  {
    v6 = sub_1C0007400((int)v4, (PIRP)a2);
  }
  else
  {
    if ( v5 != 1146246738 )
    {
      v7 = -1073741823;
      goto LABEL_6;
    }
    v6 = sub_1C0040378(v4, a2);
  }
  v7 = v6;
LABEL_6:
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 0x10) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003F0C4(off_1C0093070->AttachedDevice, 17LL, &unk_1C0089898, a1, a2, v7);
  }
  return v7;
}
