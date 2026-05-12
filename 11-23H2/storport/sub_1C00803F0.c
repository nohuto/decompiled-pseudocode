/*
 * XREFs of sub_1C00803F0 @ 0x1C00803F0
 * Callers:
 *     sub_1C0080584 @ 0x1C0080584 (sub_1C0080584.c)
 * Callees:
 *     sub_1C003EE1C @ 0x1C003EE1C (sub_1C003EE1C.c)
 *     sub_1C0080710 @ 0x1C0080710 (sub_1C0080710.c)
 *     sub_1C0080BE0 @ 0x1C0080BE0 (sub_1C0080BE0.c)
 *     sub_1C0080CE4 @ 0x1C0080CE4 (sub_1C0080CE4.c)
 */

__int64 __fastcall sub_1C00803F0(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rax
  int v4; // r9d
  PDEVICE_OBJECT v5; // rcx
  unsigned __int16 v6; // dx
  __int64 *v7; // r14
  unsigned int v8; // ebp
  int v9; // r9d
  int v10; // eax
  int v11; // eax
  __int64 v12; // r8

  v2 = sub_1C0080710(a1 + 56, a1 + 80);
  if ( v2 >= 0 )
  {
    v3 = *(_QWORD *)(a1 + 80);
    v4 = *(_DWORD *)(v3 + 8);
    if ( v4 != 5 )
    {
      v5 = off_1C0093070;
      if ( off_1C0093070 == (PDEVICE_OBJECT)&off_1C0093070 || BYTE1(off_1C0093070->Timer) < 2u )
        return (unsigned int)-1073741435;
      v6 = 17;
LABEL_6:
      sub_1C003EE1C((__int64)v5->AttachedDevice, v6, (__int64)&unk_1C008B728, v4);
      return (unsigned int)-1073741435;
    }
    v4 = *(_DWORD *)(v3 + 12);
    if ( v4 != 3 )
    {
      v5 = off_1C0093070;
      if ( off_1C0093070 == (PDEVICE_OBJECT)&off_1C0093070 || BYTE1(off_1C0093070->Timer) < 2u )
        return (unsigned int)-1073741435;
      v6 = 18;
      goto LABEL_6;
    }
    v7 = *(__int64 **)(v3 + 16);
    v8 = 0;
    while ( v8 < 3 )
    {
      if ( v7 )
      {
        v9 = *((_DWORD *)v7 + 2);
        if ( v9 == 8 )
        {
          if ( !v8 )
          {
            v10 = *((unsigned __int8 *)v7 + 16);
            *(_BYTE *)(a1 + 88) = v10;
            if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 4u )
              sub_1C003EE1C((__int64)off_1C0093070->AttachedDevice, 0x14u, (__int64)&unk_1C008B728, v10);
          }
        }
        else
        {
          if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
            sub_1C003EE1C((__int64)off_1C0093070->AttachedDevice, 0x13u, (__int64)&unk_1C008B728, v9);
          v2 = -1073741435;
        }
        v7 = (__int64 *)*v7;
        ++v8;
        if ( v2 >= 0 )
          continue;
      }
      if ( v2 < 0 )
        return (unsigned int)v2;
      break;
    }
    if ( *(_BYTE *)(a1 + 88) )
    {
      v11 = sub_1C0080BE0(a1);
      v2 = v11;
      if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
        sub_1C0080CE4(off_1C0093070->AttachedDevice, 21LL, v12, *(unsigned __int8 *)(a1 + 88), v11);
    }
  }
  return (unsigned int)v2;
}
