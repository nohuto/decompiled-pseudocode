/*
 * XREFs of sub_1C001E550 @ 0x1C001E550
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B9D0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_1C003EDF0 @ 0x1C003EDF0 (sub_1C003EDF0.c)
 */

__int64 __fastcall sub_1C001E550(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v4; // ecx
  __int64 v5; // r9
  int v6; // eax
  __int64 v7; // rdx
  int v8; // edx
  PDEVICE_OBJECT v10; // rcx
  __int64 v11; // rdx

  if ( !a1 )
  {
    v10 = off_1C0093070;
    if ( off_1C0093070 == (PDEVICE_OBJECT)&off_1C0093070
      || (HIDWORD(off_1C0093070->Timer) & 0x10) == 0
      || BYTE1(off_1C0093070->Timer) < 2u )
    {
      return 3238002694LL;
    }
    v11 = 35LL;
    goto LABEL_23;
  }
  if ( !a2 )
  {
    v10 = off_1C0093070;
    if ( off_1C0093070 == (PDEVICE_OBJECT)&off_1C0093070
      || (HIDWORD(off_1C0093070->Timer) & 0x10) == 0
      || BYTE1(off_1C0093070->Timer) < 2u )
    {
      return 3238002694LL;
    }
    v11 = 36LL;
    goto LABEL_23;
  }
  if ( !a3 )
  {
    v10 = off_1C0093070;
    if ( off_1C0093070 == (PDEVICE_OBJECT)&off_1C0093070
      || (HIDWORD(off_1C0093070->Timer) & 0x10) == 0
      || BYTE1(off_1C0093070->Timer) < 2u )
    {
      return 3238002694LL;
    }
    v11 = 37LL;
    goto LABEL_23;
  }
  v4 = a3[1];
  if ( v4 < 0x10 )
  {
    v10 = off_1C0093070;
    if ( off_1C0093070 == (PDEVICE_OBJECT)&off_1C0093070
      || (HIDWORD(off_1C0093070->Timer) & 0x10) == 0
      || BYTE1(off_1C0093070->Timer) < 2u )
    {
      return 3238002694LL;
    }
    v11 = 38LL;
    goto LABEL_23;
  }
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v5 = *(_QWORD *)(a2 + 96);
  else
    v5 = *(_QWORD *)(a2 + 48);
  if ( !v5 )
  {
    v10 = off_1C0093070;
    if ( off_1C0093070 == (PDEVICE_OBJECT)&off_1C0093070
      || (HIDWORD(off_1C0093070->Timer) & 0x10) == 0
      || BYTE1(off_1C0093070->Timer) < 2u )
    {
      return 3238002694LL;
    }
    v11 = 39LL;
    goto LABEL_23;
  }
  v6 = *(_DWORD *)(v5 + 18);
  if ( v4 >= 0x14 && *a3 == 2 )
    a3[4] = v6;
  else
    *a3 = 1;
  a3[3] = *(_DWORD *)(v5 + 24);
  v7 = **(_QWORD **)(a1 - 16);
  if ( !v7 )
  {
    v10 = off_1C0093070;
    if ( off_1C0093070 == (PDEVICE_OBJECT)&off_1C0093070
      || (HIDWORD(off_1C0093070->Timer) & 0x10) == 0
      || BYTE1(off_1C0093070->Timer) < 2u )
    {
      return 3238002694LL;
    }
    v11 = 34LL;
LABEL_23:
    sub_1C003EDF0(v10->AttachedDevice, v11, &unk_1C0083210);
    return 3238002694LL;
  }
  if ( (*(_BYTE *)(v7 + 4596) & 2) == 0
    || (unsigned __int16)v6 >= *(_WORD *)(v7 + 4598)
    || (v8 = *(unsigned __int8 *)(BYTE2(v6) + ((unsigned __int16)v6 << 6) + *(_QWORD *)(v7 + 4616)),
        a3[2] = v8,
        v8 == 255) )
  {
    a3[2] = 0;
  }
  return 0LL;
}
