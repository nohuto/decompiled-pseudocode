/*
 * XREFs of sub_1C0016A98 @ 0x1C0016A98
 * Callers:
 *     sub_1C00188AC @ 0x1C00188AC (sub_1C00188AC.c)
 * Callees:
 *     sub_1C0016C84 @ 0x1C0016C84 (sub_1C0016C84.c)
 *     sub_1C0018CC4 @ 0x1C0018CC4 (sub_1C0018CC4.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C003EDF0 @ 0x1C003EDF0 (sub_1C003EDF0.c)
 *     sub_1C003EE1C @ 0x1C003EE1C (sub_1C003EE1C.c)
 *     sub_1C003EF0C @ 0x1C003EF0C (sub_1C003EF0C.c)
 *     sub_1C003EF50 @ 0x1C003EF50 (sub_1C003EF50.c)
 *     sub_1C003F3DC @ 0x1C003F3DC (sub_1C003F3DC.c)
 */

__int64 __fastcall sub_1C0016A98(_QWORD *a1, int a2, int a3, _BYTE *a4)
{
  int v8; // eax
  unsigned int v9; // edi
  __int64 result; // rax
  __int64 v11; // rbp
  unsigned __int8 *v12; // rdi
  unsigned int v13; // ebx
  unsigned __int8 *v14; // rdi
  unsigned __int16 v15; // bx
  unsigned __int16 i; // bx
  int v17; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int8 *v18; // [rsp+48h] [rbp-30h] BYREF

  v17 = 16;
  v18 = 0LL;
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && _bittest((const signed __int32 *)&off_1C0093070->Timer + 1, 0xEu)
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003F3DC(off_1C0093070->AttachedDevice, 15LL, &unk_1C0089838, *a1, (unsigned __int8)a2, BYTE1(a2), BYTE2(a2));
  }
  v8 = sub_1C0016C84((_DWORD)a1, a2, a3, (unsigned int)&v17, (__int64)&v18);
  v9 = v8;
  if ( v8 >= 0 )
  {
    LOWORD(v11) = 0;
LABEL_8:
    memset_0(a4, 0, 0xFFuLL);
    v12 = v18;
    v13 = (unsigned int)(v18[3] | ((v18[2] | ((v18[1] | (*v18 << 8)) << 8)) << 8)) >> 3;
    sub_1C0018CC4(*a1);
    if ( v13 )
    {
      v14 = v12 + 9;
      v11 = v13;
      do
      {
        v15 = _byteswap_ushort(*(_WORD *)(v14 - 1)) & 0x3FFF;
        if ( v15 >= 0xFFu )
        {
          if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 )
          {
            if ( _bittest((const signed __int32 *)&off_1C0093070->Timer + 1, 0xEu) && BYTE1(off_1C0093070->Timer) >= 3u )
              sub_1C003EF50(off_1C0093070->AttachedDevice, 17LL, &unk_1C0089838, *a1, v15);
            if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
              && _bittest((const signed __int32 *)&off_1C0093070->Timer + 1, 0xEu)
              && BYTE1(off_1C0093070->Timer) >= 3u )
            {
              sub_1C003EE1C(off_1C0093070->AttachedDevice, 18LL, &unk_1C0089838, v15);
            }
          }
        }
        else
        {
          a4[v15] = 1;
        }
        v14 += 8;
        --v11;
      }
      while ( v11 );
    }
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 )
    {
      if ( _bittest((const signed __int32 *)&off_1C0093070->Timer + 1, 0xEu) && BYTE1(off_1C0093070->Timer) >= 4u )
        sub_1C003EF0C(off_1C0093070->AttachedDevice, 19LL, &unk_1C0089838, *a1);
      if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
        && _bittest((const signed __int32 *)&off_1C0093070->Timer + 1, 0xEu)
        && BYTE1(off_1C0093070->Timer) >= 5u )
      {
        sub_1C003EDF0(off_1C0093070->AttachedDevice, 20LL, &unk_1C0089838);
      }
    }
    for ( i = v11; i < 0xFFu; ++i )
    {
      if ( *a4 != (_BYTE)v11
        && off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
        && _bittest((const signed __int32 *)&off_1C0093070->Timer + 1, 0xEu)
        && BYTE1(off_1C0093070->Timer) >= 5u )
      {
        sub_1C003EE1C(off_1C0093070->AttachedDevice, 21LL, &unk_1C0089838, i);
      }
      ++a4;
    }
    return 0LL;
  }
  if ( v8 == -1073741789 )
  {
    result = sub_1C0016C84((_DWORD)a1, a2, a3, (unsigned int)&v17, (__int64)&v18);
    if ( (_DWORD)result == v9 )
    {
      v17 = 8 * *(unsigned __int8 *)(*a1 + 490LL) + 8;
      result = sub_1C0016C84((_DWORD)a1, a2, a3, (unsigned int)&v17, (__int64)&v18);
    }
    LOWORD(v11) = 0;
    if ( (int)result >= 0 )
      goto LABEL_8;
  }
  else
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && _bittest((const signed __int32 *)&off_1C0093070->Timer + 1, 0xEu)
      && BYTE1(off_1C0093070->Timer) >= 4u )
    {
      sub_1C003EE1C(off_1C0093070->AttachedDevice, 16LL, &unk_1C0089838, (unsigned int)v8);
    }
    return v9;
  }
  return result;
}
